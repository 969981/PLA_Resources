#!/usr/bin/env python3
"""Inspect, search, and safely edit PKHeX PLA wild encounter_la.pkl files.

Outputs are user-modified copies, NEVER native evidence or validated legality data.
Uses the strict encoder/decoder in pla_encounter_pkl.py; no ROM bytes embedded.
"""
from __future__ import annotations

import argparse
import copy
import hashlib
import json
import os
from pathlib import Path

from pla_encounter_pkl import FIELDS, TYPE_NAMES, decode_pkl, encode_pkl, summarize

SLOT_FIELDS = frozenset(FIELDS)


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def read_areas(path: Path, expected_hash: str | None = None) -> tuple[bytes, list[dict]]:
    binary = path.read_bytes()
    digest = sha256(binary)
    if expected_hash is not None and expected_hash.lower() != digest:
        raise ValueError(f"input SHA-256 mismatch: expected {expected_hash.lower()}, actual {digest}")
    areas = decode_pkl(binary)
    return binary, areas


def find_matches(areas: list[dict], *, species: int | None = None,
                 form: int | None = None, alpha: int | None = None,
                 location: int | None = None, area_type: int | None = None) -> list[dict]:
    result = []
    for ai, area in enumerate(areas):
        if area_type is not None and area["type"] != area_type:
            continue
        if location is not None and location not in area["locations"]:
            continue
        for si, slot in enumerate(area["slots"]):
            if species is not None and slot["species"] != species:
                continue
            if form is not None and slot["form"] != form:
                continue
            if alpha is not None and slot["alpha"] != alpha:
                continue
            result.append({"area_index": ai, "slot_index": si,
                           "locations": area["locations"], "type": area["type"],
                           "type_name": TYPE_NAMES[area["type"]], **slot})
    return result


def parse_updates(expressions: list[str]) -> dict[str, int]:
    if not expressions:
        raise ValueError("at least one --set FIELD=INTEGER is required")
    result = {}
    for value in expressions:
        name, sep, raw = value.partition("=")
        if not sep or name not in SLOT_FIELDS or not raw:
            raise ValueError(f"invalid slot field assignment: {value!r}")
        if name in result:
            raise ValueError(f"duplicate assignment for {name}")
        try:
            result[name] = int(raw, 16 if raw.lower().startswith("0x") else 10)
        except ValueError as exc:
            raise ValueError(f"slot field {name} must be an integer") from exc
    return result


def patch_slot(areas: list[dict], area_index: int, slot_index: int,
               updates: dict[str, int]) -> tuple[list[dict], dict, dict]:
    if area_index < 0 or area_index >= len(areas):
        raise ValueError(f"area index out of range: {area_index} (0-based)")
    if slot_index < 0 or slot_index >= len(areas[area_index]["slots"]):
        raise ValueError(f"slot index out of range: {slot_index} (0-based)")
    if not updates or set(updates) - SLOT_FIELDS:
        raise ValueError(f"unexpected slot field(s): {set(updates) - SLOT_FIELDS}")
    result = copy.deepcopy(areas)
    slot = result[area_index]["slots"][slot_index]
    before = copy.deepcopy(slot)
    slot.update(updates)
    if before == slot:
        raise ValueError("no values changed; refusing a no-op edit")
    # Calls strict field/range validation, including level_min <= level_max.
    encode_pkl(result)
    return result, before, copy.deepcopy(slot)


def patch_area(areas: list[dict], area_index: int, *,
               locations: list[int] | None = None,
               area_type: int | None = None) -> tuple[list[dict], dict, dict]:
    if area_index < 0 or area_index >= len(areas):
        raise ValueError(f"area index out of range: {area_index} (0-based)")
    if locations is None and area_type is None:
        raise ValueError("specify --locations and/or --type")
    result = copy.deepcopy(areas)
    area = result[area_index]
    before = {"locations": copy.deepcopy(area["locations"]), "type": area["type"]}
    if locations is not None:
        area["locations"] = locations
    if area_type is not None:
        area["type"] = area_type
    after = {"locations": copy.deepcopy(area["locations"]), "type": area["type"]}
    if before == after:
        raise ValueError("no values changed; refusing a no-op edit")
    encode_pkl(result)
    return result, before, after


def _write_new_file(path: Path, data: bytes) -> None:
    """Exclusive create: never follow output symlinks or replace existing files."""
    path.parent.mkdir(parents=True, exist_ok=True)
    flags = os.O_WRONLY | os.O_CREAT | os.O_EXCL
    if hasattr(os, "O_BINARY"):
        flags |= os.O_BINARY
    fd = os.open(path, flags, 0o600)
    try:
        with os.fdopen(fd, "wb") as handle:
            handle.write(data)
            handle.flush()
            os.fsync(handle.fileno())
    except BaseException:
        path.unlink(missing_ok=True)
        raise


def save_edited(input_path: Path, output_path: Path, original: bytes,
                changed_areas: list[dict], audit: dict) -> dict:
    if input_path.resolve() == output_path.resolve():
        raise ValueError("output must be a separate new file; original input cannot be overwritten")
    report_path = output_path.with_name(output_path.name + ".audit.json")
    if output_path.exists() or output_path.is_symlink() or report_path.exists() or report_path.is_symlink():
        raise FileExistsError("output file or audit receipt already exists; refusing overwrite")
    # Never transform a noncanonical source byte stream without a stable source.
    source_areas = decode_pkl(original)
    if encode_pkl(source_areas) != original:
        raise ValueError("source has noncanonical padding/offsets; byte-exact roundtrip required before edits")
    encoded = encode_pkl(changed_areas)
    if decode_pkl(encoded) != changed_areas:
        raise ValueError("edited PKL failed decoder roundtrip")
    changed_fields = audit["before"] != audit["after"]
    if not changed_fields:
        raise ValueError("no effective edit")
    record = {"status": "USER_MODIFIED_NOT_NATIVE",
              "game": "PLA", "version": "1.1.1",
              "source": str(input_path), "source_sha256": sha256(original),
              "output": str(output_path), "output_sha256": sha256(encoded),
              "source_bytes": len(original), "output_bytes": len(encoded),
              "source_summary": summarize(source_areas),
              "edited_summary": summarize(changed_areas),
              "operation": audit}
    _write_new_file(output_path, encoded)
    try:
        _write_new_file(report_path, (json.dumps(record, ensure_ascii=False, indent=2) + "\n").encode("utf-8"))
    except BaseException:
        # We created output ourselves and know this path didn't exist beforehand.
        output_path.unlink(missing_ok=True)
        raise
    return record


def _find_args(parser: argparse.ArgumentParser) -> None:
    parser.add_argument("--species", type=int)
    parser.add_argument("--form", type=int)
    parser.add_argument("--alpha", type=int, choices=[0, 1, 2])
    parser.add_argument("--location", type=int)
    parser.add_argument("--type", dest="area_type", type=int, choices=list(TYPE_NAMES))


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    search = sub.add_parser("find", help="locate 0-based area/slot indexes by Pokémon and location")
    search.add_argument("input", type=Path)
    _find_args(search)
    search.add_argument("--limit", type=int, default=100, help="display at most this many matches; 0 means all")
    show = sub.add_parser("show", help="show complete area and slots")
    show.add_argument("input", type=Path)
    show.add_argument("--area", type=int, required=True, help="0-based area index")
    slot = sub.add_parser("set-slot", help="modify a copy of one slot, with audit receipt")
    slot.add_argument("input", type=Path)
    slot.add_argument("--area", type=int, required=True)
    slot.add_argument("--slot", type=int, required=True)
    slot.add_argument("--set", dest="updates", action="append", required=True, metavar="FIELD=VALUE")
    area = sub.add_parser("set-area", help="modify the locations/type of one area in a copy")
    area.add_argument("input", type=Path)
    area.add_argument("--area", type=int, required=True)
    area.add_argument("--locations", help="comma-separated location IDs in native order")
    area.add_argument("--type", dest="area_type", type=int, choices=list(TYPE_NAMES))
    for p in (slot, area):
        p.add_argument("--output", type=Path, required=True)
        p.add_argument("--expect-sha256", help="abort unless the original file has this hash")
        p.add_argument("--reason", required=True, help="audit reason; do not mislabel edits as native source")

    args = parser.parse_args(argv)
    original, areas = read_areas(args.input, getattr(args, "expect_sha256", None))
    if args.command == "find":
        matches = find_matches(areas, species=args.species, form=args.form, alpha=args.alpha,
                               location=args.location, area_type=args.area_type)
        limit = args.limit if args.limit > 0 else len(matches)
        print(json.dumps({"input_sha256": sha256(original), "total_matches": len(matches),
                          "displayed_matches": matches[:limit]}, ensure_ascii=False, indent=2))
    elif args.command == "show":
        if args.area < 0 or args.area >= len(areas):
            raise ValueError("area index out of range")
        area_obj = areas[args.area]
        print(json.dumps({"input_sha256": sha256(original), "area_index": args.area,
                          "type_name": TYPE_NAMES[area_obj["type"]], **area_obj},
                         ensure_ascii=False, indent=2))
    else:
        if args.command == "set-slot":
            changed, before, after = patch_slot(areas, args.area, args.slot, parse_updates(args.updates))
            audit = {"kind": "slot", "area_index": args.area, "slot_index": args.slot,
                     "before": before, "after": after, "reason": args.reason}
        else:
            locations = None
            if args.locations is not None:
                try:
                    locations = [int(v.strip(), 10) for v in args.locations.split(",")]
                except ValueError as exc:
                    raise ValueError("locations must be comma-separated decimal integers") from exc
            changed, before, after = patch_area(areas, args.area,
                                                 locations=locations, area_type=args.area_type)
            audit = {"kind": "area", "area_index": args.area,
                     "before": before, "after": after, "reason": args.reason}
        result = save_edited(args.input, args.output, original, changed, audit)
        print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
