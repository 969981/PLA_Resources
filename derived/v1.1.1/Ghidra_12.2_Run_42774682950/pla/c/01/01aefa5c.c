/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aefa5c; name: FUN_01aefa5c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01aefa5c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_68;
  
  if (*param_2 == 0) {
    local_78 = (long *)0x0;
LAB_01aeffa4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00959eac(&local_78);
  if (local_78 == (long *)0x0) goto LAB_01aeffa4;
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_01afe5cc(&local_88,param_1 + 0x5c8);
  if (local_88 != (long *)0x0) {
    FUN_009d0e68(&local_68);
    plVar20 = local_68;
    plVar24 = local_88;
    if (local_88 != (long *)0x0) {
      plVar23 = local_88 + 1;
      do {
        iVar11 = (int)*plVar23 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar3) {
          *(int *)plVar23 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = (long *)*plVar24;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar20 == (long *)0x0) goto LAB_01aefab8;
    uVar13 = FUN_01af1360(plVar20,*(undefined4 *)
                                   (&DAT_03a7c9ec + (long)*(int *)((long)local_78 + 0x59c) * 4));
    lVar14 = plVar20[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
      if ((uVar13 & 1) != 0) goto LAB_01aefbcc;
      goto LAB_01aefab8;
    }
    if ((uVar13 & 1) == 0) goto LAB_01aefab8;
LAB_01aefbcc:
    if (*(int *)((long)local_78 + 0x59c) == 3) {
      FUN_01aedab8(param_1);
      *(undefined1 *)(param_1 + 0x8e8) = 0;
    }
    FUN_00cf9db0(param_1 + 0x788,param_2);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00ac3fa4(&local_88,param_1 + 0x248);
    FUN_0099c748(&local_90,&local_88);
    plVar24 = local_88;
    if (local_88 != (long *)0x0) {
      plVar20 = local_88 + 1;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = (long *)*plVar24;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (local_90 == (long *)0x0) {
LAB_01aefef8:
      cVar2 = (char)param_2[2];
    }
    else {
      if ((code *)local_90[0x15c] != (code *)0x0) {
        local_88 = (long *)((ulong)local_88 & 0xffffffffffffff00);
        (*(code *)local_90[0x15c])(local_90 + 0x160,&local_88);
      }
      (**(code **)(*local_90 + 0xf8))(local_90,0);
      plVar24 = local_90;
      if (local_90[0xc5] == 0) {
        local_88 = (long *)0x0;
LAB_01aefcb4:
        *(undefined4 *)(plVar24 + 0x11c) = 0;
        *(undefined4 *)(plVar24 + 0x11d) = 0;
      }
      else {
        FUN_009b8474(&local_88);
        if (local_88 == (long *)0x0) goto LAB_01aefcb4;
        FUN_018281e0();
        if (local_88 != (long *)0x0) {
          lVar14 = local_88[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      *(undefined1 *)(local_90[0xb8] + 0x99) = 0;
      uVar13 = (**(code **)(*local_90 + 0x218))();
      if ((uVar13 & 1) == 0) {
        uVar13 = (**(code **)(*local_90 + 0x228))();
        if ((uVar13 & 1) != 0) {
          pcVar15 = *(code **)(*local_90 + 0x220);
          goto LAB_01aefd08;
        }
      }
      else {
        pcVar15 = *(code **)(*local_90 + 0x210);
LAB_01aefd08:
        (*pcVar15)(local_90,0);
      }
      (**(code **)(*local_90 + 0x1f0))(local_90,0);
      (**(code **)(*local_90 + 0x1c8))(local_90,0);
      FUN_01a874f4(local_90);
      *(undefined4 *)((long)local_90 + 0x914) = 0;
      (**(code **)(*local_90 + 0x1f8))(local_90,0);
      *(undefined4 *)(local_90 + 0x145) = 0;
      *(undefined1 *)((long)local_90 + 0xa25) = 0;
      *(undefined4 *)(local_90 + 0x144) = 0;
      *(undefined1 *)((long)local_90 + 0xa1d) = 0;
      if (*(long *)(param_1 + 0x5f8) == 0) {
        local_68 = (long *)0x0;
      }
      else {
        FUN_01b04810(&local_68);
        plVar24 = local_68;
        if (local_68 != (long *)0x0) {
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_00cf9db0(&local_a0,param_2);
          FUN_025c0018(plVar24,&local_a0);
          puVar6 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_a0 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_88 = (long *)*puVar6;
              FUN_02a44274(lVar14 + 0xd8,&local_88);
            }
          }
          if (local_68 != (long *)0x0) {
            lVar14 = local_68[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
        }
      }
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_00ac4814(&local_88,local_90 + 0xc5);
      if (local_88 == (long *)0x0) {
        local_a8 = (long *)0x0;
      }
      else {
        FUN_009b8474(&local_a8);
        plVar24 = local_88;
        if (local_88 != (long *)0x0) {
          plVar20 = local_88 + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *(int *)plVar20 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = (long *)*plVar24;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        lVar14 = local_a8[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        *(undefined1 *)(local_a8 + 0x4a) = 0;
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_01a9e18c(&local_88,local_90 + 0xbd);
      if (local_88 == (long *)0x0) {
        local_a8 = (long *)0x0;
      }
      else {
        FUN_01aa4ea4(&local_a8);
        plVar24 = local_88;
        if (local_88 != (long *)0x0) {
          plVar20 = local_88 + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *(int *)plVar20 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = (long *)*plVar24;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        if (((char)local_a8[0x4e] == '\0') || (*(int *)((long)local_a8 + 0x274) < 3)) {
          *(undefined4 *)((long)local_a8 + 0x274) = 3;
          *(undefined1 *)(local_a8 + 0x4e) = 1;
        }
        lVar14 = local_a8[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_01a6a07c(&local_88,local_90 + 0xbf);
      if (local_88 == (long *)0x0) {
        local_a8 = (long *)0x0;
      }
      else {
        FUN_01aa505c(&local_a8);
        plVar24 = local_88;
        if (local_88 != (long *)0x0) {
          plVar20 = local_88 + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *(int *)plVar20 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = (long *)*plVar24;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
      }
      if ((local_a8 != (long *)0x0) && ((**(code **)(*local_a8 + 0xf0))(), local_a8 != (long *)0x0))
      {
        lVar14 = local_a8[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_01a9e67c(&local_88,local_90 + 0xc3);
      if (local_88 == (long *)0x0) {
        local_a8 = (long *)0x0;
        plVar24 = local_a8;
      }
      else {
        FUN_01b049c8(&local_a8);
        plVar20 = local_88;
        plVar24 = local_a8;
        if (local_88 != (long *)0x0) {
          plVar23 = local_88 + 1;
          do {
            iVar11 = (int)*plVar23 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar3) {
              *(int *)plVar23 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = (long *)*plVar20;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
            plVar24 = local_a8;
          }
        }
      }
      local_a8 = plVar24;
      if (plVar24 != (long *)0x0) {
        FUN_018132d4(plVar24);
        FUN_025b57b4(plVar24,0);
        if (local_a8 != (long *)0x0) {
          lVar14 = local_a8[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
      }
      if (local_90 == (long *)0x0) goto LAB_01aefef8;
      lVar14 = local_90[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 != 0) goto LAB_01aefef8;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      cVar2 = (char)param_2[2];
    }
    if ((((cVar2 == '\0') && (*(long *)(param_1 + 0x7b8) != 0)) &&
        (FUN_01b04bc8(&local_88), local_88 != (long *)0x0)) &&
       (FUN_02634828(local_88,1), local_88 != (long *)0x0)) {
      lVar14 = local_88[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_01b001cc(&local_88,param_1 + 0x648);
    plVar24 = local_88;
    puVar10 = PTR_DAT_043806d0;
    puVar9 = PTR_DAT_043806c8;
    puVar8 = PTR_DAT_043795e0;
    puVar7 = PTR_DAT_043794d0;
    if (local_88 == (long *)0x0) {
LAB_01aeff24:
      lVar14 = *(long *)(param_1 + 0x768);
      pbVar5 = PTR_DAT_04382228;
      puVar6 = (undefined8 *)PTR_DAT_04382230;
    }
    else {
      if (*(int *)((long)local_88 + 0xc) != 0) {
        piVar1 = (int *)((long)local_88 + 0xc);
        iVar11 = *(int *)((long)local_88 + 0xc);
        do {
          plVar20 = (long *)plVar24[2];
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                uVar22 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_01af04c4;
            if (plVar20 == (long *)puVar10) break;
            plVar20 = (long *)*plVar20;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar14 = plVar24[3];
              plVar24 = (long *)0x0;
              plVar20 = local_88;
              if (lVar14 != 0) {
                plVar24 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x01af04e8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_01af04c4:
      plVar24 = (long *)0x0;
      plVar20 = local_88;
joined_r0x01af04e8:
      local_88 = plVar20;
      if (plVar20 != (long *)0x0) {
        plVar23 = plVar20 + 1;
        do {
          iVar11 = (int)*plVar23 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar3) {
            *(int *)plVar23 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = (long *)*plVar20;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (plVar24 == (long *)0x0) goto LAB_01aeff24;
      FUN_01b91370(plVar24);
      lVar14 = plVar24[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 != 0) goto LAB_01aeff24;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
      lVar14 = *(long *)(param_1 + 0x768);
      pbVar5 = PTR_DAT_04382228;
      puVar6 = (undefined8 *)PTR_DAT_04382230;
    }
    PTR_DAT_04382228 = pbVar5;
    PTR_DAT_04382230 = (undefined *)puVar6;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar11 = *(int *)(lVar14 + 0xc);
      do {
        plVar24 = *(long **)(lVar14 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
          uVar22 = FUN_018cf5f0();
          *puVar6 = uVar22;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_01aeff2c;
          if (plVar24 == puVar6) break;
          plVar24 = (long *)*plVar24;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            if (lVar14 != 0) {
              plVar24 = (long *)(lVar14 + -0x50);
              iVar11 = *(int *)((long)local_78 + 0x59c);
              if (((*PTR_DAT_04379660 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              lVar17 = *(long *)PTR_DAT_04379668;
              *(long *)PTR_DAT_04379670 = lVar17;
              uVar13 = *(ulong *)(lVar17 + 0x60);
              uVar25 = 0;
              if (uVar13 == 0) goto LAB_01af0b00;
              uVar16 = *(ulong *)(&DAT_0423daa0 + (long)iVar11 * 0x18);
              uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
              uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar18 < 2) {
                uVar19 = uVar13 - 1 & uVar16;
              }
              else if (uVar16 < uVar13) {
                uVar19 = uVar16;
              }
              else {
                uVar19 = 0;
                if (uVar13 != 0) {
                  uVar19 = uVar16 / uVar13;
                }
                uVar19 = uVar16 - uVar19 * uVar13;
              }
              plVar20 = *(long **)(*(long *)(lVar17 + 0x58) + uVar19 * 8);
              if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
              goto LAB_01af0b00;
              if (1 < uVar18) goto LAB_01af06d8;
              goto LAB_01af0994;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
    goto LAB_01aeff2c;
  }
LAB_01aefab8:
  uVar22 = 0;
  if (local_78 == (long *)0x0) {
    return 0;
  }
  goto LAB_01aefac4;
LAB_01af06d8:
  do {
    uVar18 = plVar20[1];
    if (uVar18 == uVar16) {
      if (plVar20[2] == uVar16) goto LAB_01af09c8;
    }
    else {
      if (uVar13 <= uVar18) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar18 / uVar13;
        }
        uVar18 = uVar18 - uVar4 * uVar13;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01af0b00;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01af0994:
    if (plVar20[1] == uVar16) {
      if (plVar20[2] == uVar16) goto LAB_01af09c8;
    }
    else if ((plVar20[1] & uVar13 - 1) != uVar19) break;
  }
LAB_01af0b00:
  FUN_01bb1904(uVar25,plVar24);
  FUN_01bfcca8(plVar24,PTR_DAT_0437a330);
  if (*(int *)((long)local_78 + 0x59c) == 1) {
    FUN_01a73650(&local_88);
    plVar20 = local_88;
    puVar8 = PTR_DAT_043794b8;
    puVar7 = PTR_DAT_043794b0;
    if ((local_88 != (long *)0x0) && (*(int *)((long)local_88 + 0xc) != 0)) {
      piVar1 = (int *)((long)local_88 + 0xc);
      iVar11 = *(int *)((long)local_88 + 0xc);
      do {
        plVar23 = (long *)plVar20[2];
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
              uVar22 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar22;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794c8;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_01af0b3c;
          if (plVar23 == (long *)puVar8) break;
          plVar23 = (long *)*plVar23;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar17 = plVar20[3];
            local_b0 = (long *)0x0;
            if (lVar17 != 0) {
              local_b0 = (long *)(lVar17 + -0x50);
            }
            goto LAB_01af0b40;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01af0b3c:
    local_b0 = (long *)0x0;
LAB_01af0b40:
    FUN_01bfc964(plVar24,&local_b0);
    plVar20 = local_88;
    if (local_b0 != (long *)0x0) {
      lVar17 = local_b0[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
        plVar20 = local_88;
      }
    }
    local_88 = plVar20;
    if (plVar20 != (long *)0x0) {
      plVar23 = plVar20 + 1;
      do {
        iVar11 = (int)*plVar23 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar3) {
          *(int *)plVar23 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 0) {
        plVar20[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = (long *)*plVar20;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
  }
  else {
    FUN_009c69bc(&local_b8);
    FUN_01bfc964(plVar24,&local_b8);
    if (local_b8 != (long *)0x0) {
      lVar17 = local_b8[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
    lVar14 = *(long *)(param_1 + 0x758);
    pbVar5 = PTR_DAT_04382210;
    puVar6 = (undefined8 *)PTR_DAT_04382218;
  }
  else {
LAB_01aeff2c:
    lVar14 = *(long *)(param_1 + 0x758);
    pbVar5 = PTR_DAT_04382210;
    puVar6 = (undefined8 *)PTR_DAT_04382218;
  }
  PTR_DAT_04382210 = pbVar5;
  PTR_DAT_04382218 = (undefined *)puVar6;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar24 = *(long **)(lVar14 + 0x10);
      if (((*pbVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
        uVar22 = FUN_018cf5f0();
        *puVar6 = uVar22;
        __cxa_guard_release(pbVar5);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto LAB_01aeff34;
        if (plVar24 == puVar6) break;
        plVar24 = (long *)*plVar24;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar24 = (long *)(lVar14 + -0x50);
            iVar11 = *(int *)((long)local_78 + 0x59c);
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar17 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar17;
            uVar13 = *(ulong *)(lVar17 + 0x60);
            uVar25 = 0;
            if (uVar13 == 0) goto LAB_01af0f9c;
            uVar16 = *(ulong *)(&DAT_0423daa0 + (long)iVar11 * 0x18);
            uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
            uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar18 < 2) {
              uVar19 = uVar13 - 1 & uVar16;
            }
            else if (uVar16 < uVar13) {
              uVar19 = uVar16;
            }
            else {
              uVar19 = 0;
              if (uVar13 != 0) {
                uVar19 = uVar16 / uVar13;
              }
              uVar19 = uVar16 - uVar19 * uVar13;
            }
            plVar20 = *(long **)(*(long *)(lVar17 + 0x58) + uVar19 * 8);
            if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
            goto LAB_01af0f9c;
            if (1 < uVar18) goto LAB_01af0d94;
            goto LAB_01af0e30;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  goto LAB_01aeff34;
LAB_01af09c8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar23 = plVar20 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar13 = plVar20[0x21];
    uVar25 = 0;
    if (uVar13 != 0) {
      uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar16 = uVar13 - 1 & 0x3a626f835b9bdfb1;
      }
      else if (uVar13 < 0x3a626f835b9bdfb2) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = 0x3a626f835b9bdfb1 / uVar13;
        }
        uVar16 = 0x3a626f835b9bdfb1 - uVar16 * uVar13;
      }
      else {
        uVar16 = 0x3a626f835b9bdfb1;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar16 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0x3a626f835b9bdfb1) {
              if (plVar21[2] == 0x3a626f835b9bdfb1) goto LAB_01af0ae8;
            }
            else if ((plVar21[1] & uVar13 - 1) != uVar16) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0x3a626f835b9bdfb1) {
              if (plVar21[2] == 0x3a626f835b9bdfb1) goto LAB_01af0ae8;
            }
            else {
              if (uVar13 <= uVar18) {
                uVar19 = 0;
                if (uVar13 != 0) {
                  uVar19 = uVar18 / uVar13;
                }
                uVar18 = uVar18 - uVar19 * uVar13;
              }
              if (uVar18 != uVar16) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01af0aec;
  }
  goto LAB_01af0b00;
LAB_01af0ae8:
  uVar25 = (undefined4)plVar21[6];
LAB_01af0aec:
  do {
    iVar11 = (int)*plVar23 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar3) {
      *(int *)plVar23 = iVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_01af0b00;
LAB_01af0d94:
  do {
    uVar18 = plVar20[1];
    if (uVar18 == uVar16) {
      if (plVar20[2] == uVar16) goto LAB_01af0e64;
    }
    else {
      if (uVar13 <= uVar18) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar18 / uVar13;
        }
        uVar18 = uVar18 - uVar4 * uVar13;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01af0f9c;
LAB_01af0e64:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar23 = plVar20 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar13 = plVar20[0x21];
    uVar25 = 0;
    if (uVar13 != 0) {
      uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar16 = uVar13 - 1 & 0x698000f53b96ea96;
      }
      else if (uVar13 < 0x698000f53b96ea97) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = 0x698000f53b96ea96 / uVar13;
        }
        uVar16 = 0x698000f53b96ea96 - uVar16 * uVar13;
      }
      else {
        uVar16 = 0x698000f53b96ea96;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar16 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0x698000f53b96ea96) {
              if (plVar21[2] == 0x698000f53b96ea96) goto LAB_01af0f84;
            }
            else if ((plVar21[1] & uVar13 - 1) != uVar16) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0x698000f53b96ea96) {
              if (plVar21[2] == 0x698000f53b96ea96) goto LAB_01af0f84;
            }
            else {
              if (uVar13 <= uVar18) {
                uVar19 = 0;
                if (uVar13 != 0) {
                  uVar19 = uVar18 / uVar13;
                }
                uVar18 = uVar18 - uVar19 * uVar13;
              }
              if (uVar18 != uVar16) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01af0f88;
  }
  goto LAB_01af0f9c;
LAB_01af0f84:
  uVar25 = (undefined4)plVar21[6];
LAB_01af0f88:
  do {
    iVar11 = (int)*plVar23 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar3) {
      *(int *)plVar23 = iVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_01af0f9c;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01af0e30:
    if (plVar20[1] == uVar16) {
      if (plVar20[2] == uVar16) goto LAB_01af0e64;
    }
    else if ((plVar20[1] & uVar13 - 1) != uVar19) break;
  }
LAB_01af0f9c:
  FUN_01c39c90(uVar25,plVar24);
  FUN_01bfcca8(plVar24,PTR_DAT_0437a330);
  FUN_009c69bc(&local_c0,local_78);
  FUN_01bfc964(plVar24,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar17 = local_c0[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
    lVar14 = *(long *)(param_1 + 0x778);
    pbVar5 = PTR_DAT_04381ed8;
    puVar6 = (undefined8 *)PTR_DAT_04381ee0;
  }
  else {
LAB_01aeff34:
    lVar14 = *(long *)(param_1 + 0x778);
    pbVar5 = PTR_DAT_04381ed8;
    puVar6 = (undefined8 *)PTR_DAT_04381ee0;
  }
  PTR_DAT_04381ed8 = pbVar5;
  PTR_DAT_04381ee0 = (undefined *)puVar6;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar24 = *(long **)(lVar14 + 0x10);
      if (((*pbVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
        uVar22 = FUN_018cf5f0();
        *puVar6 = uVar22;
        __cxa_guard_release(pbVar5);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto LAB_01aeff3c;
        if (plVar24 == puVar6) break;
        plVar24 = (long *)*plVar24;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar24 = (long *)(lVar14 + -0x50);
            FUN_01bfcca8(plVar24,PTR_DAT_0437a330);
            FUN_009c69bc(&local_c8,local_78);
            FUN_01bfc964(plVar24,&local_c8);
            if (local_c8 != (long *)0x0) {
              lVar17 = local_c8[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_c8 + 0x20))();
              }
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01aeff3c:
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_01afe83c(&local_88,param_1 + 0x7a8);
  plVar24 = local_88;
  if (local_88 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_01b04d80(&local_90,local_88);
    plVar20 = plVar24 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *(int *)plVar20 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
      plVar24[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = (long *)*plVar24;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if ((local_90 != (long *)0x0) && (FUN_025f9ed8(local_90,param_2), local_90 != (long *)0x0)) {
    lVar14 = local_90[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  uVar22 = 1;
  if (local_78 != (long *)0x0) {
LAB_01aefac4:
    lVar14 = local_78[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return uVar22;
}


