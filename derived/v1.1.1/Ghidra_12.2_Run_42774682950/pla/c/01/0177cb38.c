/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177cb38; name: FUN_0177cb38
 */


undefined8 FUN_0177cb38(long param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  uint *puVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 local_90;
  ulong uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar12 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    if ((lVar12 == 0) || (*(char *)(lVar12 + 0x1e1) == '\0')) {
      uVar7 = 0;
    }
    else {
      piVar1 = (int *)((long)*(uint **)(lVar12 + 0x250) + (ulong)**(uint **)(lVar12 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar14 == 0)) {
        puVar20 = (uint *)0x0;
      }
      else {
        puVar20 = (uint *)((long)piVar1 + uVar14);
        puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
      }
      fVar25 = (float)NEON_ucvtf(*puVar20);
      FUN_0177d610(param_1 + 0x78,(long)(fVar25 / *(float *)(param_1 + 0xd8)));
      if (*puVar20 != 0) {
        uVar14 = 0;
        puVar22 = puVar20 + 2;
        do {
          uVar23 = (ulong)puVar20[uVar14 + 1];
          piVar1 = (int *)((long)(puVar20 + uVar14 + 1) + uVar23);
          plVar8 = (long *)FUN_0177dad8(*(undefined8 *)(param_1 + 8));
          if (plVar8 != (long *)0x0) {
            plVar10 = plVar8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
             (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 == 0)) {
            lVar12 = 0;
          }
          else {
            puVar24 = (uint *)((long)piVar1 + uVar13);
            lVar12 = (long)puVar24 + (ulong)*puVar24;
          }
          sVar9 = strlen((char *)(lVar12 + 4));
          bVar2 = *(byte *)(lVar12 + 4);
          puVar17 = &DAT_cbf29ce484222645;
          if (bVar2 != 0) {
            puVar17 = &DAT_cbf29ce484222645;
            pbVar15 = (byte *)(lVar12 + 5);
            do {
              puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar2 != 0);
          }
          plVar8[0xd] = sVar9;
          plVar10 = (long *)plVar8[0xe];
          plVar8[0xe] = 0;
          plVar8[0xb] = (long)puVar17;
          plVar8[0xc] = lVar12 + 4;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
          plVar8[0xe] = 0;
          puVar24 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
          FUN_0177cf60(plVar8 + 0xf,*(undefined4 *)((long)puVar24 + (ulong)*puVar24));
          uVar13 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
          uVar16 = (ulong)*(uint *)((long)piVar1 + uVar13);
          if (*(int *)((long)((long)piVar1 + uVar13) + uVar16) != 0) {
            uVar21 = 0;
            puVar24 = puVar22;
            do {
              uVar27 = 0;
              local_7c = 1;
              lVar12 = uVar13 + uVar16 + (ulong)*(uint *)((long)puVar24 + uVar23 + uVar16 + uVar13);
              lVar18 = lVar12 + (ulong)*(ushort *)
                                        ((long)puVar24 +
                                        (lVar12 - *(int *)((long)puVar24 + uVar23 + lVar12)) +
                                        uVar23 + 4);
              uVar26 = 0;
              lVar18 = lVar18 + (ulong)*(uint *)((long)puVar24 + uVar23 + lVar18);
              lVar19 = lVar18 - *(int *)((long)puVar24 + uVar23 + lVar18);
              uVar3 = *(ushort *)((long)puVar24 + lVar19 + uVar23);
              uStack_88 = 0;
              if (4 < uVar3) {
                lVar19 = lVar19 + uVar23;
                uVar13 = (ulong)*(ushort *)((long)puVar24 + lVar19 + 4);
                uVar26 = 0;
                if (uVar13 != 0) {
                  uVar26 = *(undefined4 *)((long)puVar24 + uVar23 + lVar18 + uVar13);
                }
                if (uVar3 < 7) {
                  uVar27 = 0;
                }
                else {
                  uVar13 = (ulong)*(ushort *)((long)puVar24 + lVar19 + 6);
                  uVar27 = 0;
                  if (uVar13 != 0) {
                    uVar27 = *(undefined4 *)((long)puVar24 + uVar23 + lVar18 + uVar13);
                  }
                  if ((8 < uVar3) &&
                     (uVar13 = (ulong)*(ushort *)((long)puVar24 + lVar19 + 8), uVar13 != 0)) {
                    uStack_88 = (ulong)*(uint *)((long)puVar24 + uVar23 + lVar18 + uVar13);
                    goto LAB_0177ce34;
                  }
                }
                uStack_88 = 0;
              }
LAB_0177ce34:
              local_80 = 0;
              local_90 = CONCAT44(uVar27,uVar26);
              lVar18 = lVar12 - *(int *)((long)puVar24 + uVar23 + lVar12);
              if (6 < *(ushort *)((long)puVar24 + lVar18 + uVar23)) {
                uVar13 = (ulong)*(ushort *)((long)puVar24 + lVar18 + uVar23 + 6);
                local_80 = 0;
                if (uVar13 != 0) {
                  local_80 = *(undefined4 *)((long)puVar24 + uVar23 + lVar12 + uVar13);
                }
              }
              FUN_0177d018(plVar8 + 0xf,&local_90);
              uVar13 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
              uVar16 = (ulong)*(uint *)((long)piVar1 + uVar13);
              uVar21 = uVar21 + 1;
              puVar24 = puVar24 + 1;
            } while (uVar21 < *(uint *)((long)((long)piVar1 + uVar13) + uVar16));
          }
          plVar10 = (long *)FUN_0177d06c(param_1 + 0x78,plVar8 + 0xb);
          if (plVar8 != (long *)0x0) {
            plVar11 = plVar8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *(int *)plVar11 = (int)*plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar11 = (long *)*plVar10;
          *plVar10 = (long)plVar8;
          if (plVar11 != (long *)0x0) {
            plVar10 = plVar11 + 10;
            do {
              iVar6 = (int)*plVar10 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *(int *)plVar10 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          if (plVar8 != (long *)0x0) {
            plVar10 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar10 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *(int *)plVar10 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          uVar14 = uVar14 + 1;
          puVar22 = puVar22 + 1;
        } while (uVar14 < *puVar20);
      }
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0xe0) = 1;
    }
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


