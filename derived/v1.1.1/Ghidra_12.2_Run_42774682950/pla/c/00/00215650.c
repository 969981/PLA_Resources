/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00215650; name: FUN_00215650
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00215650(long *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  char *pcVar26;
  uint uVar27;
  long lVar28;
  ushort uVar29;
  uint uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  uint uVar33;
  
  lVar14 = param_1[7];
  puVar23 = (undefined1 *)param_1[3];
  iVar13 = (int)puVar23 - (param_2 - (int)param_1[4]);
  uVar4 = *(uint *)(lVar14 + 0x78);
  uVar6 = *(uint *)(lVar14 + 0x7c);
  uVar10 = *(uint *)(lVar14 + 0x44);
  pbVar17 = (byte *)*param_1;
  iVar5 = *(int *)(lVar14 + 0x3c);
  uVar7 = *(uint *)(lVar14 + 0x40);
  lVar19 = *(long *)(lVar14 + 0x68);
  lVar9 = *(long *)(lVar14 + 0x70);
  uVar21 = (ulong)*(uint *)(lVar14 + 0x58);
  puVar8 = *(undefined1 **)(lVar14 + 0x48);
  uVar16 = *(ulong *)(lVar14 + 0x50);
  pbVar2 = pbVar17 + ((int)param_1[1] - 5);
  puVar3 = puVar23 + ((int)param_1[4] - 0x101);
LAB_002156ec:
  uVar20 = (uint)uVar21;
  if (uVar20 < 0xf) {
    bVar11 = *pbVar17;
    pbVar18 = pbVar17 + 1;
    uVar27 = uVar20 + 8;
    uVar20 = uVar20 + 0x10;
    pbVar17 = pbVar17 + 2;
    uVar16 = ((ulong)bVar11 << (uVar21 & 0x3f)) + uVar16 +
             ((ulong)*pbVar18 << ((ulong)uVar27 & 0x3f));
  }
  pbVar18 = (byte *)(lVar19 + (uVar16 & (uint)~(-1 << (ulong)(uVar4 & 0x1f))) * 4);
  uVar27 = (uint)*pbVar18;
  uVar29 = *(ushort *)(pbVar18 + 2);
  uVar16 = uVar16 >> ((ulong)pbVar18[1] & 0x3f);
  uVar21 = (ulong)(uVar20 - pbVar18[1]);
  if (*pbVar18 != 0) {
    do {
      uVar20 = (uint)uVar21;
      if ((uVar27 >> 4 & 1) != 0) {
        uVar30 = (uint)uVar29;
        uVar27 = uVar27 & 0xf;
        if (uVar27 != 0) {
          pbVar18 = pbVar17;
          if (uVar20 < uVar27) {
            pbVar18 = pbVar17 + 1;
            uVar20 = uVar20 + 8;
            uVar16 = ((ulong)*pbVar17 << (uVar21 & 0x3f)) + uVar16;
          }
          uVar15 = (uint)uVar16;
          uVar16 = uVar16 >> uVar27;
          uVar30 = (uVar15 & (-1 << (ulong)uVar27 ^ 0xffffffffU)) + uVar30;
          uVar21 = (ulong)(uVar20 - uVar27);
          pbVar17 = pbVar18;
        }
        uVar20 = (uint)uVar21;
        if (uVar20 < 0xf) {
          bVar11 = *pbVar17;
          pbVar18 = pbVar17 + 1;
          uVar27 = uVar20 + 8;
          uVar20 = uVar20 + 0x10;
          pbVar17 = pbVar17 + 2;
          uVar16 = ((ulong)bVar11 << (uVar21 & 0x3f)) + uVar16 +
                   ((ulong)*pbVar18 << ((ulong)uVar27 & 0x3f));
        }
        pbVar18 = (byte *)(lVar9 + (uVar16 & (uint)~(-1 << (ulong)(uVar6 & 0x1f))) * 4);
        bVar11 = *pbVar18;
        uVar29 = *(ushort *)(pbVar18 + 2);
        uVar16 = uVar16 >> ((ulong)pbVar18[1] & 0x3f);
        uVar20 = uVar20 - pbVar18[1];
        goto joined_r0x00215808;
      }
      if ((uVar27 >> 6 & 1) != 0) {
        if ((uVar27 >> 5 & 1) != 0) {
          uVar25 = 0x3f3f;
          goto LAB_00215d1c;
        }
        pcVar26 = "invalid literal/length code";
        goto LAB_00215d14;
      }
      pbVar18 = (byte *)(lVar19 + ((uVar16 & (uint)~(-1 << (ulong)(uVar27 & 0x1f))) + (ulong)uVar29)
                                  * 4);
      uVar27 = (uint)*pbVar18;
      uVar29 = *(ushort *)(pbVar18 + 2);
      uVar16 = uVar16 >> ((ulong)pbVar18[1] & 0x3f);
      uVar21 = (ulong)(uVar20 - pbVar18[1]);
    } while (uVar27 != 0);
  }
  *puVar23 = (char)uVar29;
  puVar32 = puVar23 + 1;
  goto joined_r0x00215c10;
joined_r0x00215808:
  uVar27 = (uint)uVar29;
  uVar21 = (ulong)uVar20;
  if ((bVar11 >> 4 & 1) != 0) goto LAB_0021583c;
  if ((bVar11 >> 6 & 1) != 0) {
    pcVar26 = "invalid distance code";
    goto LAB_00215d14;
  }
  pbVar18 = (byte *)(lVar9 + ((uVar16 & (uint)~(-1 << (ulong)(bVar11 & 0x1f))) + (ulong)uVar29) * 4)
  ;
  bVar11 = *pbVar18;
  uVar29 = *(ushort *)(pbVar18 + 2);
  uVar16 = uVar16 >> ((ulong)pbVar18[1] & 0x3f);
  uVar20 = uVar20 - pbVar18[1];
  goto joined_r0x00215808;
LAB_0021583c:
  uVar15 = bVar11 & 0xf;
  if (uVar20 < uVar15) {
    uVar1 = uVar20 + 8;
    uVar16 = ((ulong)*pbVar17 << (uVar21 & 0x3f)) + uVar16;
    if (uVar1 < uVar15) {
      uVar16 = ((ulong)pbVar17[1] << ((ulong)uVar1 & 0x3f)) + uVar16;
      pbVar17 = pbVar17 + 2;
      uVar20 = uVar20 + 0x10;
    }
    else {
      pbVar17 = pbVar17 + 1;
      uVar20 = uVar1;
    }
  }
  uVar1 = (uint)uVar16 & (-1 << uVar15 ^ 0xffffffffU);
  uVar16 = uVar16 >> uVar15;
  uVar21 = (ulong)(uVar20 - uVar15);
  iVar22 = (int)puVar23;
  uVar20 = uVar1 + uVar27;
  uVar15 = uVar20 - (iVar22 - iVar13);
  if (uVar20 < (uint)(iVar22 - iVar13) || uVar15 == 0) {
    lVar28 = 0;
    uVar27 = uVar30;
    do {
      puVar32 = puVar23 + lVar28 + (1 - (ulong)uVar20);
      puVar24 = puVar23 + lVar28;
      lVar28 = lVar28 + 3;
      *puVar24 = puVar32[-1];
      puVar24[1] = *puVar32;
      uVar27 = uVar27 - 3;
      puVar24[2] = puVar32[1];
    } while (2 < uVar27);
    puVar32 = puVar23 + lVar28;
    if (uVar30 != (uint)lVar28) {
      *puVar32 = puVar23[lVar28 - (ulong)uVar20];
      if (uVar30 - 1 == (uint)lVar28) {
        puVar32 = puVar32 + 1;
      }
      else {
        puVar32[1] = (puVar23 + (lVar28 - (ulong)uVar20))[1];
        puVar32 = puVar32 + 2;
      }
    }
    goto joined_r0x00215c10;
  }
  if ((uVar7 < uVar15) &&
     (pcVar26 = "invalid distance too far back", *(int *)(lVar14 + 0x1be8) != 0)) {
LAB_00215d14:
    param_1[6] = (long)pcVar26;
    uVar25 = 0x3f51;
LAB_00215d1c:
    *(undefined4 *)(lVar14 + 8) = uVar25;
LAB_00215d20:
    uVar4 = (uint)uVar21 & 7;
    param_1[3] = (long)puVar23;
    lVar19 = (long)pbVar17 - (uVar21 >> 3);
    *param_1 = lVar19;
    *(int *)(param_1 + 4) = ((int)puVar3 - (int)puVar23) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar2 - (int)lVar19) + 5;
    *(ulong *)(lVar14 + 0x50) = uVar16 & (uint)~(-1 << (ulong)uVar4);
    *(uint *)(lVar14 + 0x58) = uVar4;
    return;
  }
  if (uVar10 == 0) {
    uVar33 = uVar30 - uVar15;
    puVar24 = puVar8 + (iVar5 - uVar15);
    if (uVar15 <= uVar30 && uVar33 != 0) {
      puVar32 = puVar8 + (iVar5 - uVar15);
      for (uVar30 = uVar15 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
        uVar15 = uVar15 - 1;
        *puVar23 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar23 = puVar23 + 1;
      }
      puVar24 = puVar23;
      if (6 < (iVar13 + -1 + uVar1 + uVar27) - iVar22) {
        do {
          *puVar24 = *puVar32;
          puVar24[1] = puVar32[1];
          puVar24[2] = puVar32[2];
          puVar24[3] = puVar32[3];
          puVar24[4] = puVar32[4];
          puVar24[5] = puVar32[5];
          puVar24[6] = puVar32[6];
          puVar23 = puVar24 + 8;
          uVar15 = uVar15 - 8;
          puVar24[7] = puVar32[7];
          puVar32 = puVar32 + 8;
          puVar24 = puVar23;
        } while (uVar15 != 0);
      }
LAB_00215b84:
      puVar24 = puVar23 + -(ulong)uVar20;
      uVar30 = uVar33;
    }
  }
  else if (uVar10 < uVar15) {
    uVar33 = uVar15 - uVar10;
    uVar12 = uVar30 - uVar33;
    puVar24 = puVar8 + ((uVar10 + iVar5) - uVar15);
    if (uVar33 <= uVar30 && uVar12 != 0) {
      puVar32 = puVar8 + ((uVar10 + iVar5) - uVar15);
      for (uVar30 = uVar33 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
        uVar33 = uVar33 - 1;
        *puVar23 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar23 = puVar23 + 1;
      }
      puVar24 = puVar23;
      if (6 < (~uVar10 + iVar13 + uVar1 + uVar27) - iVar22) {
        do {
          *puVar24 = *puVar32;
          puVar24[1] = puVar32[1];
          puVar24[2] = puVar32[2];
          puVar24[3] = puVar32[3];
          puVar24[4] = puVar32[4];
          puVar24[5] = puVar32[5];
          puVar24[6] = puVar32[6];
          puVar23 = puVar24 + 8;
          uVar33 = uVar33 - 8;
          puVar24[7] = puVar32[7];
          puVar32 = puVar32 + 8;
          puVar24 = puVar23;
        } while (uVar33 != 0);
      }
      puVar24 = puVar8;
      uVar30 = uVar12;
      if (uVar10 <= uVar12 && uVar12 - uVar10 != 0) {
        uVar27 = uVar10;
        if ((uVar10 & 7) == 0) {
          puVar32 = puVar8;
        }
        else {
          puVar24 = puVar23;
          puVar31 = puVar8;
          uVar30 = uVar10 & 7;
          do {
            puVar32 = puVar31 + 1;
            uVar27 = uVar27 - 1;
            uVar30 = uVar30 - 1;
            puVar23 = puVar24 + 1;
            *puVar24 = *puVar31;
            puVar24 = puVar23;
            puVar31 = puVar32;
          } while (uVar30 != 0);
        }
        puVar24 = puVar23;
        if (6 < uVar10 - 1) {
          do {
            *puVar24 = *puVar32;
            puVar24[1] = puVar32[1];
            puVar24[2] = puVar32[2];
            puVar24[3] = puVar32[3];
            puVar24[4] = puVar32[4];
            puVar24[5] = puVar32[5];
            puVar24[6] = puVar32[6];
            puVar23 = puVar24 + 8;
            uVar27 = uVar27 - 8;
            puVar24[7] = puVar32[7];
            puVar32 = puVar32 + 8;
            puVar24 = puVar23;
          } while (uVar27 != 0);
        }
        puVar24 = puVar23 + -(ulong)uVar20;
        uVar30 = uVar12 - uVar10;
      }
    }
  }
  else {
    uVar33 = uVar30 - uVar15;
    puVar24 = puVar8 + (uVar10 - uVar15);
    if (uVar15 <= uVar30 && uVar33 != 0) {
      puVar32 = puVar8 + (uVar10 - uVar15);
      for (uVar30 = uVar15 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
        uVar15 = uVar15 - 1;
        *puVar23 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar23 = puVar23 + 1;
      }
      puVar24 = puVar23;
      if (6 < (iVar13 + -1 + uVar1 + uVar27) - iVar22) {
        do {
          *puVar24 = *puVar32;
          puVar24[1] = puVar32[1];
          puVar24[2] = puVar32[2];
          puVar24[3] = puVar32[3];
          puVar24[4] = puVar32[4];
          puVar24[5] = puVar32[5];
          puVar24[6] = puVar32[6];
          puVar23 = puVar24 + 8;
          uVar15 = uVar15 - 8;
          puVar24[7] = puVar32[7];
          puVar32 = puVar32 + 8;
          puVar24 = puVar23;
        } while (uVar15 != 0);
      }
      goto LAB_00215b84;
    }
  }
  puVar32 = puVar23;
  puVar31 = puVar24;
  if (2 < uVar30) {
    do {
      *puVar32 = *puVar31;
      puVar32[1] = puVar31[1];
      puVar24 = puVar31 + 3;
      puVar23 = puVar32 + 3;
      uVar30 = uVar30 - 3;
      puVar32[2] = puVar31[2];
      puVar32 = puVar23;
      puVar31 = puVar24;
    } while (2 < uVar30);
  }
  puVar32 = puVar23;
  if (uVar30 != 0) {
    *puVar23 = *puVar24;
    puVar32 = puVar23 + 1;
    if (uVar30 != 1) {
      puVar23[1] = puVar24[1];
      puVar32 = puVar23 + 2;
    }
  }
joined_r0x00215c10:
  puVar23 = puVar32;
  if ((puVar3 <= puVar23) || (pbVar2 <= pbVar17)) goto LAB_00215d20;
  goto LAB_002156ec;
}


