/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009321cc; name: FUN_009321cc
 */


undefined1 FUN_009321cc(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(*(long *)(param_1 + 0x70) + 0x368)) {
    return *(undefined1 *)(*(long *)(param_1 + 0x70) + (ulong)param_2 * 0x1c + 0x304);
  }
  return 0;
}


