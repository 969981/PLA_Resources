/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a61590; name: FUN_02a61590
 */


void FUN_02a61590(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  
LAB_02a615bc:
  plVar14 = param_2 + -1;
  plVar16 = param_1;
LAB_02a615c8:
  param_1 = plVar16;
  lVar12 = (long)param_2 - (long)param_1;
  uVar9 = lVar12 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_02a61a98_caseD_0;
  case 2:
    lVar12 = *plVar14;
    lVar17 = *(long *)(*param_3 + 0x1e8);
    lVar15 = *(long *)(*param_3 + 0x1b0);
    uVar9 = lVar17 + *(int *)(lVar12 + 0x328);
    lVar13 = *param_1;
    iVar2 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    uVar9 = lVar17 + *(int *)(lVar13 + 0x328);
    iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    bVar6 = SBORROW4(iVar2,iVar3);
    iVar7 = iVar2 - iVar3;
    if (iVar2 == iVar3) {
      bVar6 = SBORROW4(*(int *)(lVar12 + 0x330),*(int *)(lVar13 + 0x330));
      iVar7 = *(int *)(lVar12 + 0x330) - *(int *)(lVar13 + 0x330);
    }
    if (iVar7 < 0 == bVar6) {
      return;
    }
    *param_1 = lVar12;
    *plVar14 = lVar13;
    return;
  case 3:
    FUN_02a61d30(param_1,param_1 + 1,plVar14,param_3);
    return;
  case 4:
    FUN_02a61f20(param_1,param_1 + 1,param_1 + 2,plVar14,param_3);
    return;
  case 5:
    FUN_02a620e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar14,param_3);
    return;
  }
  if (lVar12 < 0xf8) {
    FUN_02a61d30(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0;
    plVar16 = param_1 + 3;
    plVar14 = param_1 + 2;
    goto LAB_02a61b58;
  }
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = uVar9 + 1;
  }
  plVar16 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
  if (lVar12 < 0x1f39) {
    iVar7 = FUN_02a61d30(param_1,plVar16,plVar14,param_3);
  }
  else {
    uVar8 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar8 = uVar9;
    }
    lVar12 = (uVar8 & 0x7ffffffffffffffc) * 2;
    iVar7 = FUN_02a620e0(param_1,(long)param_1 + lVar12,plVar16,(long)plVar16 + lVar12,plVar14,
                         param_3);
  }
  lVar12 = *param_1;
  lVar13 = *(long *)(*param_3 + 0x1e8);
  uVar9 = lVar13 + *(int *)(lVar12 + 0x328);
  lVar15 = *(long *)(*param_3 + 0x1b0);
  lVar17 = *plVar16;
  iVar2 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                  0x78);
  uVar9 = lVar13 + *(int *)(lVar17 + 0x328);
  iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                  0x78);
  plVar10 = param_2 + -2;
  if (iVar2 == iVar3) {
    if (*(int *)(lVar17 + 0x330) <= *(int *)(lVar12 + 0x330)) goto joined_r0x02a616c8;
  }
  else if (iVar3 <= iVar2) {
joined_r0x02a616c8:
    for (; param_1 != plVar10; plVar10 = plVar10 + -1) {
      lVar18 = *plVar10;
      uVar9 = lVar13 + *(int *)(lVar18 + 0x328);
      iVar4 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80
                      + 0x78);
      bVar6 = SBORROW4(iVar4,iVar3);
      iVar5 = iVar4 - iVar3;
      if (iVar4 == iVar3) {
        bVar6 = SBORROW4(*(int *)(lVar18 + 0x330),*(int *)(lVar17 + 0x330));
        iVar5 = *(int *)(lVar18 + 0x330) - *(int *)(lVar17 + 0x330);
      }
      if (iVar5 < 0 != bVar6) {
        iVar7 = iVar7 + 1;
        *param_1 = lVar18;
        *plVar10 = lVar12;
        goto LAB_02a617b8;
      }
    }
    lVar17 = *plVar14;
    plVar10 = param_1 + 1;
    uVar9 = lVar13 + *(int *)(lVar17 + 0x328);
    iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    bVar6 = SBORROW4(iVar2,iVar3);
    iVar7 = iVar2 - iVar3;
    if (iVar2 == iVar3) {
      bVar6 = SBORROW4(*(int *)(lVar12 + 0x330),*(int *)(lVar17 + 0x330));
      iVar7 = *(int *)(lVar12 + 0x330) - *(int *)(lVar17 + 0x330);
    }
    if (iVar7 < 0 == bVar6) {
      if (plVar10 == plVar14) {
        return;
      }
      plVar10 = param_1 + 2;
      while( true ) {
        lVar18 = plVar10[-1];
        uVar9 = lVar13 + *(int *)(lVar18 + 0x328);
        iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar9 & 0x1f) * 0x80 + 0x78);
        bVar6 = SBORROW4(iVar2,iVar3);
        iVar7 = iVar2 - iVar3;
        if (iVar2 == iVar3) {
          bVar6 = SBORROW4(*(int *)(lVar12 + 0x330),*(int *)(lVar18 + 0x330));
          iVar7 = *(int *)(lVar12 + 0x330) - *(int *)(lVar18 + 0x330);
        }
        if (iVar7 < 0 != bVar6) break;
        plVar10 = plVar10 + 1;
        if (param_2 == plVar10) {
          return;
        }
      }
      plVar10[-1] = lVar17;
      *plVar14 = lVar18;
    }
    if (plVar10 == plVar14) {
      return;
    }
    plVar11 = plVar14;
LAB_02a61990:
    lVar12 = *param_1;
    lVar13 = *(long *)(*param_3 + 0x1e8);
    lVar15 = *(long *)(*param_3 + 0x1b0);
    uVar9 = lVar13 + *(int *)(lVar12 + 0x328);
    iVar7 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    plVar16 = plVar10;
    do {
      lVar17 = *plVar16;
      uVar9 = lVar13 + *(int *)(lVar17 + 0x328);
      iVar2 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80
                      + 0x78);
      if (iVar7 == iVar2) {
        if (*(int *)(lVar12 + 0x330) < *(int *)(lVar17 + 0x330)) goto LAB_02a61a10;
      }
      else if (iVar7 < iVar2) goto LAB_02a61a10;
      plVar16 = plVar16 + 1;
    } while( true );
  }
  plVar10 = plVar14;
LAB_02a617b8:
  plVar11 = param_1 + 1;
  plVar20 = plVar11;
  if (plVar11 < plVar10) {
LAB_02a617c4:
    lVar12 = *plVar16;
    lVar13 = *(long *)(*param_3 + 0x1e8);
    lVar15 = *(long *)(*param_3 + 0x1b0);
    uVar9 = lVar13 + *(int *)(lVar12 + 0x328);
    iVar2 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    plVar20 = plVar11;
    do {
      lVar17 = *plVar20;
      uVar9 = lVar13 + *(int *)(lVar17 + 0x328);
      iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80
                      + 0x78);
      if (iVar3 == iVar2) {
        if (*(int *)(lVar12 + 0x330) <= *(int *)(lVar17 + 0x330)) goto LAB_02a61844;
      }
      else if (iVar2 <= iVar3) goto LAB_02a61844;
      plVar20 = plVar20 + 1;
    } while( true );
  }
LAB_02a618a0:
  if (plVar20 != plVar16) {
    lVar13 = *plVar16;
    lVar17 = *(long *)(*param_3 + 0x1e8);
    lVar15 = *(long *)(*param_3 + 0x1b0);
    uVar9 = lVar17 + *(int *)(lVar13 + 0x328);
    lVar12 = *plVar20;
    iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    uVar9 = lVar17 + *(int *)(lVar12 + 0x328);
    iVar5 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    bVar6 = SBORROW4(iVar3,iVar5);
    iVar2 = iVar3 - iVar5;
    if (iVar3 == iVar5) {
      bVar6 = SBORROW4(*(int *)(lVar13 + 0x330),*(int *)(lVar12 + 0x330));
      iVar2 = *(int *)(lVar13 + 0x330) - *(int *)(lVar12 + 0x330);
    }
    if (iVar2 < 0 != bVar6) {
      iVar7 = iVar7 + 1;
      *plVar20 = lVar13;
      *plVar16 = lVar12;
    }
  }
  if (iVar7 == 0) {
    uVar9 = FUN_02a62310(param_1,plVar20,param_3);
    uVar8 = FUN_02a62310(plVar20 + 1,param_2,param_3);
    if ((uVar8 & 1) != 0) goto LAB_02a61a78;
    plVar16 = plVar20 + 1;
    if ((uVar9 & 1) != 0) goto LAB_02a615c8;
  }
  if ((long)param_2 - (long)plVar20 <= (long)plVar20 - (long)param_1) {
    FUN_02a61590(plVar20 + 1,param_2,param_3);
    param_2 = plVar20;
    goto LAB_02a615bc;
  }
  FUN_02a61590(param_1,plVar20,param_3);
  plVar16 = plVar20 + 1;
  goto LAB_02a615c8;
LAB_02a61b58:
  plVar10 = plVar16;
  lVar13 = *plVar10;
  lVar18 = *(long *)(*param_3 + 0x1e8);
  lVar17 = *(long *)(*param_3 + 0x1b0);
  uVar9 = lVar18 + *(int *)(lVar13 + 0x328);
  lVar15 = *plVar14;
  iVar2 = *(int *)(*(long *)(lVar17 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                  0x78);
  uVar9 = lVar18 + *(int *)(lVar15 + 0x328);
  iVar3 = *(int *)(*(long *)(lVar17 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                  0x78);
  bVar6 = SBORROW4(iVar2,iVar3);
  iVar7 = iVar2 - iVar3;
  if (iVar2 == iVar3) {
    bVar6 = SBORROW4(*(int *)(lVar13 + 0x330),*(int *)(lVar15 + 0x330));
    iVar7 = *(int *)(lVar13 + 0x330) - *(int *)(lVar15 + 0x330);
  }
  if (iVar7 < 0 != bVar6) {
    *plVar10 = lVar15;
    plVar16 = param_1;
    if (plVar14 != param_1) {
      lVar15 = lVar12;
      do {
        lVar17 = *(long *)((long)param_1 + lVar15 + 8);
        lVar19 = *(long *)(*param_3 + 0x1e8);
        lVar18 = *(long *)(*param_3 + 0x1b0);
        uVar9 = lVar19 + *(int *)(lVar13 + 0x328);
        iVar7 = *(int *)(*(long *)(lVar18 + (uVar9 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar9 & 0x1f) * 0x80 + 0x78);
        uVar9 = lVar19 + *(int *)(lVar17 + 0x328);
        iVar2 = *(int *)(*(long *)(lVar18 + (uVar9 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar9 & 0x1f) * 0x80 + 0x78);
        if (iVar7 == iVar2) {
          if (*(int *)(lVar17 + 0x330) <= *(int *)(lVar13 + 0x330)) {
            plVar16 = (long *)((long)param_1 + lVar15 + 0x10);
            break;
          }
        }
        else if (iVar2 <= iVar7) {
          plVar16 = plVar14;
          break;
        }
        plVar14 = plVar14 + -1;
        *(long *)((long)param_1 + lVar15 + 0x10) = lVar17;
        bVar6 = lVar15 != -8;
        lVar15 = lVar15 + -8;
      } while (bVar6);
    }
    *plVar16 = lVar13;
  }
  lVar12 = lVar12 + 8;
  plVar16 = plVar10 + 1;
  plVar14 = plVar10;
  if (plVar10 + 1 == param_2) {
switchD_02a61a98_caseD_0:
    return;
  }
  goto LAB_02a61b58;
LAB_02a61a10:
  do {
    plVar11 = plVar11 + -1;
    lVar18 = *plVar11;
    uVar9 = lVar13 + *(int *)(lVar18 + 0x328);
    iVar3 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    bVar6 = SBORROW4(iVar7,iVar3);
    iVar2 = iVar7 - iVar3;
    if (iVar7 == iVar3) {
      bVar6 = SBORROW4(*(int *)(lVar12 + 0x330),*(int *)(lVar18 + 0x330));
      iVar2 = *(int *)(lVar12 + 0x330) - *(int *)(lVar18 + 0x330);
    }
  } while (iVar2 < 0 != bVar6);
  if (plVar11 <= plVar16) goto LAB_02a615c8;
  plVar10 = plVar16 + 1;
  *plVar16 = lVar18;
  *plVar11 = lVar17;
  goto LAB_02a61990;
LAB_02a61844:
  do {
    plVar10 = plVar10 + -1;
    lVar18 = *plVar10;
    uVar9 = lVar13 + *(int *)(lVar18 + 0x328);
    iVar5 = *(int *)(*(long *)(lVar15 + (uVar9 >> 2 & 0x3ffffffffffffff8)) + (uVar9 & 0x1f) * 0x80 +
                    0x78);
    bVar6 = SBORROW4(iVar5,iVar2);
    iVar3 = iVar5 - iVar2;
    if (iVar5 == iVar2) {
      bVar6 = SBORROW4(*(int *)(lVar18 + 0x330),*(int *)(lVar12 + 0x330));
      iVar3 = *(int *)(lVar18 + 0x330) - *(int *)(lVar12 + 0x330);
    }
  } while (iVar3 < 0 == bVar6);
  if (plVar10 < plVar20) goto LAB_02a618a0;
  iVar7 = iVar7 + 1;
  plVar1 = plVar10;
  if (plVar16 != plVar20) {
    plVar1 = plVar16;
  }
  plVar11 = plVar20 + 1;
  *plVar20 = lVar18;
  *plVar10 = lVar17;
  plVar16 = plVar1;
  goto LAB_02a617c4;
LAB_02a61a78:
  param_2 = plVar20;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_02a615bc;
}


