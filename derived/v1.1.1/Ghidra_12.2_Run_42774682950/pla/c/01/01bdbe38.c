/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdbe38; name: FUN_01bdbe38
 */


void FUN_01bdbe38(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x210) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x210) = param_2;
  FUN_01bdb4e8();
  return;
}


