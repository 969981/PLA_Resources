/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5728c; name: FUN_01a5728c
 */


void FUN_01a5728c(long param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  code *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  char *local_100;
  byte *pbStack_f8;
  char local_9c [4];
  long *local_98;
  byte local_8c [4];
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70 [2];
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  local_8c[0] = param_2 & 1;
  lVar16 = *(long *)(param_1 + 0x8a8);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar9 = *(int *)(lVar16 + 0xc);
    do {
      plVar20 = *(long **)(lVar16 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar10 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) {
          return;
        }
        if (plVar20 == (long *)puVar6) break;
        plVar20 = (long *)*plVar20;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar20 = (long *)(lVar16 + -0x50);
          FUN_00a9ecd4(&local_120,plVar20);
          FUN_009983e4(&local_98,&local_120);
          pcVar14 = local_120;
          if (local_120 != (code *)0x0) {
            pcVar2 = local_120 + 8;
            do {
              iVar9 = *(int *)pcVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar4) {
                *(int *)pcVar2 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(local_120 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_88 = *(undefined8 **)pcVar14;
              FUN_02a44274(lVar13 + 0xd8,&local_88);
            }
          }
          if (local_98 == (long *)0x0) goto LAB_01a577d8;
          local_100 = local_9c;
          pbStack_f8 = local_8c;
          local_9c[0] = '\0';
          pcVar14 = FUN_01a69ef0;
          local_120 = FUN_01a69e48;
          local_118 = FUN_01a69ef0;
          local_110 = &LAB_01a69ef4;
          puStack_108 = &LAB_01a69f00;
          puVar17 = (undefined8 *)local_98[0x4a];
          puVar19 = (undefined8 *)local_98[0x4b];
          if (puVar17 == puVar19) {
LAB_01a57490:
            local_110 = (undefined1 *)0x0;
            puStack_108 = (undefined1 *)0x0;
            local_120 = (code *)0x0;
            local_118 = (code *)0x0;
            (*pcVar14)(&local_100);
          }
          else {
            local_88 = (undefined8 *)*puVar17;
            FUN_01a69e48(&local_100,&local_88);
            pcVar14 = local_118;
            while (puVar17 = puVar17 + 1, local_118 = pcVar14, puVar17 != puVar19) {
              local_88 = (undefined8 *)*puVar17;
              (*local_120)(&local_100,&local_88);
              pcVar14 = local_118;
            }
            if (pcVar14 != (code *)0x0) goto LAB_01a57490;
          }
          bVar7 = local_8c[0];
          if ((local_9c[0] != '\0') && (lVar13 = *(long *)(param_1 + 0x948), lVar13 != 0)) {
            lVar11 = nn::os::GetCurrentThread();
            plVar21 = (long *)(lVar13 + 0xf8);
            do {
              if (*plVar21 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xec));
                  while (*plVar21 == 0) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar4) {
                      *plVar21 = lVar11;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_01a57500;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar4) {
                *plVar21 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_01a57500:
            puVar5 = PTR_DAT_043794a0;
            plVar21 = *(long **)(lVar13 + 0xb0);
            if (plVar21 != (long *)0x0) {
              lVar11 = tpidr_el0;
              do {
                local_88 = (undefined8 *)0x0;
                uStack_80 = 0;
                FUN_008802f0(&local_88,plVar21 + 3);
                local_78 = (long *)plVar21[5];
                if ((local_88 == (undefined8 *)0x0) || (*(int *)((long)local_88 + 0xc) == 0)) {
                  plVar18 = (long *)*plVar21;
                  FUN_01a69f0c(&local_120,lVar13 + 0x80,plVar21);
                  pcVar14 = local_120;
                  local_120 = (code *)0x0;
                  plVar21 = plVar18;
                  puVar17 = local_88;
                  if (pcVar14 != (code *)0x0) {
                    if (((char)local_110 != '\0') &&
                       (puVar17 = *(undefined8 **)(pcVar14 + 0x18), puVar17 != (undefined8 *)0x0)) {
                      piVar1 = (int *)(puVar17 + 1);
                      do {
                        iVar9 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar9 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar9 + -1 == 0) {
                        puVar17[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar15 = *(long *)puVar5;
                        *(long *)PTR_DAT_043794a8 = lVar15;
                        local_70[0] = *puVar17;
                        FUN_02a44274(lVar15 + 0xd8,local_70);
                      }
                    }
                    plVar18 = *(long **)local_118;
                    uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar12 & 1) != 0) {
                      if (*(char *)(lVar11 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar11 + 0x38d488) = 1;
                        *(undefined8 *)(lVar11 + 0x38d478) = 0;
                        *(undefined8 *)(lVar11 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar11 + 0x38d480)) {
                        FUN_02bcc824(plVar18,pcVar14,0x30,8);
                        puVar17 = local_88;
                        goto joined_r0x01a57698;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,pcVar14,0x30,8);
                    puVar17 = local_88;
                  }
                }
                else {
                  (**(code **)(*local_78 + 0x30))(local_78,bVar7 != 0);
                  plVar21 = (long *)*plVar21;
                  puVar17 = local_88;
                }
joined_r0x01a57698:
                local_88 = puVar17;
                if (puVar17 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar17 + 1);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    puVar17[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)puVar5;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_120 = (code *)*puVar17;
                    FUN_02a44274(lVar15 + 0xd8,&local_120);
                  }
                }
              } while (plVar21 != (long *)0x0);
            }
            *(undefined8 *)(lVar13 + 0xf8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xec));
          }
          if (local_98 != (long *)0x0) {
            lVar13 = local_98[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_98 + 0x20))();
            }
          }
LAB_01a577d8:
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


