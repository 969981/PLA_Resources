/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9a50; name: FUN_004c9a50
 */


void FUN_004c9a50(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar1;
  return;
}


