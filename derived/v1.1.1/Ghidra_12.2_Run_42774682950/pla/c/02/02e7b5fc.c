/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b5fc; name: FUN_02e7b5fc
 */


int FUN_02e7b5fc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_02e7b58c();
    FUN_02f59e60(0,param_1);
  }
  return iVar1;
}


