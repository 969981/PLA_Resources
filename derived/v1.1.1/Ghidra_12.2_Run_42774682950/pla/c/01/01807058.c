/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01807058; name: FUN_01807058
 */


void FUN_01807058(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  int *piVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long *local_230;
  undefined8 uStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  ulong uStack_208;
  undefined4 local_200;
  long *local_1f0;
  undefined8 uStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined4 local_1a0;
  long *local_190;
  undefined8 uStack_188;
  long *local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 uStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined4 local_120;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined4 local_e0;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined4 local_a0;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70 [2];
  
  if (param_2 == 0) {
    return;
  }
  if (*(int **)(param_2 + 0x30) == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (**(int **)(param_2 + 0x30) != 1) {
    return;
  }
  piVar21 = *(int **)(param_3 + 0x30);
  if (piVar21 == (int *)0x0) {
    return;
  }
  iVar10 = *piVar21;
  if (iVar10 == 3) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    local_e0 = 0;
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    pauVar1 = (undefined1 (*) [16])(param_4 + 0x10);
    local_f0 = *(undefined8 *)*pauVar1;
    auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
    uStack_e8 = (ulong)auVar23._0_4_;
    FUN_00cfa028(&local_100,piVar21 + 6);
    FUN_00b63974(&local_110,piVar21 + 2);
    lVar22 = *(long *)(param_1 + 0x20);
    local_150 = (undefined8 *)0x0;
    uStack_148 = 0;
    FUN_00b63974(&local_150,&local_110);
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    FUN_00cfa028(&local_140,&local_100);
    local_130 = local_f0;
    uStack_128 = uStack_e8;
    local_120 = local_e0;
    lVar12 = nn::os::GetCurrentThread();
    plVar16 = (long *)(lVar22 + 0xf8);
    do {
      if (*plVar16 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xec));
          while (*plVar16 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01807184;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01807184:
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    puVar7 = PTR_DAT_04379498;
    plVar16 = *(long **)(lVar22 + 0xb0);
    if (plVar16 != (long *)0x0) {
      do {
        local_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_008802f0(&local_88,plVar16 + 3);
        plVar14 = (long *)plVar16[5];
        local_78 = plVar14;
        if ((local_88 == (long *)0x0) || (*(int *)((long)local_88 + 0xc) == 0)) {
          plVar16 = (long *)FUN_0180db44(lVar22 + 0x80,plVar16);
          plVar14 = local_88;
        }
        else {
          local_d0 = (long *)0x0;
          uStack_c8 = 0;
          FUN_00b63974(&local_d0,&local_150);
          local_c0 = (long *)0x0;
          uStack_b8 = 0;
          FUN_00cfa028(&local_c0,&local_140);
          local_a0 = local_120;
          local_b0 = local_130;
          uStack_a8 = uStack_128;
          (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
          plVar14 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar20 = local_c0 + 1;
            do {
              iVar10 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *(int *)plVar20 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              local_c0[2] = 0;
              if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_70[0] = *plVar14;
              FUN_02a44274(lVar12 + 0xd8,local_70);
            }
          }
          plVar14 = local_d0;
          if (local_d0 != (long *)0x0) {
            plVar20 = local_d0 + 1;
            do {
              iVar10 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *(int *)plVar20 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              local_d0[2] = 0;
              if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_70[0] = *plVar14;
              FUN_02a44274(lVar12 + 0xd8,local_70);
            }
          }
          plVar16 = (long *)*plVar16;
          plVar14 = local_88;
        }
        local_88 = plVar14;
        if (plVar14 != (long *)0x0) {
          plVar20 = plVar14 + 1;
          do {
            iVar10 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar14[2] = 0;
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar7);
            }
            lVar12 = *(long *)puVar8;
            *(long *)puVar9 = lVar12;
            local_70[0] = *plVar14;
            FUN_02a44274(lVar12 + 0xd8,local_70);
          }
        }
      } while (plVar16 != (long *)0x0);
    }
    *(undefined8 *)(lVar22 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xec));
    puVar18 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      piVar21 = (int *)(local_140 + 1);
      do {
        iVar10 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_d0 = (long *)*puVar18;
        FUN_02a44274(lVar12 + 0xd8,&local_d0);
      }
    }
    puVar18 = local_150;
    if (local_150 != (undefined8 *)0x0) {
      piVar21 = (int *)(local_150 + 1);
      do {
        iVar10 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_d0 = (long *)*puVar18;
        FUN_02a44274(lVar12 + 0xd8,&local_d0);
      }
    }
    puVar18 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      piVar21 = (int *)(local_100 + 1);
      do {
        iVar10 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_d0 = (long *)*puVar18;
        FUN_02a44274(lVar12 + 0xd8,&local_d0);
      }
    }
    puVar18 = local_110;
    if (local_110 == (undefined8 *)0x0) {
      return;
    }
    piVar21 = (int *)(local_110 + 1);
    do {
      iVar10 = *piVar21;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar4) {
        *piVar21 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) {
      return;
    }
    local_110[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar12;
    local_d0 = (long *)*puVar18;
    FUN_02a44274(lVar12 + 0xd8,&local_d0);
    return;
  }
  if (iVar10 != 8) {
    if (iVar10 != 4) {
      return;
    }
    plVar16 = (long *)(piVar21 + 6);
    if (*plVar16 == 0) {
      return;
    }
    FUN_00b911c4(&local_d0);
    plVar14 = local_d0;
    if (local_d0 == (long *)0x0) {
      return;
    }
    FUN_01a71984(&local_d0,local_d0);
    plVar20 = local_d0;
    puVar7 = PTR_DAT_043794d8;
    if (local_d0 == (long *)0x0) {
      plVar17 = (long *)0x0;
LAB_018077b8:
      if (plVar17 == (long *)0x0) goto LAB_018077d0;
LAB_018077bc:
      if ((*(long *)(param_1 + 0x18) == 0) || ((*(byte *)(plVar17 + 1) & 7) == 0))
      goto LAB_018077d0;
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      FUN_00cfa028(&local_c0,plVar16);
      FUN_00b63974(&local_d0,piVar21 + 2);
      uVar19 = *(undefined8 *)(param_1 + 0x18);
      local_170 = (long *)0x0;
      uStack_168 = 0;
      FUN_00b63974(&local_170,&local_d0);
      local_160 = (long *)0x0;
      uStack_158 = 0;
      FUN_00cfa028(&local_160,&local_c0);
      FUN_018088ac(uVar19,&local_170);
      plVar16 = local_160;
      if (local_160 != (long *)0x0) {
        plVar20 = local_160 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_160[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_170;
      if (local_170 != (long *)0x0) {
        plVar20 = local_170 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar20 = local_c0 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
LAB_01807a08:
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    else {
      if (*(int *)((long)local_d0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_d0 + 0xc);
        iVar10 = *(int *)((long)local_d0 + 0xc);
        do {
          puVar18 = (undefined8 *)plVar20[2];
          plVar6 = local_c0;
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), plVar6 = local_c0, iVar11 != 0)) {
            uVar19 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar19;
            __cxa_guard_release(PTR_DAT_043794d0);
            plVar6 = local_c0;
          }
          plVar17 = (long *)0x0;
          plVar5 = local_d0;
          local_c0 = plVar6;
          if (puVar18 == (undefined8 *)0x0) goto joined_r0x0180866c;
          while (puVar18 != (undefined8 *)puVar7) {
            puVar18 = (undefined8 *)*puVar18;
            if (puVar18 == (undefined8 *)0x0) {
              plVar17 = (long *)0x0;
              goto joined_r0x0180866c;
            }
          }
          iVar11 = *piVar2;
          if (iVar11 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar12 = plVar20[3];
              if (lVar12 != 0) {
                plVar20 = (long *)(lVar12 + -8);
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
                (**(code **)(*plVar20 + 0x18))(plVar20);
                plVar17 = plVar6;
                plVar5 = local_d0;
                goto joined_r0x0180866c;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
      plVar17 = (long *)0x0;
      plVar5 = local_d0;
joined_r0x0180866c:
      local_d0 = plVar5;
      if (plVar5 == (long *)0x0) goto LAB_018077b8;
      plVar20 = plVar5 + 1;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 != 0) goto LAB_018077b8;
      plVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_110 = (undefined8 *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_110);
      if (plVar17 != (long *)0x0) goto LAB_018077bc;
LAB_018077d0:
      if ((*(long *)(param_1 + 0x10) == 0) ||
         ((uVar13 = FUN_01ba08c4(plVar14), (uVar13 & 1) == 0 ||
          (uVar13 = FUN_01ba0290(plVar14), (uVar13 & 1) != 0)))) {
        if (*(long *)(param_1 + 0x28) != 0) {
          local_a0 = 0;
          local_c0 = (long *)0x0;
          uStack_b8 = 0;
          local_d0 = (long *)0x0;
          uStack_c8 = 0;
          pauVar1 = (undefined1 (*) [16])(param_4 + 0x10);
          local_b0 = *(undefined8 *)*pauVar1;
          auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
          uStack_a8 = (ulong)auVar23._0_4_;
          FUN_00cfa028(&local_c0,plVar16);
          FUN_00b63974(&local_d0,piVar21 + 2);
          uVar19 = *(undefined8 *)(param_1 + 0x28);
          local_1d0 = (long *)0x0;
          uStack_1c8 = 0;
          FUN_00b63974(&local_1d0,&local_d0);
          local_1c0 = (long *)0x0;
          uStack_1b8 = 0;
          FUN_00cfa028(&local_1c0,&local_c0);
          local_1b0 = local_b0;
          uStack_1a8 = uStack_a8;
          local_1a0 = local_a0;
          FUN_01808e3c(uVar19,&local_1d0);
          plVar16 = local_1c0;
          if (local_1c0 != (long *)0x0) {
            plVar20 = local_1c0 + 1;
            do {
              iVar10 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *(int *)plVar20 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              local_1c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_110 = (undefined8 *)*plVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_110);
            }
          }
          plVar16 = local_1d0;
          if (local_1d0 != (long *)0x0) {
            plVar20 = local_1d0 + 1;
            do {
              iVar10 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *(int *)plVar20 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              local_1d0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_110 = (undefined8 *)*plVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_110);
            }
          }
          plVar16 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar20 = local_c0 + 1;
            do {
              iVar10 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *(int *)plVar20 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_110 = (undefined8 *)*plVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_110);
            }
          }
          if (local_d0 != (long *)0x0) {
            plVar16 = local_d0 + 1;
            do {
              iVar10 = (int)*plVar16 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *(int *)plVar16 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_018079c0;
          }
        }
      }
      else {
        local_c0 = (long *)0x0;
        uStack_b8 = 0;
        local_d0 = (long *)0x0;
        uStack_c8 = 0;
        FUN_00cfa028(&local_c0,plVar16);
        FUN_00b63974(&local_d0,piVar21 + 2);
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        local_190 = (long *)0x0;
        uStack_188 = 0;
        FUN_00b63974(&local_190,&local_d0);
        local_180 = (long *)0x0;
        uStack_178 = 0;
        FUN_00cfa028(&local_180,&local_c0);
        FUN_01808b74(uVar19,&local_190);
        plVar16 = local_180;
        if (local_180 != (long *)0x0) {
          plVar20 = local_180 + 1;
          do {
            iVar10 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_180[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_110 = (undefined8 *)*plVar16;
            FUN_02a44274(lVar12 + 0xd8,&local_110);
          }
        }
        plVar16 = local_190;
        if (local_190 != (long *)0x0) {
          plVar20 = local_190 + 1;
          do {
            iVar10 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_190[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_110 = (undefined8 *)*plVar16;
            FUN_02a44274(lVar12 + 0xd8,&local_110);
          }
        }
        plVar16 = local_c0;
        if (local_c0 != (long *)0x0) {
          plVar20 = local_c0 + 1;
          do {
            iVar10 = (int)*plVar20 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *(int *)plVar20 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_110 = (undefined8 *)*plVar16;
            FUN_02a44274(lVar12 + 0xd8,&local_110);
          }
        }
        if (local_d0 != (long *)0x0) {
          plVar16 = local_d0 + 1;
          do {
            iVar10 = (int)*plVar16 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *(int *)plVar16 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_018079c0:
          plVar16 = local_d0;
          if (iVar10 == 0) {
            local_d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_110 = (undefined8 *)*plVar16;
            FUN_02a44274(lVar12 + 0xd8,&local_110);
          }
        }
      }
      if (plVar17 != (long *)0x0) goto LAB_01807a08;
    }
    lVar12 = plVar14[0xb];
    piVar21 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar21;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar4) {
        *piVar21 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0x18) = 0;
    pcVar15 = *(code **)(*plVar14 + 0x20);
    goto LAB_0180776c;
  }
  plVar16 = (long *)(piVar21 + 6);
  if (*plVar16 == 0) {
    return;
  }
  FUN_017dca7c(&local_d0);
  plVar14 = local_d0;
  if (local_d0 == (long *)0x0) {
    return;
  }
  FUN_01a71984(&local_d0,local_d0);
  plVar20 = local_d0;
  puVar7 = PTR_DAT_043794d8;
  if (local_d0 == (long *)0x0) {
    plVar17 = (long *)0x0;
LAB_01807500:
    if (plVar17 == (long *)0x0) goto LAB_01807518;
LAB_01807504:
    if ((*(long *)(param_1 + 0x18) == 0) || ((*(byte *)(plVar17 + 1) & 7) == 0)) goto LAB_01807518;
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    local_d0 = (long *)0x0;
    uStack_c8 = 0;
    FUN_00cfa028(&local_c0,plVar16);
    FUN_00b63974(&local_d0,piVar21 + 2);
    uVar19 = *(undefined8 *)(param_1 + 0x18);
    local_1f0 = (long *)0x0;
    uStack_1e8 = 0;
    FUN_00b63974(&local_1f0,&local_d0);
    local_1e0 = (long *)0x0;
    uStack_1d8 = 0;
    FUN_00cfa028(&local_1e0,&local_c0);
    FUN_018088ac(uVar19,&local_1f0);
    plVar16 = local_1e0;
    if (local_1e0 != (long *)0x0) {
      plVar20 = local_1e0 + 1;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_1e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_110 = (undefined8 *)*plVar16;
        FUN_02a44274(lVar12 + 0xd8,&local_110);
      }
    }
    plVar16 = local_1f0;
    if (local_1f0 != (long *)0x0) {
      plVar20 = local_1f0 + 1;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_1f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_110 = (undefined8 *)*plVar16;
        FUN_02a44274(lVar12 + 0xd8,&local_110);
      }
    }
    plVar16 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar20 = local_c0 + 1;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_110 = (undefined8 *)*plVar16;
        FUN_02a44274(lVar12 + 0xd8,&local_110);
      }
    }
    plVar16 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar20 = local_d0 + 1;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_110 = (undefined8 *)*plVar16;
        FUN_02a44274(lVar12 + 0xd8,&local_110);
      }
    }
LAB_01807730:
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  else {
    if (*(int *)((long)local_d0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_d0 + 0xc);
      iVar10 = *(int *)((long)local_d0 + 0xc);
      do {
        puVar18 = (undefined8 *)plVar20[2];
        plVar6 = local_c0;
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), plVar6 = local_c0, iVar11 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar19;
          __cxa_guard_release(PTR_DAT_043794d0);
          plVar6 = local_c0;
        }
        plVar17 = (long *)0x0;
        plVar5 = local_d0;
        local_c0 = plVar6;
        if (puVar18 == (undefined8 *)0x0) goto joined_r0x018087d0;
        while (puVar18 != (undefined8 *)puVar7) {
          puVar18 = (undefined8 *)*puVar18;
          if (puVar18 == (undefined8 *)0x0) {
            plVar17 = (long *)0x0;
            goto joined_r0x018087d0;
          }
        }
        iVar11 = *piVar2;
        if (iVar11 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = plVar20[3];
            if (lVar12 != 0) {
              plVar20 = (long *)(lVar12 + -8);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
              (**(code **)(*plVar20 + 0x18))(plVar20);
              plVar17 = plVar6;
              plVar5 = local_d0;
              goto joined_r0x018087d0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
    plVar17 = (long *)0x0;
    plVar5 = local_d0;
joined_r0x018087d0:
    local_d0 = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_01807500;
    plVar20 = plVar5 + 1;
    do {
      iVar10 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 != 0) goto LAB_01807500;
    plVar5[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar12;
    local_110 = (undefined8 *)*plVar5;
    FUN_02a44274(lVar12 + 0xd8,&local_110);
    if (plVar17 != (long *)0x0) goto LAB_01807504;
LAB_01807518:
    if (*(long *)(param_1 + 0x28) != 0) {
      local_a0 = 0;
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      pauVar1 = (undefined1 (*) [16])(param_4 + 0x10);
      local_b0 = *(undefined8 *)*pauVar1;
      auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uStack_a8 = (ulong)auVar23._0_4_;
      FUN_00cfa028(&local_c0,plVar16);
      FUN_00b63974(&local_d0,piVar21 + 2);
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      local_230 = (long *)0x0;
      uStack_228 = 0;
      FUN_00b63974(&local_230,&local_d0);
      local_220 = (long *)0x0;
      uStack_218 = 0;
      FUN_00cfa028(&local_220,&local_c0);
      local_210 = local_b0;
      uStack_208 = uStack_a8;
      local_200 = local_a0;
      FUN_01808e3c(uVar19,&local_230);
      plVar16 = local_220;
      if (local_220 != (long *)0x0) {
        plVar20 = local_220 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_220[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_230;
      if (local_230 != (long *)0x0) {
        plVar20 = local_230 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_230[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar20 = local_c0 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
      plVar16 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_110 = (undefined8 *)*plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_110);
        }
      }
    }
    if (plVar17 != (long *)0x0) goto LAB_01807730;
  }
  lVar12 = plVar14[0xb];
  piVar21 = (int *)(lVar12 + 0xc);
  do {
    iVar10 = *piVar21;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
    if (bVar4) {
      *piVar21 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 != 0) {
    return;
  }
  *(undefined8 *)(lVar12 + 0x18) = 0;
  pcVar15 = *(code **)(*plVar14 + 0x20);
LAB_0180776c:
  (*pcVar15)(plVar14);
  return;
}


