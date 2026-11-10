/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028403b8; name: FUN_028403b8
 */


/* WARNING: Removing unreachable block (ram,0x0284061c) */
/* WARNING: Removing unreachable block (ram,0x02840620) */
/* WARNING: Removing unreachable block (ram,0x02840628) */
/* WARNING: Removing unreachable block (ram,0x02840630) */
/* WARNING: Removing unreachable block (ram,0x028408cc) */
/* WARNING: Removing unreachable block (ram,0x02840634) */

void FUN_028403b8(long param_1,long *param_2,long param_3,undefined1 param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char *__s;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  long *local_120;
  int *local_118 [15];
  long *local_a0;
  char *local_98;
  size_t local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_02841748(local_118,*(long *)(param_3 + 8) + 0x270);
  if ((((6 < *(ushort *)((long)local_118[0] - (long)*local_118[0])) &&
       (uVar15 = (ulong)((ushort *)((long)local_118[0] - (long)*local_118[0]))[3], uVar15 != 0)) &&
      (puVar3 = (uint *)((long)local_118[0] + uVar15),
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3), puVar3 != (uint *)0x0)) && (*puVar3 != 0)) {
    puVar23 = puVar3 + 1;
    do {
      piVar4 = (int *)((long)puVar23 + (ulong)*puVar23);
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
         (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar15 == 0)) {
        lVar20 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar15);
        lVar20 = (long)puVar5 + (ulong)*puVar5;
      }
      bVar9 = *(byte *)(lVar20 + 4);
      puVar16 = &DAT_cbf29ce484222645;
      if (bVar9 != 0) {
        puVar16 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar20 + 5);
        do {
          puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar9 != 0);
      }
      puVar7 = *(undefined8 **)(*param_2 + 0x98);
      lVar20 = *(long *)(*param_2 + 0xa0);
      if ((lVar20 == 0) || ((undefined1 *)*puVar7 == puVar16)) {
        puVar18 = puVar7;
      }
      else {
        lVar21 = lVar20 * 0x30;
        puVar19 = puVar7;
        do {
          lVar21 = lVar21 + -0x30;
          if (lVar21 == 0) goto LAB_02840914;
          puVar18 = puVar19 + 6;
          puVar1 = puVar19 + 6;
          puVar19 = puVar18;
        } while ((undefined1 *)*puVar1 != puVar16);
      }
      if (puVar18 == puVar7 + lVar20 * 6) {
LAB_02840914:
        plVar22 = (long *)0x0;
      }
      else {
        plVar22 = (long *)puVar18[4];
        if (plVar22 != (long *)0x0) {
          plVar13 = plVar22 + 10;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar11) {
              *(int *)plVar13 = (int)*plVar13 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
      }
      plVar13 = (long *)FUN_00d25c98(&local_a0,*(undefined8 *)(param_1 + 8));
      if (plVar13 != (long *)0x0) {
        lVar20 = plVar13[0xb];
        if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0284091c;
        if (*(long *)(lVar20 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
          *(undefined8 *)(lVar20 + 0x10) = uVar14;
        }
        piVar4 = (int *)(lVar20 + 0xc);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar11) {
            *piVar4 = *piVar4 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (((8 < *(ushort *)((long)local_118[0] - (long)*local_118[0])) &&
          (uVar15 = (ulong)((ushort *)((long)local_118[0] - (long)*local_118[0]))[4], uVar15 != 0))
         && (puVar5 = (uint *)((long)local_118[0] + uVar15),
            puVar6 = (undefined4 *)((long)puVar5 + (ulong)*puVar5), puVar6 != (undefined4 *)0x0)) {
        if (plVar22 != (long *)0x0) {
          plVar2 = plVar22 + 10;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        uVar8 = *puVar6;
        piVar4 = (int *)((long)puVar23 + (ulong)*puVar23);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 == 0)) {
          lVar20 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar4 + uVar15);
          lVar20 = (long)puVar5 + (ulong)*puVar5;
        }
        local_90 = lVar20 + 4;
        local_78 = 0;
        uStack_70 = 0;
        if (plVar22 != (long *)0x0) {
          plVar2 = plVar22 + 10;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        local_98 = (char *)CONCAT44(local_98._4_4_,uVar8);
        local_88 = (long *)0x0;
        uStack_80 = 0;
        local_a0 = plVar22;
        FUN_02c4165c(plVar13,&local_a0);
        if (plVar22 != (long *)0x0) {
          plVar2 = plVar22 + 10;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = iVar12;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        if (plVar22 != (long *)0x0) {
          plVar2 = plVar22 + 10;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = iVar12;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        *(undefined1 *)((long)plVar13 + 0x3d1) = param_4;
        *(undefined1 *)((long)plVar13 + 0x3d2) = param_5;
        if (plVar13[0x7b] != 0) {
          *(uint *)(plVar13[0x7b] + 0x90) = (uint)CONCAT11(param_4,param_5);
        }
        lVar20 = *param_2;
        piVar4 = (int *)((long)puVar23 + (ulong)*puVar23);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
           (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar15 == 0)) {
          lVar21 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar4 + uVar15);
          lVar21 = (long)puVar5 + (ulong)*puVar5;
        }
        __s = (char *)(lVar21 + 4);
        local_90 = strlen(__s);
        bVar9 = *(byte *)(lVar21 + 4);
        local_a0 = (long *)&DAT_cbf29ce484222645;
        if (bVar9 != 0) {
          local_a0 = (long *)&DAT_cbf29ce484222645;
          pbVar17 = (byte *)(lVar21 + 5);
          do {
            local_a0 = (long *)(((ulong)local_a0 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar9 != 0);
        }
        local_88 = (long *)0x0;
        local_120 = plVar13;
        local_98 = __s;
        if (plVar13 != (long *)0x0) {
          lVar21 = plVar13[0xb];
          if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_0284091c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar21 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
            *(undefined8 *)(lVar21 + 0x10) = uVar14;
          }
          piVar4 = (int *)(lVar21 + 0xc);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar11) {
              *piVar4 = *piVar4 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        FUN_0283c120(lVar20,&local_a0,&local_120);
        if (local_120 != (long *)0x0) {
          lVar20 = local_120[0xb];
          piVar4 = (int *)(lVar20 + 0xc);
          do {
            iVar12 = *piVar4;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar11) {
              *piVar4 = iVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_120 + 0x20))();
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (plVar13 != (long *)0x0) {
        lVar20 = plVar13[0xb];
        piVar4 = (int *)(lVar20 + 0xc);
        do {
          iVar12 = *piVar4;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar11) {
            *piVar4 = iVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      if (plVar22 != (long *)0x0) {
        plVar13 = plVar22 + 10;
        do {
          iVar12 = (int)*plVar13 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *(int *)plVar13 = iVar12;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar3 + 1 + *puVar3);
  }
  FUN_02841940(local_118);
  return;
}


