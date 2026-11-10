/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4ef30; name: FUN_02a4ef30
 */


void FUN_02a4ef30(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
LAB_02a4ef58:
  plVar13 = param_2 + -1;
  plVar8 = param_1;
LAB_02a4ef60:
  param_1 = plVar8;
  lVar12 = (long)param_2 - (long)param_1;
  uVar10 = lVar12 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_02a4f38c_caseD_0;
  case 2:
    uVar2 = (**(code **)(*(long *)*plVar13 + 0x38))();
    uVar3 = (**(code **)(*(long *)*param_1 + 0x38))();
    if (uVar3 <= uVar2) {
      return;
    }
    lVar14 = *param_1;
    *param_1 = 0;
    lVar12 = *plVar13;
    *plVar13 = 0;
    *param_1 = lVar12;
    plVar8 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar13 = lVar14;
    return;
  case 3:
    FUN_02a4f5a0(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_02a4f7a0(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_02a4f910(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  default:
    if (0x37 < lVar12) {
      uVar7 = uVar10;
      if ((long)uVar10 < 0) {
        uVar7 = uVar10 + 1;
      }
      plVar8 = (long *)((long)param_1 + (uVar7 & 0x3ffffffffffffffe) * 4);
      if (lVar12 < 0x1f39) {
        iVar1 = FUN_02a4f5a0(param_1,plVar8,plVar13);
      }
      else {
        uVar7 = uVar10 + 3;
        if (-1 < (long)uVar10) {
          uVar7 = uVar10;
        }
        lVar12 = (uVar7 & 0x7ffffffffffffffc) * 2;
        iVar1 = FUN_02a4f910(param_1,(long)param_1 + lVar12,plVar8,(long)plVar8 + lVar12,plVar13);
      }
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      if (uVar3 <= uVar2) goto LAB_02a4f010;
      plVar6 = plVar13;
      goto LAB_02a4f088;
    }
    FUN_02a4f5a0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0;
    plVar8 = param_1 + 3;
    plVar13 = param_1 + 2;
  }
LAB_02a4f42c:
  plVar6 = plVar8;
  uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar13 + 0x38))();
  if (uVar2 < uVar3) {
    plVar13 = (long *)*plVar6;
    plVar8 = (long *)0x0;
    *plVar6 = 0;
    lVar14 = lVar12;
    while( true ) {
      *(undefined8 *)((long)param_1 + lVar14 + 0x18) = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      uVar11 = *(undefined8 *)((long)param_1 + lVar14 + 0x10);
      *(undefined8 *)((long)param_1 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)param_1 + lVar14 + 0x18) = uVar11;
      if (lVar14 == -0x10) {
        plVar8 = param_1;
        goto LAB_02a4f4dc;
      }
      uVar2 = (**(code **)(*plVar13 + 0x38))(plVar13);
      uVar3 = (**(code **)(**(long **)((long)param_1 + lVar14 + 8) + 0x38))();
      if (uVar3 <= uVar2) break;
      plVar8 = *(long **)((long)param_1 + lVar14 + 0x10);
      lVar14 = lVar14 + -8;
    }
    plVar8 = (long *)((long)param_1 + lVar14 + 0x10);
LAB_02a4f4dc:
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    *plVar8 = (long)plVar13;
  }
  lVar12 = lVar12 + 8;
  plVar8 = plVar6 + 1;
  plVar13 = plVar6;
  if (plVar6 + 1 == param_2) {
switchD_02a4f38c_caseD_0:
    return;
  }
  goto LAB_02a4f42c;
LAB_02a4f010:
  plVar6 = param_2;
  while (plVar9 = plVar6, param_1 + 2 != plVar9) {
    uVar2 = (**(code **)(*(long *)plVar9[-2] + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
    plVar6 = plVar9 + -1;
    if (uVar2 < uVar3) goto code_r0x02a4f050;
  }
  plVar6 = param_1 + 1;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar13 + 0x38))();
  if (uVar3 <= uVar2) {
    if (plVar6 == plVar13) {
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
    lVar14 = plVar6[-1];
    plVar6[-1] = 0;
    lVar12 = *plVar13;
    *plVar13 = 0;
    plVar6[-1] = lVar12;
    plVar8 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar13 = lVar14;
  }
  if (plVar6 == plVar13) {
    return;
  }
  plVar9 = plVar13;
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
      plVar9 = plVar9 + -1;
      uVar3 = (**(code **)(*(long *)*plVar9 + 0x38))();
    } while (uVar2 < uVar3);
    if (plVar9 <= plVar8) break;
    lVar14 = *plVar8;
    *plVar8 = 0;
    lVar12 = *plVar9;
    *plVar9 = 0;
    *plVar8 = lVar12;
    plVar8 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *plVar9 = lVar14;
  }
  goto LAB_02a4ef60;
code_r0x02a4f050:
  lVar14 = *param_1;
  *param_1 = 0;
  plVar6 = plVar9 + -2;
  lVar12 = *plVar6;
  *plVar6 = 0;
  *param_1 = lVar12;
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  iVar1 = iVar1 + 1;
  plVar9[-2] = lVar14;
LAB_02a4f088:
  plVar9 = param_1 + 1;
  plVar4 = plVar9;
  if (plVar9 < plVar6) {
    while( true ) {
      plVar9 = plVar4 + -1;
      do {
        plVar4 = plVar9;
        plVar9 = plVar4 + 1;
        uVar2 = (**(code **)(*(long *)*plVar9 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar2 < uVar3);
      plVar4 = plVar4 + 2;
      do {
        plVar6 = plVar6 + -1;
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar3 <= uVar2);
      if (plVar6 < plVar9) break;
      lVar14 = *plVar9;
      *plVar9 = 0;
      lVar12 = *plVar6;
      *plVar6 = 0;
      *plVar9 = lVar12;
      plVar5 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *plVar6 = lVar14;
      iVar1 = iVar1 + 1;
      plVar5 = plVar6;
      if (plVar8 != plVar9) {
        plVar5 = plVar8;
      }
      plVar8 = plVar5;
    }
    if (plVar9 == plVar8) goto LAB_02a4f1b4;
  }
  else if (plVar9 == plVar8) goto LAB_02a4f1b4;
  uVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
  uVar3 = (**(code **)(*(long *)*plVar9 + 0x38))();
  if (uVar2 < uVar3) {
    lVar14 = *plVar9;
    *plVar9 = 0;
    lVar12 = *plVar8;
    *plVar8 = 0;
    *plVar9 = lVar12;
    plVar6 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    iVar1 = iVar1 + 1;
    *plVar8 = lVar14;
  }
LAB_02a4f1b4:
  if (iVar1 == 0) {
    uVar10 = FUN_02a4faf0(param_1,plVar9);
    uVar7 = FUN_02a4faf0(plVar9 + 1,param_2);
    if ((uVar7 & 1) != 0) goto LAB_02a4f36c;
    plVar8 = plVar9 + 1;
    if ((uVar10 & 1) != 0) goto LAB_02a4ef60;
  }
  if ((long)param_2 - (long)plVar9 <= (long)plVar9 - (long)param_1) {
    FUN_02a4ef30(plVar9 + 1,param_2);
    param_2 = plVar9;
    goto LAB_02a4ef58;
  }
  FUN_02a4ef30(param_1,plVar9);
  plVar8 = plVar9 + 1;
  goto LAB_02a4ef60;
LAB_02a4f36c:
  param_2 = plVar9;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_02a4ef58;
}


