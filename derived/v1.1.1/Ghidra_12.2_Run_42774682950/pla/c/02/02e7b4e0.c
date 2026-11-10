/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b4e0; name: FUN_02e7b4e0
 */


int FUN_02e7b4e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  *param_1 = iVar1;
  if (iVar1 == 0) {
    FUN_02e7b2dc();
    FUN_02f59e60(0,param_1);
  }
  return iVar1;
}


