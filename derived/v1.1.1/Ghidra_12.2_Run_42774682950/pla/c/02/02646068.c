/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02646068; name: FUN_02646068
 */


/* WARNING: Removing unreachable block (ram,0x02646d7c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02646068(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  bool bVar22;
  long *plVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  float extraout_s0_01;
  undefined4 uVar25;
  float extraout_var;
  float extraout_var_00;
  float fVar26;
  float extraout_var_01;
  float fVar27;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  float extraout_var_07;
  undefined1 auVar28 [16];
  ulong *local_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  char *pcStack_1a8;
  long *local_1a0;
  long *local_198;
  undefined8 *local_190;
  long *local_158;
  ulong *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  long *local_138;
  ulong *local_130;
  undefined8 uStack_128;
  ulong *local_120;
  undefined8 uStack_118;
  ulong *local_110;
  ulong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  ulong *local_e0;
  ulong *local_d0;
  ulong *local_c0;
  char local_b0;
  long *local_98;
  long *local_90;
  ulong local_88 [3];
  
  if ((*(byte *)(param_1 + 0x250) & 3) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  FUN_00959eac(&local_90,*(long *)(param_1 + 0x1f0));
  if (local_90 == (long *)0x0) {
    return;
  }
  local_150 = (ulong *)0x0;
  puStack_148 = (undefined *)0x0;
  FUN_01a02dbc(&local_150,local_90 + 0x8c);
  FUN_00bf5d7c(&local_98,&local_150);
  puVar21 = local_150;
  if (local_150 != (ulong *)0x0) {
    puVar1 = local_150 + 1;
    do {
      iVar16 = (int)*puVar1 + -1;
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar22) {
        *(int *)puVar1 = iVar16;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_1b0 = *puVar21;
      FUN_02a44274(lVar18 + 0xd8,&local_1b0);
    }
  }
  if (local_98 == (long *)0x0) goto joined_r0x026461fc;
  lVar18 = param_1 + 0x260;
  if ((*(char *)(param_1 + 0x260) != '\0') && (*(int *)(param_1 + 0x2d0) < 999999)) {
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN_01e604d4(&local_1e0);
    if (local_1e0 == (ulong *)0x0) goto LAB_0264619c;
    local_150 = (ulong *)((ulong)local_150 & 0xffffffffffffff00);
    uVar10 = false;
    if ((char)local_1e0[0x16] != '\0') {
      FUN_02594b30(&local_150,local_1e0 + 0x18);
      if ((char)local_150 == '\0') {
        uVar10 = false;
      }
      else {
        if (local_b0 == '\0') {
          uVar10 = false;
        }
        else {
          FUN_0264752c(lVar18,&local_140);
          uVar10 = true;
          if ((char)local_150 == '\0') goto joined_r0x02646660;
        }
        if (local_c0 != (ulong *)0x0) {
          puVar21 = local_c0 + 1;
          do {
            iVar16 = (int)*puVar21 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar22) {
              *(int *)puVar21 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_1b0 = *local_c0;
            FUN_02a44274(lVar20 + 0xd8,&local_1b0);
          }
        }
        if (local_d0 != (ulong *)0x0) {
          puVar21 = local_d0 + 1;
          do {
            iVar16 = (int)*puVar21 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar22) {
              *(int *)puVar21 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_1b0 = *local_d0;
            FUN_02a44274(lVar20 + 0xd8,&local_1b0);
          }
        }
        if (local_e0 != (ulong *)0x0) {
          puVar21 = local_e0 + 1;
          do {
            iVar16 = (int)*puVar21 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar22) {
              *(int *)puVar21 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_e0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_1b0 = *local_e0;
            FUN_02a44274(lVar20 + 0xd8,&local_1b0);
          }
        }
        if ((long *)CONCAT44(uStack_fc,local_100) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_fc,local_100) + 0x20))();
        }
        puVar21 = local_110;
        if (local_110 != (ulong *)0x0) {
          puVar1 = local_110 + 1;
          do {
            iVar16 = (int)*puVar1 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar22) {
              *(int *)puVar1 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_110[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_1b0 = *puVar21;
            FUN_02a44274(lVar20 + 0xd8,&local_1b0);
          }
        }
        puVar21 = local_120;
        if (local_120 != (ulong *)0x0) {
          puVar1 = local_120 + 1;
          do {
            iVar16 = (int)*puVar1 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar22) {
              *(int *)puVar1 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            local_120[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_1b0 = *puVar21;
            FUN_02a44274(lVar20 + 0xd8,&local_1b0);
          }
        }
        local_150 = (ulong *)((ulong)local_150 & 0xffffffffffffff00);
      }
    }
joined_r0x02646660:
    if (local_1e0 != (ulong *)0x0) {
      uVar19 = *(ulong *)((long)local_1e0 + 0x58);
      piVar2 = (int *)(uVar19 + 0xc);
      do {
        iVar16 = *piVar2;
        cVar5 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar22) {
          *piVar2 = iVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(uVar19 + 0x18) = 0;
        (**(code **)(*local_1e0 + 0x20))();
      }
    }
    if (!(bool)uVar10) goto LAB_0264619c;
    goto LAB_02646328;
  }
  local_1e0 = (ulong *)0x0;
LAB_0264619c:
  if (*(long *)(param_1 + 0x240) == 0) {
    local_158 = (long *)0x0;
  }
  else {
    FUN_009b8830(&local_158);
    if (local_158 != (long *)0x0) {
      FUN_01f2bf7c(&local_1b0);
      if ((char)local_1b0 == '\0') {
        bVar22 = false;
      }
      else {
        uVar19 = FUN_01f2b1e8(&local_1a0);
        if (((uVar19 & 1) == 0) && (uVar19 = FUN_01f32e34(local_158), (uVar19 & 1) == 0)) {
          if ((local_190 == (undefined8 *)0x0) ||
             (FUN_00b911c4(&local_150), puVar21 = local_150, local_150 == (ulong *)0x0)) {
            bVar22 = false;
            puVar11 = local_190;
          }
          else {
            local_100 = 0;
            local_110 = (ulong *)0x0;
            local_108 = 0;
            local_120 = (ulong *)0x0;
            uStack_118 = 0;
            local_130 = (ulong *)0x0;
            uStack_128 = 0;
            local_140 = 0;
            local_138 = (long *)0x0;
            uStack_fc = 0x3f800000;
            uStack_f8 = 0x3f800000;
            local_150 = (ulong *)CONCAT44(local_150._4_4_,4);
            (**(code **)(*puVar21 + 0x10))(&local_1e0,puVar21);
            local_1c0 = (long *)0x0;
            uStack_1b8 = 0;
            FUN_00946790(&local_1c0,&local_1e0);
            puVar1 = local_1e0;
            if (local_1e0 != (ulong *)0x0) {
              puVar4 = local_1e0 + 1;
              do {
                iVar16 = (int)*puVar4 + -1;
                cVar5 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar22) {
                  *(int *)puVar4 = iVar16;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar16 == 0) {
                local_1e0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_88[0] = *puVar1;
                FUN_02a44274(lVar20 + 0xd8,local_88);
              }
            }
            FUN_00bfffdc(&local_130,&local_1c0);
            plVar23 = local_1c0;
            if (local_1c0 != (long *)0x0) {
              plVar3 = local_1c0 + 1;
              do {
                iVar16 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar22) {
                  *(int *)plVar3 = iVar16;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar16 == 0) {
                local_1c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_1e0 = (ulong *)*plVar23;
                FUN_02a44274(lVar20 + 0xd8,&local_1e0);
              }
            }
            FUN_0264752c(lVar18,&local_150);
            if (local_110 != (ulong *)0x0) {
              (**(code **)(*local_110 + 0x20))();
            }
            puVar1 = local_120;
            if (local_120 != (ulong *)0x0) {
              puVar4 = local_120 + 1;
              do {
                iVar16 = (int)*puVar4 + -1;
                cVar5 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar22) {
                  *(int *)puVar4 = iVar16;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar16 == 0) {
                local_120[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_1e0 = (ulong *)*puVar1;
                FUN_02a44274(lVar20 + 0xd8,&local_1e0);
              }
            }
            puVar1 = local_130;
            if (local_130 != (ulong *)0x0) {
              puVar4 = local_130 + 1;
              do {
                iVar16 = (int)*puVar4 + -1;
                cVar5 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar22) {
                  *(int *)puVar4 = iVar16;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar16 == 0) {
                local_130[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_1e0 = (ulong *)*puVar1;
                FUN_02a44274(lVar20 + 0xd8,&local_1e0);
              }
            }
            uVar19 = puVar21[0xb];
            piVar2 = (int *)(uVar19 + 0xc);
            do {
              iVar16 = *piVar2;
              cVar5 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar22) {
                *piVar2 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 == 1) {
              *(undefined8 *)(uVar19 + 0x18) = 0;
              (**(code **)(*puVar21 + 0x20))(puVar21);
            }
            bVar22 = true;
            puVar11 = local_190;
          }
        }
        else {
          bVar22 = false;
          puVar11 = local_190;
        }
        if ((char)local_1b0 != '\0') {
          if (puVar11 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar11 + 1);
            do {
              iVar16 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 + -1 == 0) {
              puVar11[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_150 = (ulong *)*puVar11;
              FUN_02a44274(lVar20 + 0xd8,&local_150);
            }
          }
          plVar23 = local_1a0;
          if (local_1a0 != (long *)0x0) {
            plVar3 = local_1a0 + 1;
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
              local_1a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_150 = (ulong *)*plVar23;
              FUN_02a44274(lVar20 + 0xd8,&local_150);
            }
          }
          local_1b0 = local_1b0 & 0xffffffffffffff00;
        }
      }
      if (local_158 != (long *)0x0) {
        lVar20 = local_158[0xb];
        piVar2 = (int *)(lVar20 + 0xc);
        do {
          iVar16 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_158 + 0x20))();
        }
      }
      if (bVar22) goto LAB_02646328;
    }
  }
  FUN_01a73640(&local_150,local_90);
  puVar21 = local_150;
  puVar14 = PTR_DAT_04379e90;
  puVar13 = PTR_DAT_04379e88;
  puVar12 = PTR_DAT_043795e0;
  if (local_150 == (ulong *)0x0) {
LAB_026461c4:
    (**(code **)(*local_98 + 0x170))(local_98,2);
  }
  else {
    if (*(int *)((long)local_150 + 0xc) != 0) {
      piVar2 = (int *)((long)local_150 + 0xc);
      iVar16 = *(int *)((long)local_150 + 0xc);
      do {
        plVar23 = (long *)puVar21[2];
        if (((*puVar13 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar13), iVar15 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar17;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar12 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar14 = puVar12;
          __cxa_guard_release(puVar13);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_02646cc4;
          if (plVar23 == (long *)puVar14) break;
          plVar23 = (long *)*plVar23;
        }
        iVar15 = *piVar2;
        if (iVar15 == iVar16) {
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar22) {
            *piVar2 = iVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            uVar19 = puVar21[3];
            plVar23 = (long *)0x0;
            puVar21 = local_150;
            if (uVar19 != 0) {
              plVar23 = (long *)(uVar19 - 0x50);
            }
            goto joined_r0x02646c2c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_02646cc4:
    plVar23 = (long *)0x0;
    puVar21 = local_150;
joined_r0x02646c2c:
    local_150 = puVar21;
    if (puVar21 != (ulong *)0x0) {
      puVar1 = puVar21 + 1;
      do {
        iVar16 = (int)*puVar1 + -1;
        cVar5 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar22) {
          *(int *)puVar1 = iVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar16 == 0) {
        puVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_1b0 = *puVar21;
        FUN_02a44274(lVar20 + 0xd8,&local_1b0);
      }
    }
    if (plVar23 == (long *)0x0) goto LAB_026461c4;
    FUN_01a85de0(plVar23);
    FUN_01a831dc(plVar23);
    FUN_01a831dc(plVar23);
    fVar24 = extraout_s0 * extraout_s0_00;
    fVar26 = extraout_var * extraout_var_00;
    auVar28._4_4_ = fVar26;
    auVar28._0_4_ = fVar24;
    auVar28._8_4_ = extraout_var_02 * extraout_var_03;
    auVar28._12_4_ = extraout_var_05 * extraout_var_06;
    auVar7._4_4_ = fVar26;
    auVar7._0_4_ = fVar24;
    auVar7._8_4_ = extraout_var_02 * extraout_var_03;
    auVar7._12_4_ = extraout_var_05 * extraout_var_06;
    auVar28 = NEON_ext(auVar28,auVar7,8,1);
    fVar26 = auVar28._0_4_ + fVar24 + auVar28._4_4_ + fVar26;
    fVar24 = -1.0;
    if (-1.0 <= fVar26) {
      fVar24 = fVar26;
    }
    fVar24 = (float)FUN_0095d8f0(fVar24);
    puVar12 = PTR_DAT_04379660;
    local_140 = 4;
    local_138 = (long *)0x0;
    local_150 = (ulong *)0x7b1672169b2cf48f;
    puStack_148 = &DAT_03922a26;
    local_1b0 = 0x612b8ab3ab57ce36;
    pcStack_1a8 = "move_look_at_magin_deg";
    local_1a0 = (long *)&DAT_00000016;
    local_198 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar14 = PTR_DAT_04379670;
    puVar13 = PTR_DAT_04379668;
    uVar17 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar17;
    FUN_00d7d9e4(&local_1e0,uVar17,&local_150);
    if (local_1e0 == (ulong *)0x0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = (float)FUN_00d7905c(local_1e0,&local_1b0);
      if (local_1e0 != (ulong *)0x0) {
        puVar21 = local_1e0 + 10;
        do {
          iVar16 = (int)*puVar21 + -1;
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(puVar21,0x10);
          if (bVar22) {
            *(int *)puVar21 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_1e0 + 0x10))();
        }
      }
    }
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x20))();
    }
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    if (fVar26 < fVar24) {
      FUN_01a833d4(plVar23);
      fVar26 = extraout_s0 * extraout_s0_01;
      fVar27 = extraout_var * extraout_var_01;
      auVar8._4_4_ = fVar27;
      auVar8._0_4_ = fVar26;
      auVar8._8_4_ = extraout_var_02 * extraout_var_04;
      auVar8._12_4_ = extraout_var_05 * extraout_var_07;
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar26;
      auVar9._8_4_ = extraout_var_02 * extraout_var_04;
      auVar9._12_4_ = extraout_var_05 * extraout_var_07;
      auVar28 = NEON_ext(auVar8,auVar9,8,1);
      local_110 = (ulong *)0x0;
      local_108 = 0;
      local_120 = (ulong *)0x0;
      uStack_118 = 0;
      local_130 = (ulong *)0x0;
      uStack_128 = 0;
      local_100 = 0;
      local_140 = 0;
      local_138 = (long *)0x0;
      uStack_fc = 0x3f800000;
      uStack_f8 = 0x3f800000;
      local_150 = (ulong *)CONCAT44(local_150._4_4_,3);
      local_1a0 = (long *)0x4;
      local_198 = (long *)0x0;
      local_1e0 = (ulong *)0x48f26048e1252b38;
      pcStack_1d8 = "move_look_at_rotation_rate";
      local_1b0 = 0x7b1672169b2cf48f;
      pcStack_1a8 = "ride";
      if (auVar28._0_4_ + fVar26 + auVar28._4_4_ + fVar27 <= 0.0) {
        fVar24 = -fVar24;
      }
      local_1d0 = 0x1a;
      local_1c8 = (long *)0x0;
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar17 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar14 = uVar17;
      FUN_00d7d9e4(&local_1c0,uVar17,&local_1b0);
      if (local_1c0 == (long *)0x0) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = (float)FUN_00d7905c(local_1c0,&local_1e0);
        if (local_1c0 != (long *)0x0) {
          plVar3 = local_1c0 + 10;
          do {
            iVar16 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar22) {
              *(int *)plVar3 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_1c0 + 0x10))();
          }
        }
      }
      local_108 = CONCAT44(local_108._4_4_,fVar24 * fVar26);
      if (local_1c8 != (long *)0x0) {
        (**(code **)(*local_1c8 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      local_1a0 = (long *)0x4;
      local_198 = (long *)0x0;
      local_1e0 = (ulong *)0x69a6dd594d8f897c;
      pcStack_1d8 = "move_look_at_rotation_max";
      local_1b0 = 0x7b1672169b2cf48f;
      pcStack_1a8 = "ride";
      local_1d0 = 0x19;
      local_1c8 = (long *)0x0;
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar17 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar14 = uVar17;
      FUN_00d7d9e4(&local_1c0,uVar17,&local_1b0);
      if (local_1c0 == (long *)0x0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = (float)FUN_00d7905c(local_1c0,&local_1e0);
        if (local_1c0 != (long *)0x0) {
          plVar3 = local_1c0 + 10;
          do {
            iVar16 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar22) {
              *(int *)plVar3 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_1c0 + 0x10))();
          }
        }
      }
      if (local_1c8 != (long *)0x0) {
        (**(code **)(*local_1c8 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      local_1b0 = CONCAT44(local_1b0._4_4_,-fVar24);
      puVar21 = local_88;
      if ((float)local_108 <= fVar24) {
        puVar21 = &local_108;
      }
      local_88[0] = CONCAT44(local_88[0]._4_4_,fVar24);
      if ((float)local_108 < -fVar24) {
        puVar21 = &local_1b0;
      }
      local_1b0 = 0x7b1672169b2cf48f;
      pcStack_1a8 = "ride";
      local_108 = CONCAT44(local_108._4_4_,(int)*puVar21);
      local_1a0 = (long *)0x4;
      local_198 = (long *)0x0;
      local_1e0 = (ulong *)0xe2f02577566bffb5;
      pcStack_1d8 = "move_look_at_speed_rate";
      local_1d0 = 0x17;
      local_1c8 = (long *)0x0;
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar17 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar14 = uVar17;
      FUN_00d7d9e4(&local_1c0,uVar17,&local_1b0);
      if (local_1c0 == (long *)0x0) {
        uVar25 = 0;
      }
      else {
        uVar25 = FUN_00d7905c(local_1c0,&local_1e0);
        if (local_1c0 != (long *)0x0) {
          plVar3 = local_1c0 + 10;
          do {
            iVar16 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar22) {
              *(int *)plVar3 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_1c0 + 0x10))();
          }
        }
      }
      uStack_fc = uVar25;
      if (local_1c8 != (long *)0x0) {
        (**(code **)(*local_1c8 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      local_1a0 = (long *)&DAT_00000004;
      local_198 = (long *)0x0;
      local_1e0 = (ulong *)0x96d03a6866aab804;
      pcStack_1d8 = "move_look_at_disable_speed_rate";
      local_1b0 = 0x7b1672169b2cf48f;
      pcStack_1a8 = "ride";
      local_1d0 = 0x1f;
      local_1c8 = (long *)0x0;
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar17 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar14 = uVar17;
      FUN_00d7d9e4(&local_1c0,uVar17,&local_1b0);
      if (local_1c0 == (long *)0x0) {
        uVar25 = 0;
      }
      else {
        uVar25 = FUN_00d7905c(local_1c0,&local_1e0);
        if (local_1c0 != (long *)0x0) {
          plVar3 = local_1c0 + 10;
          do {
            iVar16 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar22) {
              *(int *)plVar3 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_1c0 + 0x10))();
          }
        }
      }
      uStack_f8 = uVar25;
      if (local_1c8 != (long *)0x0) {
        (**(code **)(*local_1c8 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      FUN_0264752c(lVar18,&local_150);
      if (local_110 != (ulong *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      puVar21 = local_120;
      if (local_120 != (ulong *)0x0) {
        puVar1 = local_120 + 1;
        do {
          iVar16 = (int)*puVar1 + -1;
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar22) {
            *(int *)puVar1 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_1b0 = *puVar21;
          FUN_02a44274(lVar18 + 0xd8,&local_1b0);
        }
      }
      puVar21 = local_130;
      if (local_130 != (ulong *)0x0) {
        puVar1 = local_130 + 1;
        do {
          iVar16 = (int)*puVar1 + -1;
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar22) {
            *(int *)puVar1 = iVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_1b0 = *puVar21;
          FUN_02a44274(lVar18 + 0xd8,&local_1b0);
        }
      }
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    lVar18 = plVar23[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      if (bVar22) goto LAB_02646328;
      goto LAB_026461c4;
    }
    if (!bVar22) goto LAB_026461c4;
LAB_02646328:
    (**(code **)(*local_98 + 0x100))(local_98,2,param_1 + 0x270);
  }
  if (local_98 != (long *)0x0) {
    lVar18 = local_98[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar22) {
        *piVar2 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x026461fc:
  if (local_90 != (long *)0x0) {
    lVar18 = local_90[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar22) {
        *piVar2 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


