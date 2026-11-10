/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d2870; name: FUN_008d2870
 */


void FUN_008d2870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
LAB_008d28a0:
  do {
    puVar17 = param_2 + -1;
    puVar18 = param_1;
LAB_008d28ac:
    while( true ) {
      param_1 = puVar18;
      lVar10 = (long)param_2 - (long)param_1;
      uVar7 = lVar10 >> 3;
      if (uVar7 == 4) {
        FUN_008d2d30(param_1,param_1 + 1,param_1 + 2,puVar17);
        return;
      }
      switch(uVar7) {
      case 0:
      case 1:
        goto switchD_008d28d4_caseD_0;
      case 2:
        uVar14 = *puVar17;
        if ((int)uVar14 == 0) {
          return;
        }
        uVar12 = *param_1;
        if ((int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar14 >> 0x20)) {
          *param_1 = uVar14;
          *puVar17 = uVar12;
          return;
        }
        return;
      case 3:
        FUN_008d2c60(param_1,param_1 + 1,puVar17);
        return;
      case 5:
        FUN_008d2df0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar17);
        return;
      }
      if (lVar10 < 0xf8) {
        FUN_008d2ee0(param_1,param_2);
        return;
      }
      uVar6 = uVar7;
      if ((long)uVar7 < 0) {
        uVar6 = uVar7 + 1;
      }
      puVar18 = (undefined8 *)((long)param_1 + (uVar6 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        iVar5 = FUN_008d2c60(param_1,puVar18,puVar17);
      }
      else {
        uVar6 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar6 = uVar7;
        }
        lVar10 = (uVar6 & 0x7ffffffffffffffc) * 2;
        iVar5 = FUN_008d2df0(param_1,(long)param_1 + lVar10,puVar18,(long)puVar18 + lVar10,puVar17);
      }
      uVar14 = *param_1;
      iVar13 = (int)uVar14;
      iVar15 = (int)((ulong)*puVar18 >> 0x20);
      iVar9 = (int)((ulong)uVar14 >> 0x20);
      if ((iVar13 != 0) && (iVar15 < iVar9)) break;
      if (param_1 != param_2 + -2) {
        puVar8 = param_2 + -2;
        do {
          uVar12 = *puVar8;
          bVar2 = false;
          bVar3 = true;
          bVar4 = false;
          if ((int)uVar12 != 0) {
            iVar16 = (int)((ulong)uVar12 >> 0x20);
            bVar4 = SBORROW4(iVar16,iVar15);
            bVar2 = iVar16 - iVar15 < 0;
            bVar3 = iVar16 == iVar15;
          }
          if (!bVar3 && bVar2 == bVar4) {
            iVar5 = iVar5 + 1;
            *param_1 = uVar12;
            *puVar8 = uVar14;
            goto LAB_008d2af8;
          }
          puVar8 = puVar8 + -1;
        } while (param_1 != puVar8);
      }
      puVar8 = param_1 + 1;
      if ((iVar13 == 0) || (iVar9 <= (int)((ulong)*puVar17 >> 0x20))) {
        if (puVar8 == puVar17) {
          return;
        }
        if (iVar13 == 0) {
          return;
        }
        puVar8 = param_1 + 2;
        while (uVar14 = puVar8[-1], iVar9 <= (int)((ulong)uVar14 >> 0x20)) {
          puVar8 = puVar8 + 1;
          if (param_2 == puVar8) {
            return;
          }
        }
        puVar8[-1] = *puVar17;
        *puVar17 = uVar14;
      }
      if (puVar8 == puVar17) {
        return;
      }
      uVar14 = *param_1;
      iVar5 = (int)uVar14;
      puVar11 = puVar17;
      while( true ) {
        if (iVar5 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        do {
          puVar18 = puVar8;
          puVar8 = puVar18 + 1;
          uVar12 = *puVar18;
          iVar5 = (int)((ulong)uVar14 >> 0x20);
        } while (iVar5 <= (int)((ulong)uVar12 >> 0x20));
        do {
          puVar11 = puVar11 + -1;
        } while ((int)((ulong)*puVar11 >> 0x20) < iVar5);
        if (puVar11 <= puVar18) break;
        *puVar18 = *puVar11;
        *puVar11 = uVar12;
        uVar14 = *param_1;
        iVar5 = (int)uVar14;
      }
    }
    puVar8 = puVar17;
LAB_008d2af8:
    puVar11 = param_1 + 1;
    if (puVar11 < puVar8) {
      do {
        uVar14 = *puVar11;
        iVar9 = *(int *)((long)puVar18 + 4);
        if ((int)uVar14 != 0) {
          iVar13 = (int)((ulong)uVar14 >> 0x20);
          while (iVar9 < iVar13) {
            puVar11 = puVar11 + 1;
            uVar14 = *puVar11;
            if ((int)uVar14 == 0) break;
            iVar13 = (int)((ulong)uVar14 >> 0x20);
          }
        }
        do {
          puVar8 = puVar8 + -1;
          uVar12 = *puVar8;
          bVar2 = false;
          bVar3 = false;
          if ((int)uVar12 != 0) {
            iVar13 = (int)((ulong)uVar12 >> 0x20);
            bVar3 = SBORROW4(iVar9,iVar13);
            bVar2 = iVar9 - iVar13 < 0;
          }
        } while (bVar2 == bVar3);
        if (puVar8 < puVar11) break;
        *puVar11 = uVar12;
        iVar5 = iVar5 + 1;
        *puVar8 = uVar14;
        puVar1 = puVar8;
        if (puVar18 != puVar11) {
          puVar1 = puVar18;
        }
        puVar11 = puVar11 + 1;
        puVar18 = puVar1;
      } while( true );
    }
    if (((puVar11 != puVar18) && (uVar14 = *puVar18, (int)uVar14 != 0)) &&
       (uVar12 = *puVar11, (int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar14 >> 0x20))) {
      iVar5 = iVar5 + 1;
      *puVar11 = uVar14;
      *puVar18 = uVar12;
    }
    if (iVar5 != 0) goto LAB_008d2b38;
    uVar7 = FUN_008d2fa0(param_1,puVar11);
    uVar6 = FUN_008d2fa0(puVar11 + 1,param_2);
    if ((uVar6 & 1) == 0) break;
    param_2 = puVar11;
    if ((uVar7 & 1) != 0) {
switchD_008d28d4_caseD_0:
      return;
    }
  } while( true );
  puVar18 = puVar11 + 1;
  if ((uVar7 & 1) == 0) {
LAB_008d2b38:
    if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
      FUN_008d2870(puVar11 + 1,param_2);
      param_2 = puVar11;
      goto LAB_008d28a0;
    }
    FUN_008d2870(param_1,puVar11);
    puVar18 = puVar11 + 1;
  }
  goto LAB_008d28ac;
}


