/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d7a0; name: FUN_0067d7a0
 */


void FUN_0067d7a0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != param_1[1]) {
    FUN_0067e204(param_1,(param_2[1] - *param_2 >> 3) + (param_1[1] - lVar3 >> 3));
    lVar3 = *param_2;
    lVar2 = param_2[1];
    if (lVar3 != lVar2) {
      do {
        FUN_0067daa0(param_1,lVar3);
        lVar3 = lVar3 + 8;
      } while (lVar2 != lVar3);
      lVar3 = *param_2;
      lVar2 = param_2[1];
      while (lVar2 != lVar3) {
        lVar2 = lVar2 + -8;
        FUN_00680b34(lVar2);
      }
    }
    param_2[1] = lVar3;
    return;
  }
  if ((long *)param_1[3] != (long *)param_2[3]) {
    uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))();
    if ((uVar1 & 1) == 0) {
      FUN_0067e2fc(param_1,*param_2,param_2[1]);
      return;
    }
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar2 == lVar3) {
      lVar2 = lVar3;
    }
    else {
      do {
        lVar2 = lVar2 + -8;
        FUN_00680b34(lVar2);
      } while (lVar3 != lVar2);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[2] - lVar2,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


