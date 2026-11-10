/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a6420; name: FUN_028a6420
 */


void FUN_028a6420(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  
LAB_028a6448:
  plVar13 = param_2 + -1;
  plVar8 = param_1;
LAB_028a6450:
  param_1 = plVar8;
  lVar12 = (long)param_2 - (long)param_1;
  uVar10 = lVar12 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_028a687c_caseD_0;
  case 2:
    iVar1 = (**(code **)(*(long *)*plVar13 + 0x60))();
    iVar2 = (**(code **)(*(long *)*param_1 + 0x60))();
    if (iVar2 <= iVar1) {
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
    FUN_028a6a90(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_028a6c90(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_028a6e00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  default:
    if (0x37 < lVar12) {
      uVar7 = uVar10;
      if ((long)uVar10 < 0) {
        uVar7 = uVar10 + 1;
      }
      plVar8 = (long *)((long)param_1 + (uVar7 & 0x3ffffffffffffffe) * 4);
      if (lVar12 < 0x1f39) {
        iVar1 = FUN_028a6a90(param_1,plVar8,plVar13);
      }
      else {
        uVar7 = uVar10 + 3;
        if (-1 < (long)uVar10) {
          uVar7 = uVar10;
        }
        lVar12 = (uVar7 & 0x7ffffffffffffffc) * 2;
        iVar1 = FUN_028a6e00(param_1,(long)param_1 + lVar12,plVar8,(long)plVar8 + lVar12,plVar13);
      }
      iVar2 = (**(code **)(*(long *)*param_1 + 0x60))();
      iVar3 = (**(code **)(*(long *)*plVar8 + 0x60))();
      if (iVar3 <= iVar2) goto LAB_028a6500;
      plVar6 = plVar13;
      goto LAB_028a6578;
    }
    FUN_028a6a90(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0;
    plVar8 = param_1 + 3;
    plVar13 = param_1 + 2;
  }
LAB_028a691c:
  plVar6 = plVar8;
  iVar1 = (**(code **)(*(long *)*plVar6 + 0x60))();
  iVar2 = (**(code **)(*(long *)*plVar13 + 0x60))();
  if (iVar1 < iVar2) {
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
        goto LAB_028a69cc;
      }
      iVar1 = (**(code **)(*plVar13 + 0x60))(plVar13);
      iVar2 = (**(code **)(**(long **)((long)param_1 + lVar14 + 8) + 0x60))();
      if (iVar2 <= iVar1) break;
      plVar8 = *(long **)((long)param_1 + lVar14 + 0x10);
      lVar14 = lVar14 + -8;
    }
    plVar8 = (long *)((long)param_1 + lVar14 + 0x10);
LAB_028a69cc:
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
switchD_028a687c_caseD_0:
    return;
  }
  goto LAB_028a691c;
LAB_028a6500:
  plVar6 = param_2;
  while (plVar9 = plVar6, param_1 + 2 != plVar9) {
    iVar2 = (**(code **)(*(long *)plVar9[-2] + 0x60))();
    iVar3 = (**(code **)(*(long *)*plVar8 + 0x60))();
    plVar6 = plVar9 + -1;
    if (iVar2 < iVar3) goto code_r0x028a6540;
  }
  plVar6 = param_1 + 1;
  iVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
  iVar2 = (**(code **)(*(long *)*plVar13 + 0x60))();
  if (iVar2 <= iVar1) {
    if (plVar6 == plVar13) {
      return;
    }
    plVar6 = param_1 + 2;
    while( true ) {
      iVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
      iVar2 = (**(code **)(*(long *)plVar6[-1] + 0x60))();
      if (iVar1 < iVar2) break;
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
      iVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
      plVar8 = plVar6 + 1;
      iVar2 = (**(code **)(*(long *)*plVar8 + 0x60))();
    } while (iVar2 <= iVar1);
    plVar6 = plVar6 + 2;
    do {
      iVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
      plVar9 = plVar9 + -1;
      iVar2 = (**(code **)(*(long *)*plVar9 + 0x60))();
    } while (iVar1 < iVar2);
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
  goto LAB_028a6450;
code_r0x028a6540:
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
LAB_028a6578:
  plVar9 = param_1 + 1;
  plVar4 = plVar9;
  if (plVar9 < plVar6) {
    while( true ) {
      plVar9 = plVar4 + -1;
      do {
        plVar4 = plVar9;
        plVar9 = plVar4 + 1;
        iVar2 = (**(code **)(*(long *)*plVar9 + 0x60))();
        iVar3 = (**(code **)(*(long *)*plVar8 + 0x60))();
      } while (iVar2 < iVar3);
      plVar4 = plVar4 + 2;
      do {
        plVar6 = plVar6 + -1;
        iVar2 = (**(code **)(*(long *)*plVar6 + 0x60))();
        iVar3 = (**(code **)(*(long *)*plVar8 + 0x60))();
      } while (iVar3 <= iVar2);
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
    if (plVar9 == plVar8) goto LAB_028a66a4;
  }
  else if (plVar9 == plVar8) goto LAB_028a66a4;
  iVar2 = (**(code **)(*(long *)*plVar8 + 0x60))();
  iVar3 = (**(code **)(*(long *)*plVar9 + 0x60))();
  if (iVar2 < iVar3) {
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
LAB_028a66a4:
  if (iVar1 == 0) {
    uVar10 = FUN_028a6fe0(param_1,plVar9);
    uVar7 = FUN_028a6fe0(plVar9 + 1,param_2);
    if ((uVar7 & 1) != 0) goto LAB_028a685c;
    plVar8 = plVar9 + 1;
    if ((uVar10 & 1) != 0) goto LAB_028a6450;
  }
  if ((long)param_2 - (long)plVar9 <= (long)plVar9 - (long)param_1) {
    FUN_028a6420(plVar9 + 1,param_2);
    param_2 = plVar9;
    goto LAB_028a6448;
  }
  FUN_028a6420(param_1,plVar9);
  plVar8 = plVar9 + 1;
  goto LAB_028a6450;
LAB_028a685c:
  param_2 = plVar9;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_028a6448;
}


