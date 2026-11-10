/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa68f0; name: FUN_01aa68f0
 */


void FUN_01aa68f0(long *param_1,long *param_2)

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
  long lVar12;
  long *plVar13;
  
LAB_01aa6914:
  plVar11 = param_2 + -1;
  plVar5 = param_1;
LAB_01aa691c:
  param_1 = plVar5;
  lVar10 = (long)param_2 - (long)param_1;
  uVar9 = lVar10 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_01aa6b64_caseD_0;
  case 2:
    uVar2 = (**(code **)(*(long *)*plVar11 + 0x38))();
    uVar3 = (**(code **)(*(long *)*param_1 + 0x38))();
    if (uVar3 <= uVar2) {
      return;
    }
    lVar12 = *param_1;
    *param_1 = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    *param_1 = lVar10;
    plVar5 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar11 = lVar12;
    return;
  case 3:
    FUN_01aa6ec0(param_1,param_1 + 1,plVar11);
    return;
  case 4:
    FUN_01aa70c0(param_1,param_1 + 1,param_1 + 2,plVar11);
    return;
  case 5:
    FUN_01aa7230(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
    return;
  default:
    if (lVar10 < 0x38) {
      FUN_01aa7410(param_1,param_2);
      return;
    }
    uVar4 = uVar9;
    if ((long)uVar9 < 0) {
      uVar4 = uVar9 + 1;
    }
    plVar5 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar1 = FUN_01aa6ec0(param_1,plVar5,plVar11);
    }
    else {
      uVar4 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar4 = uVar9;
      }
      lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar1 = FUN_01aa7230(param_1,(long)param_1 + lVar10,plVar5,(long)plVar5 + lVar10,plVar11);
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    if (uVar3 <= uVar2) break;
    plVar8 = plVar11;
    goto LAB_01aa699c;
  }
  plVar8 = param_2;
  while (plVar13 = plVar8, param_1 + 2 != plVar13) {
    uVar2 = (**(code **)(*(long *)plVar13[-2] + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    plVar8 = plVar13 + -1;
    if (uVar2 < uVar3) goto code_r0x01aa6cfc;
  }
  plVar8 = param_1 + 1;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar11 + 0x38))();
  if (uVar3 <= uVar2) {
    if (plVar8 == plVar11) {
      return;
    }
    plVar8 = param_1 + 2;
    while( true ) {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      uVar3 = (**(code **)(*(long *)plVar8[-1] + 0x38))();
      if (uVar2 < uVar3) break;
      plVar8 = plVar8 + 1;
      if (param_2 == plVar8) {
        return;
      }
    }
    lVar12 = plVar8[-1];
    plVar8[-1] = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    plVar8[-1] = lVar10;
    plVar5 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar11 = lVar12;
  }
  if (plVar8 == plVar11) {
    return;
  }
  plVar13 = plVar11;
  while( true ) {
    plVar5 = plVar8 + -1;
    do {
      plVar8 = plVar5;
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar5 = plVar8 + 1;
      uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
    } while (uVar3 <= uVar2);
    plVar8 = plVar8 + 2;
    do {
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      plVar13 = plVar13 + -1;
      uVar3 = (**(code **)(*(long *)*plVar13 + 0x38))();
    } while (uVar2 < uVar3);
    if (plVar13 <= plVar5) break;
    lVar12 = *plVar5;
    *plVar5 = 0;
    lVar10 = *plVar13;
    *plVar13 = 0;
    *plVar5 = lVar10;
    plVar5 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar13 = lVar12;
  }
  goto LAB_01aa691c;
code_r0x01aa6cfc:
  lVar12 = *param_1;
  *param_1 = 0;
  plVar8 = plVar13 + -2;
  lVar10 = *plVar8;
  *plVar8 = 0;
  *param_1 = lVar10;
  plVar6 = (long *)*plVar8;
  *plVar8 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  iVar1 = iVar1 + 1;
  plVar13[-2] = lVar12;
LAB_01aa699c:
  plVar13 = param_1 + 1;
  plVar6 = plVar13;
  if (plVar13 < plVar8) {
    while( true ) {
      uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
      uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
      plVar7 = plVar6 + 1;
      plVar13 = plVar6;
      plVar6 = plVar6 + 1;
      if (uVar2 < uVar3) {
        do {
          plVar13 = plVar7;
          plVar6 = plVar13 + 1;
          uVar2 = (**(code **)(*(long *)*plVar13 + 0x38))();
          uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
          plVar7 = plVar6;
        } while (uVar2 < uVar3);
      }
      do {
        plVar8 = plVar8 + -1;
        uVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar5 + 0x38))();
      } while (uVar3 <= uVar2);
      if (plVar8 < plVar13) break;
      lVar12 = *plVar13;
      *plVar13 = 0;
      lVar10 = *plVar8;
      *plVar8 = 0;
      *plVar13 = lVar10;
      plVar7 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      *plVar8 = lVar12;
      iVar1 = iVar1 + 1;
      plVar7 = plVar8;
      if (plVar5 != plVar13) {
        plVar7 = plVar5;
      }
      plVar5 = plVar7;
    }
  }
  if (plVar13 == plVar5) {
LAB_01aa6a78:
    if (iVar1 != 0) goto LAB_01aa6db8;
  }
  else {
    uVar2 = (**(code **)(*(long *)*plVar5 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar13 + 0x38))();
    if (uVar3 <= uVar2) goto LAB_01aa6a78;
    lVar12 = *plVar13;
    *plVar13 = 0;
    lVar10 = *plVar5;
    *plVar5 = 0;
    *plVar13 = lVar10;
    plVar8 = (long *)*plVar5;
    *plVar5 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar5 = lVar12;
    if (iVar1 != -1) goto LAB_01aa6db8;
  }
  uVar9 = FUN_01aa7550(param_1,plVar13);
  uVar4 = FUN_01aa7550(plVar13 + 1,param_2);
  if ((uVar4 & 1) != 0) goto code_r0x01aa6aa0;
  plVar5 = plVar13 + 1;
  if ((uVar9 & 1) != 0) goto LAB_01aa691c;
LAB_01aa6db8:
  if ((long)param_2 - (long)plVar13 <= (long)plVar13 - (long)param_1) {
    FUN_01aa68f0(plVar13 + 1,param_2);
    param_2 = plVar13;
    goto LAB_01aa6914;
  }
  FUN_01aa68f0(param_1,plVar13);
  plVar5 = plVar13 + 1;
  goto LAB_01aa691c;
code_r0x01aa6aa0:
  param_2 = plVar13;
  if ((uVar9 & 1) != 0) {
switchD_01aa6b64_caseD_0:
    return;
  }
  goto LAB_01aa6914;
}


