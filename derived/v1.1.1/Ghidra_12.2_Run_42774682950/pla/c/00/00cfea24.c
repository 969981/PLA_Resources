/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cfea24; name: FUN_00cfea24
 */


void FUN_00cfea24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long in_d3;
  long *local_5a8;
  undefined8 uStack_5a0;
  long *local_598;
  long *local_590 [2];
  long *local_580;
  long *local_340;
  long *local_328;
  undefined8 *local_310;
  undefined8 local_308;
  long local_300 [2];
  ulong *local_2f0;
  undefined8 local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2a0 [520];
  ulong local_98;
  long *local_90;
  long *local_88;
  undefined4 local_7c [3];
  long local_68;
  
  piVar17 = (int *)FUN_01e4b314(param_2,param_3);
  puVar12 = PTR_DAT_0437a258;
  puVar11 = PTR_DAT_0437a250;
  puVar10 = PTR_DAT_043795e0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if ((((piVar17 == (int *)0x0) || (*piVar17 != 0xb)) ||
      (lVar27 = *(long *)(piVar17 + 2), lVar27 == 0)) || (*(int *)(lVar27 + 0xc) == 0)) {
    return;
  }
  piVar17 = (int *)(lVar27 + 0xc);
  local_7c[0] = 0xb;
  iVar16 = *(int *)(lVar27 + 0xc);
LAB_00cfeadc:
  plVar26 = *(long **)(lVar27 + 0x10);
  if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)puVar9 = uVar18;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar10 = puVar9;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)puVar12 = puVar10;
    __cxa_guard_release(puVar11);
  }
  while( true ) {
    if (plVar26 == (long *)0x0) {
      return;
    }
    if (plVar26 == (long *)puVar12) break;
    plVar26 = (long *)*plVar26;
  }
  iVar15 = *piVar17;
  if (iVar15 == iVar16) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
    if (bVar6) {
      *piVar17 = iVar16 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      lVar27 = *(long *)(lVar27 + 0x18);
      plVar26 = (long *)(lVar27 + -0x50);
      if (lVar27 == 0) {
        return;
      }
      if (*(char *)(lVar27 + 0x1b0) != '\0') goto LAB_00cfeb38;
      FUN_009c69bc(&local_88,param_1);
      FUN_009c69bc(&local_90,plVar26);
      (**(code **)(*local_90 + 0x10))(local_590);
      local_2e8 = 0;
      local_2f0 = (ulong *)0x0;
      FUN_0087f944(&local_2f0,local_590);
      plVar25 = local_590[0];
      if (local_590[0] != (long *)0x0) {
        plVar1 = local_590[0] + 1;
        do {
          iVar16 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 == 0) {
          local_590[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_300[0] = *plVar25;
          FUN_02a44274(lVar19 + 0xd8,local_300);
        }
      }
      puVar14 = local_2f0;
      if (local_2f0 == (ulong *)0x0) {
        local_98 = 0;
      }
      else {
        puVar20 = local_2f0 + 1;
        local_98 = *local_2f0;
        do {
          iVar16 = (int)*puVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar20,0x10);
          if (bVar6) {
            *(int *)puVar20 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 == 0) {
          local_2f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_590[0] = (long *)*puVar14;
          FUN_02a44274(lVar19 + 0xd8,local_590);
        }
      }
      lVar19 = nn::os::GetCurrentThread();
      plVar25 = (long *)(param_1 + 0x200);
      do {
        if (*plVar25 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 500));
            while (*plVar25 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = lVar19;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00cfecbc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *plVar25 = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00cfecbc:
      uVar22 = *(ulong *)(param_1 + 0x290);
      if (uVar22 != 0) {
        uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar23 < 2) {
          uVar24 = uVar22 - 1 & local_98;
        }
        else {
          uVar24 = local_98;
          if (uVar22 <= local_98) {
            uVar24 = 0;
            if (uVar22 != 0) {
              uVar24 = local_98 / uVar22;
            }
            uVar24 = local_98 - uVar24 * uVar22;
          }
        }
        plVar25 = *(long **)(*(long *)(param_1 + 0x288) + uVar24 * 8);
        if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
        goto LAB_00cfecc8;
        if (1 < uVar23) {
          do {
            uVar23 = plVar25[1];
            if (uVar23 == local_98) {
              if (plVar25[2] == local_98) goto LAB_00cff0d4;
            }
            else {
              if (uVar22 <= uVar23) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar23 / uVar22;
                }
                uVar23 = uVar23 - uVar7 * uVar22;
              }
              if (uVar23 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
          goto LAB_00cfecc8;
        }
        while( true ) {
          if (plVar25[1] == local_98) {
            if (plVar25[2] != local_98) goto LAB_00cff284;
            goto LAB_00cff0d4;
          }
          if ((plVar25[1] & uVar22 - 1) != uVar24) break;
LAB_00cff284:
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) break;
        }
      }
LAB_00cfecc8:
      lVar19 = FUN_01838b8c(plVar26);
      if ((*(long *)(lVar19 + 0x10) != 0) &&
         (FUN_00d010b8(local_590), plVar25 = local_590[0], local_590[0] != (long *)0x0)) {
        local_2f0 = (ulong *)0x0;
        local_2d8 = 0;
        local_2e0 = (undefined8 *)0x0;
        memset(auStack_2a0,0,500);
        lVar19 = plVar25[0x42];
        uVar4 = *(undefined4 *)((long)plVar25 + 500);
        (**(code **)(*local_88 + 0x40))();
        local_300[0] = in_d3;
        (**(code **)(*local_90 + 0x18))(local_590);
        local_308 = 0;
        local_310 = (undefined8 *)0x0;
        FUN_0087f944(&local_310,local_590);
        plVar1 = local_590[0];
        if (local_590[0] != (long *)0x0) {
          plVar2 = local_590[0] + 1;
          do {
            iVar16 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_590[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar21 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar21;
            local_68 = *plVar1;
            FUN_02a44274(lVar21 + 0xd8,&local_68);
          }
        }
        uVar22 = FUN_00cfe78c((int)lVar19,param_1,&local_2f0,&local_98,local_7c,uVar4,local_300,
                              &local_310);
        puVar13 = local_310;
        if (local_310 != (undefined8 *)0x0) {
          piVar17 = (int *)(local_310 + 1);
          do {
            iVar16 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            local_310[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar19 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar19;
            local_590[0] = (long *)*puVar13;
            FUN_02a44274(lVar19 + 0xd8,local_590);
          }
        }
        plVar1 = local_90;
        if ((uVar22 & 1) != 0) {
          local_598 = local_90;
          if (local_90 != (long *)0x0) {
            lVar19 = local_90[0xb];
            if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar19 + 0x10) == 0) {
              uVar18 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
              *(undefined8 *)(lVar19 + 0x10) = uVar18;
            }
            piVar17 = (int *)(lVar19 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar6) {
                *piVar17 = *piVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar19 = FUN_01838b8c(plVar26);
          local_5a8 = (long *)0x0;
          uStack_5a0 = 0;
          FUN_00d00a64(&local_5a8,lVar19 + 0x10);
          FUN_00cff52c(local_590,&local_2f0,&local_598,&local_5a8);
          plVar2 = local_5a8;
          if (local_5a8 != (long *)0x0) {
            plVar3 = local_5a8 + 1;
            do {
              iVar16 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar16;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 == 0) {
              local_5a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_300[0] = *plVar2;
              FUN_02a44274(lVar19 + 0xd8,local_300);
            }
          }
          if (plVar1 != (long *)0x0) {
            lVar19 = plVar1[0xb];
            piVar17 = (int *)(lVar19 + 0xc);
            do {
              iVar16 = *piVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar6) {
                *piVar17 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar1 + 0x20))(plVar1);
            }
          }
          FUN_00d01a14((long *)(param_1 + 0x288),&local_98,local_590);
          if (local_328 != (long *)0x0) {
            plVar1 = local_328 + 1;
            do {
              iVar16 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar16;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 == 0) {
              local_328[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_300[0] = *local_328;
              FUN_02a44274(lVar19 + 0xd8,local_300);
            }
          }
          if (local_340 != (long *)0x0) {
            plVar1 = local_340 + 1;
            do {
              iVar16 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar16;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 == 0) {
              local_340[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_300[0] = *local_340;
              FUN_02a44274(lVar19 + 0xd8,local_300);
            }
          }
          if (local_580 != (long *)0x0) {
            plVar1 = local_580 + 1;
            do {
              iVar16 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar16;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 == 0) {
              local_580[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_300[0] = *local_580;
              FUN_02a44274(lVar19 + 0xd8,local_300);
            }
          }
        }
        puVar13 = local_2e0;
        if (local_2e0 != (undefined8 *)0x0) {
          piVar17 = (int *)(local_2e0 + 1);
          do {
            iVar16 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            local_2e0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar19 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar19;
            local_590[0] = (long *)*puVar13;
            FUN_02a44274(lVar19 + 0xd8,local_590);
          }
        }
        lVar19 = plVar25[0xb];
        piVar17 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar6) {
            *piVar17 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar25 + 0x20))(plVar25);
        }
      }
LAB_00cff0d4:
      *(undefined8 *)(param_1 + 0x200) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 500));
      if (local_90 != (long *)0x0) {
        lVar19 = local_90[0xb];
        piVar17 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar6) {
            *piVar17 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
      if (local_88 != (long *)0x0) {
        lVar19 = local_88[0xb];
        piVar17 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar6) {
            *piVar17 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
LAB_00cfeb38:
      lVar27 = *(long *)(lVar27 + 8);
      piVar17 = (int *)(lVar27 + 0xc);
      do {
        iVar16 = *piVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = iVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*plVar26 + 0x20))(plVar26);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar16 = iVar15;
  if (iVar15 == 0) {
    return;
  }
  goto LAB_00cfeadc;
}


