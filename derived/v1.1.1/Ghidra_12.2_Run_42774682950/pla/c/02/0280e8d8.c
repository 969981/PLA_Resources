/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280e8d8; name: FUN_0280e8d8
 */


void FUN_0280e8d8(long param_1,int *param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if ((param_4 & 1) != 0) {
    FUN_0281221c(param_1,0);
  }
  lVar3 = *(long *)(param_1 + 0x468);
  uVar1 = *(undefined4 *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0x1c) == 0) {
    iVar2 = *param_2 + *(int *)(lVar3 + 0xc) * param_2[1];
    *(int *)(lVar3 + 8) = iVar2;
  }
  else {
    iVar2 = param_2[1] + *(int *)(lVar3 + 0x10) * *param_2;
    *(int *)(lVar3 + 8) = iVar2;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_0280e96c(param_1,iVar2,uVar1,0);
  return;
}


