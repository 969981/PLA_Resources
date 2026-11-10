/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333b9d8; name: FUN_0333b9d8
 */


int FUN_0333b9d8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  short sVar13;
  undefined *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  
  puVar14 = PTR_PTR_0434a080;
  uVar18 = *(uint *)(param_1 + 0x24);
  iVar10 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_2 + 0x20);
  iVar7 = *(int *)(param_1 + 0x330);
  lVar24 = (long)iVar7;
  puVar26 = *(undefined8 **)(param_2 + 0x18);
  uVar2 = iVar6 + iVar10;
  if ((int)(uVar18 & 0x3fffffff) < (int)uVar2) {
    uVar17 = *(undefined8 *)(param_1 + 0x18);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar18 = *(uint *)(param_1 + 0x24);
    }
    uVar18 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar16 = uVar2;
    if ((int)uVar2 <= (int)uVar18) {
      uVar16 = uVar18;
    }
    lVar15 = FUN_032bd1d4(puVar14,uVar16,0x18,uVar17,iVar10);
    *(long *)(param_1 + 0x18) = lVar15;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x18);
  }
  if (iVar6 != 0) {
    puVar19 = (undefined8 *)(lVar15 + (long)iVar10 * 0x18);
    uVar23 = puVar26[2];
    uVar17 = *puVar26;
    puVar19[1] = puVar26[1];
    puVar19[2] = uVar23;
    *puVar19 = uVar17;
    if (iVar6 != 1) {
      uVar17 = puVar26[3];
      uVar23 = puVar26[5];
      puVar19[4] = puVar26[4];
      puVar19[5] = uVar23;
      puVar19[3] = uVar17;
      if (iVar6 != 2) {
        uVar17 = puVar26[6];
        uVar23 = puVar26[8];
        puVar19[7] = puVar26[7];
        puVar19[8] = uVar23;
        puVar19[6] = uVar17;
        if (iVar6 != 3) {
          puVar26 = puVar26 + 9;
          lVar20 = (long)iVar6 * 0x18 + -0x48;
          puVar19 = (undefined8 *)(lVar15 + (long)iVar10 * 0x18 + 0x48);
          do {
            uVar17 = *puVar26;
            lVar20 = lVar20 + -0x18;
            uVar23 = puVar26[2];
            puVar19[1] = puVar26[1];
            puVar19[2] = uVar23;
            *puVar19 = uVar17;
            puVar26 = puVar26 + 3;
            puVar19 = puVar19 + 3;
          } while (lVar20 != 0);
        }
      }
    }
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  iVar8 = *(int *)(param_2 + 0x3c0);
  iVar9 = *(int *)(param_1 + 0x3c0);
  iVar6 = iVar9 + iVar8;
  plVar25 = *(long **)(param_2 + 0x3b8);
  lVar15 = *(long *)(param_1 + 0x3b8);
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x3fffffff) < iVar6) {
    lVar15 = FUN_0333c5f0(puVar14,iVar6,lVar15,(long)iVar9);
    *(long *)(param_1 + 0x3b8) = lVar15;
  }
  if (iVar8 != 0) {
    plVar5 = plVar25 + iVar8;
    plVar22 = (long *)(lVar15 + (long)iVar9 * 8);
    do {
      lVar15 = *plVar25;
      *plVar22 = lVar15;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
        plVar1 = (long *)(lVar15 + 0x10);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = *plVar1 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      plVar25 = plVar25 + 1;
      plVar22 = plVar22 + 1;
    } while (plVar25 != plVar5);
  }
  *(int *)(param_1 + 0x3c0) = iVar6;
  iVar6 = *(int *)(param_2 + 0x330);
  iVar8 = *(int *)(param_1 + 0x330);
  uVar18 = *(uint *)(param_1 + 0x334);
  puVar27 = *(undefined4 **)(param_2 + 0x328);
  uVar2 = iVar8 + iVar6;
  if ((int)(uVar18 & 0x3fffffff) < (int)uVar2) {
    uVar17 = *(undefined8 *)(param_1 + 0x328);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar18 = *(uint *)(param_1 + 0x334);
    }
    uVar18 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar16 = uVar2;
    if ((int)uVar2 <= (int)uVar18) {
      uVar16 = uVar18;
    }
    lVar15 = FUN_032bd1d4(puVar14,uVar16,4,uVar17,iVar8);
    *(long *)(param_1 + 0x328) = lVar15;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x328);
  }
  if (iVar6 != 0) {
    puVar21 = (undefined4 *)(lVar15 + (long)iVar8 * 4);
    *puVar21 = *puVar27;
    if ((iVar6 != 1) && (puVar21[1] = puVar27[1], iVar6 != 2)) {
      lVar15 = (long)iVar6 * 4 + -8;
      puVar27 = puVar27 + 2;
      puVar21 = puVar21 + 2;
      do {
        lVar15 = lVar15 + -4;
        *puVar21 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar15 != 0);
    }
  }
  *(uint *)(param_1 + 0x330) = uVar2;
  if (iVar7 < (int)uVar2) {
    lVar15 = (long)(int)uVar2;
    psVar3 = (short *)(*(long *)(param_1 + 0x328) + (lVar15 + -1) * 4);
    sVar13 = (short)iVar10;
    *psVar3 = *psVar3 + sVar13;
    psVar3[1] = psVar3[1] + sVar13;
    if (lVar24 < lVar15 + -1) {
      lVar20 = lVar15 + -2;
      psVar3 = (short *)(*(long *)(param_1 + 0x328) + lVar20 * 4);
      *psVar3 = *psVar3 + sVar13;
      psVar3[1] = psVar3[1] + sVar13;
      if (lVar24 < lVar20) {
        lVar15 = lVar15 << 2;
        do {
          lVar4 = *(long *)(param_1 + 0x328) + lVar15;
          lVar15 = lVar15 + -4;
          lVar20 = lVar20 + -1;
          *(short *)(lVar4 + -0xc) = *(short *)(lVar4 + -0xc) + sVar13;
          *(short *)(lVar4 + -10) = *(short *)(lVar4 + -10) + sVar13;
        } while (lVar24 < lVar20);
      }
    }
  }
  return iVar10;
}


