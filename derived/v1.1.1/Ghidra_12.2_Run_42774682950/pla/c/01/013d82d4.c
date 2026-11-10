/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d82d4; name: FUN_013d82d4
 */


void FUN_013d82d4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x5b0) == 0) {
    return;
  }
  FUN_028513ac(*(long *)(param_1 + 0x5b0),param_2 & 1);
  return;
}


