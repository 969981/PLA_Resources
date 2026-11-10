/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7d4b4; name: FUN_00d7d4b4
 */


void FUN_00d7d4b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  char *pcVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  float fVar22;
  long *local_70;
  undefined1 auStack_68 [8];
  
  plVar1 = (long *)(param_1 + 0x58);
  FUN_00d7db04(plVar1);
  puVar12 = *(uint **)(*(long *)(param_1 + 200) + 0x250);
  piVar17 = (int *)((long)puVar12 + (ulong)*puVar12);
  if (piVar17 != (int *)0x0) {
    puVar3 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (4 - (long)*piVar17)));
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    puVar12 = puVar3 + 1;
    uVar13 = (ulong)*puVar3;
    if (uVar13 != 0) {
      puVar3 = puVar12 + uVar13;
      plVar2 = (long *)(param_1 + 0x88);
      do {
        piVar17 = (int *)((long)puVar12 + (ulong)*puVar12);
        puVar4 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (6 - (long)*piVar17)));
        pcVar18 = (char *)((long)puVar4 + (ulong)*puVar4 + 4);
        if (*pcVar18 == '\0') {
          plVar11 = (long *)FUN_00938550();
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        else {
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar8 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar8;
          FUN_02a47cd8(&local_70,uVar8,pcVar18);
          plVar11 = local_70;
        }
        lVar19 = *(long *)(param_1 + 0x50);
        plVar9 = (long *)FUN_00d79d3c(auStack_68,lVar19);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)*plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9[0x11] = lVar19;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        plVar10 = (long *)plVar9[0x12];
        plVar9[0x12] = (long)plVar11;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        FUN_00d76c84(plVar9);
        FUN_00d76df8(plVar9);
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar13 == 0)) {
          piVar21 = (int *)0x0;
          piVar20 = *(int **)(param_1 + 0x60);
          if (piVar20 != (int *)0x0) goto LAB_00d7d624;
LAB_00d7d67c:
          plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                                      (*(long **)(param_1 + 0x90),0x20,8);
          if (plVar10 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
          }
          uVar8 = *(undefined8 *)(param_1 + 0x90);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar19 != 0) {
            if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar8;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          }
          plVar10[2] = (long)piVar21;
          plVar10[3] = (long)plVar9;
          if (plVar9 != (long *)0x0) {
            plVar14 = plVar9 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = (int)*plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (lVar19 != 0) {
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
          }
          *plVar10 = 0;
          plVar10[1] = (long)piVar21;
          fVar22 = (float)(*(long *)(param_1 + 0xb0) + 1);
          if ((piVar20 == (int *)0x0) || (*(float *)(param_1 + 0xb8) * (float)piVar20 < fVar22)) {
            uVar13 = (ulong)(piVar20 < (int *)0x3 || ((ulong)piVar20 & (long)piVar20 - 1U) != 0) |
                     (long)piVar20 << 1;
            uVar16 = (ulong)(fVar22 / *(float *)(param_1 + 0xb8));
            if (uVar16 <= uVar13) {
              uVar16 = uVar13;
            }
            FUN_00d7dd38(plVar1,uVar16);
            piVar20 = *(int **)(param_1 + 0x60);
            if (((ulong)piVar20 & (long)piVar20 - 1U) == 0) {
              piVar17 = (int *)((long)piVar20 - 1U & (ulong)piVar21);
            }
            else if (piVar21 < piVar20) {
              piVar17 = piVar21;
            }
            else {
              uVar13 = 0;
              if (piVar20 != (int *)0x0) {
                uVar13 = (ulong)piVar21 / (ulong)piVar20;
              }
              piVar17 = (int *)((long)piVar21 - uVar13 * (long)piVar20);
            }
          }
          plVar14 = *(long **)(*plVar1 + (long)piVar17 * 8);
          if (plVar14 == (long *)0x0) {
            *plVar10 = *plVar2;
            *plVar2 = (long)plVar10;
            *(long **)(*plVar1 + (long)piVar17 * 8) = plVar2;
            if (*plVar10 != 0) {
              piVar17 = *(int **)(*plVar10 + 8);
              if (((ulong)piVar20 & (long)piVar20 - 1U) == 0) {
                piVar17 = (int *)((ulong)piVar17 & (long)piVar20 - 1U);
              }
              else if (piVar20 <= piVar17) {
                uVar13 = 0;
                if (piVar20 != (int *)0x0) {
                  uVar13 = (ulong)piVar17 / (ulong)piVar20;
                }
                piVar17 = (int *)((long)piVar17 - uVar13 * (long)piVar20);
              }
              plVar14 = (long *)(*plVar1 + (long)piVar17 * 8);
              goto LAB_00d7d788;
            }
          }
          else {
            *plVar10 = *plVar14;
LAB_00d7d788:
            *plVar14 = (long)plVar10;
          }
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
        }
        else {
          piVar21 = *(int **)((long)piVar17 + uVar13);
          piVar20 = *(int **)(param_1 + 0x60);
          if (piVar20 == (int *)0x0) goto LAB_00d7d67c;
LAB_00d7d624:
          uVar13 = (long)piVar20 - ((ulong)piVar20 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            piVar17 = (int *)((long)piVar20 - 1U & (ulong)piVar21);
          }
          else {
            piVar17 = piVar21;
            if (piVar20 <= piVar21) {
              uVar16 = 0;
              if (piVar20 != (int *)0x0) {
                uVar16 = (ulong)piVar21 / (ulong)piVar20;
              }
              piVar17 = (int *)((long)piVar21 - uVar16 * (long)piVar20);
            }
          }
          plVar10 = *(long **)(*plVar1 + (long)piVar17 * 8);
          if (plVar10 == (long *)0x0) goto LAB_00d7d67c;
          if (uVar13 < 2) {
            do {
              plVar10 = (long *)*plVar10;
              if ((plVar10 == (long *)0x0) ||
                 ((int *)plVar10[1] != piVar21 &&
                  (int *)((ulong)plVar10[1] & (long)piVar20 - 1U) != piVar17)) goto LAB_00d7d67c;
            } while ((int *)plVar10[2] != piVar21);
          }
          else {
            do {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_00d7d67c;
              piVar15 = (int *)plVar10[1];
              if (piVar15 != piVar21) {
                if (piVar20 <= piVar15) {
                  uVar13 = 0;
                  if (piVar20 != (int *)0x0) {
                    uVar13 = (ulong)piVar15 / (ulong)piVar20;
                  }
                  piVar15 = (int *)((long)piVar15 - uVar13 * (long)piVar20);
                }
                if (piVar15 != piVar17) goto LAB_00d7d67c;
              }
            } while ((int *)plVar10[2] != piVar21);
          }
        }
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar10 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
  }
  return;
}


