/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292b6a0; name: FUN_0292b6a0
 */


void FUN_0292b6a0(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
LAB_0292b6c4:
  plVar9 = param_2 + -1;
  plVar12 = param_1;
LAB_0292b6d0:
  param_1 = plVar12;
  lVar10 = (long)param_2 - (long)param_1;
  uVar5 = lVar10 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_0292b9c8_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 8) < *(int *)(*plVar9 + 8)) {
      *param_1 = *plVar9;
      *plVar9 = lVar10;
      return;
    }
    return;
  case 3:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = *plVar9;
    iVar3 = *(int *)(lVar11 + 8);
    if (iVar3 <= *(int *)(lVar10 + 8)) {
      if (*(int *)(lVar13 + 8) <= iVar3) {
        return;
      }
      param_1[1] = lVar13;
      *plVar9 = lVar11;
      lVar10 = *param_1;
      if (*(int *)(lVar10 + 8) < *(int *)(param_1[1] + 8)) {
        *param_1 = param_1[1];
        param_1[1] = lVar10;
        return;
      }
      return;
    }
    if (iVar3 < *(int *)(lVar13 + 8)) {
      *param_1 = lVar13;
      *plVar9 = lVar10;
      return;
    }
    *param_1 = lVar11;
    param_1[1] = lVar10;
    if (*(int *)(lVar10 + 8) < *(int *)(*plVar9 + 8)) {
      param_1[1] = *plVar9;
      *plVar9 = lVar10;
      return;
    }
    return;
  case 4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar11 + 8);
    if (*(int *)(lVar10 + 8) < iVar3) {
      if (iVar3 < *(int *)(lVar13 + 8)) {
        *param_1 = lVar13;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_0292bc2c;
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
      if (*(int *)(lVar10 + 8) < *(int *)(lVar13 + 8)) {
        param_1[1] = lVar13;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_0292bc2c;
      }
    }
    else if (iVar3 < *(int *)(lVar13 + 8)) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      if (*(int *)(lVar10 + 8) < *(int *)(lVar13 + 8)) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
      goto LAB_0292bc2c;
    }
    lVar11 = lVar13;
LAB_0292bc2c:
    if (*(int *)(*plVar9 + 8) <= *(int *)(lVar11 + 8)) {
      return;
    }
    param_1[2] = *plVar9;
    *plVar9 = lVar11;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    if (*(int *)(lVar11 + 8) <= *(int *)(lVar10 + 8)) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar10;
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 8) < *(int *)(lVar11 + 8)) {
      *param_1 = lVar11;
      param_1[1] = lVar10;
      return;
    }
    return;
  case 5:
    FUN_0292bc90(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar9);
    return;
  default:
    if (0xf7 < lVar10) {
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      plVar12 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        lVar11 = *plVar12;
        lVar10 = *param_1;
        lVar13 = *plVar9;
        iVar3 = *(int *)(lVar11 + 8);
        if (*(int *)(lVar10 + 8) < iVar3) {
          if (iVar3 < *(int *)(lVar13 + 8)) {
            *param_1 = lVar13;
            iVar3 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar12 = lVar10;
            if (*(int *)(*plVar9 + 8) <= *(int *)(lVar10 + 8)) goto LAB_0292b7d8;
            iVar3 = 2;
            *plVar12 = *plVar9;
          }
          *plVar9 = lVar10;
        }
        else if (iVar3 < *(int *)(lVar13 + 8)) {
          *plVar12 = lVar13;
          *plVar9 = lVar11;
          lVar10 = *param_1;
          if (*(int *)(lVar10 + 8) < *(int *)(*plVar12 + 8)) {
            *param_1 = *plVar12;
            iVar3 = 2;
            *plVar12 = lVar10;
          }
          else {
LAB_0292b7d8:
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_0292bc90(param_1,(long)param_1 + lVar10,plVar12,(long)plVar12 + lVar10,plVar9);
      }
      lVar10 = *param_1;
      iVar2 = *(int *)(lVar10 + 8);
      if (iVar2 <= *(int *)(*plVar12 + 8)) break;
      plVar6 = plVar9;
      goto LAB_0292b824;
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar11 + 8);
    if (*(int *)(lVar10 + 8) < iVar3) {
      if (iVar3 < *(int *)(lVar13 + 8)) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (*(int *)(lVar13 + 8) <= *(int *)(lVar10 + 8)) goto LAB_0292ba68;
        param_1[1] = lVar13;
      }
      param_1[2] = lVar10;
      lVar11 = lVar10;
    }
    else if (iVar3 < *(int *)(lVar13 + 8)) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      if (*(int *)(lVar10 + 8) < *(int *)(lVar13 + 8)) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
    }
    else {
LAB_0292ba68:
      lVar11 = lVar13;
    }
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0;
    plVar12 = param_1 + 3;
    goto LAB_0292ba7c;
  }
  plVar7 = param_2 + -2;
  while (plVar6 = plVar7, param_1 != plVar6) {
    plVar7 = plVar6 + -1;
    if (*(int *)(*plVar12 + 8) < *(int *)(*plVar6 + 8)) goto code_r0x0292b818;
  }
  plVar7 = param_1 + 1;
  if (iVar2 <= *(int *)(*plVar9 + 8)) {
    if (plVar7 == plVar9) {
      return;
    }
    plVar7 = param_1 + 2;
    while (lVar10 = plVar7[-1], iVar2 <= *(int *)(lVar10 + 8)) {
      plVar7 = plVar7 + 1;
      if (param_2 == plVar7) {
        return;
      }
    }
    plVar7[-1] = *plVar9;
    *plVar9 = lVar10;
  }
  if (plVar7 == plVar9) {
    return;
  }
  plVar6 = plVar9;
  while( true ) {
    do {
      plVar12 = plVar7;
      plVar7 = plVar12 + 1;
      lVar10 = *plVar12;
    } while (*(int *)(*param_1 + 8) <= *(int *)(lVar10 + 8));
    do {
      plVar6 = plVar6 + -1;
    } while (*(int *)(*plVar6 + 8) < *(int *)(*param_1 + 8));
    if (plVar6 <= plVar12) break;
    *plVar12 = *plVar6;
    *plVar6 = lVar10;
  }
  goto LAB_0292b6d0;
code_r0x0292b818:
  *param_1 = *plVar6;
  iVar3 = iVar3 + 1;
  *plVar6 = lVar10;
LAB_0292b824:
  plVar7 = param_1 + 1;
  plVar14 = plVar7;
  if (plVar7 < plVar6) {
    while( true ) {
      plVar7 = plVar14 + -1;
      do {
        plVar14 = plVar7;
        plVar7 = plVar14 + 1;
        lVar10 = *plVar7;
      } while (*(int *)(*plVar12 + 8) < *(int *)(lVar10 + 8));
      plVar14 = plVar14 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(int *)(*plVar6 + 8) <= *(int *)(*plVar12 + 8));
      if (plVar6 < plVar7) break;
      *plVar7 = *plVar6;
      iVar3 = iVar3 + 1;
      *plVar6 = lVar10;
      plVar1 = plVar6;
      if (plVar12 != plVar7) {
        plVar1 = plVar12;
      }
      plVar12 = plVar1;
    }
  }
  if (plVar7 != plVar12) {
    lVar10 = *plVar7;
    if (*(int *)(lVar10 + 8) < *(int *)(*plVar12 + 8)) {
      iVar3 = iVar3 + 1;
      *plVar7 = *plVar12;
      *plVar12 = lVar10;
    }
  }
  if (iVar3 == 0) {
    uVar5 = FUN_0292be70(param_1,plVar7);
    uVar4 = FUN_0292be70(plVar7 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_0292b9a8;
    plVar12 = plVar7 + 1;
    if ((uVar5 & 1) != 0) goto LAB_0292b6d0;
  }
  if ((long)param_2 - (long)plVar7 <= (long)plVar7 - (long)param_1) {
    FUN_0292b6a0(plVar7 + 1,param_2);
    param_2 = plVar7;
    goto LAB_0292b6c4;
  }
  FUN_0292b6a0(param_1,plVar7);
  plVar12 = plVar7 + 1;
  goto LAB_0292b6d0;
LAB_0292b9a8:
  param_2 = plVar7;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_0292b6c4;
LAB_0292ba7c:
  lVar13 = *plVar12;
  if (*(int *)(lVar11 + 8) < *(int *)(lVar13 + 8)) {
    lVar11 = lVar10;
    do {
      lVar8 = lVar11;
      *(undefined8 *)((long)param_1 + lVar8 + 0x18) = *(undefined8 *)((long)param_1 + lVar8 + 0x10);
      if (lVar8 == -0x10) {
        plVar9 = param_1;
        goto LAB_0292bad0;
      }
      lVar11 = lVar8 + -8;
    } while (*(int *)(*(long *)((long)param_1 + lVar8 + 8) + 8) < *(int *)(lVar13 + 8));
    plVar9 = (long *)((long)param_1 + lVar8 + 0x10);
LAB_0292bad0:
    *plVar9 = lVar13;
  }
  if (plVar12 + 1 == param_2) {
switchD_0292b9c8_caseD_0:
    return;
  }
  lVar11 = *plVar12;
  lVar10 = lVar10 + 8;
  plVar12 = plVar12 + 1;
  goto LAB_0292ba7c;
}


