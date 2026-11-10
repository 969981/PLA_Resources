/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02840ea4; name: FUN_02840ea4
 */


void FUN_02840ea4(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  ushort *puVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  uint *puVar26;
  long local_120;
  long *local_118;
  undefined4 local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  long *local_e8;
  int *local_e0 [16];
  
  FUN_02841748(local_e0,*(long *)(param_2 + 8) + 0x270);
  if ((8 < *(ushort *)((long)local_e0[0] - (long)*local_e0[0])) &&
     (uVar16 = (ulong)((ushort *)((long)local_e0[0] - (long)*local_e0[0]))[4], uVar16 != 0)) {
    uVar19 = (ulong)*(uint *)((long)local_e0[0] + uVar16);
    puVar2 = (uint *)((long)((long)local_e0[0] + uVar16) + uVar19);
    if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
      lVar11 = uVar19 + uVar16;
      lVar25 = (long)local_e0[0] + lVar11 + 0x14;
      local_120 = (long)local_e0[0] + lVar11 + 0x10;
      puVar24 = puVar2 + 1;
      do {
        puVar13 = &DAT_cbf29ce484222645;
        piVar14 = (int *)((long)puVar24 + (ulong)*puVar24);
        uVar22 = *param_1;
        if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar16 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar14 + uVar16);
          lVar11 = (long)puVar3 + (ulong)*puVar3;
        }
        local_f8 = strlen((char *)(lVar11 + 4));
        bVar7 = *(byte *)(lVar11 + 4);
        if (bVar7 != 0) {
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar7 != 0);
        }
        local_f0 = (long *)0x0;
        local_108 = puVar13;
        pcStack_100 = (char *)(lVar11 + 4);
        FUN_0283c824(&local_e8,uVar22,&local_108);
        plVar10 = local_e8;
        if (*(uint *)(local_e8 + 0x4f) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          pcVar17 = (char *)(local_e8[0x4b] + 8);
          do {
            if (*pcVar17 == '\0') break;
            uVar16 = uVar16 + 1;
            pcVar17 = pcVar17 + 0x48;
          } while (*(uint *)(local_e8 + 0x4f) != uVar16);
        }
        uVar6 = *puVar24;
        piVar14 = (int *)((long)puVar24 + (ulong)uVar6);
        puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
        if (*puVar18 < 7) {
LAB_02841354:
          lVar11 = 0;
LAB_02841320:
          FUN_02c43e50(local_e8,uVar16 & 0xffffffff,lVar11 + 4,0);
        }
        else {
          uVar19 = (ulong)puVar18[3];
          if (uVar19 == 0) {
LAB_02841304:
            if ((*puVar18 < 9) || ((ulong)puVar18[4] == 0)) goto LAB_02841354;
            puVar3 = (uint *)((long)piVar14 + (ulong)puVar18[4]);
            lVar11 = (long)puVar3 + (ulong)*puVar3;
            goto LAB_02841320;
          }
          puVar3 = (uint *)((long)piVar14 + uVar19);
          uVar23 = (ulong)*puVar3;
          if (((int *)((long)puVar3 + uVar23) == (int *)0x0) ||
             (*(int *)((long)puVar3 + uVar23) == 0)) goto LAB_02841304;
          puVar26 = (uint *)((long)puVar3 + uVar23 + 4);
          puVar1 = (uint *)((long)puVar3 + uVar23 + 8);
          lVar11 = FUN_02c438f4(local_e8,(long)puVar1 + (ulong)*puVar26);
          piVar14 = (int *)((long)puVar24 + (ulong)*puVar24);
          puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
          puVar4 = (uint *)((long)((long)piVar14 + (ulong)puVar18[3]) +
                           (ulong)*(uint *)((long)piVar14 + (ulong)puVar18[3]));
          if (puVar26 != puVar4 + *puVar4) {
            lVar11 = FUN_02c43ca4(plVar10,lVar11,
                                  (long)puVar26 + (ulong)*(uint *)((long)puVar3 + uVar23 + 8) + 8);
            piVar14 = (int *)((long)puVar24 + (ulong)*puVar24);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            puVar3 = (uint *)((long)((long)piVar14 + (ulong)puVar18[3]) +
                             (ulong)*(uint *)((long)piVar14 + (ulong)puVar18[3]));
            if (puVar1 != puVar3 + *puVar3) {
              lVar15 = uVar19 + uVar6;
              lVar21 = lVar25 + lVar15;
              lVar15 = local_120 + lVar15;
              do {
                lVar11 = FUN_02c43ca4(plVar10,lVar11,
                                      lVar21 + uVar23 + (ulong)*(uint *)(lVar15 + uVar23));
                piVar14 = (int *)((long)puVar24 + (ulong)*puVar24);
                puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
                puVar3 = (uint *)((long)((long)piVar14 + (ulong)puVar18[3]) +
                                 (ulong)*(uint *)((long)piVar14 + (ulong)puVar18[3]));
                lVar15 = lVar15 + 4;
                lVar21 = lVar21 + 4;
              } while ((uint *)(lVar15 + uVar23) != puVar3 + (ulong)*puVar3 + 1);
            }
          }
          if (lVar11 != 0) {
            if ((*puVar18 < 9) || ((ulong)puVar18[4] == 0)) {
              lVar15 = 0;
            }
            else {
              puVar3 = (uint *)((long)piVar14 + (ulong)puVar18[4]);
              lVar15 = (long)puVar3 + (ulong)*puVar3;
            }
            FUN_02c43f98(plVar10,lVar11,uVar16 & 0xffffffff,lVar15 + 4,0);
          }
        }
        puVar13 = &DAT_cbf29ce484222645;
        piVar14 = (int *)((long)puVar24 + (ulong)*puVar24);
        uVar22 = *param_1;
        if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xb) ||
           (uVar19 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5], uVar19 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar14 + uVar19);
          lVar11 = (long)puVar3 + (ulong)*puVar3;
        }
        pcVar17 = (char *)(lVar11 + 4);
        local_f8 = strlen(pcVar17);
        bVar7 = *(byte *)(lVar11 + 4);
        if (bVar7 != 0) {
          pbVar20 = (byte *)(lVar11 + 5);
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar7 != 0);
        }
        local_118 = plVar10;
        local_f0 = (long *)0x0;
        local_108 = puVar13;
        pcStack_100 = pcVar17;
        if (plVar10 == (long *)0x0) {
          local_110 = (int)uVar16;
          FUN_0283c368(uVar22,&local_108,&local_118);
        }
        else {
          lVar11 = plVar10[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar12;
          }
          plVar10 = local_118;
          piVar14 = (int *)(lVar11 + 0xc);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = *piVar14 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          local_110 = (int)uVar16;
          FUN_0283c368(uVar22,&local_108,&local_118);
          if (plVar10 != (long *)0x0) {
            lVar11 = plVar10[0xb];
            piVar14 = (int *)(lVar11 + 0xc);
            do {
              iVar5 = *piVar14;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar9) {
                *piVar14 = iVar5 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar5 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
          }
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (local_e8 != (long *)0x0) {
          lVar11 = local_e8[0xb];
          piVar14 = (int *)(lVar11 + 0xc);
          do {
            iVar5 = *piVar14;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = iVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_e8 + 0x20))();
          }
        }
        puVar24 = puVar24 + 1;
        lVar25 = lVar25 + 4;
        local_120 = local_120 + 4;
      } while (puVar24 != puVar2 + 1 + *puVar2);
    }
  }
  FUN_02841940(local_e0);
  return;
}


