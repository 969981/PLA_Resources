/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b4f60; name: FUN_009b4f60
 */


void FUN_009b4f60(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
LAB_009b51cc:
  plVar11 = param_2 + -1;
  plVar8 = param_1;
LAB_009b4f8c:
  param_1 = plVar8;
  lVar10 = (long)param_2 - (long)param_1;
  uVar9 = lVar10 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_009b5238_caseD_0;
  case 2:
    uVar2 = (**(code **)(*(long *)*plVar11 + 0x38))();
    uVar3 = (**(code **)(*(long *)*param_1 + 0x38))();
    if (uVar3 <= uVar2) {
      return;
    }
    lVar13 = *param_1;
    *param_1 = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    *param_1 = lVar10;
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar11 = lVar13;
    return;
  case 3:
    FUN_009b5500(param_1,param_1 + 1,plVar11);
    return;
  case 4:
    FUN_009b5700(param_1,param_1 + 1,param_1 + 2,plVar11);
    return;
  case 5:
    FUN_009b5870(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
    return;
  default:
    if (lVar10 < 0x38) {
      FUN_009b5a50(param_1,param_2);
      return;
    }
    uVar4 = uVar9;
    if ((long)uVar9 < 0) {
      uVar4 = uVar9 + 1;
    }
    plVar8 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar1 = FUN_009b5500(param_1,plVar8,plVar11);
    }
    else {
      uVar4 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar4 = uVar9;
      }
      lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar1 = FUN_009b5870(param_1,(long)param_1 + lVar10,plVar8,(long)plVar8 + lVar10,plVar11);
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
    if (uVar3 <= uVar2) break;
    plVar6 = plVar11;
    goto LAB_009b5008;
  }
  plVar6 = param_2;
  while (plVar12 = plVar6, param_1 + 2 != plVar12) {
    uVar2 = (**(code **)(*(long *)plVar12[-2] + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
    plVar6 = plVar12 + -1;
    if (uVar2 < uVar3) goto LAB_009b5434;
  }
  plVar6 = param_1 + 1;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar11 + 0x38))();
  if (uVar3 <= uVar2) {
    if (plVar6 == plVar11) {
      return;
    }
    plVar6 = param_1 + 2;
    while( true ) {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      uVar3 = (**(code **)(*(long *)plVar6[-1] + 0x38))();
      if (uVar2 < uVar3) break;
      plVar6 = plVar6 + 1;
      if (param_2 == plVar6) {
        return;
      }
    }
    lVar13 = plVar6[-1];
    plVar6[-1] = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    plVar6[-1] = lVar10;
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar11 = lVar13;
  }
  if (plVar6 == plVar11) {
    return;
  }
  plVar12 = plVar11;
  while( true ) {
    plVar8 = plVar6 + -1;
    do {
      plVar6 = plVar8;
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar8 = plVar6 + 1;
      uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
    } while (uVar3 <= uVar2);
    plVar6 = plVar6 + 2;
    do {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar12 = plVar12 + -1;
      uVar3 = (**(code **)(*(long *)*plVar12 + 0x38))();
    } while (uVar2 < uVar3);
    if (plVar12 <= plVar8) break;
    lVar13 = *plVar8;
    *plVar8 = 0;
    lVar10 = *plVar12;
    *plVar12 = 0;
    *plVar8 = lVar10;
    plVar8 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar12 = lVar13;
  }
  goto LAB_009b4f8c;
LAB_009b5434:
  lVar13 = *param_1;
  *param_1 = 0;
  plVar6 = plVar12 + -2;
  lVar10 = *plVar6;
  *plVar6 = 0;
  *param_1 = lVar10;
  plVar7 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  iVar1 = iVar1 + 1;
  plVar12[-2] = lVar13;
LAB_009b5008:
  plVar12 = param_1 + 1;
  plVar7 = plVar12;
  if (plVar12 < plVar6) {
    while( true ) {
      plVar12 = plVar7 + -1;
      do {
        plVar7 = plVar12;
        plVar12 = plVar7 + 1;
        uVar2 = (**(code **)(*(long *)*plVar12 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar2 < uVar3);
      plVar7 = plVar7 + 2;
      do {
        plVar6 = plVar6 + -1;
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar3 <= uVar2);
      if (plVar6 < plVar12) break;
      lVar13 = *plVar12;
      *plVar12 = 0;
      lVar10 = *plVar6;
      *plVar6 = 0;
      *plVar12 = lVar10;
      plVar5 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *plVar6 = lVar13;
      iVar1 = iVar1 + 1;
      plVar5 = plVar6;
      if (plVar8 != plVar12) {
        plVar5 = plVar8;
      }
      plVar8 = plVar5;
    }
  }
  if (plVar12 == plVar8) {
LAB_009b50b4:
    if (iVar1 != 0) goto LAB_009b53d4;
  }
  else {
    uVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar12 + 0x38))();
    if (uVar3 <= uVar2) goto LAB_009b50b4;
    lVar13 = *plVar12;
    *plVar12 = 0;
    lVar10 = *plVar8;
    *plVar8 = 0;
    *plVar12 = lVar10;
    plVar6 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    *plVar8 = lVar13;
    if (iVar1 != -1) goto LAB_009b53d4;
  }
  uVar9 = FUN_009b5b90(param_1,plVar12);
  uVar4 = FUN_009b5b90(plVar12 + 1,param_2);
  if ((uVar4 & 1) != 0) goto LAB_009b51c4;
  plVar8 = plVar12 + 1;
  if ((uVar9 & 1) != 0) goto LAB_009b4f8c;
LAB_009b53d4:
  if ((long)param_2 - (long)plVar12 <= (long)plVar12 - (long)param_1) {
    FUN_009b4f60(plVar12 + 1,param_2);
    param_2 = plVar12;
    goto LAB_009b51cc;
  }
  FUN_009b4f60(param_1,plVar12);
  plVar8 = plVar12 + 1;
  goto LAB_009b4f8c;
LAB_009b51c4:
  param_2 = plVar12;
  if ((uVar9 & 1) != 0) {
switchD_009b5238_caseD_0:
    return;
  }
  goto LAB_009b51cc;
}


