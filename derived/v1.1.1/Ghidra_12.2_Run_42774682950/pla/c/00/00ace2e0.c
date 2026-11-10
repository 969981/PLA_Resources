/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ace2e0; name: FUN_00ace2e0
 */


void FUN_00ace2e0(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
LAB_00ace308:
  plVar11 = param_2 + -1;
  plVar5 = param_1;
LAB_00ace310:
  param_1 = plVar5;
  lVar10 = (long)param_2 - (long)param_1;
  uVar9 = lVar10 >> 3;
  if (uVar9 == 5) {
    FUN_00acebf0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
    return;
  }
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00ace4b8_caseD_0;
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
    plVar5 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar11 = lVar13;
    return;
  case 3:
    FUN_00ace880(param_1,param_1 + 1,plVar11);
    return;
  case 4:
    FUN_00acea80(param_1,param_1 + 1,param_1 + 2,plVar11);
    return;
  default:
    if (lVar10 < 0x38) {
      FUN_00acedd0(param_1,param_2);
      return;
    }
    uVar8 = uVar9;
    if ((long)uVar9 < 0) {
      uVar8 = uVar9 + 1;
    }
    plVar5 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar1 = FUN_00ace880(param_1,plVar5,plVar11);
    }
    else {
      uVar8 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar8 = uVar9;
      }
      lVar10 = (uVar8 & 0x7ffffffffffffffc) * 2;
      iVar1 = FUN_00acebf0(param_1,(long)param_1 + lVar10,plVar5,(long)plVar5 + lVar10,plVar11);
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    if (uVar3 <= uVar2) break;
    plVar7 = plVar11;
    goto LAB_00ace624;
  }
  plVar7 = param_2;
  while (plVar12 = plVar7, param_1 + 2 != plVar12) {
    uVar2 = (**(code **)(*(long *)plVar12[-2] + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    plVar7 = plVar12 + -1;
    if (uVar2 < uVar3) goto code_r0x00ace674;
  }
  plVar7 = param_1 + 1;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar11 + 0x38))();
  if (uVar3 <= uVar2) {
    if (plVar7 == plVar11) {
      return;
    }
    plVar7 = param_1 + 2;
    while( true ) {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      uVar3 = (**(code **)(*(long *)plVar7[-1] + 0x38))();
      if (uVar2 < uVar3) break;
      plVar7 = plVar7 + 1;
      if (param_2 == plVar7) {
        return;
      }
    }
    lVar13 = plVar7[-1];
    plVar7[-1] = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    plVar7[-1] = lVar10;
    plVar5 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar11 = lVar13;
  }
  if (plVar7 == plVar11) {
    return;
  }
  plVar12 = plVar11;
  while( true ) {
    plVar5 = plVar7 + -1;
    do {
      plVar7 = plVar5;
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar5 = plVar7 + 1;
      uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    } while (uVar3 <= uVar2);
    plVar7 = plVar7 + 2;
    do {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar12 = plVar12 + -1;
      uVar3 = (**(code **)(*(long *)*plVar12 + 0x38))();
    } while (uVar2 < uVar3);
    if (plVar12 <= plVar5) break;
    lVar13 = *plVar5;
    *plVar5 = 0;
    lVar10 = *plVar12;
    *plVar12 = 0;
    *plVar5 = lVar10;
    plVar5 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar12 = lVar13;
  }
  goto LAB_00ace310;
code_r0x00ace674:
  lVar13 = *param_1;
  *param_1 = 0;
  plVar7 = plVar12 + -2;
  lVar10 = *plVar7;
  *plVar7 = 0;
  *param_1 = lVar10;
  plVar6 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  iVar1 = iVar1 + 1;
  plVar12[-2] = lVar13;
LAB_00ace624:
  plVar6 = param_1 + 1;
  plVar12 = plVar6;
  if (plVar6 < plVar7) {
    while( true ) {
      plVar6 = plVar12 + -1;
      do {
        plVar12 = plVar6;
        plVar6 = plVar12 + 1;
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
      } while (uVar2 < uVar3);
      plVar12 = plVar12 + 2;
      do {
        plVar7 = plVar7 + -1;
        uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
      } while (uVar3 <= uVar2);
      if (plVar7 < plVar6) break;
      lVar13 = *plVar6;
      *plVar6 = 0;
      lVar10 = *plVar7;
      *plVar7 = 0;
      *plVar6 = lVar10;
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      *plVar7 = lVar13;
      iVar1 = iVar1 + 1;
      plVar4 = plVar7;
      if (plVar5 != plVar6) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
    }
  }
  if (plVar6 != plVar5) {
    uVar2 = (**(code **)(*(long *)*plVar5 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar6 + 0x38))();
    if (uVar2 < uVar3) {
      lVar13 = *plVar6;
      *plVar6 = 0;
      lVar10 = *plVar5;
      *plVar5 = 0;
      *plVar6 = lVar10;
      plVar7 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      iVar1 = iVar1 + 1;
      *plVar5 = lVar13;
    }
  }
  if (iVar1 == 0) {
    uVar9 = FUN_00acef10(param_1,plVar6);
    uVar8 = FUN_00acef10(plVar6 + 1,param_2);
    if ((uVar8 & 1) != 0) goto LAB_00ace86c;
    plVar5 = plVar6 + 1;
    if ((uVar9 & 1) != 0) goto LAB_00ace310;
  }
  if ((long)param_2 - (long)plVar6 <= (long)plVar6 - (long)param_1) {
    FUN_00ace2e0(plVar6 + 1,param_2);
    param_2 = plVar6;
    goto LAB_00ace308;
  }
  FUN_00ace2e0(param_1,plVar6);
  plVar5 = plVar6 + 1;
  goto LAB_00ace310;
LAB_00ace86c:
  param_2 = plVar6;
  if ((uVar9 & 1) != 0) {
switchD_00ace4b8_caseD_0:
    return;
  }
  goto LAB_00ace308;
}


