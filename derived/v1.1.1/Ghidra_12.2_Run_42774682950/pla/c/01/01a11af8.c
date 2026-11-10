/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a11af8; name: FUN_01a11af8
 */


void FUN_01a11af8(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long *local_1a0;
  char *local_198;
  undefined8 local_190;
  long *local_188;
  undefined8 *local_180;
  char *local_178;
  undefined8 local_170;
  long *plStack_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  byte local_9c;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  lVar16 = *(long *)(param_2 + 0x108);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar11 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      lVar12 = FUN_019fbc2c();
      while( true ) {
        if (plVar18 == (long *)0x0) {
          return;
        }
        if (plVar18 == (long *)lVar12) break;
        plVar18 = (long *)*plVar18;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_00b63bec(&local_88,lVar16 + 0x1c0);
          if (local_88 == (undefined8 *)0x0) goto LAB_01a11bbc;
          FUN_00b911c4(&local_110);
          plVar18 = local_110;
          puVar7 = PTR_DAT_043794a8;
          puVar6 = PTR_DAT_04379498;
          puVar5 = local_88;
          if (local_110 == (long *)0x0) goto joined_r0x01a125b8;
          if (*(long *)(*param_1 + 0x710) == 0) {
            local_110 = (long *)0x0;
          }
          else {
            FUN_016c1a7c(&local_110);
          }
          plVar9 = local_110;
          uVar13 = FUN_01ba3f1c(plVar18);
          if ((((uVar13 & 1) != 0) && (uVar13 = FUN_01ba085c(plVar18), (uVar13 & 1) == 0)) &&
             (lVar12 = *param_1, *(char *)(lVar12 + 0x638) == '\0')) {
            if (1.1920929e-07 < *(float *)(lVar12 + 0x61c)) {
              if ((plVar9 != (long *)0x0) &&
                 (*(float *)(lVar12 + 0x618) / *(float *)(lVar12 + 0x61c) <= 1.0))
              goto LAB_01a11c6c;
            }
            else if (plVar9 != (long *)0x0) {
LAB_01a11c6c:
              local_d8._2_6_ = (uint6)((ulong)local_d8 >> 0x10) & 0xffff;
              local_d0 = local_d0 & 0xffffffffffffff00;
              local_c8 = &DAT_cbf29ce484222645;
              local_c0 = &DAT_cbf29ce484222645;
              local_a8 = CONCAT31(local_a8._1_3_,1);
              local_d8 = (ulong)local_d8._2_6_ << 0x10;
              local_e0 = 0;
              local_b8 = local_b8 & 0xffffffff00000000;
              local_b0 = 0;
              local_a4 = 0x3f800000;
              uStack_a0 = 0;
              local_9c = 0;
              local_110 = (long *)0x0;
              uStack_108 = 0;
              local_100 = (long *)0x0;
              uStack_f8 = 0;
              local_160 = (undefined8 *)0x0;
              uStack_158 = 0;
              FUN_00b63bec(&local_160,&local_88);
              FUN_01b99bcc(&local_150,&local_160);
              puVar5 = local_160;
              if (local_160 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_160 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  local_160[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_180 = (undefined8 *)*puVar5;
                  FUN_02a44274(lVar12 + 0xd8,&local_180);
                }
              }
              local_170 = 0;
              local_180 = *(undefined8 **)(param_2 + 0x10);
              plStack_168 = (long *)0x0;
              local_178 = *(char **)(param_2 + 0x18);
              FUN_01b759f4(*(undefined8 *)param_1[1]);
              local_170 = CONCAT44(extraout_var,extraout_s0);
              plStack_168 = (long *)extraout_var_00;
              bVar10 = FUN_01ba2780(plVar18,&local_180);
              local_9c = bVar10 & 1;
              if ((bVar10 & 1) == 0) {
                FUN_01b774b4(*(undefined8 *)param_1[1],0x5c3d53bbfb017dc0);
                local_1a0 = (long *)0x3fbcd3ec3d64c337;
                local_198 = "PLAY_BA_SYS_BALL_HIT";
                local_190 = 0x14;
                local_188 = (long *)0x0;
                FUN_01b77f14(*(undefined8 *)param_1[1],&local_1a0);
                if (local_188 != (long *)0x0) {
                  (**(code **)(*local_188 + 0x20))();
                }
              }
              else {
                FUN_01b774b4(*(undefined8 *)param_1[1],0x4002143b5f8dc2b8);
                local_1a0 = (long *)0xfe0d31d11808e619;
                local_198 = "PLAY_BA_SYS_BALL_HIT_BACKSTRIKE";
                local_190 = 0x1f;
                local_188 = (long *)0x0;
                FUN_01b77f14(*(undefined8 *)param_1[1],&local_1a0);
                if (local_188 != (long *)0x0) {
                  (**(code **)(*local_188 + 0x20))();
                }
                FUN_01b7875c(*(undefined8 *)param_1[1],0xb68208c875913a55);
                FUN_01b77558(*(undefined8 *)param_1[1],0);
              }
              FUN_01ba3a60(plVar18,local_9c);
              local_e8 = *(undefined8 *)(param_2 + 0x18);
              local_f0 = *(undefined8 *)(param_2 + 0x10);
              FUN_01b3a354(&local_180,plVar18);
              FUN_0095a500(&local_100,&local_180);
              puVar5 = local_180;
              if (local_180 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_180 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  local_180[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_1a0 = (long *)*puVar5;
                  FUN_02a44274(lVar12 + 0xd8,&local_1a0);
                }
              }
              (**(code **)(*(long *)*param_1 + 0x18))(&local_180);
              local_1a0 = (long *)0x0;
              local_198 = (char *)0x0;
              do {
                pcVar17 = local_178;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(&local_178,0x10);
                if (bVar4) {
                  local_178 = (char *)0x0;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (((*puVar6 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              uVar14 = *(undefined8 *)PTR_DAT_043794a0;
              *(undefined8 *)puVar7 = uVar14;
              FUN_02a44e0c(&local_78,uVar14,pcVar17);
              puVar5 = local_180;
              local_180 = (undefined8 *)0x0;
              if (puVar5 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar5 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar5[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_70[0] = (long *)*puVar5;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              plVar8 = local_1a0;
              local_1a0 = (long *)0x0;
              if (local_78 == (long *)0x0) {
                if (plVar8 != (long *)0x0) {
                  plVar15 = plVar8 + 1;
                  do {
                    lVar12 = *plVar15;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *(int *)plVar15 = (int)lVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((int)lVar12 == 1) {
                    plVar8[2] = 0;
                    if (((*puVar6 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)puVar7 = lVar12;
                    local_70[0] = (long *)*plVar8;
                    FUN_02a44274(lVar12 + 0xd8,local_70);
                  }
                }
                pcVar17 = (char *)0x0;
              }
              else {
                plVar15 = local_78;
                if (plVar8 != (long *)0x0) {
                  plVar15 = plVar8 + 1;
                  do {
                    iVar11 = (int)*plVar15 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *(int *)plVar15 = iVar11;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 == 0) {
                    plVar8[2] = 0;
                    if (((*puVar6 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)puVar7 = lVar12;
                    local_70[0] = (long *)*plVar8;
                    FUN_02a44274(lVar12 + 0xd8,local_70);
                  }
                  plVar15 = local_78;
                }
                local_78 = (long *)0x0;
                local_1a0 = plVar15;
              }
              plVar8 = local_78;
              local_198 = pcVar17;
              if (local_78 != (long *)0x0) {
                plVar15 = local_78 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_78[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_70[0] = (long *)*plVar8;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              puVar5 = local_180;
              if (local_180 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_180 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  local_180[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_70[0] = (long *)*puVar5;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              do {
                pcVar17 = local_198;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(&local_198,0x10);
                if (bVar4) {
                  local_198 = (char *)0x0;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (((*puVar6 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              uVar14 = *(undefined8 *)PTR_DAT_043794a0;
              *(undefined8 *)puVar7 = uVar14;
              FUN_02a44e0c(local_70,uVar14,pcVar17);
              plVar8 = local_1a0;
              local_1a0 = (long *)0x0;
              if (plVar8 != (long *)0x0) {
                plVar15 = plVar8 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  plVar8[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_180 = (undefined8 *)*plVar8;
                  FUN_02a44274(lVar12 + 0xd8,&local_180);
                }
              }
              plVar8 = local_110;
              local_110 = (long *)0x0;
              if (local_70[0] == (long *)0x0) {
                if (plVar8 != (long *)0x0) {
                  plVar15 = plVar8 + 1;
                  do {
                    lVar12 = *plVar15;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *(int *)plVar15 = (int)lVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((int)lVar12 == 1) {
                    plVar8[2] = 0;
                    if (((*puVar6 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)puVar7 = lVar12;
                    local_180 = (undefined8 *)*plVar8;
                    FUN_02a44274(lVar12 + 0xd8,&local_180);
                  }
                }
                pcVar17 = (char *)0x0;
              }
              else {
                plVar15 = local_70[0];
                if (plVar8 != (long *)0x0) {
                  plVar15 = plVar8 + 1;
                  do {
                    iVar11 = (int)*plVar15 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *(int *)plVar15 = iVar11;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 == 0) {
                    plVar8[2] = 0;
                    if (((*puVar6 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)puVar7 = lVar12;
                    local_180 = (undefined8 *)*plVar8;
                    FUN_02a44274(lVar12 + 0xd8,&local_180);
                  }
                  plVar15 = local_70[0];
                }
                local_70[0] = (long *)0x0;
                local_110 = plVar15;
              }
              plVar8 = local_70[0];
              *(char **)((ulong)&local_110 | 8) = pcVar17;
              if (local_70[0] != (long *)0x0) {
                plVar15 = local_70[0] + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_70[0][2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_180 = (undefined8 *)*plVar8;
                  FUN_02a44274(lVar12 + 0xd8,&local_180);
                }
              }
              plVar8 = local_1a0;
              if (local_1a0 != (long *)0x0) {
                plVar15 = local_1a0 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_1a0[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_180 = (undefined8 *)*plVar8;
                  FUN_02a44274(lVar12 + 0xd8,&local_180);
                }
              }
              local_e0 = local_150;
              local_d8 = uStack_148;
              local_d0 = local_140;
              local_c8 = (undefined1 *)uStack_138;
              local_b0 = local_120;
              local_a8 = (undefined4)uStack_118;
              local_a4 = (undefined4)((ulong)uStack_118 >> 0x20);
              local_c0 = (undefined1 *)local_130;
              local_b8 = uStack_128;
              if (((*PTR_DAT_04379558 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
              FUN_01148a98(&local_1a0);
              local_180 = (undefined8 *)0x52daf76250fe632a;
              local_178 = "WSYS_U_RANK";
              local_170 = 0xb;
              plStack_168 = (long *)0x0;
              uStack_a0 = FUN_010f5878(local_1a0,&local_180);
              if (plStack_168 != (long *)0x0) {
                (**(code **)(*plStack_168 + 0x20))();
              }
              if (local_1a0 != (long *)0x0) {
                lVar12 = local_1a0[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_1a0 + 0x20))();
                }
              }
              FUN_0190ab98(plVar9,&local_110);
              FUN_01b75374(*param_1);
              FUN_01b78e00(*(undefined8 *)param_1[1],param_2);
              FUN_01b780b4(0x3eaaaaab,*(undefined8 *)param_1[1],param_2);
              plVar8 = local_100;
              if (local_100 != (long *)0x0) {
                plVar15 = local_100 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_100[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_150 = *plVar8;
                  FUN_02a44274(lVar12 + 0xd8,&local_150);
                }
              }
              plVar8 = local_110;
              if (local_110 != (long *)0x0) {
                plVar15 = local_110 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_110[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_150 = *plVar8;
                  FUN_02a44274(lVar12 + 0xd8,&local_150);
                }
              }
LAB_01a12350:
              lVar12 = plVar9[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))(plVar9);
              }
LAB_01a1236c:
              lVar12 = plVar18[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              puVar5 = local_88;
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
                puVar5 = local_88;
              }
joined_r0x01a125b8:
              local_88 = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar5 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar5[2] = 0;
                  if (((*puVar6 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)puVar7 = lVar12;
                  local_110 = (long *)*puVar5;
                  FUN_02a44274(lVar12 + 0xd8,&local_110);
                }
              }
LAB_01a11bbc:
              lVar12 = *(long *)(lVar16 + 8);
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))((long *)(lVar16 + -0x50));
                return;
              }
              return;
            }
          }
          FUN_01b74a84(*(undefined8 *)param_1[1],param_2);
          FUN_01b7805c(*(undefined8 *)param_1[1]);
          FUN_01b780b4(0x3eaaaaab,*(undefined8 *)param_1[1],param_2);
          if (plVar9 != (long *)0x0) goto LAB_01a12350;
          goto LAB_01a1236c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


