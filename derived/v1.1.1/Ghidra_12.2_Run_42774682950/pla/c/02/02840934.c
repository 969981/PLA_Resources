/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02840934; name: FUN_02840934
 */


void FUN_02840934(undefined8 param_1,undefined8 *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  short sVar10;
  ushort uVar11;
  long lVar12;
  undefined1 *puVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  ushort *puVar17;
  int *piVar18;
  code *pcVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  long local_120;
  undefined1 *local_118;
  char *pcStack_110;
  size_t local_108;
  undefined8 uStack_100;
  long *local_f8;
  int *local_f0 [15];
  long *local_78;
  undefined1 local_70 [16];
  
  FUN_02841748(local_f0,*(long *)(param_3 + 8) + 0x270);
  if ((10 < *(ushort *)((long)local_f0[0] - (long)*local_f0[0])) &&
     (uVar16 = (ulong)((ushort *)((long)local_f0[0] - (long)*local_f0[0]))[5], uVar16 != 0)) {
    uVar20 = (ulong)*(uint *)((long)local_f0[0] + uVar16);
    puVar2 = (uint *)((long)((long)local_f0[0] + uVar16) + uVar20);
    if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
      lVar12 = uVar20 + uVar16;
      lVar25 = (long)local_f0[0] + lVar12 + 0x14;
      local_120 = (long)local_f0[0] + lVar12 + 0x10;
      puVar26 = puVar2 + 1;
      do {
        puVar13 = &DAT_cbf29ce484222645;
        piVar18 = (int *)((long)puVar26 + (ulong)*puVar26);
        uVar24 = *param_2;
        if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar16 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar15 = (uint *)((long)piVar18 + uVar16);
          lVar12 = (long)puVar15 + (ulong)*puVar15;
        }
        local_108 = strlen((char *)(lVar12 + 4));
        bVar6 = *(byte *)(lVar12 + 4);
        if (bVar6 != 0) {
          pbVar21 = (byte *)(lVar12 + 5);
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar6 != 0);
        }
        uStack_100 = 0;
        local_118 = puVar13;
        pcStack_110 = (char *)(lVar12 + 4);
        FUN_0283c824(&local_f8,uVar24,&local_118);
        plVar9 = local_f8;
        uVar5 = *puVar26;
        piVar18 = (int *)((long)puVar26 + (ulong)uVar5);
        puVar17 = (ushort *)((long)piVar18 - (long)*piVar18);
        if (*puVar17 < 9) {
          if (6 < *puVar17) goto LAB_02840de4;
LAB_02840e40:
          lVar12 = 0;
LAB_02840df8:
          lVar22 = local_f8[0x11];
          puVar13 = (undefined1 *)(lVar12 + 4);
          pcVar19 = (code *)local_f8[0xac];
          if (pcVar19 == (code *)0x0) {
LAB_02840e08:
            lVar12 = (**(code **)(**(long **)(lVar22 + 0x18) + 0x78))
                               (*(long **)(lVar22 + 0x18),puVar13,1);
          }
          else {
LAB_02840b64:
            local_118 = puVar13;
            (*pcVar19)(&local_78,plVar9 + 0xb0,&local_118,local_70);
            if (local_78 == (long *)0x0) {
              plVar14 = (long *)PTR_PTR_04379d00;
            }
            else {
              plVar14 = local_78 + 0xc;
            }
            lVar12 = (**(code **)(**(long **)(lVar22 + 0x18) + 0x78))
                               (*(long **)(lVar22 + 0x18),*plVar14,1);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
          }
        }
        else {
          uVar16 = (ulong)puVar17[4];
          if (uVar16 == 0) {
LAB_02840de4:
            if ((ulong)puVar17[3] == 0) goto LAB_02840e40;
            puVar15 = (uint *)((long)piVar18 + (ulong)puVar17[3]);
            lVar12 = (long)puVar15 + (ulong)*puVar15;
            goto LAB_02840df8;
          }
          puVar15 = (uint *)((long)piVar18 + uVar16);
          uVar20 = (ulong)*puVar15;
          if (((int *)((long)puVar15 + uVar20) == (int *)0x0) ||
             (*(int *)((long)puVar15 + uVar20) == 0)) goto LAB_02840de4;
          puVar27 = (uint *)((long)puVar15 + uVar20 + 4);
          puVar1 = (uint *)((long)puVar15 + uVar20 + 8);
          lVar12 = FUN_02c438f4(local_f8,(long)puVar1 + (ulong)*puVar27);
          piVar18 = (int *)((long)puVar26 + (ulong)*puVar26);
          puVar17 = (ushort *)((long)piVar18 - (long)*piVar18);
          puVar3 = (uint *)((long)((long)piVar18 + (ulong)puVar17[4]) +
                           (ulong)*(uint *)((long)piVar18 + (ulong)puVar17[4]));
          if (puVar27 != puVar3 + *puVar3) {
            lVar12 = FUN_02c43ca4(plVar9,lVar12,
                                  (long)puVar27 + (ulong)*(uint *)((long)puVar15 + uVar20 + 8) + 8);
            piVar18 = (int *)((long)puVar26 + (ulong)*puVar26);
            puVar17 = (ushort *)((long)piVar18 - (long)*piVar18);
            puVar15 = (uint *)((long)((long)piVar18 + (ulong)puVar17[4]) +
                              (ulong)*(uint *)((long)piVar18 + (ulong)puVar17[4]));
            if (puVar1 != puVar15 + *puVar15) {
              lVar22 = uVar16 + uVar5;
              lVar23 = lVar25 + lVar22;
              lVar22 = local_120 + lVar22;
              do {
                lVar12 = FUN_02c43ca4(plVar9,lVar12,
                                      lVar23 + uVar20 + (ulong)*(uint *)(lVar22 + uVar20));
                piVar18 = (int *)((long)puVar26 + (ulong)*puVar26);
                puVar17 = (ushort *)((long)piVar18 - (long)*piVar18);
                puVar15 = (uint *)((long)((long)piVar18 + (ulong)puVar17[4]) +
                                  (ulong)*(uint *)((long)piVar18 + (ulong)puVar17[4]));
                lVar22 = lVar22 + 4;
                lVar23 = lVar23 + 4;
              } while ((uint *)(lVar22 + uVar20) != puVar15 + (ulong)*puVar15 + 1);
            }
          }
          if (lVar12 != 0) {
            if ((*puVar17 < 7) || ((ulong)puVar17[3] == 0)) {
              lVar22 = 0;
            }
            else {
              puVar15 = (uint *)((long)piVar18 + (ulong)puVar17[3]);
              lVar22 = (long)puVar15 + (ulong)*puVar15;
            }
            puVar13 = (undefined1 *)(lVar22 + 4);
            lVar22 = *(long *)(lVar12 + 0xe8);
            pcVar19 = (code *)plVar9[0xac];
            if (pcVar19 == (code *)0x0) goto LAB_02840e08;
            goto LAB_02840b64;
          }
          lVar12 = 0;
        }
        piVar18 = (int *)((long)puVar26 + (ulong)*puVar26);
        uVar24 = *param_2;
        if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0xb) ||
           (uVar16 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[5], uVar16 == 0)) {
          lVar22 = 0;
        }
        else {
          puVar15 = (uint *)((long)piVar18 + uVar16);
          lVar22 = (long)puVar15 + (ulong)*puVar15;
        }
        local_108 = strlen((char *)(lVar22 + 4));
        bVar6 = *(byte *)(lVar22 + 4);
        local_118 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          local_118 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar22 + 5);
          do {
            local_118 = (undefined1 *)(((ulong)local_118 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar6 != 0);
        }
        uStack_100 = 0;
        pcStack_110 = (char *)(lVar22 + 4);
        FUN_0283c4dc(uVar24,&local_118,lVar12,plVar9);
        lVar22 = FUN_002443a8(lVar12);
        sVar10 = FUN_00244380(lVar12);
        if (sVar10 != 0) {
          uVar16 = 0;
          lVar23 = lVar22 + 1;
          do {
            puVar15 = (uint *)(lVar22 + uVar16 * 0xc);
            uVar5 = *puVar15;
            pbVar21 = (byte *)((long)puVar15 + (ulong)uVar5);
            if ((uVar5 != 0 && pbVar21 != (byte *)0x0) && (bVar6 = *pbVar21, bVar6 != 0)) {
              puVar13 = &DAT_cbf29ce484222645;
              pbVar21 = (byte *)(lVar23 + (ulong)uVar5);
              do {
                puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar21;
                pbVar21 = pbVar21 + 1;
              } while (bVar6 != 0);
              if ((puVar13 == (undefined1 *)0xe154416e8a908d17) &&
                 (*(int *)((long)puVar15 + (ulong)*(uint *)(lVar22 + uVar16 * 0xc + 4)) == 0)) {
                *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
              }
            }
            uVar16 = uVar16 + 1;
            uVar11 = FUN_00244380(lVar12);
            lVar23 = lVar23 + 0xc;
          } while (uVar16 < uVar11);
        }
        if (plVar9 != (long *)0x0) {
          lVar12 = plVar9[0xb];
          piVar18 = (int *)(lVar12 + 0xc);
          do {
            iVar4 = *piVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar9 + 0x20))(plVar9);
          }
        }
        puVar26 = puVar26 + 1;
        lVar25 = lVar25 + 4;
        local_120 = local_120 + 4;
      } while (puVar26 != puVar2 + 1 + *puVar2);
    }
  }
  FUN_02841940(local_f0);
  return;
}


