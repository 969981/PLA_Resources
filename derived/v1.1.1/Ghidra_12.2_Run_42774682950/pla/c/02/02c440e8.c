/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c440e8; name: FUN_02c440e8
 */


bool FUN_02c440e8(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x278)) {
    return *(char *)(*(long *)(param_1 + 600) + (ulong)param_2 * 0x48 + 8) != '\0';
  }
  return false;
}


