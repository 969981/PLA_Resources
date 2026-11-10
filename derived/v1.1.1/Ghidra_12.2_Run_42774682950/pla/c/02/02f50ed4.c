/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f50ed4; name: FUN_02f50ed4
 */


void FUN_02f50ed4(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_2 + 9) = (int)param_2[9] + 1;
  if ((*(byte *)((long)param_2 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)((long)param_2 + 0x54) != -1) {
      param_4 = *(int *)((long)param_2 + 0x54);
    }
  }
  FUN_02f51010(param_2,param_3,param_4);
  lVar2 = param_2[6];
  if (lVar2 != 0) {
    param_3 = *(int *)(*(long *)(param_2[0xf] + 0x100) + 4) + param_3;
    lVar3 = *(long *)(lVar2 + 8);
    if (((*(byte *)(lVar2 + 0x5a) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x5a) & 3) != 0)) {
      FUN_02f55da0(param_1,lVar2,param_3,param_4);
    }
    while (lVar2 = lVar3, lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      if (((*(byte *)(lVar2 + 0x5a) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x5a) & 3) != 0)) {
        FUN_02f55da0(param_1,lVar2,param_3,param_4);
      }
    }
  }
  iVar1 = (int)param_2[9] + -1;
  *(int *)(param_2 + 9) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (param_2[2] == 0) {
    FUN_02f37eb4(param_2);
  }
  else {
    FUN_02f3b8c0(param_2[2],param_2);
    param_2[2] = 0;
  }
  (**(code **)(*param_2 + 0x50))(param_2);
                    /* WARNING: Could not recover jumptable at 0x02f51000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,param_2);
  return;
}


