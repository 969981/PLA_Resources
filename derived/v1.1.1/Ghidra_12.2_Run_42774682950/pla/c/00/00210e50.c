/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210e50; name: FUN_00210e50
 */


int FUN_00210e50(long param_1,long param_2)

{
  param_2 = *(long *)(param_1 + 0x48) + param_2;
  *(long *)(param_1 + 0x48) = param_2;
  if ((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) {
    return -(uint)(*(long *)(param_1 + 0x40) != -1 && *(long *)(param_1 + 0x40) < param_2);
  }
  return -1;
}


