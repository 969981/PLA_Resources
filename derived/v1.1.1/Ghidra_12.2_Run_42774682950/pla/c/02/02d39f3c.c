/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d39f3c; name: FUN_02d39f3c
 */


void FUN_02d39f3c(long param_1)

{
  int *piVar1;
  ThreadType *pTVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *local_110;
  undefined8 local_108;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long *plStack_e0;
  long *local_d8;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  plVar18 = *(long **)(param_1 + 0x140);
  plVar16 = *(long **)(param_1 + 0x148);
  if (plVar18 != plVar16) {
    plVar17 = (long *)*plVar18;
    do {
      if (plVar17 != (long *)0x0) {
        lVar13 = plVar17[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar6 = (int)plVar17[0xd];
        if (iVar6 == 2) {
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          FUN_008802f0(&local_100,param_1 + 0x58);
          local_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          FUN_02d3abac(&local_80,&local_100);
          pcVar11 = local_100;
          if (local_100 != (code *)0x0) {
            pcVar12 = local_100 + 8;
            do {
              iVar6 = *(int *)pcVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
              if (bVar4) {
                *(int *)pcVar12 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(long *)(local_100 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_70[0] = *(long *)pcVar11;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
          puVar8 = local_80;
          if (local_80 == (undefined8 *)0x0) {
            plVar15 = (long *)0x0;
          }
          else {
            if (*(int *)((long)local_80 + 0xc) != 0) {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar6 = *(int *)((long)local_80 + 0xc);
              do {
                while( true ) {
                  puVar19 = (undefined8 *)puVar8[2];
                  if (((DAT_04408d10 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04408d10), iVar5 != 0)) {
                    DAT_04408d08 = FUN_013b21d0();
                    __cxa_guard_release(&DAT_04408d10);
                  }
                  while( true ) {
                    if (puVar19 == (undefined8 *)0x0) goto LAB_02d3a3b4;
                    if (puVar19 == &DAT_04408d08) break;
                    puVar19 = (undefined8 *)*puVar19;
                  }
                  iVar5 = *piVar1;
                  if (iVar5 != iVar6) break;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar6 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar13 = puVar8[3];
                    plVar15 = (long *)0x0;
                    if (lVar13 != 0) {
                      plVar15 = (long *)(lVar13 + -0x50);
                    }
                    goto LAB_02d3a3b8;
                  }
                  iVar6 = iVar5;
                  if (iVar5 == 0) goto LAB_02d3a3b4;
                }
                ClearExclusiveLocal();
                iVar6 = iVar5;
              } while (iVar5 != 0);
            }
LAB_02d3a3b4:
            plVar15 = (long *)0x0;
LAB_02d3a3b8:
            puVar8 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 + -1 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_100 = (code *)*puVar8;
                FUN_02a44274(lVar13 + 0xd8,&local_100);
              }
            }
          }
          plVar10 = (long *)FUN_013b2b18();
          lVar13 = *plVar10;
          *(long *)PTR_DAT_0437b480 = lVar13;
          puVar8 = (undefined8 *)plVar17[0xe];
          if (plVar15 != (long *)0x0) {
            lVar14 = plVar15[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar7;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar14 = plVar17[0xb];
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          nn::os::LockMutex((MutexType *)(lVar13 + 0x108));
          local_80 = puVar8;
          FUN_013b507c(&local_100,*(undefined8 *)(lVar13 + 8),&local_80);
          plVar10 = plVar15;
          if (local_100 == (code *)0x0) {
            pcVar11 = (code *)0x0;
          }
          else if (*(ulong *)(lVar13 + 0xf8) < *(ulong *)(lVar13 + 0x100)) {
            local_100[0x300] = (code)0x0;
            local_100[0x301] = (code)0x0;
            local_100[0x302] = (code)0x0;
            pTVar2 = (ThreadType *)(local_100 + 0x100);
            nn::os::CreateThread
                      (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,local_100,
                       *(void **)(local_100 + 0x2c0),*(ulong *)(local_100 + 0x2f8),0x10);
            nn::os::SetThreadCoreMask(pTVar2,-1,7);
            nn::os::SetThreadName(pTVar2,"RequestThread");
            nn::os::StartThread(pTVar2);
            pcVar11 = local_100;
            pcVar12 = *(code **)(local_100 + 0x418);
            if (pcVar12 != (code *)0x0) {
              *(long *)(local_100 + 0x420) = 0;
              *(long *)(local_100 + 0x428) = 0;
              *(long *)(local_100 + 0x410) = 0;
              *(long *)(local_100 + 0x418) = 0;
              (*pcVar12)(local_100 + 0x430);
            }
            *(long **)(pcVar11 + 0x430) = plVar15;
            *(long **)(pcVar11 + 0x438) = plVar17;
            lVar14 = plVar17[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar7;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            *(undefined1 **)(pcVar11 + 0x410) = &LAB_02d3b1a0;
            *(undefined1 **)(pcVar11 + 0x418) = &LAB_02d3b260;
            *(undefined1 **)(pcVar11 + 0x420) = &LAB_02d3b2f8;
            *(undefined1 **)(pcVar11 + 0x428) = &LAB_02d3b3c0;
            FUN_013b5640(lVar13 + 0xd0,&local_100);
            pcVar11 = local_100;
            if (local_100 == (code *)0x0) {
              plVar10 = (long *)0x0;
            }
            else {
              lVar14 = *(long *)(local_100 + 0x58);
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar7;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              plVar10 = (long *)0x0;
              if (local_100 != (code *)0x0) goto LAB_02d3a830;
            }
          }
          else {
            pcVar11 = (code *)0x0;
LAB_02d3a830:
            lVar14 = *(long *)(local_100 + 0x58);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*(long *)local_100 + 0x20))(local_100);
            }
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x108));
          if (pcVar11 != (code *)0x0) {
            lVar13 = *(long *)(pcVar11 + 0x58);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*(long *)pcVar11 + 0x20))(pcVar11);
            }
          }
          lVar13 = plVar17[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          if (plVar10 != (long *)0x0) {
            lVar13 = plVar10[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
          }
          if (plVar15 != (long *)0x0) {
            lVar13 = plVar15[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              pcVar11 = *(code **)(*plVar15 + 0x20);
LAB_02d3a034:
              (*pcVar11)(plVar15);
            }
          }
        }
        else if (iVar6 == 1) {
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          FUN_008802f0(&local_100,param_1 + 0x58);
          local_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          FUN_02d3abac(&local_80,&local_100);
          pcVar11 = local_100;
          if (local_100 != (code *)0x0) {
            pcVar12 = local_100 + 8;
            do {
              iVar6 = *(int *)pcVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
              if (bVar4) {
                *(int *)pcVar12 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(long *)(local_100 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_70[0] = *(long *)pcVar11;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
          puVar8 = local_80;
          plVar15 = (long *)0x0;
          if (local_80 != (undefined8 *)0x0) {
            if (*(int *)((long)local_80 + 0xc) != 0) {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar6 = *(int *)((long)local_80 + 0xc);
              do {
                while( true ) {
                  puVar19 = (undefined8 *)puVar8[2];
                  if (((DAT_04408d10 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04408d10), iVar5 != 0)) {
                    DAT_04408d08 = FUN_013b21d0();
                    __cxa_guard_release(&DAT_04408d10);
                  }
                  while( true ) {
                    if (puVar19 == (undefined8 *)0x0) goto LAB_02d3a15c;
                    if (puVar19 == &DAT_04408d08) break;
                    puVar19 = (undefined8 *)*puVar19;
                  }
                  iVar5 = *piVar1;
                  if (iVar5 != iVar6) break;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar6 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar13 = puVar8[3];
                    plVar15 = (long *)0x0;
                    if (lVar13 != 0) {
                      plVar15 = (long *)(lVar13 + -0x50);
                    }
                    goto LAB_02d3a160;
                  }
                  iVar6 = iVar5;
                  if (iVar5 == 0) goto LAB_02d3a15c;
                }
                ClearExclusiveLocal();
                iVar6 = iVar5;
              } while (iVar5 != 0);
            }
LAB_02d3a15c:
            plVar15 = (long *)0x0;
LAB_02d3a160:
            puVar8 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 + -1 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_100 = (code *)*puVar8;
                FUN_02a44274(lVar13 + 0xd8,&local_100);
              }
            }
          }
          puVar8 = (undefined8 *)FUN_013b2b18();
          uVar7 = *puVar8;
          *(undefined8 *)PTR_DAT_0437b480 = uVar7;
          if (plVar15 == (long *)0x0) {
            lVar13 = plVar17[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar9;
            }
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_e8 = (undefined1 *)0x0;
            plStack_e0 = (long *)0x0;
            local_100 = (code *)0x0;
            local_f8 = (code *)0x0;
            local_f0 = (undefined1 *)0x0;
          }
          else {
            lVar13 = plVar15[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar9;
            }
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar13 = plVar17[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar9;
            }
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_e8 = (undefined1 *)0x0;
            local_100 = (code *)0x0;
            local_f8 = (code *)0x0;
            local_f0 = (undefined1 *)0x0;
            lVar13 = plVar15[0xb];
            plStack_e0 = plVar15;
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d3ab94;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar9;
            }
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar13 = plVar17[0xb];
          local_d8 = plVar17;
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02d3ab94:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar9;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          local_f8 = FUN_02d3af78;
          local_110 = (undefined8 *)0x0;
          local_108 = 0;
          local_100 = FUN_02d3aeac;
          local_e8 = &LAB_02d3b0d8;
          local_f0 = &LAB_02d3b010;
          FUN_013b385c(uVar7,&local_100,&local_110);
          puVar8 = local_110;
          if (local_110 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_110 + 1);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              local_110[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_80 = (undefined8 *)*puVar8;
              FUN_02a44274(lVar13 + 0xd8,&local_80);
            }
          }
          pcVar11 = local_f8;
          if (local_f8 != (code *)0x0) {
            local_f0 = (undefined1 *)0x0;
            local_e8 = (undefined1 *)0x0;
            local_100 = (code *)0x0;
            local_f8 = (code *)0x0;
            (*pcVar11)(&plStack_e0);
          }
          lVar13 = plVar17[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          if (plVar15 != (long *)0x0) {
            lVar13 = plVar15[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            lVar13 = plVar15[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              pcVar11 = *(code **)(*plVar15 + 0x20);
              goto LAB_02d3a034;
            }
          }
        }
        else if (iVar6 == 0) {
          nn::os::LockMutex((MutexType *)(param_1 + 0x1b8));
          cVar3 = *(char *)(param_1 + 400);
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b8));
          if ((cVar3 == '\0') && (iVar6 = *(int *)(param_1 + 0x70), iVar6 != 3)) {
            if (iVar6 == 2) {
              if ((code *)plVar17[0x20] != (code *)0x0) {
                (*(code *)plVar17[0x20])(plVar17 + 0x24,param_1 + 0x130);
              }
            }
            else if (((iVar6 == 1) && (*(char *)(param_1 + 0x110) != '\0')) &&
                    ((code *)plVar17[0x10] != (code *)0x0)) {
              (*(code *)plVar17[0x10])(plVar17 + 0x14,param_1 + 0x118);
            }
          }
          else {
            pcVar11 = (code *)plVar17[0x30];
            if (pcVar11 != (code *)0x0) {
              plVar15 = plVar17 + 0x34;
              goto LAB_02d3a034;
            }
          }
        }
        lVar13 = plVar17[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      plVar18 = plVar18 + 1;
      if (plVar18 == plVar16) goto LAB_02d3ab28;
      plVar17 = (long *)*plVar18;
    } while( true );
  }
  goto LAB_02d3ab70;
LAB_02d3ab28:
  plVar18 = *(long **)(param_1 + 0x140);
  plVar16 = *(long **)(param_1 + 0x148);
LAB_02d3ab2c:
  if (plVar16 != plVar18) {
    while( true ) {
      plVar16 = plVar16 + -1;
      plVar17 = (long *)*plVar16;
      if (plVar17 == (long *)0x0) break;
      lVar13 = plVar17[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 != 0) break;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
      if (plVar16 == plVar18) goto LAB_02d3ab70;
    }
    goto LAB_02d3ab2c;
  }
LAB_02d3ab70:
  *(long **)(param_1 + 0x148) = plVar18;
  return;
}


