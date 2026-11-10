/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2a0a0; name: FUN_01c2a0a0
 */


void FUN_01c2a0a0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int local_64;
  
LAB_01c2a48c:
  plVar10 = param_2 + -1;
  plVar7 = param_1;
LAB_01c2a0d0:
  param_1 = plVar7;
  lVar9 = (long)param_2 - (long)param_1;
  uVar8 = lVar9 >> 3;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_01c2a590_caseD_0;
  case 2:
    uVar1 = (**(code **)(*(long *)*plVar10 + 0x38))();
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    if (uVar2 <= uVar1) {
      return;
    }
    lVar12 = *param_1;
    *param_1 = 0;
    lVar9 = *plVar10;
    *plVar10 = 0;
    *param_1 = lVar9;
    plVar7 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *plVar10 = lVar12;
    return;
  case 3:
    FUN_01c2a840(param_1,param_1 + 1,plVar10);
    return;
  case 4:
    FUN_01c2aa40(param_1,param_1 + 1,param_1 + 2,plVar10);
    return;
  case 5:
    FUN_01c2abb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar10);
    return;
  default:
    if (lVar9 < 0x38) {
      FUN_01c2ad90(param_1,param_2);
      return;
    }
    uVar3 = uVar8;
    if ((long)uVar8 < 0) {
      uVar3 = uVar8 + 1;
    }
    plVar7 = (long *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      local_64 = FUN_01c2a840(param_1,plVar7,plVar10);
    }
    else {
      uVar3 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar3 = uVar8;
      }
      lVar9 = (uVar3 & 0x7ffffffffffffffc) * 2;
      local_64 = FUN_01c2abb0(param_1,(long)param_1 + lVar9,plVar7,(long)plVar7 + lVar9,plVar10);
    }
    uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
    if (uVar2 <= uVar1) break;
    plVar6 = plVar10;
    goto LAB_01c2a150;
  }
  plVar6 = param_2;
  while (plVar11 = plVar6, param_1 + 2 != plVar11) {
    uVar1 = (**(code **)(*(long *)plVar11[-2] + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
    plVar6 = plVar11 + -1;
    if (uVar1 < uVar2) goto LAB_01c2a6fc;
  }
  plVar6 = param_1 + 1;
  uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
  uVar2 = (**(code **)(*(long *)*plVar10 + 0x38))();
  if (uVar2 <= uVar1) {
    if (plVar6 == plVar10) {
      return;
    }
    plVar6 = param_1 + 2;
    while( true ) {
      uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
      uVar2 = (**(code **)(*(long *)plVar6[-1] + 0x38))();
      if (uVar1 < uVar2) break;
      plVar6 = plVar6 + 1;
      if (param_2 == plVar6) {
        return;
      }
    }
    lVar12 = plVar6[-1];
    plVar6[-1] = 0;
    lVar9 = *plVar10;
    *plVar10 = 0;
    plVar6[-1] = lVar9;
    plVar7 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *plVar10 = lVar12;
  }
  if (plVar6 == plVar10) {
    return;
  }
  plVar11 = plVar10;
  while( true ) {
    plVar7 = plVar6 + -1;
    do {
      plVar6 = plVar7;
      uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar7 = plVar6 + 1;
      uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
    } while (uVar2 <= uVar1);
    plVar6 = plVar6 + 2;
    do {
      uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar11 = plVar11 + -1;
      uVar2 = (**(code **)(*(long *)*plVar11 + 0x38))();
    } while (uVar1 < uVar2);
    if (plVar11 <= plVar7) break;
    lVar12 = *plVar7;
    *plVar7 = 0;
    lVar9 = *plVar11;
    *plVar11 = 0;
    *plVar7 = lVar9;
    plVar7 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *plVar11 = lVar12;
  }
  goto LAB_01c2a0d0;
LAB_01c2a6fc:
  lVar12 = *param_1;
  *param_1 = 0;
  plVar6 = plVar11 + -2;
  lVar9 = *plVar6;
  *plVar6 = 0;
  *param_1 = lVar9;
  plVar5 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  local_64 = local_64 + 1;
  plVar11[-2] = lVar12;
LAB_01c2a150:
  plVar11 = param_1 + 1;
  if (plVar11 < plVar6) {
    while( true ) {
      plVar5 = plVar11 + 1;
      uVar1 = (**(code **)(*(long *)*plVar11 + 0x38))();
      uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
      if (uVar1 < uVar2) {
        uVar1 = (**(code **)(*(long *)plVar11[1] + 0x38))();
        uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
        plVar4 = plVar11 + 2;
        if (uVar1 < uVar2) {
          uVar1 = (**(code **)(*(long *)plVar11[2] + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
          plVar5 = plVar11 + 3;
          if (uVar1 < uVar2) {
            do {
              plVar11 = plVar5;
              uVar1 = (**(code **)(*(long *)*plVar11 + 0x38))();
              uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
              plVar5 = plVar11 + 1;
            } while (uVar1 < uVar2);
          }
          else {
            plVar11 = plVar4;
          }
        }
        else {
          plVar11 = plVar5;
          plVar5 = plVar4;
        }
      }
      uVar1 = (**(code **)(*(long *)plVar6[-1] + 0x38))();
      uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
      plVar4 = plVar6 + -1;
      if (uVar2 <= uVar1) {
        uVar1 = (**(code **)(*(long *)plVar6[-2] + 0x38))();
        uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
        plVar4 = plVar6 + -2;
        if (uVar2 <= uVar1) {
          uVar1 = (**(code **)(*(long *)plVar6[-3] + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
          plVar4 = plVar6 + -3;
          if (uVar2 <= uVar1) {
            uVar1 = (**(code **)(*(long *)plVar6[-4] + 0x38))();
            uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
            plVar4 = plVar6 + -4;
            if (uVar2 <= uVar1) {
              uVar1 = (**(code **)(*(long *)plVar6[-5] + 0x38))();
              uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
              plVar4 = plVar6 + -5;
              if (uVar2 <= uVar1) {
                plVar6 = plVar6 + -6;
                do {
                  plVar4 = plVar6;
                  uVar1 = (**(code **)(*(long *)*plVar4 + 0x38))();
                  uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
                  plVar6 = plVar4 + -1;
                } while (uVar2 <= uVar1);
              }
            }
          }
        }
      }
      plVar6 = plVar4;
      if (plVar6 < plVar11) break;
      lVar12 = *plVar11;
      *plVar11 = 0;
      lVar9 = *plVar6;
      *plVar6 = 0;
      *plVar11 = lVar9;
      plVar4 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      local_64 = local_64 + 1;
      *plVar6 = lVar12;
      plVar4 = plVar6;
      if (plVar7 != plVar11) {
        plVar4 = plVar7;
      }
      plVar7 = plVar4;
      plVar11 = plVar5;
    }
  }
  if (plVar11 == plVar7) {
LAB_01c2a3b0:
    if (local_64 != 0) goto LAB_01c2a784;
  }
  else {
    uVar1 = (**(code **)(*(long *)*plVar7 + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar11 + 0x38))();
    if (uVar2 <= uVar1) goto LAB_01c2a3b0;
    lVar12 = *plVar11;
    *plVar11 = 0;
    lVar9 = *plVar7;
    *plVar7 = 0;
    *plVar11 = lVar9;
    plVar6 = (long *)*plVar7;
    *plVar7 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    *plVar7 = lVar12;
    if (local_64 != -1) goto LAB_01c2a784;
  }
  uVar8 = FUN_01c2aed0(param_1,plVar11);
  uVar3 = FUN_01c2aed0(plVar11 + 1,param_2);
  if ((uVar3 & 1) != 0) goto LAB_01c2a484;
  plVar7 = plVar11 + 1;
  if ((uVar8 & 1) != 0) goto LAB_01c2a0d0;
LAB_01c2a784:
  if ((long)param_2 - (long)plVar11 <= (long)plVar11 - (long)param_1) {
    FUN_01c2a0a0(plVar11 + 1,param_2);
    param_2 = plVar11;
    goto LAB_01c2a48c;
  }
  FUN_01c2a0a0(param_1,plVar11);
  plVar7 = plVar11 + 1;
  goto LAB_01c2a0d0;
LAB_01c2a484:
  param_2 = plVar11;
  if ((uVar8 & 1) != 0) {
switchD_01c2a590_caseD_0:
    return;
  }
  goto LAB_01c2a48c;
}


