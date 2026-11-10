/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f4ae50; name: FUN_01f4ae50
 */


void FUN_01f4ae50(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar3,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar3) {
      FUN_0014fe00(*param_2,lVar3,1);
    }
  }
  iVar1 = FUN_0014fef0(*param_2);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  FUN_00152d80(*param_2,0,0xffffffff,0,0);
  iVar2 = FUN_0014fef0(*param_2);
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  *(int *)((long)param_1 + 0xc) = (iVar2 - iVar1) + 1;
  return;
}


