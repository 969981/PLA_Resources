/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bb230; name: FUN_016bb230
 */


void FUN_016bb230(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_100 [24];
  long *local_e8;
  long *local_c8;
  long *local_a8;
  char local_93;
  long *local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_016603b0(auStack_100);
  FUN_016bbfb8(param_1);
  FUN_0165a7a0(local_78);
  puVar4 = local_78[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar10 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_016bb610;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_78[0];
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x016bb438;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_016bb610:
    plVar13 = (long *)0x0;
    puVar4 = local_78[0];
joined_r0x016bb438:
    local_78[0] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_0199c138(&local_80,plVar13);
      if (local_80 != (long *)0x0) {
        FUN_01aef8b8(local_78);
        if (local_78[0] == (undefined8 *)0x0) {
          local_88 = (long *)0x0;
        }
        else {
          FUN_016c3724(&local_88);
          puVar4 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78[0] + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              local_78[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *puVar4;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        }
        if ((local_88 != (long *)0x0) && (FUN_025d3910(), local_88 != (long *)0x0)) {
          lVar12 = local_88[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
        FUN_01aed8d0(local_78,local_80);
        if (local_78[0] == (undefined8 *)0x0) {
          local_88 = (long *)0x0;
        }
        else {
          FUN_0095dafc(&local_88);
          puVar4 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78[0] + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              local_78[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *puVar4;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        }
        if (local_88 != (long *)0x0) {
          FUN_01b053b4(local_88,2,1);
          FUN_01b053f8(local_88,0,1);
          if (local_88 != (long *)0x0) {
            lVar12 = local_88[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar12 = local_80[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  FUN_016bc3e8();
  if (*(char *)(param_1 + 3) == '\0') {
    cVar2 = *(char *)(param_1 + 2);
  }
  else {
    if ((local_93 != '\0') &&
       (FUN_0165a7a0(local_78), puVar4 = local_78[0], puVar8 = PTR_DAT_043796e8,
       puVar7 = PTR_DAT_043796e0, puVar6 = PTR_DAT_043794d8, puVar5 = PTR_DAT_043794d0,
       local_78[0] != (undefined8 *)0x0)) {
      if (*(int *)((long)local_78[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar10 = *(int *)((long)local_78[0] + 0xc);
        do {
          plVar13 = (long *)puVar4[2];
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_016bb97c;
            if (plVar13 == (long *)puVar8) break;
            plVar13 = (long *)*plVar13;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar10) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = puVar4[3];
              plVar13 = (long *)0x0;
              puVar4 = local_78[0];
              if (lVar12 != 0) {
                plVar13 = (long *)(lVar12 + -0x50);
              }
              goto joined_r0x016bb838;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar9;
        } while (iVar9 != 0);
      }
LAB_016bb97c:
      plVar13 = (long *)0x0;
      puVar4 = local_78[0];
joined_r0x016bb838:
      local_78[0] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *puVar4;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      if (plVar13 != (long *)0x0) {
        FUN_019a0430(local_78,plVar13);
        if (local_78[0] == (undefined8 *)0x0) {
          local_80 = (long *)0x0;
        }
        else {
          FUN_009591d8(&local_80);
          puVar4 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78[0] + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              local_78[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *puVar4;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          FUN_018ce4a4(local_80,6);
          (**(code **)(*(long *)local_80[0xd] + 0x40))((long *)local_80[0xd],0);
          if (local_80 != (long *)0x0) {
            lVar12 = local_80[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
        }
        FUN_019a034c(local_78,plVar13);
        puVar4 = local_78[0];
        puVar8 = PTR_DAT_04379c48;
        puVar7 = PTR_DAT_04379c40;
        puVar6 = PTR_DAT_043794d8;
        puVar5 = PTR_DAT_043794d0;
        if (local_78[0] != (undefined8 *)0x0) {
          if (*(int *)((long)local_78[0] + 0xc) != 0) {
            piVar1 = (int *)((long)local_78[0] + 0xc);
            iVar10 = *(int *)((long)local_78[0] + 0xc);
            do {
              plVar14 = (long *)puVar4[2];
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar11;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar8 = puVar6;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar14 == (long *)0x0) goto LAB_016bbc14;
                if (plVar14 == (long *)puVar8) break;
                plVar14 = (long *)*plVar14;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar12 = puVar4[3];
                  plVar14 = (long *)0x0;
                  puVar4 = local_78[0];
                  if (lVar12 != 0) {
                    plVar14 = (long *)(lVar12 + -0x50);
                  }
                  goto joined_r0x016bbb24;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = iVar9;
            } while (iVar9 != 0);
          }
LAB_016bbc14:
          plVar14 = (long *)0x0;
          puVar4 = local_78[0];
joined_r0x016bbb24:
          local_78[0] = puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar4 + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              puVar4[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *puVar4;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          if (plVar14 != (long *)0x0) {
            FUN_018d0e7c(plVar14,2);
            lVar12 = plVar14[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            *(undefined1 *)(plVar14 + 0xd) = 0;
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
        }
        lVar12 = plVar13[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
    }
    FUN_016bcda4(1);
    FUN_016baf10(1);
    FUN_016bd164(1);
    FUN_016bd91c(0);
    cVar2 = *(char *)(param_1 + 2);
  }
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 3) != '\0') {
      FUN_016be8f0(1);
      FUN_016bf038();
    }
  }
  else {
    FUN_016bdc34(1);
    FUN_016be37c();
  }
  FUN_0165a7a0(local_78);
  puVar4 = local_78[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar10 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_016bbd8c;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_78[0];
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x016bbcb0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_016bbd8c:
    plVar13 = (long *)0x0;
    puVar4 = local_78[0];
joined_r0x016bbcb0:
    local_78[0] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_0199cf64(local_78,plVar13);
      puVar4 = local_78[0];
      puVar8 = PTR_DAT_0437a110;
      puVar7 = PTR_DAT_0437a108;
      puVar6 = PTR_DAT_043794d8;
      puVar5 = PTR_DAT_043794d0;
      if (local_78[0] != (undefined8 *)0x0) {
        if (*(int *)((long)local_78[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_78[0] + 0xc);
          iVar10 = *(int *)((long)local_78[0] + 0xc);
          do {
            plVar14 = (long *)puVar4[2];
            if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar7 = puVar6;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_016bbf6c;
              if (plVar14 == (long *)puVar7) break;
              plVar14 = (long *)*plVar14;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar12 = puVar4[3];
                plVar14 = (long *)0x0;
                puVar4 = local_78[0];
                if (lVar12 != 0) {
                  plVar14 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x016bbe84;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_016bbf6c:
        plVar14 = (long *)0x0;
        puVar4 = local_78[0];
joined_r0x016bbe84:
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_68 = *puVar4;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
        if (plVar14 != (long *)0x0) {
          FUN_017e5a38(plVar14);
          lVar12 = plVar14[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      FUN_016bf5bc(1);
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  return;
}


