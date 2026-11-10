/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008db320; name: FUN_008db320
 */


void FUN_008db320(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar12;
  ulong *puVar11;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  
LAB_008db358:
  do {
    puVar20 = (ulong *)((long)param_2 - 0xc);
    puVar21 = param_1;
LAB_008db364:
    param_1 = puVar21;
    uVar10 = (long)param_2 - (long)param_1;
    switch(((long)uVar10 >> 2) * -0x5555555555555555) {
    case 0:
    case 1:
      goto switchD_008db4d4_caseD_0;
    case 2:
      if (*puVar20 >> 0x20 == 0) {
        return;
      }
      if ((*puVar20 & 0xff) == 0x1f) {
        return;
      }
      if ((int)param_1[1] < *(int *)((long)param_2 - 4)) {
        uVar16 = *param_1;
        uVar10 = param_1[1];
        uVar17 = *puVar20;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 - 4);
        *param_1 = uVar17;
        *(int *)((long)param_2 - 4) = (int)uVar10;
        *puVar20 = uVar16;
        return;
      }
      return;
    case 3:
      FUN_008db910(param_1,(long)param_1 + 0xc,puVar20);
      return;
    case 4:
      FUN_008dbae0(param_1,(long)param_1 + 0xc,param_1 + 3,puVar20);
      return;
    case 5:
      FUN_008dbc40(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,puVar20);
      return;
    }
    if ((long)uVar10 < 0x174) {
      FUN_008db910(param_1,(long)param_1 + 0xc,param_1 + 3);
      if ((ulong *)((long)param_1 + 0x24U) == param_2) {
        return;
      }
      lVar13 = 0;
      puVar21 = (ulong *)((long)param_1 + 0x24U);
      puVar20 = param_1 + 3;
      break;
    }
    puVar21 = (ulong *)((long)param_1 + (uVar10 / 0x18) * 0xc);
    if ((long)uVar10 < 0x2ed5) {
      iVar9 = FUN_008db910(param_1,puVar21,puVar20);
    }
    else {
      lVar13 = (uVar10 / 0x30) * 0xc;
      iVar9 = FUN_008dbc40(param_1,(long)param_1 + lVar13,puVar21,(long)puVar21 + lVar13,puVar20);
    }
    iVar2 = (int)param_1[1];
    iVar3 = *(int *)((long)param_1 + (uVar10 / 0x18) * 0xc + 8);
    bVar7 = *param_1 >> 0x20 == 0;
    bVar8 = (*param_1 & 0xff) == 0x1f;
    bVar5 = !bVar7;
    bVar6 = !bVar8;
    if ((iVar2 <= iVar3) || (!(bVar5 && bVar6))) {
      puVar14 = param_2 + -3;
LAB_008db670:
      puVar11 = puVar14;
      if (param_1 == puVar11) {
        puVar14 = (ulong *)((long)param_1 + 0xc);
        if (iVar2 <= *(int *)((long)param_2 - 4) || (!bVar5 || !bVar6)) {
          if (puVar14 == puVar20 || (bVar7 || bVar8)) {
            return;
          }
          puVar14 = param_1 + 3;
          while (iVar2 <= *(int *)((long)puVar14 - 4)) {
            puVar14 = (ulong *)((long)puVar14 + 0xc);
            if (param_2 == puVar14) {
              return;
            }
          }
          uVar10 = *(ulong *)((long)puVar14 - 0xc);
          uVar1 = *(undefined4 *)((long)puVar14 - 4);
          uVar16 = *puVar20;
          *(undefined4 *)((long)puVar14 - 4) = *(undefined4 *)((long)param_2 - 4);
          *(ulong *)((long)puVar14 - 0xc) = uVar16;
          *(undefined4 *)((long)param_2 - 4) = uVar1;
          *puVar20 = uVar10;
        }
        if (puVar14 == puVar20) {
          return;
        }
        if ((*param_1 >> 0x20 == 0) || ((*param_1 & 0xff) == 0x1f)) {
LAB_008db878:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar11 = puVar20;
        while( true ) {
          puVar21 = (ulong *)((long)puVar14 - 0xc);
          do {
            puVar15 = puVar21;
            puVar21 = (ulong *)((long)puVar15 + 0xc);
          } while ((int)param_1[1] <= *(int *)((long)puVar15 + 0x14));
          puVar14 = puVar15 + 3;
          do {
            puVar18 = puVar11;
            puVar11 = (ulong *)((long)puVar18 - 0xc);
          } while (*(int *)((long)puVar18 - 4) < (int)param_1[1]);
          if (puVar11 <= puVar21) break;
          uVar10 = *puVar21;
          uVar1 = *(undefined4 *)((long)puVar15 + 0x14);
          uVar16 = *puVar11;
          *(undefined4 *)((long)puVar15 + 0x14) = *(undefined4 *)((long)puVar18 - 4);
          *puVar21 = uVar16;
          *(undefined4 *)((long)puVar18 - 4) = uVar1;
          *puVar11 = uVar10;
          if ((*param_1 >> 0x20 == 0) || ((*param_1 & 0xff) == 0x1f)) goto LAB_008db878;
        }
        goto LAB_008db364;
      }
      puVar14 = (ulong *)((long)puVar11 - 0xc);
      if ((int)puVar11[1] <= iVar3) goto LAB_008db670;
      if ((*puVar11 >> 0x20 == 0) || ((*puVar11 & 0xff) == 0x1f)) goto LAB_008db670;
      uVar16 = *param_1;
      iVar9 = iVar9 + 1;
      uVar10 = param_1[1];
      uVar17 = *puVar11;
      *(int *)(param_1 + 1) = (int)puVar11[1];
      *param_1 = uVar17;
      *(int *)(puVar11 + 1) = (int)uVar10;
      *puVar11 = uVar16;
    }
    else {
      puVar11 = puVar20;
    }
    puVar15 = (ulong *)((long)param_1 + 0xc);
    puVar14 = puVar15;
    if (puVar15 < puVar11) {
      while( true ) {
        puVar15 = (ulong *)((long)puVar14 - 0xc);
        do {
          puVar18 = puVar15;
          puVar15 = (ulong *)((long)puVar18 + 0xc);
        } while (((int)puVar21[1] < *(int *)((long)puVar18 + 0x14) && *puVar15 >> 0x20 != 0) &&
                 (*puVar15 & 0xff) != 0x1f);
        puVar14 = puVar18 + 3;
        do {
          puVar12 = puVar11;
          puVar11 = (ulong *)((long)puVar12 - 0xc);
        } while ((*(int *)((long)puVar12 - 4) <= (int)puVar21[1] || *puVar11 >> 0x20 == 0) ||
                 (*puVar11 & 0xff) == 0x1f);
        if (puVar11 < puVar15) break;
        uVar10 = *puVar15;
        iVar9 = iVar9 + 1;
        uVar1 = *(undefined4 *)((long)puVar18 + 0x14);
        uVar16 = *puVar11;
        *(undefined4 *)((long)puVar18 + 0x14) = *(undefined4 *)((long)puVar12 - 4);
        *puVar15 = uVar16;
        *(undefined4 *)((long)puVar12 - 4) = uVar1;
        *puVar11 = uVar10;
        puVar18 = puVar11;
        if (puVar21 != puVar15) {
          puVar18 = puVar21;
        }
        puVar21 = puVar18;
      }
    }
    if ((((puVar15 == puVar21) || (*puVar21 >> 0x20 == 0)) || ((*puVar21 & 0xff) == 0x1f)) ||
       ((int)puVar21[1] <= (int)puVar15[1])) {
      if (iVar9 == 0) goto LAB_008db7dc;
      goto LAB_008db720;
    }
    uVar16 = *puVar15;
    uVar10 = puVar15[1];
    uVar17 = *puVar21;
    *(int *)(puVar15 + 1) = (int)puVar21[1];
    *puVar15 = uVar17;
    *(int *)(puVar21 + 1) = (int)uVar10;
    *puVar21 = uVar16;
    if (iVar9 != -1) goto LAB_008db720;
LAB_008db7dc:
    uVar10 = FUN_008dbe00(param_1,puVar15);
    uVar16 = FUN_008dbe00((ulong *)((long)puVar15 + 0xcU),param_2);
    if ((uVar16 & 1) == 0) goto code_r0x008db800;
    param_2 = puVar15;
    if ((uVar10 & 1) != 0) {
      return;
    }
  } while( true );
LAB_008db440:
  puVar14 = puVar21;
  uVar10 = *puVar14;
  iVar9 = (int)puVar14[1];
  bVar5 = uVar10 >> 0x20 == 0;
  bVar6 = (uVar10 & 0xff) == 0x1f;
  if (((!bVar5 && !bVar6) && iVar9 != (int)puVar20[1]) &&
      ((bVar5 || bVar6) || (int)puVar20[1] <= iVar9)) {
    lVar4 = lVar13;
    do {
      lVar19 = lVar4;
      *(undefined8 *)((long)param_1 + lVar19 + 0x24) =
           *(undefined8 *)((long)param_1 + lVar19 + 0x18);
      *(undefined4 *)((long)param_1 + lVar19 + 0x2c) =
           *(undefined4 *)((long)param_1 + lVar19 + 0x20);
      if (lVar19 == -0x18) {
        puVar21 = param_1;
        goto LAB_008db4b4;
      }
      lVar4 = lVar19 + -0xc;
    } while (*(int *)((long)param_1 + lVar19 + 0x14) < iVar9);
    puVar21 = (ulong *)((long)param_1 + lVar19 + 0x18);
LAB_008db4b4:
    *puVar21 = uVar10;
    *(int *)(puVar21 + 1) = iVar9;
  }
  lVar13 = lVar13 + 0xc;
  puVar21 = (ulong *)((long)puVar14 + 0xcU);
  puVar20 = puVar14;
  if ((ulong *)((long)puVar14 + 0xcU) == param_2) {
switchD_008db4d4_caseD_0:
    return;
  }
  goto LAB_008db440;
code_r0x008db800:
  puVar21 = (ulong *)((long)puVar15 + 0xcU);
  if ((uVar10 & 1) == 0) {
LAB_008db720:
    if (((long)param_2 - (long)puVar15 >> 2) * -0x5555555555555555 <=
        ((long)puVar15 - (long)param_1 >> 2) * -0x5555555555555555) {
      FUN_008db320((long)puVar15 + 0xc,param_2);
      param_2 = puVar15;
      goto LAB_008db358;
    }
    FUN_008db320(param_1,puVar15);
    puVar21 = (ulong *)((long)puVar15 + 0xc);
  }
  goto LAB_008db364;
}


