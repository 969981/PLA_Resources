/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325b54; name: FUN_03325b54
 */


int FUN_03325b54(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28);
  iVar4 = param_3;
  if (iVar5 < param_3) {
    do {
      FUN_032c4a00(lVar3,param_2,iVar5);
      iVar1 = *(int *)(param_1 + 0x28) + iVar5;
      iVar4 = iVar4 - iVar5;
      *(int *)(param_1 + 0x28) = iVar1;
      iVar2 = FUN_03325a30(param_1);
      if (iVar2 != iVar1) {
        return param_3 - iVar4;
      }
      param_2 = param_2 + iVar5;
      iVar5 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28);
      lVar3 = *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28);
    } while (iVar5 < iVar4);
  }
  FUN_032c4a00(lVar3,param_2,iVar4);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar4;
  return param_3;
}


