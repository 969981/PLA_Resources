/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8274; name: FUN_003c8274
 */


void FUN_003c8274(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
  return;
}


