/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1654c; name: FUN_01a1654c
 */


void FUN_01a1654c(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xecf4);
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(param_1 + 0xecf4) = param_2;
  *(int *)(param_1 + 0xecf8) = iVar1;
  return;
}


