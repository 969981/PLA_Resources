/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01156d30; name: FUN_01156d30
 */


void FUN_01156d30(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
LAB_01156d54:
  plVar5 = param_2 + -1;
  plVar8 = param_1;
LAB_01156d5c:
  param_1 = plVar8;
  lVar11 = (long)param_2 - (long)param_1;
  uVar9 = lVar11 >> 3;
  if (uVar9 == 4) {
    FUN_011573b0(param_1,param_1 + 1,param_1 + 2,plVar5);
    return;
  }
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_01156da4_caseD_0;
  case 2:
    lVar11 = *plVar5;
    lVar3 = *param_1;
    if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <
        (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
      *param_1 = lVar11;
      *plVar5 = lVar3;
      return;
    }
    return;
  case 3:
    lVar11 = *param_1;
    lVar3 = param_1[1];
    uVar9 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
    lVar10 = *plVar5;
    uVar12 = *(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58);
    if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <= uVar9) {
      if (uVar9 <= uVar12) {
        return;
      }
      param_1[1] = lVar10;
      *plVar5 = lVar3;
      lVar11 = *param_1;
      lVar3 = param_1[1];
      if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
          (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
        *param_1 = lVar3;
        param_1[1] = lVar11;
        return;
      }
      return;
    }
    if (uVar12 < uVar9) {
      *param_1 = lVar10;
      *plVar5 = lVar11;
      return;
    }
    *param_1 = lVar3;
    param_1[1] = lVar11;
    lVar3 = *plVar5;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
        (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
      param_1[1] = lVar3;
      *plVar5 = lVar11;
      return;
    }
    return;
  default:
    if (0xf7 < lVar11) {
      uVar12 = uVar9;
      if ((long)uVar9 < 0) {
        uVar12 = uVar9 + 1;
      }
      plVar8 = (long *)((long)param_1 + (uVar12 & 0x3ffffffffffffffe) * 4);
      if (lVar11 < 0x1f39) {
        lVar3 = *plVar8;
        lVar11 = *param_1;
        uVar9 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
        lVar10 = *plVar5;
        uVar12 = *(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58);
        if (uVar9 < (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
          if (uVar12 < uVar9) {
            *param_1 = lVar10;
            iVar2 = 1;
          }
          else {
            *param_1 = lVar3;
            *plVar8 = lVar11;
            lVar3 = *plVar5;
            if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <=
                (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) goto LAB_01157364;
            iVar2 = 2;
            *plVar8 = lVar3;
          }
          *plVar5 = lVar11;
        }
        else if (uVar12 < uVar9) {
          *plVar8 = lVar10;
          *plVar5 = lVar3;
          lVar3 = *plVar8;
          lVar11 = *param_1;
          if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
              (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
            *param_1 = lVar3;
            iVar2 = 2;
            *plVar8 = lVar11;
          }
          else {
LAB_01157364:
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        uVar12 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar12 = uVar9;
        }
        lVar11 = (uVar12 & 0x7ffffffffffffffc) * 2;
        iVar2 = FUN_01157520(param_1,(long)param_1 + lVar11,plVar8,(long)plVar8 + lVar11,plVar5);
      }
      lVar11 = *param_1;
      uVar9 = *(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58);
      uVar12 = *(long *)(*plVar8 + 0x60) - *(long *)(*plVar8 + 0x58);
      if (uVar12 <= uVar9) goto LAB_01157150;
      plVar6 = plVar5;
      goto LAB_01157068;
    }
    lVar11 = *param_1;
    lVar3 = param_1[1];
    uVar9 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
    lVar10 = param_1[2];
    uVar12 = *(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58);
    if (uVar9 < (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
      if (uVar12 < uVar9) {
        *param_1 = lVar10;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar11;
        if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <=
            (ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58))) goto LAB_01156f08;
        param_1[1] = lVar10;
      }
      param_1[2] = lVar11;
      lVar3 = lVar11;
    }
    else if (uVar12 < uVar9) {
      param_1[1] = lVar10;
      param_1[2] = lVar3;
      if ((ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)) <
          (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
        *param_1 = lVar10;
        param_1[1] = lVar11;
      }
    }
    else {
LAB_01156f08:
      lVar3 = lVar10;
    }
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar11 = 0;
    plVar8 = param_1 + 3;
    break;
  case 5:
    FUN_01157520(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    return;
  }
  goto LAB_01156f1c;
LAB_01157150:
  plVar7 = param_2 + -2;
  while (plVar6 = plVar7, param_1 != plVar6) {
    lVar3 = *plVar6;
    plVar7 = plVar6 + -1;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) < uVar12) goto code_r0x01157174;
  }
  lVar11 = *plVar5;
  plVar7 = param_1 + 1;
  if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <= uVar9) {
    if (plVar7 == plVar5) {
      return;
    }
    plVar7 = param_1 + 2;
    while (lVar3 = plVar7[-1], (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <= uVar9)
    {
      plVar7 = plVar7 + 1;
      if (param_2 == plVar7) {
        return;
      }
    }
    plVar7[-1] = lVar11;
    *plVar5 = lVar3;
  }
  plVar6 = plVar5;
  if (plVar7 == plVar5) {
    return;
  }
  while( true ) {
    uVar9 = *(long *)(*param_1 + 0x60) - *(long *)(*param_1 + 0x58);
    do {
      plVar8 = plVar7;
      plVar7 = plVar8 + 1;
      lVar11 = *plVar8;
    } while ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <= uVar9);
    do {
      plVar6 = plVar6 + -1;
      lVar3 = *plVar6;
    } while (uVar9 < (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)));
    if (plVar6 <= plVar8) break;
    *plVar8 = lVar3;
    *plVar6 = lVar11;
  }
  goto LAB_01156d5c;
code_r0x01157174:
  *param_1 = lVar3;
  iVar2 = iVar2 + 1;
  *plVar6 = lVar11;
LAB_01157068:
  plVar7 = param_1 + 1;
  plVar14 = plVar7;
  if (plVar7 < plVar6) {
    while( true ) {
      uVar9 = *(long *)(*plVar8 + 0x60) - *(long *)(*plVar8 + 0x58);
      plVar7 = plVar14 + -1;
      do {
        plVar14 = plVar7;
        plVar7 = plVar14 + 1;
        lVar11 = *plVar7;
      } while ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) < uVar9);
      plVar14 = plVar14 + 2;
      do {
        plVar6 = plVar6 + -1;
        lVar3 = *plVar6;
      } while (uVar9 <= (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)));
      if (plVar6 < plVar7) break;
      *plVar7 = lVar3;
      iVar2 = iVar2 + 1;
      *plVar6 = lVar11;
      plVar1 = plVar6;
      if (plVar8 != plVar7) {
        plVar1 = plVar8;
      }
      plVar8 = plVar1;
    }
  }
  if (plVar7 != plVar8) {
    lVar3 = *plVar8;
    lVar11 = *plVar7;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
        (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58))) {
      iVar2 = iVar2 + 1;
      *plVar7 = lVar3;
      *plVar8 = lVar11;
    }
  }
  if (iVar2 == 0) {
    uVar9 = FUN_01157620(param_1,plVar7);
    uVar12 = FUN_01157620(plVar7 + 1,param_2);
    if ((uVar12 & 1) != 0) goto LAB_01157384;
    plVar8 = plVar7 + 1;
    if ((uVar9 & 1) != 0) goto LAB_01156d5c;
  }
  if ((long)param_2 - (long)plVar7 <= (long)plVar7 - (long)param_1) {
    FUN_01156d30(plVar7 + 1,param_2);
    param_2 = plVar7;
    goto LAB_01156d54;
  }
  FUN_01156d30(param_1,plVar7);
  plVar8 = plVar7 + 1;
  goto LAB_01156d5c;
LAB_01157384:
  param_2 = plVar7;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_01156d54;
LAB_01156f1c:
  lVar10 = *plVar8;
  if ((ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)) <
      (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
    lVar3 = lVar11;
    do {
      lVar4 = lVar3;
      *(undefined8 *)((long)param_1 + lVar4 + 0x18) = *(undefined8 *)((long)param_1 + lVar4 + 0x10);
      if (lVar4 == -0x10) {
        plVar5 = param_1;
        goto LAB_01156f94;
      }
      lVar13 = *(long *)((long)param_1 + lVar4 + 8);
      lVar3 = lVar4 + -8;
    } while ((ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)) <
             (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)));
    plVar5 = (long *)((long)param_1 + lVar4 + 0x10);
LAB_01156f94:
    *plVar5 = lVar10;
  }
  if (plVar8 + 1 == param_2) {
switchD_01156da4_caseD_0:
    return;
  }
  lVar3 = *plVar8;
  lVar11 = lVar11 + 8;
  plVar8 = plVar8 + 1;
  goto LAB_01156f1c;
}


