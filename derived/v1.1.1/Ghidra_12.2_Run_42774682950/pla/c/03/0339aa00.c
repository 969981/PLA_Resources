/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339aa00; name: FUN_0339aa00
 */


int FUN_0339aa00(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) - *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    FUN_0339a7b4(param_1,param_2 - iVar1);
    iVar1 = (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) - *(int *)(param_1 + 0x20);
  }
  return iVar1;
}


