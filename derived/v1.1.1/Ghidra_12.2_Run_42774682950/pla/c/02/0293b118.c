/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293b118; name: FUN_0293b118
 */


bool FUN_0293b118(long param_1,uint param_2)

{
  if ((int)param_2 < 10) {
    return *(int *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + (ulong)param_2 * 4 + 0x1a8) != 0;
  }
  return false;
}


