/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031a310; name: FUN_0031a310
 */


void FUN_0031a310(ulong *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  
  if ((*param_1 & 1) == 0) {
    lVar2 = FUN_0030ca24();
  }
  else {
    lVar2 = (*param_1 & 0xfffffffffffffffe) + 8;
  }
  iVar1 = FUN_003120e4(lVar2);
  *param_3 = iVar1 + param_2;
  return;
}


