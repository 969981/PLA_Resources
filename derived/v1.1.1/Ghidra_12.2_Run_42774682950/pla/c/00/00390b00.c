/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00390b00; name: FUN_00390b00
 */


void FUN_00390b00(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
LAB_00390b20:
  plVar9 = param_2 + -1;
  plVar12 = param_1;
LAB_00390b2c:
  param_1 = plVar12;
  lVar10 = (long)param_2 - (long)param_1;
  uVar6 = lVar10 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00390e34_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (*(int *)(param_2[-1] + 0x44) < *(int *)(lVar10 + 0x44)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar10;
      return;
    }
    return;
  case 3:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar14 = param_2[-1];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    if (iVar2 <= iVar4) {
      if (iVar4 <= *(int *)(lVar14 + 0x44)) {
        return;
      }
      param_1[1] = lVar14;
      param_2[-1] = lVar11;
      lVar10 = *param_1;
      if (*(int *)(param_1[1] + 0x44) < *(int *)(lVar10 + 0x44)) {
        *param_1 = param_1[1];
        param_1[1] = lVar10;
        return;
      }
      return;
    }
    if (*(int *)(lVar14 + 0x44) < iVar4) {
      *param_1 = lVar14;
      param_2[-1] = lVar10;
      return;
    }
    *param_1 = lVar11;
    param_1[1] = lVar10;
    if (*(int *)(param_2[-1] + 0x44) < iVar2) {
      param_1[1] = param_2[-1];
      param_2[-1] = lVar10;
      return;
    }
    return;
  case 4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar14 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    iVar3 = *(int *)(lVar14 + 0x44);
    if (iVar4 < iVar2) {
      if (iVar3 < iVar4) {
        *param_1 = lVar14;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_00391088;
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
      if (iVar3 < iVar2) {
        param_1[1] = lVar14;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_00391088;
      }
    }
    else if (iVar3 < iVar4) {
      param_1[1] = lVar14;
      param_1[2] = lVar11;
      if (iVar3 < iVar2) {
        *param_1 = lVar14;
        param_1[1] = lVar10;
      }
      goto LAB_00391088;
    }
    lVar11 = lVar14;
LAB_00391088:
    if (*(int *)(lVar11 + 0x44) <= *(int *)(param_2[-1] + 0x44)) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar11;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    if (*(int *)(lVar10 + 0x44) <= iVar4) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar10;
    lVar10 = *param_1;
    if (iVar4 < *(int *)(lVar10 + 0x44)) {
      *param_1 = lVar11;
      param_1[1] = lVar10;
      return;
    }
    return;
  case 5:
    FUN_003910f0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar9);
    return;
  default:
    if (0xf7 < lVar10) {
      uVar5 = uVar6;
      if ((long)uVar6 < 0) {
        uVar5 = uVar6 + 1;
      }
      plVar12 = (long *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        lVar11 = *plVar12;
        lVar10 = *param_1;
        lVar14 = *plVar9;
        iVar4 = *(int *)(lVar11 + 0x44);
        iVar2 = *(int *)(lVar10 + 0x44);
        if (iVar4 < iVar2) {
          if (*(int *)(lVar14 + 0x44) < iVar4) {
            *param_1 = lVar14;
            iVar4 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar12 = lVar10;
            if (iVar2 <= *(int *)(*plVar9 + 0x44)) goto LAB_00390c30;
            iVar4 = 2;
            *plVar12 = *plVar9;
          }
          *plVar9 = lVar10;
        }
        else if (*(int *)(lVar14 + 0x44) < iVar4) {
          *plVar12 = lVar14;
          *plVar9 = lVar11;
          lVar10 = *param_1;
          if (*(int *)(*plVar12 + 0x44) < *(int *)(lVar10 + 0x44)) {
            *param_1 = *plVar12;
            iVar4 = 2;
            *plVar12 = lVar10;
          }
          else {
LAB_00390c30:
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        uVar5 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar5 = uVar6;
        }
        lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar4 = FUN_003910f0(param_1,(long)param_1 + lVar10,plVar12,(long)plVar12 + lVar10,plVar9);
      }
      lVar10 = *param_1;
      iVar2 = *(int *)(lVar10 + 0x44);
      if (*(int *)(*plVar12 + 0x44) <= iVar2) break;
      plVar8 = param_1 + 1;
      plVar7 = plVar9;
      if (plVar9 <= plVar8) goto LAB_00390c5c;
      goto LAB_00390cb4;
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    iVar3 = *(int *)(lVar13 + 0x44);
    lVar14 = lVar13;
    if (iVar4 < iVar2) {
      if (iVar3 < iVar4) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (iVar2 <= iVar3) goto joined_r0x00390ee8;
        param_1[1] = lVar13;
      }
      param_1[2] = lVar10;
      lVar14 = lVar10;
    }
    else if (iVar3 < iVar4) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      lVar14 = lVar11;
      if (iVar3 < iVar2) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
    }
joined_r0x00390ee8:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0;
    plVar12 = param_1 + 3;
    goto LAB_00390ef0;
  }
  plVar8 = param_2 + -2;
  while (plVar7 = plVar8, param_1 != plVar7) {
    plVar8 = plVar7 + -1;
    if (*(int *)(*plVar7 + 0x44) < *(int *)(*plVar12 + 0x44)) goto code_r0x00390c84;
  }
  plVar8 = param_1 + 1;
  if (*(int *)(*plVar9 + 0x44) <= iVar2) {
    if (plVar8 == plVar9) {
      return;
    }
    plVar8 = param_1 + 2;
    while (lVar10 = plVar8[-1], *(int *)(lVar10 + 0x44) <= iVar2) {
      plVar8 = plVar8 + 1;
      if (param_2 == plVar8) {
        return;
      }
    }
    plVar8[-1] = *plVar9;
    *plVar9 = lVar10;
  }
  if (plVar8 == plVar9) {
    return;
  }
  plVar7 = plVar9;
  while( true ) {
    do {
      plVar12 = plVar8;
      plVar8 = plVar12 + 1;
      lVar10 = *plVar12;
    } while (*(int *)(lVar10 + 0x44) <= *(int *)(*param_1 + 0x44));
    do {
      plVar7 = plVar7 + -1;
    } while (*(int *)(*param_1 + 0x44) < *(int *)(*plVar7 + 0x44));
    if (plVar7 <= plVar12) break;
    *plVar12 = *plVar7;
    *plVar7 = lVar10;
  }
  goto LAB_00390b2c;
code_r0x00390c84:
  *param_1 = *plVar7;
  iVar4 = iVar4 + 1;
  *plVar7 = lVar10;
  plVar8 = param_1 + 1;
  if (plVar8 < plVar7) {
LAB_00390cb4:
    while( true ) {
      plVar15 = plVar8 + -1;
      do {
        plVar8 = plVar15;
        plVar15 = plVar8 + 1;
        lVar10 = *plVar15;
      } while (*(int *)(lVar10 + 0x44) < *(int *)(*plVar12 + 0x44));
      plVar8 = plVar8 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*(int *)(*plVar12 + 0x44) <= *(int *)(*plVar7 + 0x44));
      if (plVar7 < plVar15) break;
      *plVar15 = *plVar7;
      iVar4 = iVar4 + 1;
      *plVar7 = lVar10;
      plVar1 = plVar7;
      if (plVar12 != plVar15) {
        plVar1 = plVar12;
      }
      plVar12 = plVar1;
    }
    if (plVar15 == plVar12) goto LAB_00390d1c;
  }
  else {
LAB_00390c5c:
    plVar15 = param_1 + 1;
    if (plVar15 == plVar12) goto LAB_00390d1c;
  }
  lVar10 = *plVar15;
  if (*(int *)(*plVar12 + 0x44) < *(int *)(lVar10 + 0x44)) {
    iVar4 = iVar4 + 1;
    *plVar15 = *plVar12;
    *plVar12 = lVar10;
  }
LAB_00390d1c:
  if (iVar4 == 0) {
    uVar6 = FUN_003912d0(param_1,plVar15);
    uVar5 = FUN_003912d0(plVar15 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_00390e14;
    plVar12 = plVar15 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00390b2c;
  }
  if ((long)param_2 - (long)plVar15 <= (long)plVar15 - (long)param_1) {
    FUN_00390b00(plVar15 + 1,param_2);
    param_2 = plVar15;
    goto LAB_00390b20;
  }
  FUN_00390b00(param_1,plVar15);
  plVar12 = plVar15 + 1;
  goto LAB_00390b2c;
LAB_00390e14:
  param_2 = plVar15;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00390b20;
LAB_00390ef0:
  lVar11 = *plVar12;
  iVar4 = *(int *)(lVar11 + 0x44);
  if (iVar4 < *(int *)(lVar14 + 0x44)) {
    lVar14 = lVar10;
    do {
      lVar13 = lVar14;
      *(undefined8 *)((long)param_1 + lVar13 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar13 + 0x10);
      if (lVar13 == -0x10) {
        plVar9 = param_1;
        goto LAB_00390f40;
      }
      lVar14 = lVar13 + -8;
    } while (iVar4 < *(int *)(*(long *)((long)param_1 + lVar13 + 8) + 0x44));
    plVar9 = (long *)((long)param_1 + lVar13 + 0x10);
LAB_00390f40:
    *plVar9 = lVar11;
  }
  if (plVar12 + 1 == param_2) {
switchD_00390e34_caseD_0:
    return;
  }
  lVar14 = *plVar12;
  lVar10 = lVar10 + 8;
  plVar12 = plVar12 + 1;
  goto LAB_00390ef0;
}


