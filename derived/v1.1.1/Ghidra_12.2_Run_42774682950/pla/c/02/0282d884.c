/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d884; name: FUN_0282d884
 */


bool FUN_0282d884(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *param_2 + iVar1 * param_2[1];
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = param_2[1] + iVar2 * *param_2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar2;
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * iVar1;
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = iVar1 * (int)((float)iVar2 / (float)iVar1);
  if (iVar3 < 0) {
    return iVar2 <= iVar1 + iVar3;
  }
  return iVar2 <= iVar3 && iVar3 < iVar1;
}


