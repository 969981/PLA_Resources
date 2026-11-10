/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01158050; name: FUN_01158050
 */


void FUN_01158050(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  
LAB_0115807c:
  plVar19 = param_2 + -1;
  plVar14 = param_1;
LAB_01158088:
  param_1 = plVar14;
  lVar12 = (long)param_2 - (long)param_1;
  uVar10 = lVar12 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_01158258_caseD_0;
  case 2:
    lVar12 = *plVar19;
    iVar9 = *(int *)(*(long *)*param_3 + 0xcc);
    iVar2 = *(int *)(lVar12 + 0x94);
    iVar5 = 0;
    if (iVar9 != 0) {
      iVar5 = iVar2 / iVar9;
    }
    lVar13 = *param_1;
    iVar5 = *(int *)param_3[1] + iVar5 * iVar9;
    iVar3 = *(int *)(lVar13 + 0x94);
    iVar6 = 0;
    if (iVar9 != 0) {
      iVar6 = iVar3 / iVar9;
    }
    iVar9 = *(int *)param_3[1] + iVar6 * iVar9;
    if ((iVar2 != iVar5) || (iVar3 == iVar9)) {
      if (iVar2 != iVar5 && iVar3 == iVar9) {
        return;
      }
      if ((ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)) <=
          (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58))) {
        return;
      }
    }
    *param_1 = lVar12;
    *plVar19 = lVar13;
    return;
  case 3:
    FUN_01158a30(param_1,param_1 + 1,plVar19,param_3);
    return;
  case 4:
    FUN_01158c90(param_1,param_1 + 1,param_1 + 2,plVar19,param_3);
    return;
  case 5:
    FUN_01158ea0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar19,param_3);
    return;
  }
  if (lVar12 < 0xf8) {
    FUN_01158a30(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0;
    plVar14 = param_1 + 3;
    plVar19 = param_1 + 2;
    goto LAB_011580cc;
  }
  uVar18 = uVar10;
  if ((long)uVar10 < 0) {
    uVar18 = uVar10 + 1;
  }
  plVar14 = (long *)((long)param_1 + (uVar18 & 0x3ffffffffffffffe) * 4);
  if (lVar12 < 0x1f39) {
    iVar9 = FUN_01158a30(param_1,plVar14,plVar19,param_3);
  }
  else {
    uVar18 = uVar10 + 3;
    if (-1 < (long)uVar10) {
      uVar18 = uVar10;
    }
    lVar12 = (uVar18 & 0x7ffffffffffffffc) * 2;
    iVar9 = FUN_01158ea0(param_1,(long)param_1 + lVar12,plVar14,(long)plVar14 + lVar12,plVar19,
                         param_3);
  }
  lVar12 = *param_1;
  iVar2 = *(int *)(*(long *)*param_3 + 0xcc);
  iVar5 = *(int *)(lVar12 + 0x94);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar5 / iVar2;
  }
  iVar6 = *(int *)param_3[1];
  lVar13 = *plVar14;
  iVar3 = iVar6 + iVar3 * iVar2;
  iVar4 = *(int *)(lVar13 + 0x94);
  iVar7 = 0;
  if (iVar2 != 0) {
    iVar7 = iVar4 / iVar2;
  }
  iVar7 = iVar6 + iVar7 * iVar2;
  if ((iVar5 == iVar3) && (iVar4 != iVar7)) {
LAB_0115846c:
    plVar11 = plVar19;
  }
  else {
    uVar18 = *(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58);
    uVar10 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58);
    if ((iVar5 == iVar3 || iVar4 != iVar7) && (uVar10 < uVar18)) goto LAB_0115846c;
    plVar17 = param_2 + -2;
    if (iVar4 == iVar7) {
      do {
        plVar11 = plVar17;
        if (param_1 == plVar11) goto LAB_01158778;
        lVar13 = *plVar11;
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = *(int *)(lVar13 + 0x94) / iVar2;
        }
        plVar17 = plVar11 + -1;
      } while (*(int *)(lVar13 + 0x94) != iVar6 + iVar4 * iVar2 ||
               uVar18 <= (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)));
    }
    else {
      do {
        plVar11 = plVar17;
        if (param_1 == plVar11) goto LAB_01158778;
        lVar13 = *plVar11;
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = *(int *)(lVar13 + 0x94) / iVar2;
        }
      } while ((*(int *)(lVar13 + 0x94) != iVar6 + iVar4 * iVar2) &&
              (plVar17 = plVar11 + -1,
              uVar18 <= (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58))));
    }
    iVar9 = iVar9 + 1;
    *param_1 = *plVar11;
    *plVar11 = lVar12;
  }
  plVar17 = param_1 + 1;
  plVar20 = plVar17;
  if (plVar17 < plVar11) {
    do {
      lVar12 = *plVar14;
      iVar2 = *(int *)param_3[1];
      iVar5 = *(int *)(*(long *)*param_3 + 0xcc);
      iVar3 = *(int *)(lVar12 + 0x94);
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = iVar3 / iVar5;
      }
      iVar6 = iVar2 + iVar6 * iVar5;
      if (iVar3 != iVar6) {
        do {
          lVar13 = *plVar17;
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = *(int *)(lVar13 + 0x94) / iVar5;
          }
          if (*(int *)(lVar13 + 0x94) != iVar2 + iVar4 * iVar5) {
            uVar10 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58);
            plVar20 = plVar17;
            if (uVar10 <= (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)))
            goto LAB_01158530;
          }
          plVar17 = plVar17 + 1;
        } while( true );
      }
      uVar10 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58);
      plVar20 = plVar17 + -1;
      do {
        plVar20 = plVar20 + 1;
        lVar12 = *plVar20;
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = *(int *)(lVar12 + 0x94) / iVar5;
        }
      } while (*(int *)(lVar12 + 0x94) == iVar2 + iVar4 * iVar5 &&
               (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) < uVar10);
LAB_01158530:
      if (iVar3 == iVar6) {
        do {
          plVar11 = plVar11 + -1;
          lVar12 = *plVar11;
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = *(int *)(lVar12 + 0x94) / iVar5;
          }
        } while (*(int *)(lVar12 + 0x94) != iVar2 + iVar3 * iVar5 ||
                 uVar10 <= (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)));
      }
      else {
        do {
          plVar11 = plVar11 + -1;
          lVar12 = *plVar11;
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = *(int *)(lVar12 + 0x94) / iVar5;
          }
        } while ((*(int *)(lVar12 + 0x94) != iVar2 + iVar3 * iVar5) &&
                (uVar10 <= (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58))));
      }
      if (plVar11 < plVar20) break;
      lVar12 = *plVar20;
      iVar9 = iVar9 + 1;
      plVar1 = plVar11;
      if (plVar14 != plVar20) {
        plVar1 = plVar14;
      }
      plVar17 = plVar20 + 1;
      *plVar20 = *plVar11;
      *plVar11 = lVar12;
      plVar14 = plVar1;
    } while( true );
  }
  if (plVar20 != plVar14) {
    lVar12 = *plVar14;
    iVar2 = *(int *)(*(long *)*param_3 + 0xcc);
    iVar5 = *(int *)(lVar12 + 0x94);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar5 / iVar2;
    }
    lVar13 = *plVar20;
    iVar3 = *(int *)param_3[1] + iVar3 * iVar2;
    iVar6 = *(int *)(lVar13 + 0x94);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar6 / iVar2;
    }
    iVar2 = *(int *)param_3[1] + iVar4 * iVar2;
    if (((iVar5 == iVar3) && (iVar6 != iVar2)) ||
       ((iVar5 == iVar3 || iVar6 != iVar2 &&
        ((ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) <
         (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)))))) {
      iVar9 = iVar9 + 1;
      *plVar20 = lVar12;
      *plVar14 = lVar13;
    }
  }
  if (iVar9 == 0) {
    uVar10 = FUN_01159150(param_1,plVar20,param_3);
    uVar18 = FUN_01159150(plVar20 + 1,param_2,param_3);
    if ((uVar18 & 1) != 0) goto LAB_01158a18;
    plVar14 = plVar20 + 1;
    if ((uVar10 & 1) != 0) goto LAB_01158088;
  }
  if ((long)param_2 - (long)plVar20 <= (long)plVar20 - (long)param_1) {
    FUN_01158050(plVar20 + 1,param_2,param_3);
    param_2 = plVar20;
    goto LAB_0115807c;
  }
  FUN_01158050(param_1,plVar20,param_3);
  plVar14 = plVar20 + 1;
  goto LAB_01158088;
LAB_011580cc:
  plVar17 = plVar14;
  lVar13 = *plVar17;
  lVar15 = *plVar19;
  iVar9 = *(int *)(*(long *)*param_3 + 0xcc);
  iVar2 = *(int *)(lVar13 + 0x94);
  iVar5 = 0;
  if (iVar9 != 0) {
    iVar5 = iVar2 / iVar9;
  }
  iVar5 = *(int *)param_3[1] + iVar5 * iVar9;
  iVar3 = *(int *)(lVar15 + 0x94);
  iVar6 = 0;
  if (iVar9 != 0) {
    iVar6 = iVar3 / iVar9;
  }
  iVar9 = *(int *)param_3[1] + iVar6 * iVar9;
  if (((iVar2 == iVar5) && (iVar3 != iVar9)) ||
     ((iVar2 == iVar5 || iVar3 != iVar9 &&
      ((ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)) <
       (ulong)(*(long *)(lVar15 + 0x60) - *(long *)(lVar15 + 0x58)))))) {
    *plVar17 = lVar15;
    plVar14 = param_1;
    if (plVar19 != param_1) {
      lVar15 = lVar12;
      do {
        lVar16 = *(long *)((long)param_1 + lVar15 + 8);
        iVar9 = *(int *)(*(long *)*param_3 + 0xcc);
        iVar2 = *(int *)(lVar13 + 0x94);
        iVar5 = 0;
        if (iVar9 != 0) {
          iVar5 = iVar2 / iVar9;
        }
        iVar5 = *(int *)param_3[1] + iVar5 * iVar9;
        iVar3 = *(int *)(lVar16 + 0x94);
        iVar6 = 0;
        if (iVar9 != 0) {
          iVar6 = iVar3 / iVar9;
        }
        iVar9 = *(int *)param_3[1] + iVar6 * iVar9;
        if (((iVar2 != iVar5) || (iVar3 == iVar9)) &&
           ((iVar2 != iVar5 && iVar3 == iVar9 ||
            ((ulong)(*(long *)(lVar16 + 0x60) - *(long *)(lVar16 + 0x58)) <=
             (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)))))) {
          plVar14 = (long *)((long)param_1 + lVar15 + 0x10);
          break;
        }
        bVar8 = lVar15 != -8;
        *(long *)((long)param_1 + lVar15 + 0x10) = lVar16;
        lVar15 = lVar15 + -8;
      } while (bVar8);
    }
    *plVar14 = lVar13;
  }
  lVar12 = lVar12 + 8;
  plVar14 = plVar17 + 1;
  plVar19 = plVar17;
  if (plVar17 + 1 == param_2) {
switchD_01158258_caseD_0:
    return;
  }
  goto LAB_011580cc;
LAB_01158778:
  lVar12 = *plVar19;
  plVar17 = param_1 + 1;
  iVar9 = *(int *)(lVar12 + 0x94);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar9 / iVar2;
  }
  iVar4 = iVar6 + iVar4 * iVar2;
  if (((iVar5 != iVar3) || (iVar9 == iVar4)) &&
     ((iVar5 != iVar3 && iVar9 == iVar4 ||
      ((ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) <= uVar10)))) {
    if (plVar17 == plVar19) {
      return;
    }
    if (iVar5 == iVar3) {
      plVar17 = param_1 + 2;
      while( true ) {
        lVar13 = plVar17[-1];
        iVar9 = 0;
        if (iVar2 != 0) {
          iVar9 = *(int *)(lVar13 + 0x94) / iVar2;
        }
        if ((*(int *)(lVar13 + 0x94) != iVar6 + iVar9 * iVar2) ||
           (uVar10 < (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)))) break;
        plVar17 = plVar17 + 1;
        if (param_2 == plVar17) {
          return;
        }
      }
    }
    else {
      plVar17 = param_1 + 2;
      while( true ) {
        lVar13 = plVar17[-1];
        iVar9 = 0;
        if (iVar2 != 0) {
          iVar9 = *(int *)(lVar13 + 0x94) / iVar2;
        }
        if (*(int *)(lVar13 + 0x94) != iVar6 + iVar9 * iVar2 &&
            uVar10 < (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58))) break;
        plVar17 = plVar17 + 1;
        if (param_2 == plVar17) {
          return;
        }
      }
    }
    lVar13 = plVar17[-1];
    plVar17[-1] = lVar12;
    *plVar19 = lVar13;
  }
  if (plVar17 == plVar19) {
    return;
  }
  plVar11 = plVar19;
  do {
    lVar12 = *param_1;
    iVar9 = *(int *)param_3[1];
    iVar2 = *(int *)(*(long *)*param_3 + 0xcc);
    iVar5 = *(int *)(lVar12 + 0x94);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar5 / iVar2;
    }
    iVar3 = iVar9 + iVar3 * iVar2;
    if (iVar5 == iVar3) {
      lVar13 = *plVar17;
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = *(int *)(lVar13 + 0x94) / iVar2;
      }
      if (*(int *)(lVar13 + 0x94) == iVar9 + iVar6 * iVar2) {
        lVar15 = *(long *)(lVar12 + 0x58);
        lVar16 = *(long *)(lVar12 + 0x60);
        do {
          if ((ulong)(lVar16 - lVar15) <
              (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58))) break;
          plVar17 = plVar17 + 1;
          lVar13 = *plVar17;
          iVar6 = 0;
          if (iVar2 != 0) {
            iVar6 = *(int *)(lVar13 + 0x94) / iVar2;
          }
        } while (*(int *)(lVar13 + 0x94) == iVar9 + iVar6 * iVar2);
        goto LAB_0115884c;
      }
LAB_011588f0:
      do {
        plVar11 = plVar11 + -1;
        lVar13 = *plVar11;
        iVar5 = 0;
        if (iVar2 != 0) {
          iVar5 = *(int *)(lVar13 + 0x94) / iVar2;
        }
      } while ((*(int *)(lVar13 + 0x94) != iVar9 + iVar5 * iVar2) ||
              (plVar14 = plVar17,
              (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) <
              (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58))));
    }
    else {
      lVar15 = *(long *)(lVar12 + 0x58);
      lVar16 = *(long *)(lVar12 + 0x60);
      plVar17 = plVar17 + -1;
      do {
        plVar17 = plVar17 + 1;
        lVar13 = *plVar17;
        iVar6 = 0;
        if (iVar2 != 0) {
          iVar6 = *(int *)(lVar13 + 0x94) / iVar2;
        }
      } while (*(int *)(lVar13 + 0x94) == iVar9 + iVar6 * iVar2 ||
               (ulong)(*(long *)(lVar13 + 0x60) - *(long *)(lVar13 + 0x58)) <=
               (ulong)(lVar16 - lVar15));
LAB_0115884c:
      if (iVar5 == iVar3) goto LAB_011588f0;
      do {
        plVar11 = plVar11 + -1;
        lVar12 = *plVar11;
        iVar5 = 0;
        if (iVar2 != 0) {
          iVar5 = *(int *)(lVar12 + 0x94) / iVar2;
        }
        plVar14 = plVar17;
      } while (*(int *)(lVar12 + 0x94) != iVar9 + iVar5 * iVar2 &&
               (ulong)(lVar16 - lVar15) <
               (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)));
    }
    if (plVar11 <= plVar14) goto LAB_01158088;
    lVar12 = *plVar14;
    plVar17 = plVar14 + 1;
    *plVar14 = *plVar11;
    *plVar11 = lVar12;
  } while( true );
LAB_01158a18:
  param_2 = plVar20;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_0115807c;
}


