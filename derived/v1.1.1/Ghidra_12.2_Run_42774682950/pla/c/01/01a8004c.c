/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8004c; name: FUN_01a8004c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a8004c(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 local_110;
  undefined8 *local_100 [2];
  undefined8 *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  long *local_c8;
  int local_bc;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  long *local_70 [2];
  
  plVar20 = (long *)(param_1 + 0x1f0);
  FUN_017ef808(plVar20,*(undefined8 *)(param_1 + 8));
  plVar19 = (long *)(param_1 + 0x200);
  FUN_01810710(plVar19,*(undefined8 *)(param_1 + 8));
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_01a2bf84(&local_b8,param_1 + 0x5c8);
  FUN_009c685c(&local_90,&local_b8);
  plVar3 = local_b8;
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 == 0) {
      local_b8[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)puVar9;
      *(long *)puVar10 = lVar17;
      local_f0 = (undefined8 *)*plVar3;
      FUN_02a44274(lVar17 + 0xd8,&local_f0);
    }
  }
  puVar11 = PTR_LAB_04379590;
  if (local_90 != (long *)0x0) {
    local_78 = (undefined8 *)((ulong)local_78 & 0xffffffff00000000);
    do {
      FUN_01a5c2f8(&local_f0,local_90,&local_78);
      if (local_f0 == (undefined8 *)0x0) {
        local_70[0] = (long *)0x0;
      }
      else {
        FUN_017f14fc(local_70);
        puVar7 = local_f0;
        if (local_f0 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_f0 + 1);
          do {
            iVar14 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            local_f0[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar17 = *(long *)puVar9;
            *(long *)puVar10 = lVar17;
            local_88 = (undefined8 *)*puVar7;
            FUN_02a44274(lVar17 + 0xd8,&local_88);
          }
        }
        if (local_70[0] != (long *)0x0) {
          (**(code **)(*local_70[0] + 0x10))(&local_f0);
          local_a0 = (undefined8 *)0x0;
          local_98 = 0;
          do {
            uVar16 = local_e8;
            local_110 = local_e8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(&local_e8,0x10);
            if (bVar5) {
              local_e8 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          uVar15 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar10 = uVar15;
          FUN_02a44e0c(&local_d8,uVar15,uVar16);
          puVar7 = local_f0;
          local_f0 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar7 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              puVar7[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          puVar7 = local_a0;
          local_a0 = (undefined8 *)0x0;
          if (local_d8 == (undefined8 *)0x0) {
            if (puVar7 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar7 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 == 1) {
                puVar7[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar17 = *(long *)puVar9;
                *(long *)puVar10 = lVar17;
                local_88 = (undefined8 *)*puVar7;
                FUN_02a44274(lVar17 + 0xd8,&local_88);
              }
            }
            local_110 = 0;
          }
          else {
            if (puVar7 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar7 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 + -1 == 0) {
                puVar7[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar17 = *(long *)puVar9;
                *(long *)puVar10 = lVar17;
                local_88 = (undefined8 *)*puVar7;
                FUN_02a44274(lVar17 + 0xd8,&local_88);
              }
            }
            local_a0 = local_d8;
            local_d8 = (undefined8 *)0x0;
          }
          puVar7 = local_d8;
          local_98 = local_110;
          if (local_d8 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_d8 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_d8[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          puVar7 = local_f0;
          if (local_f0 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_f0 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_f0[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          (**(code **)(*plVar20 + 0x20))(&local_f0,plVar20);
          local_b8 = (long *)0x0;
          uStack_b0 = 0;
          FUN_01800100(&local_b8,&local_f0);
          puVar7 = local_f0;
          if (local_f0 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_f0 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_f0[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          local_a8 = plVar20;
          FUN_017efa70(&local_a0,&local_b8);
          plVar3 = local_b8;
          if (local_b8 != (long *)0x0) {
            plVar1 = local_b8 + 1;
            do {
              iVar14 = (int)*plVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 == 0) {
              local_b8[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_f0 = (undefined8 *)*plVar3;
              FUN_02a44274(lVar17 + 0xd8,&local_f0);
            }
          }
          puVar7 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_a0 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_a0[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_f0 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_f0);
            }
          }
          if (local_70[0] != (long *)0x0) {
            lVar17 = local_70[0][0xb];
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_70[0] + 0x20))();
            }
          }
        }
      }
      puVar12 = PTR_LAB_04379590;
      iVar14 = (int)local_78 + 1;
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar14);
    } while (iVar14 < 8);
    local_bc = 0;
    do {
      FUN_01a5c4a8(&local_88,local_90,&local_bc);
      if (local_88 == (undefined8 *)0x0) {
        local_c8 = (long *)0x0;
      }
      else {
        FUN_018124e0(&local_c8);
        puVar7 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_88 + 1);
          do {
            iVar14 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            local_88[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar17 = *(long *)puVar9;
            *(long *)puVar10 = lVar17;
            local_70[0] = (long *)*puVar7;
            FUN_02a44274(lVar17 + 0xd8,local_70);
          }
        }
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x10))(&local_88);
          local_d8 = (undefined8 *)0x0;
          local_d0 = 0;
          do {
            local_110 = local_80;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(&local_80,0x10);
            if (bVar5) {
              local_80 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          uVar16 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar10 = uVar16;
          FUN_02a44e0c(&local_78,uVar16,local_110);
          puVar7 = local_88;
          local_88 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar7 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              puVar7[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_70[0] = (long *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          puVar7 = local_d8;
          local_d8 = (undefined8 *)0x0;
          if (local_78 == (undefined8 *)0x0) {
            if (puVar7 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar7 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 == 1) {
                puVar7[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar17 = *(long *)puVar9;
                *(long *)puVar10 = lVar17;
                local_70[0] = (long *)*puVar7;
                FUN_02a44274(lVar17 + 0xd8,local_70);
              }
            }
            local_110 = 0;
          }
          else {
            if (puVar7 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar7 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 + -1 == 0) {
                puVar7[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar17 = *(long *)puVar9;
                *(long *)puVar10 = lVar17;
                local_70[0] = (long *)*puVar7;
                FUN_02a44274(lVar17 + 0xd8,local_70);
              }
            }
            local_d8 = local_78;
            local_78 = (undefined8 *)0x0;
          }
          puVar7 = local_78;
          local_d0 = local_110;
          if (local_78 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_78 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_78[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_70[0] = (long *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          puVar7 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_88 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_88[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_70[0] = (long *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          (**(code **)(*plVar19 + 0x20))(&local_88,plVar19);
          local_f0 = (undefined8 *)0x0;
          local_e8 = 0;
          FUN_01800100(&local_f0,&local_88);
          puVar7 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_88 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_88[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_70[0] = (long *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          local_e0 = plVar19;
          FUN_01810970(&local_d8,&local_f0);
          puVar7 = local_f0;
          if (local_f0 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_f0 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_f0[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          puVar7 = local_d8;
          if (local_d8 != (undefined8 *)0x0) {
            piVar2 = (int *)(local_d8 + 1);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              local_d8[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar17 = *(long *)puVar9;
              *(long *)puVar10 = lVar17;
              local_88 = (undefined8 *)*puVar7;
              FUN_02a44274(lVar17 + 0xd8,&local_88);
            }
          }
          if (local_c8 != (long *)0x0) {
            lVar17 = local_c8[0xb];
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_c8 + 0x20))();
            }
          }
        }
      }
      local_bc = local_bc + 1;
    } while (local_bc < 3);
    if (local_90 != (long *)0x0) {
      lVar17 = local_90[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
        lVar17 = *(long *)(param_1 + 0x230);
        pbVar6 = PTR_DAT_0437a550;
        puVar7 = (undefined8 *)PTR_DAT_0437a558;
        goto joined_r0x01a80280;
      }
    }
  }
  lVar17 = *(long *)(param_1 + 0x230);
  pbVar6 = PTR_DAT_0437a550;
  puVar7 = (undefined8 *)PTR_DAT_0437a558;
joined_r0x01a80280:
  PTR_DAT_0437a550 = pbVar6;
  PTR_DAT_0437a558 = (undefined *)puVar7;
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar2 = (int *)(lVar17 + 0xc);
    iVar14 = *(int *)(lVar17 + 0xc);
    do {
      plVar20 = *(long **)(lVar17 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar6), iVar13 != 0)) {
        uVar16 = FUN_00aa0310();
        *puVar7 = uVar16;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_01a801e4;
        if (plVar20 == puVar7) break;
        plVar20 = (long *)*plVar20;
      }
      iVar13 = *piVar2;
      if (iVar13 == iVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar20 = (long *)(lVar17 + -0x50);
            if ((*(long *)(lVar17 + 0x1a0) != 0) && (*(int *)(*(long *)(lVar17 + 0x1a0) + 0xc) != 0)
               ) {
              plVar19 = *(long **)(param_1 + 0xaa8);
              FUN_00a9ecd4(local_100,plVar20);
              (**(code **)(*plVar19 + 0x40))(plVar19,local_100);
              if (local_100[0] != (undefined8 *)0x0) {
                piVar2 = (int *)(local_100[0] + 1);
                do {
                  iVar14 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  local_100[0][2] = 0;
                  if (((*puVar8 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)puVar9;
                  *(long *)puVar10 = lVar18;
                  local_b8 = (long *)*local_100[0];
                  FUN_02a44274(lVar18 + 0xd8,&local_b8);
                }
              }
            }
            (**(code **)(**(long **)(lVar17 + 0x1b0) + 0x18))(&local_b8);
            local_f0 = (undefined8 *)0x0;
            local_e8 = 0;
            FUN_01a78fc0(&local_f0,&local_b8);
            plVar19 = local_b8;
            if (local_b8 != (long *)0x0) {
              plVar3 = local_b8 + 1;
              do {
                iVar14 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar14;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 == 0) {
                local_b8[2] = 0;
                if (((*puVar8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)puVar9;
                *(long *)puVar10 = lVar18;
                local_a0 = (undefined8 *)*plVar19;
                FUN_02a44274(lVar18 + 0xd8,&local_a0);
              }
            }
            local_88 = (undefined8 *)0x0;
            local_80 = 0;
            FUN_01a792c0(&local_88,&local_f0);
            puVar7 = local_f0;
            if (local_f0 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_f0 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 + -1 == 0) {
                local_f0[2] = 0;
                if (((*puVar8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)puVar9;
                *(long *)puVar10 = lVar18;
                local_b8 = (long *)*puVar7;
                FUN_02a44274(lVar18 + 0xd8,&local_b8);
              }
            }
            if (local_88 != (undefined8 *)0x0) {
              FUN_01a795c0(&local_b8);
              puVar7 = local_88;
              plVar19 = local_b8;
              if (local_88 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_88 + 1);
                do {
                  iVar14 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  local_88[2] = 0;
                  if (((*puVar8 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)puVar9;
                  *(long *)puVar10 = lVar18;
                  local_b8 = (long *)*puVar7;
                  FUN_02a44274(lVar18 + 0xd8,&local_b8);
                }
              }
              if (plVar19 != (long *)0x0) {
                lVar18 = 0;
                if (*(long *)(param_1 + 0xaa8) != 0) {
                  lVar18 = *(long *)(param_1 + 0xaa8) + 0x68;
                }
                FUN_01a72b60(plVar19,lVar18);
                lVar18 = plVar19[0xb];
                piVar2 = (int *)(lVar18 + 0xc);
                do {
                  iVar14 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
            }
            (**(code **)(**(long **)(lVar17 + 0x1b8) + 0x18))(&local_b8);
            local_f0 = (undefined8 *)0x0;
            local_e8 = 0;
            FUN_01a78fc0(&local_f0,&local_b8);
            plVar19 = local_b8;
            if (local_b8 != (long *)0x0) {
              plVar3 = local_b8 + 1;
              do {
                iVar14 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar14;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 == 0) {
                local_b8[2] = 0;
                if (((*puVar8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)puVar9;
                *(long *)puVar10 = lVar18;
                local_a0 = (undefined8 *)*plVar19;
                FUN_02a44274(lVar18 + 0xd8,&local_a0);
              }
            }
            local_88 = (undefined8 *)0x0;
            local_80 = 0;
            FUN_01a792c0(&local_88,&local_f0);
            puVar7 = local_f0;
            if (local_f0 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_f0 + 1);
              do {
                iVar14 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar14 + -1 == 0) {
                local_f0[2] = 0;
                if (((*puVar8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)puVar9;
                *(long *)puVar10 = lVar18;
                local_b8 = (long *)*puVar7;
                FUN_02a44274(lVar18 + 0xd8,&local_b8);
              }
            }
            if (local_88 != (undefined8 *)0x0) {
              FUN_01a795c0(&local_b8);
              puVar7 = local_88;
              plVar19 = local_b8;
              if (local_88 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_88 + 1);
                do {
                  iVar14 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  local_88[2] = 0;
                  if (((*puVar8 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)puVar9;
                  *(long *)puVar10 = lVar18;
                  local_b8 = (long *)*puVar7;
                  FUN_02a44274(lVar18 + 0xd8,&local_b8);
                }
              }
              if (plVar19 != (long *)0x0) {
                lVar18 = 0;
                if (*(long *)(param_1 + 0xab0) != 0) {
                  lVar18 = *(long *)(param_1 + 0xab0) + 0x68;
                }
                FUN_01a72b60(plVar19,lVar18);
                lVar18 = plVar19[0xb];
                piVar2 = (int *)(lVar18 + 0xc);
                do {
                  iVar14 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
            }
            lVar17 = *(long *)(lVar17 + 8);
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01a801e4:
  FUN_009c69bc(&local_b8,param_1);
  lVar17 = local_b8[0x18];
  *(long *)(param_1 + 0x908) = local_b8[0x19];
  *(long *)(param_1 + 0x900) = lVar17;
  *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(param_1 + 0x900);
  *(undefined8 *)(param_1 + 0x8f8) = *(undefined8 *)(param_1 + 0x908);
  if (local_b8 != (long *)0x0) {
    lVar17 = local_b8[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0xb71) = 1;
  return;
}


