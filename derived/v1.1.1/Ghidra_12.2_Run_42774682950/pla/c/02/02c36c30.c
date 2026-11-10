/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c36c30; name: FUN_02c36c30
 */


void FUN_02c36c30(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  ushort *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  uint uVar18;
  undefined2 uVar19;
  long lVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint uVar24;
  long lVar25;
  ushort *puVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  
  uVar18 = *(uint *)(param_1 + 0x90);
  if ((uVar18 <= param_4 || uVar18 <= param_2) || uVar18 <= param_3) {
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      **(undefined2 **)(lVar9 + 0x58) = 0;
      *(undefined2 *)(lVar9 + 0x7a) = 0;
      uVar18 = *(uint *)(param_1 + 0x90);
    }
    if (uVar18 <= param_2) {
      return;
    }
    lVar9 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    lVar20 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar9 + 8) = 0;
    lVar15 = *(long *)(param_1 + 0x98);
    lVar9 = *(long *)(lVar15 + lVar9);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78);
      if (*(ushort *)(lVar9 + 0x78) == 0) {
        iVar13 = 0;
      }
      else {
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        puVar21 = *(ushort **)(lVar9 + 0x58);
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c375f8;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c37588;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c375f8;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              lVar20 = lVar15;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar20 + 4);
              lVar15 = lVar20 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c37588:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c375f8:
      *(short *)(lVar9 + 0x7a) = (short)iVar13;
      lVar15 = *(long *)(param_1 + 0x98);
    }
    goto LAB_02c38620;
  }
  lVar15 = *(long *)(param_1 + 0x98);
  plVar30 = (long *)(lVar15 + (ulong)param_3 * 0x18);
  plVar27 = (long *)(lVar15 + (ulong)param_4 * 0x18);
  lVar20 = *plVar30;
  lVar28 = *plVar27;
  plVar7 = (long *)FUN_00d1603c();
  lVar29 = *plVar7;
  *(long *)PTR_DAT_0437b198 = lVar29;
  uVar10 = (ulong)*(ushort *)(plVar30 + 1);
  uVar16 = (ulong)(*(ushort *)(plVar30 + 1) >> 7) & 3;
  uVar12 = (ulong)*(uint6 *)((long)plVar30 + 10);
  lVar9 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    **(undefined2 **)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x7a) = 0;
  }
  iVar13 = *(int *)(lVar29 + 0x238);
  iVar14 = (int)uVar16;
  if (iVar13 == 6) {
    lVar9 = *(long *)(param_1 + 0x68);
    if (1 < iVar14 - 1U) {
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
        if (uVar18 == 0) {
          iVar13 = 0;
        }
        else {
          puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
          puVar23 = *(ushort **)(lVar20 + 0x58);
          iVar13 = 0;
          do {
            while( true ) {
              uVar2 = *puVar23;
              *puVar21 = uVar2;
              if (uVar2 == 0x10) break;
              if (uVar2 == 0) goto LAB_02c38180;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
              iVar13 = iVar13 + 1;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_02c37a8c;
            }
            uVar2 = puVar23[1];
            uVar1 = uVar2 + 2;
            bVar5 = uVar18 < uVar1;
            uVar18 = uVar18 - uVar1;
            if (bVar5 || uVar18 == 0) {
              *puVar21 = 0;
              goto LAB_02c38180;
            }
            uVar24 = uVar2 + 1;
            uVar6 = uVar24 & 7;
            puVar26 = puVar21 + 1;
            *puVar26 = uVar2;
            puVar4 = puVar23 + 1;
            puVar22 = puVar23;
            if (uVar6 != 0) {
              lVar15 = 0;
              do {
                lVar20 = lVar15;
                uVar24 = uVar24 - 1;
                uVar6 = uVar6 - 1;
                *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                     *(undefined2 *)((long)puVar23 + lVar20 + 4);
                lVar15 = lVar20 + 2;
              } while (uVar6 != 0);
              puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
              puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
              puVar4 = puVar22 + 1;
              puVar21 = puVar26;
            }
            puVar23 = puVar4;
            if (6 < uVar2) {
              puVar21 = puVar26;
              do {
                puVar21[1] = puVar22[2];
                puVar21[2] = puVar23[2];
                puVar21[3] = puVar23[3];
                puVar21[4] = puVar23[4];
                puVar21[5] = puVar23[5];
                puVar21[6] = puVar23[6];
                puVar22 = puVar23 + 7;
                puVar21[7] = *puVar22;
                puVar23 = puVar23 + 8;
                uVar24 = uVar24 - 8;
                puVar21 = puVar21 + 8;
                *puVar21 = *puVar23;
              } while (uVar24 != 0);
            }
            iVar13 = uVar1 + iVar13;
          } while (uVar18 != 0);
LAB_02c37a8c:
          if (iVar13 != 0) {
            iVar13 = iVar13 + -1;
            puVar21[-1] = 0;
          }
        }
LAB_02c38180:
        *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
        lVar9 = *(long *)(param_1 + 0x68);
        if (*(char *)(lVar9 + 0x7c) != '\0') {
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            lVar9 = *(long *)(param_1 + 0x68);
            if (*(char *)(lVar9 + 0x7c) == '\0') goto LAB_02c384a4;
          }
          uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
          if (uVar18 == 0) goto LAB_02c3847c;
          puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
          puVar23 = *(ushort **)(lVar28 + 0x58);
          iVar13 = 0;
          do {
            while( true ) {
              uVar2 = *puVar23;
              *puVar21 = uVar2;
              if (uVar2 == 0x10) break;
              if (uVar2 == 0) goto LAB_02c38498;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
              iVar13 = iVar13 + 1;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_02c38484;
            }
            uVar2 = puVar23[1];
            uVar1 = uVar2 + 2;
            bVar5 = uVar18 < uVar1;
            uVar18 = uVar18 - uVar1;
            if (bVar5 || uVar18 == 0) goto LAB_02c38494;
            uVar24 = uVar2 + 1;
            uVar6 = uVar24 & 7;
            puVar26 = puVar21 + 1;
            *puVar26 = uVar2;
            puVar4 = puVar23 + 1;
            puVar22 = puVar23;
            if (uVar6 != 0) {
              lVar15 = 0;
              do {
                lVar20 = lVar15;
                uVar24 = uVar24 - 1;
                uVar6 = uVar6 - 1;
                *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                     *(undefined2 *)((long)puVar23 + lVar20 + 4);
                lVar15 = lVar20 + 2;
              } while (uVar6 != 0);
              puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
              puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
              puVar4 = puVar22 + 1;
              puVar21 = puVar26;
            }
            puVar23 = puVar4;
            if (6 < uVar2) {
              puVar21 = puVar26;
              do {
                puVar21[1] = puVar22[2];
                puVar21[2] = puVar23[2];
                puVar21[3] = puVar23[3];
                puVar21[4] = puVar23[4];
                puVar21[5] = puVar23[5];
                puVar21[6] = puVar23[6];
                puVar22 = puVar23 + 7;
                puVar21[7] = *puVar22;
                puVar23 = puVar23 + 8;
                uVar24 = uVar24 - 8;
                puVar21 = puVar21 + 8;
                *puVar21 = *puVar23;
              } while (uVar24 != 0);
            }
            iVar13 = uVar1 + iVar13;
          } while (uVar18 != 0);
LAB_02c38484:
          if (iVar13 != 0) {
            iVar13 = iVar13 + -1;
            puVar21[-1] = 0;
          }
          goto LAB_02c38498;
        }
      }
      goto LAB_02c384a4;
    }
    if (*(char *)(lVar9 + 0x7c) == '\0') {
      if (iVar14 != 1) {
        pcVar11 = (char *)(lVar9 + 0x7c);
        goto LAB_02c37b5c;
      }
LAB_02c37b08:
      lVar9 = *(long *)(param_1 + 0x68);
      uVar18 = FUN_02c35bdc(param_1,param_3,0);
      pbVar8 = *(byte **)(*(long *)(lVar29 + (ulong)*(uint *)(lVar29 + 0x238) * 0x30 + 0x58) + 0x250
                         );
      if (((ulong)*pbVar8 < 4) || (pbVar8[1] < uVar18)) {
        pbVar8 = (byte *)&DAT_03a759e8;
        sVar3 = DAT_03a759e8;
      }
      else {
        pbVar8 = pbVar8 + (ulong)pbVar8[(ulong)(uVar18 + (uint)pbVar8[1] * 4) + (ulong)*pbVar8 * 2 +
                                        2] + (ulong)*(ushort *)(pbVar8 + 10);
        sVar3 = *(short *)pbVar8;
      }
      if (sVar3 != 0) {
        cVar17 = *(char *)(lVar9 + 0x7c);
        do {
          pbVar8 = pbVar8 + 2;
          if (cVar17 == '\0') {
LAB_02c37c44:
            sVar3 = *(short *)pbVar8;
          }
          else {
            uVar2 = *(ushort *)(lVar9 + 0x7a);
            if ((uint)*(ushort *)(lVar9 + 0x78) <= uVar2 + 1) goto LAB_02c37c44;
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(short *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = sVar3;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            sVar3 = *(short *)pbVar8;
          }
          if (sVar3 == 0) break;
          cVar17 = *(char *)(lVar9 + 0x7c);
        } while( true );
      }
    }
    else {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar28 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c37ab0;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c37a6c;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c37ab0;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar28 = 0;
            do {
              lVar25 = lVar28;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar25 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar25 + 4);
              lVar28 = lVar25 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar25 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar25 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c37a6c:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c37ab0:
      *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
      lVar9 = *(long *)(param_1 + 0x68);
      pcVar11 = (char *)(lVar9 + 0x7c);
      if (*pcVar11 != '\0') {
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
        }
      }
      if (iVar14 == 1) goto LAB_02c37b08;
LAB_02c37b5c:
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 100;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
          if (*pcVar11 == '\0') goto LAB_02c37c8c;
        }
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x65;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
          if (*pcVar11 == '\0') goto LAB_02c37c8c;
        }
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
        }
      }
    }
LAB_02c37c8c:
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
LAB_02c38130:
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c3814c;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c38138;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) goto LAB_02c38148;
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar20 = 0;
            do {
              lVar28 = lVar20;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar28 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar28 + 4);
              lVar20 = lVar28 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar28 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar28 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c38138:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
      goto LAB_02c3814c;
    }
    goto LAB_02c38158;
  }
  if (iVar13 == 5) {
    if (iVar14 - 1U < 2) {
      lVar9 = *(long *)(param_1 + 0x68);
      if (*(char *)(lVar9 + 0x7c) == '\0') {
        cVar17 = '\0';
        pcVar11 = (char *)(lVar9 + 0x7c);
        if (iVar14 != 1) goto LAB_02c375c8;
LAB_02c37e9c:
        if (cVar17 != '\0') {
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x6e;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            if (*pcVar11 == '\0') goto LAB_02c38000;
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            if (*pcVar11 == '\0') goto LAB_02c38000;
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 100;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            if (*pcVar11 == '\0') goto LAB_02c38000;
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x65;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            if (*pcVar11 == '\0') goto LAB_02c38000;
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            lVar28 = *(long *)(lVar9 + 0x58);
            uVar19 = 0x72;
LAB_02c37fb4:
            *(undefined2 *)(lVar28 + (ulong)uVar2 * 2) = uVar19;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            if (*pcVar11 == '\0') goto LAB_02c38000;
          }
          goto LAB_02c37fcc;
        }
      }
      else {
        uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
        if (uVar18 == 0) {
          iVar13 = 0;
        }
        else {
          puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
          puVar23 = *(ushort **)(lVar28 + 0x58);
          iVar13 = 0;
          do {
            while( true ) {
              uVar2 = *puVar23;
              *puVar21 = uVar2;
              if (uVar2 == 0x10) break;
              if (uVar2 == 0) goto LAB_02c37dc0;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
              iVar13 = iVar13 + 1;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_02c37a7c;
            }
            uVar2 = puVar23[1];
            uVar1 = uVar2 + 2;
            bVar5 = uVar18 < uVar1;
            uVar18 = uVar18 - uVar1;
            if (bVar5 || uVar18 == 0) {
              *puVar21 = 0;
              goto LAB_02c37dc0;
            }
            uVar24 = uVar2 + 1;
            uVar6 = uVar24 & 7;
            puVar26 = puVar21 + 1;
            *puVar26 = uVar2;
            puVar4 = puVar23 + 1;
            puVar22 = puVar23;
            if (uVar6 != 0) {
              lVar28 = 0;
              do {
                lVar29 = lVar28;
                uVar24 = uVar24 - 1;
                uVar6 = uVar6 - 1;
                *(undefined2 *)((long)puVar21 + lVar29 + 4) =
                     *(undefined2 *)((long)puVar23 + lVar29 + 4);
                lVar28 = lVar29 + 2;
              } while (uVar6 != 0);
              puVar26 = (ushort *)((long)puVar21 + lVar29 + 4);
              puVar22 = (ushort *)((long)puVar23 + lVar29 + 2);
              puVar4 = puVar22 + 1;
              puVar21 = puVar26;
            }
            puVar23 = puVar4;
            if (6 < uVar2) {
              puVar21 = puVar26;
              do {
                puVar21[1] = puVar22[2];
                puVar21[2] = puVar23[2];
                puVar21[3] = puVar23[3];
                puVar21[4] = puVar23[4];
                puVar21[5] = puVar23[5];
                puVar21[6] = puVar23[6];
                puVar22 = puVar23 + 7;
                puVar21[7] = *puVar22;
                puVar23 = puVar23 + 8;
                uVar24 = uVar24 - 8;
                puVar21 = puVar21 + 8;
                *puVar21 = *puVar23;
              } while (uVar24 != 0);
            }
            iVar13 = uVar1 + iVar13;
          } while (uVar18 != 0);
LAB_02c37a7c:
          if (iVar13 != 0) {
            iVar13 = iVar13 + -1;
            puVar21[-1] = 0;
          }
        }
LAB_02c37dc0:
        *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
        lVar9 = *(long *)(param_1 + 0x68);
        pcVar11 = (char *)(lVar9 + 0x7c);
        cVar17 = '\0';
        if (*pcVar11 != '\0') {
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            cVar17 = *(char *)(lVar9 + 0x7c);
            if (cVar17 == '\0') goto LAB_02c37e94;
          }
          else {
            cVar17 = '\x01';
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x76;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            cVar17 = *(char *)(lVar9 + 0x7c);
            if (cVar17 == '\0') goto LAB_02c37e94;
          }
          uVar2 = *(ushort *)(lVar9 + 0x7a);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x6f;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            cVar17 = *(char *)(lVar9 + 0x7c);
          }
        }
LAB_02c37e94:
        if (iVar14 == 1) goto LAB_02c37e9c;
LAB_02c375c8:
        if (cVar17 == '\0') goto LAB_02c38000;
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          lVar28 = *(long *)(lVar9 + 0x58);
          uVar19 = 0x6d;
          goto LAB_02c37fb4;
        }
LAB_02c37fcc:
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
        }
      }
LAB_02c38000:
      lVar9 = *(long *)(param_1 + 0x68);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
        if (uVar18 == 0) goto LAB_02c38130;
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c3814c;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c38138;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) goto LAB_02c38148;
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar20 = 0;
            do {
              lVar28 = lVar20;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar28 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar28 + 4);
              lVar20 = lVar28 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar28 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar28 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
        goto LAB_02c38138;
      }
      goto LAB_02c38158;
    }
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c38300;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c37a9c;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c38300;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              lVar20 = lVar15;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar20 + 4);
              lVar15 = lVar20 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c37a9c:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c38300:
      *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
      lVar9 = *(long *)(param_1 + 0x68);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
          lVar9 = *(long *)(param_1 + 0x68);
          if (*(char *)(lVar9 + 0x7c) == '\0') goto LAB_02c384a4;
        }
        uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
        if (uVar18 == 0) goto LAB_02c3847c;
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar28 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c38498;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c38484;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) goto LAB_02c38494;
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              lVar20 = lVar15;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar20 + 4);
              lVar15 = lVar20 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
        goto LAB_02c38484;
      }
    }
  }
  else if (iVar13 == 3) {
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar28 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c3764c;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c37608;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c3764c;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar28 = 0;
            do {
              lVar25 = lVar28;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar25 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar25 + 4);
              lVar28 = lVar25 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar25 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar25 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c37608:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c3764c:
      *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
      lVar9 = *(long *)(param_1 + 0x68);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
        }
      }
    }
    if (iVar14 != 3) {
      lVar9 = *(long *)(param_1 + 0x68);
      cVar17 = (&DAT_039c72e4)[uVar16];
      uVar18 = FUN_02c35bdc(param_1,param_3,0);
      pbVar8 = *(byte **)(*(long *)(lVar29 + (ulong)*(uint *)(lVar29 + 0x238) * 0x30 + 0x58) + 0x250
                         );
      if (((uint)*pbVar8 < (uint)(int)cVar17) || (pbVar8[1] < uVar18)) {
        pbVar8 = (byte *)&DAT_03a759e8;
        sVar3 = DAT_03a759e8;
      }
      else {
        pbVar8 = pbVar8 + (ulong)pbVar8[(ulong)(uVar18 + (uint)pbVar8[1] * (int)cVar17) +
                                        (ulong)*pbVar8 * 2 + 2] +
                          (ulong)*(ushort *)(pbVar8 + ((long)cVar17 & 0xffffffffU) * 2 + 2);
        sVar3 = *(short *)pbVar8;
      }
      if (sVar3 != 0) {
        cVar17 = *(char *)(lVar9 + 0x7c);
        do {
          pbVar8 = pbVar8 + 2;
          if (cVar17 == '\0') {
LAB_02c37730:
            sVar3 = *(short *)pbVar8;
          }
          else {
            uVar2 = *(ushort *)(lVar9 + 0x7a);
            if ((uint)*(ushort *)(lVar9 + 0x78) <= uVar2 + 1) goto LAB_02c37730;
            *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
            *(short *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = sVar3;
            *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
            sVar3 = *(short *)pbVar8;
          }
          if (sVar3 == 0) break;
          cVar17 = *(char *)(lVar9 + 0x7c);
        } while( true );
      }
    }
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c37a44;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c378b0;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c37a44;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar20 = 0;
            do {
              lVar28 = lVar20;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar28 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar28 + 4);
              lVar20 = lVar28 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar28 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar28 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c378b0:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c37a44:
      *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
    }
    uVar12 = (ulong)*(uint6 *)((long)plVar27 + 10);
    uVar10 = (ulong)*(ushort *)(lVar15 + (ulong)param_4 * 0x18 + 8);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
      if (uVar18 == 0) {
        iVar13 = 0;
      }
      else {
        puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
        puVar23 = *(ushort **)(lVar20 + 0x58);
        iVar13 = 0;
        do {
          while( true ) {
            uVar2 = *puVar23;
            *puVar21 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c378c4;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c37618;
          }
          uVar2 = puVar23[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar18 < uVar1;
          uVar18 = uVar18 - uVar1;
          if (bVar5 || uVar18 == 0) {
            *puVar21 = 0;
            goto LAB_02c378c4;
          }
          uVar24 = uVar2 + 1;
          uVar6 = uVar24 & 7;
          puVar26 = puVar21 + 1;
          *puVar26 = uVar2;
          puVar4 = puVar23 + 1;
          puVar22 = puVar23;
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              lVar20 = lVar15;
              uVar24 = uVar24 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                   *(undefined2 *)((long)puVar23 + lVar20 + 4);
              lVar15 = lVar20 + 2;
            } while (uVar6 != 0);
            puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
            puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
            puVar4 = puVar22 + 1;
            puVar21 = puVar26;
          }
          puVar23 = puVar4;
          if (6 < uVar2) {
            puVar21 = puVar26;
            do {
              puVar21[1] = puVar22[2];
              puVar21[2] = puVar23[2];
              puVar21[3] = puVar23[3];
              puVar21[4] = puVar23[4];
              puVar21[5] = puVar23[5];
              puVar21[6] = puVar23[6];
              puVar22 = puVar23 + 7;
              puVar21[7] = *puVar22;
              puVar23 = puVar23 + 8;
              uVar24 = uVar24 - 8;
              puVar21 = puVar21 + 8;
              *puVar21 = *puVar23;
            } while (uVar24 != 0);
          }
          iVar13 = uVar1 + iVar13;
        } while (uVar18 != 0);
LAB_02c37618:
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          puVar21[-1] = 0;
        }
      }
LAB_02c378c4:
      *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
      lVar9 = *(long *)(param_1 + 0x68);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        uVar2 = *(ushort *)(lVar9 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar9 + 0x78)) {
          *(ushort *)(lVar9 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2) = 0;
          lVar9 = *(long *)(param_1 + 0x68);
          if (*(char *)(lVar9 + 0x7c) == '\0') goto LAB_02c384a4;
        }
        uVar18 = (uint)*(ushort *)(lVar9 + 0x78) - (uint)*(ushort *)(lVar9 + 0x7a);
        if (uVar18 != 0) {
          puVar21 = (ushort *)(*(long *)(lVar9 + 0x58) + (ulong)*(ushort *)(lVar9 + 0x7a) * 2);
          puVar23 = *(ushort **)(lVar28 + 0x58);
          iVar13 = 0;
          do {
            while( true ) {
              uVar2 = *puVar23;
              *puVar21 = uVar2;
              if (uVar2 == 0x10) break;
              if (uVar2 == 0) goto LAB_02c38498;
              puVar21 = puVar21 + 1;
              puVar23 = puVar23 + 1;
              iVar13 = iVar13 + 1;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_02c38484;
            }
            uVar2 = puVar23[1];
            uVar1 = uVar2 + 2;
            bVar5 = uVar18 < uVar1;
            uVar18 = uVar18 - uVar1;
            if (bVar5 || uVar18 == 0) goto LAB_02c38494;
            uVar24 = uVar2 + 1;
            uVar6 = uVar24 & 7;
            puVar26 = puVar21 + 1;
            *puVar26 = uVar2;
            puVar4 = puVar23 + 1;
            puVar22 = puVar23;
            if (uVar6 != 0) {
              lVar15 = 0;
              do {
                lVar20 = lVar15;
                uVar24 = uVar24 - 1;
                uVar6 = uVar6 - 1;
                *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                     *(undefined2 *)((long)puVar23 + lVar20 + 4);
                lVar15 = lVar20 + 2;
              } while (uVar6 != 0);
              puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
              puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
              puVar4 = puVar22 + 1;
              puVar21 = puVar26;
            }
            puVar23 = puVar4;
            if (6 < uVar2) {
              puVar21 = puVar26;
              do {
                puVar21[1] = puVar22[2];
                puVar21[2] = puVar23[2];
                puVar21[3] = puVar23[3];
                puVar21[4] = puVar23[4];
                puVar21[5] = puVar23[5];
                puVar21[6] = puVar23[6];
                puVar22 = puVar23 + 7;
                puVar21[7] = *puVar22;
                puVar23 = puVar23 + 8;
                uVar24 = uVar24 - 8;
                puVar21 = puVar21 + 8;
                *puVar21 = *puVar23;
              } while (uVar24 != 0);
            }
            iVar13 = uVar1 + iVar13;
          } while (uVar18 != 0);
          goto LAB_02c38484;
        }
LAB_02c3847c:
        iVar13 = 0;
        goto LAB_02c38498;
      }
    }
  }
  goto LAB_02c384a4;
LAB_02c38494:
  *puVar21 = 0;
LAB_02c38498:
  *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
  goto LAB_02c384a4;
LAB_02c38148:
  *puVar21 = 0;
LAB_02c3814c:
  *(short *)(lVar9 + 0x7a) = *(short *)(lVar9 + 0x7a) + (short)iVar13;
LAB_02c38158:
  uVar12 = (ulong)*(uint6 *)((long)plVar27 + 10);
  uVar10 = (ulong)(*(ushort *)(lVar15 + (ulong)param_4 * 0x18 + 8) & 0xffffff9f | 0x20);
LAB_02c384a4:
  if (*(uint *)(param_1 + 0x90) <= param_2) {
    return;
  }
  lVar9 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
  lVar20 = *(long *)(param_1 + 0x68);
  *(ulong *)(*(long *)(param_1 + 0x98) + lVar9 + 8) = uVar10 | uVar12 << 0x10;
  lVar15 = *(long *)(param_1 + 0x98);
  lVar9 = *(long *)(lVar15 + lVar9);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    uVar18 = (uint)*(ushort *)(lVar9 + 0x78);
    if (*(ushort *)(lVar9 + 0x78) == 0) {
      iVar13 = 0;
    }
    else {
      puVar23 = *(ushort **)(lVar20 + 0x58);
      iVar13 = 0;
      puVar21 = *(ushort **)(lVar9 + 0x58);
      do {
        while( true ) {
          uVar2 = *puVar23;
          *puVar21 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_02c38614;
          puVar21 = puVar21 + 1;
          puVar23 = puVar23 + 1;
          iVar13 = iVar13 + 1;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_02c38600;
        }
        uVar2 = puVar23[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar18 < uVar1;
        uVar18 = uVar18 - uVar1;
        if (bVar5 || uVar18 == 0) {
          *puVar21 = 0;
          goto LAB_02c38614;
        }
        uVar24 = uVar2 + 1;
        uVar6 = uVar24 & 7;
        puVar26 = puVar21 + 1;
        *puVar26 = uVar2;
        puVar4 = puVar23 + 1;
        puVar22 = puVar23;
        if (uVar6 != 0) {
          lVar15 = 0;
          do {
            lVar20 = lVar15;
            uVar24 = uVar24 - 1;
            uVar6 = uVar6 - 1;
            *(undefined2 *)((long)puVar21 + lVar20 + 4) =
                 *(undefined2 *)((long)puVar23 + lVar20 + 4);
            lVar15 = lVar20 + 2;
          } while (uVar6 != 0);
          puVar26 = (ushort *)((long)puVar21 + lVar20 + 4);
          puVar22 = (ushort *)((long)puVar23 + lVar20 + 2);
          puVar4 = puVar22 + 1;
          puVar21 = puVar26;
        }
        puVar23 = puVar4;
        if (6 < uVar2) {
          puVar21 = puVar26;
          do {
            puVar21[1] = puVar22[2];
            puVar21[2] = puVar23[2];
            puVar21[3] = puVar23[3];
            puVar21[4] = puVar23[4];
            puVar21[5] = puVar23[5];
            puVar21[6] = puVar23[6];
            puVar22 = puVar23 + 7;
            puVar21[7] = *puVar22;
            puVar23 = puVar23 + 8;
            uVar24 = uVar24 - 8;
            puVar21 = puVar21 + 8;
            *puVar21 = *puVar23;
          } while (uVar24 != 0);
        }
        iVar13 = uVar1 + iVar13;
      } while (uVar18 != 0);
LAB_02c38600:
      if (iVar13 != 0) {
        iVar13 = iVar13 + -1;
        puVar21[-1] = 0;
      }
    }
LAB_02c38614:
    *(short *)(lVar9 + 0x7a) = (short)iVar13;
    lVar15 = *(long *)(param_1 + 0x98);
  }
LAB_02c38620:
  *(undefined2 *)(lVar15 + (ulong)param_2 * 0x18 + 0x10) = 0;
  lVar9 = *(long *)(param_1 + 0x98) + (ulong)param_2 * 0x18;
  *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  return;
}


