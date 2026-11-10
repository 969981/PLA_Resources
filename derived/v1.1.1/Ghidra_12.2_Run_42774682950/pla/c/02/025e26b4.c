/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e26b4; name: FUN_025e26b4
 */


undefined8 FUN_025e26b4(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 in_q3 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 *local_190;
  char *local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  undefined8 local_168;
  uint5 local_160;
  undefined3 uStack_15b;
  long *local_158;
  ulong *local_150 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  ulong local_f0 [2];
  undefined8 *local_e0 [2];
  undefined8 *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_98;
  long *local_90 [2];
  long *local_78;
  
  uVar33 = in_q3._8_8_;
  uVar27 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return 0;
  }
  FUN_00cfac20(&local_78);
  if (local_78 == (long *)0x0) {
    return 0;
  }
  FUN_01aef8b8(local_150);
  if (local_150[0] == (ulong *)0x0) {
    local_90[0] = (long *)0x0;
LAB_025e2740:
    if (local_90[0] == (long *)0x0) goto LAB_025e2abc;
LAB_025e2748:
    FUN_01aeda28(local_150,local_78);
    if (local_150[0] == (ulong *)0x0) {
      local_98 = (long *)0x0;
LAB_025e2760:
      if (local_98 == (long *)0x0) goto LAB_025e2b3c;
LAB_025e2768:
      FUN_01f2bf7c(local_f0);
      if ((char)local_f0[0] != '\0') {
        uVar22 = FUN_01f2b1e8(local_e0);
        if (((uVar22 & 1) == 0) && (uVar22 = FUN_01f32e34(local_98), (uVar22 & 1) == 0)) {
          if ((local_d0 != (undefined8 *)0x0) &&
             (FUN_00b911c4(local_150), puVar17 = local_150[0], local_150[0] != (ulong *)0x0)) {
            local_100 = 0;
            local_110 = (long *)0x0;
            uStack_108 = 0;
            uStack_fc = 0x3f800000;
            local_f8 = 0x3f800000;
            local_150[0] = (ulong *)CONCAT44(local_150[0]._4_4_,4);
            local_120 = (undefined8 *)0x0;
            uStack_118 = 0;
            local_130 = (undefined8 *)0x0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            (**(code **)(*puVar17 + 0x10))(&local_170,puVar17);
            local_190 = (undefined8 *)0x0;
            local_188 = (char *)0x0;
            FUN_00946790(&local_190,&local_170);
            plVar26 = local_170;
            if (local_170 != (long *)0x0) {
              plVar3 = local_170 + 1;
              do {
                iVar18 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar18;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 == 0) {
                local_170[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_1b0 = *plVar26;
                FUN_02a44274(lVar23 + 0xd8,&local_1b0);
              }
            }
            FUN_00bfffdc(&local_130,&local_190);
            puVar13 = local_190;
            if (local_190 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_190 + 1);
              do {
                iVar18 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 + -1 == 0) {
                local_190[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_170 = (long *)*puVar13;
                FUN_02a44274(lVar23 + 0xd8,&local_170);
              }
            }
            FUN_025e2110(param_1 + 0x260,local_150);
            (**(code **)(*puVar17 + 0x10))(&local_170,puVar17);
            local_190 = (undefined8 *)0x0;
            local_188 = (char *)0x0;
            FUN_00946790(&local_190,&local_170);
            plVar26 = local_170;
            if (local_170 != (long *)0x0) {
              plVar3 = local_170 + 1;
              do {
                iVar18 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar18;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 == 0) {
                local_170[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_1b0 = *plVar26;
                FUN_02a44274(lVar23 + 0xd8,&local_1b0);
              }
            }
            FUN_00b6081c(param_1 + 0x2d8,&local_190);
            puVar13 = local_190;
            if (local_190 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_190 + 1);
              do {
                iVar18 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 + -1 == 0) {
                local_190[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_170 = (long *)*puVar13;
                FUN_02a44274(lVar23 + 0xd8,&local_170);
              }
            }
            if (0 < *(int *)(param_1 + 0x2f4)) {
              *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + -1;
            }
            if (0 < *(int *)(param_1 + 0x2ec)) {
              *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + -1;
            }
            puVar14 = PTR_DAT_04379660;
            iVar18 = *(int *)(param_1 + 0x2d0);
            local_170 = (long *)0x18314d7c7ad72a27;
            local_168 = "look_wild_face_delay_frame";
            _local_160 = 0x1a;
            local_158 = (long *)0x0;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            puVar16 = PTR_DAT_04379670;
            puVar15 = PTR_DAT_04379668;
            lVar23 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar23;
            uVar22 = *(ulong *)(lVar23 + 0x60);
            if (uVar22 != 0) {
              uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
              uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar24 < 2) {
                uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
              }
              else {
                uVar25 = 0xdda9f413319d82e4;
                if (uVar22 < 0xdda9f413319d82e5) {
                  uVar25 = 0;
                  if (uVar22 != 0) {
                    uVar25 = 0xdda9f413319d82e4 / uVar22;
                  }
                  uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
                }
              }
              plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
              if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0))
              {
                if (uVar24 < 2) {
                  do {
                    if (plVar26[1] == 0xdda9f413319d82e4) {
                      if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e2f60;
                    }
                    else if ((plVar26[1] & uVar22 - 1) != uVar25) goto LAB_025e3f74;
                    plVar26 = (long *)*plVar26;
                    iVar19 = 0;
                  } while (plVar26 != (long *)0x0);
                  goto joined_r0x025e3a44;
                }
                do {
                  uVar24 = plVar26[1];
                  if (uVar24 == 0xdda9f413319d82e4) {
                    if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e2f60;
                  }
                  else {
                    if (uVar22 <= uVar24) {
                      uVar7 = 0;
                      if (uVar22 != 0) {
                        uVar7 = uVar24 / uVar22;
                      }
                      uVar24 = uVar24 - uVar7 * uVar22;
                    }
                    if (uVar24 != uVar25) break;
                  }
                  plVar26 = (long *)*plVar26;
                } while (plVar26 != (long *)0x0);
              }
            }
            goto LAB_025e3f74;
          }
          local_f8 = 0x3f800000;
          local_130 = (undefined8 *)0x0;
          uStack_128 = 0;
          local_150[0] = (ulong *)((ulong)local_150[0] & 0xffffffff00000000);
          local_120 = (undefined8 *)0x0;
          uStack_118 = 0;
          local_110 = (long *)0x0;
          uStack_108 = 0;
          local_140 = local_c0;
          uStack_138 = uStack_b8;
          local_100 = 0;
          uStack_fc = 0x3f800000;
          FUN_025e2110(param_1 + 0x260,local_150);
          if (local_110 != (long *)0x0) {
            (**(code **)(*local_110 + 0x20))();
          }
          puVar13 = local_120;
          if (local_120 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_120 + 1);
            do {
              iVar18 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar18 + -1 == 0) {
              local_120[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_170 = (long *)*puVar13;
              FUN_02a44274(lVar23 + 0xd8,&local_170);
            }
          }
          puVar13 = local_130;
          if (local_130 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_130 + 1);
            do {
              iVar18 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar18 + -1 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_170 = (long *)*puVar13;
              FUN_02a44274(lVar23 + 0xd8,&local_170);
            }
          }
          goto LAB_025e2928;
        }
        uVar27 = 0;
        puVar13 = local_d0;
        goto joined_r0x025e2930;
      }
      uVar27 = 0;
      goto joined_r0x025e29fc;
    }
    FUN_009b8830(&local_98);
    puVar17 = local_150[0];
    if (local_150[0] == (ulong *)0x0) goto LAB_025e2760;
    puVar2 = local_150[0] + 1;
    do {
      iVar18 = (int)*puVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *(int *)puVar2 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 != 0) goto LAB_025e2760;
    local_150[0][2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar23 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar23;
    local_f0[0] = *puVar17;
    FUN_02a44274(lVar23 + 0xd8,local_f0);
    if (local_98 != (long *)0x0) goto LAB_025e2768;
LAB_025e2b3c:
    uVar27 = 0;
    goto joined_r0x025e27a8;
  }
  FUN_016c3724(local_90);
  puVar17 = local_150[0];
  if (local_150[0] == (ulong *)0x0) goto LAB_025e2740;
  puVar2 = local_150[0] + 1;
  do {
    iVar18 = (int)*puVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *(int *)puVar2 = iVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar18 != 0) goto LAB_025e2740;
  local_150[0][2] = 0;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar23 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar23;
  local_f0[0] = *puVar17;
  FUN_02a44274(lVar23 + 0xd8,local_f0);
  if (local_90[0] != (long *)0x0) goto LAB_025e2748;
LAB_025e2abc:
  uVar27 = 0;
  if (local_78 == (long *)0x0) {
    return 0;
  }
  goto LAB_025e27d0;
LAB_025e2f60:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e3f74:
    iVar19 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar19 = FUN_00d78f50(plVar26,&local_170);
    do {
      iVar21 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar21;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
joined_r0x025e3a44:
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (iVar19 <= iVar18) {
    local_170 = (long *)&DAT_90ddafe7976f244a;
    local_168 = "wildpokemon_reaction_distance";
    _local_160 = 0x1d;
    local_158 = (long *)0x0;
    if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar23 = *(long *)puVar15;
    *(long *)puVar16 = lVar23;
    uVar22 = *(ulong *)(lVar23 + 0x60);
    fVar28 = 0.0;
    if (uVar22 != 0) {
      uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar25 = 0xdda9f413319d82e4;
        if (uVar22 < 0xdda9f413319d82e5) {
          uVar25 = 0;
          if (uVar22 != 0) {
            uVar25 = 0xdda9f413319d82e4 / uVar22;
          }
          uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar24 < 2) {
          do {
            if (plVar26[1] == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e307c;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e307c;
            }
            else {
              if (uVar22 <= uVar24) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar7 * uVar22;
              }
              if (uVar24 != uVar25) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto joined_r0x025e3a60;
  }
  goto joined_r0x025e5b1c;
LAB_025e307c:
  plVar26 = (long *)plVar26[3];
  if (plVar26 != (long *)0x0) {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    fVar28 = (float)FUN_00d7905c(plVar26,&local_170);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
joined_r0x025e3a60:
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  FUN_009c69bc(&local_170,local_78);
  (**(code **)(*local_170 + 0x40))();
  uVar32 = uVar27;
  uVar34 = uVar33;
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  fVar29 = (float)FUN_01a75574(local_78);
  fVar30 = (float)FUN_01a75574(puVar17);
  FUN_009c69bc(&local_170,puVar17);
  local_1e0 = (float)uVar27;
  fStack_1dc = (float)((ulong)uVar27 >> 0x20);
  fStack_1d8 = (float)uVar33;
  fStack_1d4 = (float)((ulong)uVar33 >> 0x20);
  local_1e0 = local_1e0 - (float)local_170[0x1a];
  fStack_1dc = fStack_1dc - (float)((ulong)local_170[0x1a] >> 0x20);
  fStack_1d8 = fStack_1d8 - (float)local_170[0x1b];
  fStack_1d4 = fStack_1d4 - (float)((ulong)local_170[0x1b] >> 0x20);
  local_1e0 = local_1e0 * local_1e0;
  fStack_1dc = fStack_1dc * fStack_1dc;
  fStack_1d8 = fStack_1d8 * fStack_1d8;
  fStack_1d4 = fStack_1d4 * fStack_1d4;
  auVar31._4_4_ = fStack_1dc;
  auVar31._0_4_ = local_1e0;
  auVar31._8_4_ = fStack_1d8;
  auVar31._12_4_ = fStack_1d4;
  auVar8._4_4_ = fStack_1dc;
  auVar8._0_4_ = local_1e0;
  auVar8._8_4_ = fStack_1d8;
  auVar8._12_4_ = fStack_1d4;
  auVar31 = NEON_ext(auVar31,auVar8,8,1);
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if ((((auVar31._0_4_ + local_1e0 + auVar31._4_4_ + fStack_1dc) - fVar29 * fVar29) -
       fVar30 * fVar30 < fVar28 * fVar28) &&
     ((iVar18 = FUN_01b9a14c(puVar17), iVar18 == 7 || (iVar18 == 4)))) {
    if (*(int *)(param_1 + 0x2ec) == 0) {
      iVar18 = *(int *)(param_1 + 0x2e8);
      if (iVar18 == 0) {
        local_168 = "wildpokemon_sleep_reaction_frame_min";
        local_170 = (long *)0x759c89da2d8c751d;
        _local_160 = 0x24;
        local_158 = (long *)0x0;
        if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0))
        {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar23 = *(long *)puVar15;
        *(long *)puVar16 = lVar23;
        uVar22 = *(ulong *)(lVar23 + 0x60);
        if (uVar22 != 0) {
          uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
          uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar24 < 2) {
            uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar25 = 0xdda9f413319d82e4;
            if (uVar22 < 0xdda9f413319d82e5) {
              uVar25 = 0;
              if (uVar22 != 0) {
                uVar25 = 0xdda9f413319d82e4 / uVar22;
              }
              uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
            }
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            if (uVar24 < 2) {
              do {
                if (plVar26[1] == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4c2c;
                }
                else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4c2c;
                }
                else {
                  if (uVar22 <= uVar24) {
                    uVar7 = 0;
                    if (uVar22 != 0) {
                      uVar7 = uVar24 / uVar22;
                    }
                    uVar24 = uVar24 - uVar7 * uVar22;
                  }
                  if (uVar24 != uVar25) break;
                }
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
        }
        goto LAB_025e4c80;
      }
      if ((0 < iVar18) && (*(int *)(param_1 + 0x2e8) = iVar18 + -1, iVar18 + -1 == 0)) {
        local_170 = (long *)0x0;
        local_168 = (char *)CONCAT35(local_168._5_3_,4);
        local_160 = (uint5)(uint)local_160;
        local_158._0_5_ = (uint5)(uint)local_158;
        local_170 = (long *)FUN_025d3e08(local_90[0]);
        local_178 = (long *)0x0;
        local_190 = (undefined8 *)0x32b17789b5bf7a6;
        local_188 = "wildpokemon_sleep_reaction_keep_frame";
        local_180 = 0x25;
        if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0))
        {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar23 = *(long *)puVar15;
        *(long *)puVar16 = lVar23;
        uVar22 = *(ulong *)(lVar23 + 0x60);
        if (uVar22 != 0) {
          uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
          uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar24 < 2) {
            uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar25 = 0xdda9f413319d82e4;
            if (uVar22 < 0xdda9f413319d82e5) {
              uVar25 = 0;
              if (uVar22 != 0) {
                uVar25 = 0xdda9f413319d82e4 / uVar22;
              }
              uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
            }
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            if (uVar24 < 2) {
              do {
                if (plVar26[1] == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e47b8;
                }
                else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e47b8;
                }
                else {
                  if (uVar22 <= uVar24) {
                    uVar7 = 0;
                    if (uVar22 != 0) {
                      uVar7 = uVar24 / uVar22;
                    }
                    uVar24 = uVar24 - uVar7 * uVar22;
                  }
                  if (uVar24 != uVar25) break;
                }
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
        }
        goto LAB_025e480c;
      }
    }
    goto LAB_025e5a64;
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  iVar18 = FUN_01b9a164(puVar17);
  if (iVar18 == 3) {
    local_170 = (long *)&DAT_7ddd77d5d279781d;
    local_168 = "wildpokemon_mild_reaction_distance";
    _local_160 = 0x22;
    local_158 = (long *)0x0;
    if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar23 = *(long *)puVar15;
    *(long *)puVar16 = lVar23;
    uVar22 = *(ulong *)(lVar23 + 0x60);
    fVar28 = 0.0;
    if (uVar22 != 0) {
      uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar25 = 0xdda9f413319d82e4;
        if (uVar22 < 0xdda9f413319d82e5) {
          uVar25 = 0;
          if (uVar22 != 0) {
            uVar25 = 0xdda9f413319d82e4 / uVar22;
          }
          uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar24 < 2) {
          do {
            if (plVar26[1] == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e3394;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e3394;
            }
            else {
              if (uVar22 <= uVar24) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar7 * uVar22;
              }
              if (uVar24 != uVar25) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto joined_r0x025e3ab8;
  }
  if (iVar18 == 2) {
    local_170 = (long *)&DAT_9b2165d58450b1e3;
    local_168 = "wildpokemon_coward_reaction_distance";
    _local_160 = 0x24;
    local_158 = (long *)0x0;
    if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar23 = *(long *)puVar15;
    *(long *)puVar16 = lVar23;
    uVar22 = *(ulong *)(lVar23 + 0x60);
    fVar28 = 0.0;
    if (uVar22 != 0) {
      uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar25 = 0xdda9f413319d82e4;
        if (uVar22 < 0xdda9f413319d82e5) {
          uVar25 = 0;
          if (uVar22 != 0) {
            uVar25 = 0xdda9f413319d82e4 / uVar22;
          }
          uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar24 < 2) {
          do {
            if (plVar26[1] == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e3588;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e3588;
            }
            else {
              if (uVar22 <= uVar24) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar7 * uVar22;
              }
              if (uVar24 != uVar25) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto joined_r0x025e3bc0;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  uVar22 = puVar17[0x153] & 0xfffffffffffffff1;
  goto LAB_025e31bc;
LAB_025e4c2c:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4c80:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_170);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  iVar18 = FUN_025e2580(uVar20);
  local_190 = (undefined8 *)0x758093da2d740b63;
  local_188 = "wildpokemon_sleep_reaction_frame_max";
  local_180 = 0x24;
  local_178 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5344;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5344;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5398:
  iVar19 = 0;
  goto LAB_025e539c;
LAB_025e5344:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5398;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar26,&local_190);
  do {
    iVar21 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar21;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
LAB_025e539c:
  local_1a8 = "wildpokemon_sleep_reaction_frame_min";
  local_1b0 = 0x759c89da2d8c751d;
  local_1a0 = 0x24;
  local_198 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e59c0;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e59c0;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5a14:
  iVar21 = 0;
LAB_025e5a18:
  iVar19 = FUN_025e2580(iVar19 - iVar21);
  *(int *)(param_1 + 0x2e8) = iVar19 + iVar18;
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
LAB_025e5a64:
  local_190 = (undefined8 *)0xdda9f413319d82e4;
  local_188 = "player_face";
  local_180 = 0xb;
  local_178 = (long *)0x0;
  local_1b0 = -0x38272c25a5404ef7;
  local_1a8 = "face_wild_poke_sleep_base";
  local_168 = (char *)CONCAT35(local_168._5_3_,4);
  local_160 = (uint5)(uint)local_160;
  local_158._0_5_ = (uint5)(uint)local_158;
  local_1a0 = 0x19;
  local_198 = (long *)0x0;
  local_170 = (long *)FUN_00ea3260(&local_190,&local_1b0);
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  _local_160 = CONCAT44(stack0xfffffffffffffea4,2);
  local_168 = (char *)CONCAT35(local_168._5_3_,0x100000000);
  local_168 = (char *)CONCAT44(local_168._4_4_,2);
  FUN_025d35b8(local_90[0],&local_170);
  goto LAB_025e5b08;
LAB_025e59c0:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5a14;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar21 = FUN_00d78f50(plVar26,&local_1b0);
  do {
    iVar6 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5a18;
LAB_025e47b8:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e480c:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_190);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  *(undefined4 *)(param_1 + 0x2ec) = uVar20;
  _local_160 = CONCAT44(stack0xfffffffffffffea4,uVar20);
  local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_168 = (char *)CONCAT44(local_168._4_4_,1);
  FUN_025d35b8(local_90[0],&local_170);
  local_188 = "wildpokemon_sleep_reaction_frame_min";
  local_190 = (undefined8 *)0x759c89da2d8c751d;
  local_180 = 0x24;
  local_178 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e50d4;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e50d4;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5128:
  uVar20 = 0;
  goto LAB_025e512c;
LAB_025e50d4:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5128;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = FUN_00d78f50(plVar26,&local_190);
  do {
    iVar18 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar18 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
LAB_025e512c:
  iVar18 = FUN_025e2580(uVar20);
  local_1b0 = 0x758093da2d740b63;
  local_1a8 = "wildpokemon_sleep_reaction_frame_max";
  local_1a0 = 0x24;
  local_198 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e57c0;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e57c0;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5814:
  iVar19 = 0;
LAB_025e5818:
  local_1c8 = "wildpokemon_sleep_reaction_frame_min";
  local_1d0 = 0x759c89da2d8c751d;
  local_1c0 = 0x24;
  local_1b8 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5d44;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5d44;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5d98:
  iVar21 = 0;
LAB_025e5d9c:
  iVar19 = FUN_025e2580(iVar19 - iVar21);
  *(int *)(param_1 + 0x2e8) = iVar19 + iVar18;
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
LAB_025e5b08:
  puVar17[0x153] = puVar17[0x153] & 0xfffffffffffffff3;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  goto joined_r0x025e5b1c;
LAB_025e57c0:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5814;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar26,&local_1b0);
  do {
    iVar21 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar21;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5818;
LAB_025e5d44:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5d98;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar21 = FUN_00d78f50(plVar26,&local_1d0);
  do {
    iVar6 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5d9c;
LAB_025e3394:
  plVar26 = (long *)plVar26[3];
  if (plVar26 != (long *)0x0) {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    fVar28 = (float)FUN_00d7905c(plVar26,&local_170);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
joined_r0x025e3ab8:
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  FUN_009c69bc(&local_170,local_78);
  (**(code **)(*local_170 + 0x40))();
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  fVar29 = (float)FUN_01a75574(local_78);
  fVar30 = (float)FUN_01a75574(puVar17);
  FUN_009c69bc(&local_170,puVar17);
  local_1e0 = (float)uVar32;
  fStack_1dc = (float)((ulong)uVar32 >> 0x20);
  fStack_1d8 = (float)uVar34;
  fStack_1d4 = (float)((ulong)uVar34 >> 0x20);
  local_1e0 = local_1e0 - (float)local_170[0x1a];
  fStack_1dc = fStack_1dc - (float)((ulong)local_170[0x1a] >> 0x20);
  fStack_1d8 = fStack_1d8 - (float)local_170[0x1b];
  fStack_1d4 = fStack_1d4 - (float)((ulong)local_170[0x1b] >> 0x20);
  local_1e0 = local_1e0 * local_1e0;
  fStack_1dc = fStack_1dc * fStack_1dc;
  fStack_1d8 = fStack_1d8 * fStack_1d8;
  fStack_1d4 = fStack_1d4 * fStack_1d4;
  auVar11._4_4_ = fStack_1dc;
  auVar11._0_4_ = local_1e0;
  auVar11._8_4_ = fStack_1d8;
  auVar11._12_4_ = fStack_1d4;
  auVar12._4_4_ = fStack_1dc;
  auVar12._0_4_ = local_1e0;
  auVar12._8_4_ = fStack_1d8;
  auVar12._12_4_ = fStack_1d4;
  auVar31 = NEON_ext(auVar11,auVar12,8,1);
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if (fVar28 * fVar28 <=
      ((auVar31._0_4_ + local_1e0 + auVar31._4_4_ + fStack_1dc) - fVar29 * fVar29) - fVar30 * fVar30
     ) {
    uVar22 = puVar17[0x153] & 0xfffffffffffffff3;
    goto LAB_025e34b4;
  }
  iVar18 = FUN_01b9a14c(puVar17);
  if (iVar18 == 2) {
    if (*(int *)(param_1 + 0x2f4) == 0) {
      iVar18 = *(int *)(param_1 + 0x2f0);
      if (iVar18 == 0) {
        local_170 = (long *)0x6b6c8e82d478ca9f;
        local_168 = "wildpokemon_random_reaction_frame_min";
        _local_160 = 0x25;
        local_158 = (long *)0x0;
        if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0))
        {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar23 = *(long *)puVar15;
        *(long *)puVar16 = lVar23;
        uVar22 = *(ulong *)(lVar23 + 0x60);
        if (uVar22 != 0) {
          uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
          uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar24 < 2) {
            uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar25 = 0xdda9f413319d82e4;
            if (uVar22 < 0xdda9f413319d82e5) {
              uVar25 = 0;
              if (uVar22 != 0) {
                uVar25 = 0xdda9f413319d82e4 / uVar22;
              }
              uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
            }
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            if (uVar24 < 2) {
              do {
                if (plVar26[1] == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4a74;
                }
                else if ((plVar26[1] & uVar22 - 1) != uVar25) goto LAB_025e4ac8;
                plVar26 = (long *)*plVar26;
                iVar18 = 0;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4a74;
                }
                else {
                  if (uVar22 <= uVar24) {
                    uVar7 = 0;
                    if (uVar22 != 0) {
                      uVar7 = uVar24 / uVar22;
                    }
                    uVar24 = uVar24 - uVar7 * uVar22;
                  }
                  if (uVar24 != uVar25) goto LAB_025e4ac8;
                }
                plVar26 = (long *)*plVar26;
                iVar18 = 0;
              } while (plVar26 != (long *)0x0);
            }
            goto LAB_025e4acc;
          }
        }
        goto LAB_025e4ac8;
      }
      if ((0 < iVar18) && (*(int *)(param_1 + 0x2f0) = iVar18 + -1, iVar18 + -1 == 0)) {
        local_170 = (long *)0x0;
        local_168 = (char *)CONCAT35(local_168._5_3_,4);
        local_160 = (uint5)(uint)local_160;
        local_158._0_5_ = (uint5)(uint)local_158;
        local_170 = (long *)FUN_025d3e08(local_90[0]);
        local_178 = (long *)0x0;
        local_190 = (undefined8 *)0x75377193b1fa6234;
        local_188 = "wildpokemon_random_reaction_keep_frame";
        local_180 = 0x26;
        if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0))
        {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar23 = *(long *)puVar15;
        *(long *)puVar16 = lVar23;
        uVar22 = *(ulong *)(lVar23 + 0x60);
        if (uVar22 != 0) {
          uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
          uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar24 < 2) {
            uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar25 = 0xdda9f413319d82e4;
            if (uVar22 < 0xdda9f413319d82e5) {
              uVar25 = 0;
              if (uVar22 != 0) {
                uVar25 = 0xdda9f413319d82e4 / uVar22;
              }
              uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
            }
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            if (uVar24 < 2) {
              do {
                if (plVar26[1] == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4da8;
                }
                else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == 0xdda9f413319d82e4) {
                  if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4da8;
                }
                else {
                  if (uVar22 <= uVar24) {
                    uVar7 = 0;
                    if (uVar22 != 0) {
                      uVar7 = uVar24 / uVar22;
                    }
                    uVar24 = uVar24 - uVar7 * uVar22;
                  }
                  if (uVar24 != uVar25) break;
                }
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
        }
        goto LAB_025e4dfc;
      }
    }
    goto LAB_025e3958;
  }
  if (iVar18 == 1) {
    uVar22 = puVar17[0x153];
    if (((uint)uVar22 >> 3 & 1) == 0) {
      local_168 = (char *)CONCAT35(local_168._5_3_,4);
      local_160 = (uint5)(uint)local_160;
      local_158._0_5_ = (uint5)(uint)local_158;
      local_170 = (long *)FUN_025d401c(local_90[0]);
      local_178 = (long *)0x0;
      local_190 = (undefined8 *)0x8652852453ab0893;
      local_188 = "wildpokemon_reaction_warning_keep_time";
      local_180 = 0x26;
      if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar23 = *(long *)puVar15;
      *(long *)puVar16 = lVar23;
      uVar22 = *(ulong *)(lVar23 + 0x60);
      if (uVar22 != 0) {
        uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar24 < 2) {
          uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar25 = 0xdda9f413319d82e4;
          if (uVar22 < 0xdda9f413319d82e5) {
            uVar25 = 0;
            if (uVar22 != 0) {
              uVar25 = 0xdda9f413319d82e4 / uVar22;
            }
            uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
          }
        }
        plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
        if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
          if (uVar24 < 2) {
            do {
              if (plVar26[1] == 0xdda9f413319d82e4) {
                if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e49d8;
              }
              else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              uVar24 = plVar26[1];
              if (uVar24 == 0xdda9f413319d82e4) {
                if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e49d8;
              }
              else {
                if (uVar22 <= uVar24) {
                  uVar7 = 0;
                  if (uVar22 != 0) {
                    uVar7 = uVar24 / uVar22;
                  }
                  uVar24 = uVar24 - uVar7 * uVar22;
                }
                if (uVar24 != uVar25) break;
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
        }
      }
      goto LAB_025e4a2c;
    }
    goto LAB_025e4a6c;
  }
  if (iVar18 == 3) {
    uVar22 = puVar17[0x153];
    if (((uint)uVar22 >> 2 & 1) == 0) {
      local_168 = (char *)CONCAT35(local_168._5_3_,4);
      local_160 = (uint5)(uint)local_160;
      local_158._0_5_ = (uint5)(uint)local_158;
      local_170 = (long *)FUN_025d3e08(local_90[0]);
      local_178 = (long *)0x0;
      local_190 = (undefined8 *)0x8664f838781788a7;
      local_188 = "wildpokemon_reaction_mild_keep_time";
      local_180 = 0x23;
      if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar23 = *(long *)puVar15;
      *(long *)puVar16 = lVar23;
      uVar22 = *(ulong *)(lVar23 + 0x60);
      if (uVar22 != 0) {
        uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar24 < 2) {
          uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar25 = 0xdda9f413319d82e4;
          if (uVar22 < 0xdda9f413319d82e5) {
            uVar25 = 0;
            if (uVar22 != 0) {
              uVar25 = 0xdda9f413319d82e4 / uVar22;
            }
            uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
          }
        }
        plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
        if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
          if (uVar24 < 2) {
            do {
              if (plVar26[1] == 0xdda9f413319d82e4) {
                if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4b90;
              }
              else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              uVar24 = plVar26[1];
              if (uVar24 == 0xdda9f413319d82e4) {
                if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e4b90;
              }
              else {
                if (uVar22 <= uVar24) {
                  uVar7 = 0;
                  if (uVar22 != 0) {
                    uVar7 = uVar24 / uVar22;
                  }
                  uVar24 = uVar24 - uVar7 * uVar22;
                }
                if (uVar24 != uVar25) break;
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
        }
      }
      goto LAB_025e4be4;
    }
    goto LAB_025e4c24;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  goto LAB_025e39fc;
LAB_025e4a74:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4ac8:
    iVar18 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar18 = FUN_00d78f50(plVar26,&local_170);
    do {
      iVar19 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
LAB_025e4acc:
  local_190 = (undefined8 *)0x6b509c82d46067b1;
  local_188 = "wildpokemon_random_reaction_frame_max";
  local_180 = 0x25;
  local_178 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5224;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) goto LAB_025e5278;
          plVar26 = (long *)*plVar26;
          iVar19 = 0;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5224;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) goto LAB_025e5278;
          }
          plVar26 = (long *)*plVar26;
          iVar19 = 0;
        } while (plVar26 != (long *)0x0);
      }
      goto LAB_025e527c;
    }
  }
LAB_025e5278:
  iVar19 = 0;
  goto LAB_025e527c;
LAB_025e5224:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5278;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar26,&local_190);
  do {
    iVar21 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar21;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
LAB_025e527c:
  local_1a8 = "wildpokemon_random_reaction_frame_min";
  local_1b0 = 0x6b6c8e82d478ca9f;
  local_1a0 = 0x25;
  local_198 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 == 0) {
LAB_025e596c:
    iVar21 = 0;
  }
  else {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 == (long *)0x0) || (plVar26 = (long *)*plVar26, plVar26 == (long *)0x0))
    goto LAB_025e596c;
    if (uVar24 < 2) {
      do {
        if (plVar26[1] == 0xdda9f413319d82e4) {
          if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5918;
        }
        else if ((plVar26[1] & uVar22 - 1) != uVar25) goto LAB_025e596c;
        plVar26 = (long *)*plVar26;
        iVar21 = 0;
      } while (plVar26 != (long *)0x0);
    }
    else {
      do {
        uVar24 = plVar26[1];
        if (uVar24 == 0xdda9f413319d82e4) {
          if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5918;
        }
        else {
          if (uVar22 <= uVar24) {
            uVar7 = 0;
            if (uVar22 != 0) {
              uVar7 = uVar24 / uVar22;
            }
            uVar24 = uVar24 - uVar7 * uVar22;
          }
          if (uVar24 != uVar25) goto LAB_025e596c;
        }
        plVar26 = (long *)*plVar26;
        iVar21 = 0;
      } while (plVar26 != (long *)0x0);
    }
  }
LAB_025e5970:
  iVar19 = FUN_025e2580(iVar19 - iVar21);
  *(int *)(param_1 + 0x2f0) = iVar19 + iVar18;
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
LAB_025e3958:
  local_190 = (undefined8 *)0xdda9f413319d82e4;
  local_188 = "player_face";
  local_180 = 0xb;
  local_178 = (long *)0x0;
  local_1b0 = 0x3496a7f9a7cebe71;
  local_1a8 = "face_wild_poke_reaction_base";
  local_168 = (char *)CONCAT35(local_168._5_3_,4);
  local_160 = (uint5)(uint)local_160;
  local_158._0_5_ = (uint5)(uint)local_158;
  local_1a0 = 0x1c;
  local_198 = (long *)0x0;
  local_170 = (long *)FUN_00ea3260(&local_190,&local_1b0);
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  _local_160 = CONCAT44(stack0xfffffffffffffea4,2);
  local_168 = (char *)CONCAT35(local_168._5_3_,0x100000000);
  local_168 = (char *)CONCAT44(local_168._4_4_,2);
  FUN_025d35b8(local_90[0],&local_170);
  goto LAB_025e39fc;
LAB_025e5918:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e596c;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar21 = FUN_00d78f50(plVar26,&local_1b0);
  do {
    iVar6 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5970;
LAB_025e4da8:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4dfc:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_190);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  *(undefined4 *)(param_1 + 0x2f4) = uVar20;
  _local_160 = CONCAT44(stack0xfffffffffffffea4,uVar20);
  local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_168 = (char *)CONCAT44(local_168._4_4_,1);
  FUN_025d35b8(local_90[0],&local_170);
  local_190 = (undefined8 *)0x6b6c8e82d478ca9f;
  local_188 = "wildpokemon_random_reaction_frame_min";
  local_180 = 0x25;
  local_178 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e54c8;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e54c8;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e551c:
  iVar18 = 0;
  goto LAB_025e5520;
LAB_025e54c8:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e551c;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar18 = FUN_00d78f50(plVar26,&local_190);
  do {
    iVar19 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
LAB_025e5520:
  local_1b0 = 0x6b509c82d46067b1;
  local_1a8 = "wildpokemon_random_reaction_frame_max";
  local_1a0 = 0x25;
  local_198 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5b88;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5b88;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5bdc:
  iVar19 = 0;
LAB_025e5be0:
  local_1c8 = "wildpokemon_random_reaction_frame_min";
  local_1d0 = 0x6b6c8e82d478ca9f;
  local_1c0 = 0x25;
  local_1b8 = (long *)0x0;
  if (((*puVar14 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar15;
  *(long *)puVar16 = lVar23;
  uVar22 = *(ulong *)(lVar23 + 0x60);
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar25 = 0xdda9f413319d82e4;
      if (uVar22 < 0xdda9f413319d82e5) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = 0xdda9f413319d82e4 / uVar22;
        }
        uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
      }
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar26[1] == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5e24;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar26[1];
          if (uVar24 == 0xdda9f413319d82e4) {
            if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e5e24;
          }
          else {
            if (uVar22 <= uVar24) {
              uVar7 = 0;
              if (uVar22 != 0) {
                uVar7 = uVar24 / uVar22;
              }
              uVar24 = uVar24 - uVar7 * uVar22;
            }
            if (uVar24 != uVar25) break;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
    }
  }
LAB_025e5e78:
  iVar21 = 0;
LAB_025e5e7c:
  iVar19 = FUN_025e2580(iVar19 - iVar21);
  *(int *)(param_1 + 0x2f0) = iVar19 + iVar18;
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
LAB_025e39fc:
  puVar17[0x153] = puVar17[0x153] & 0xfffffffffffffff3;
  goto LAB_025e34bc;
LAB_025e5b88:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5bdc;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar26,&local_1b0);
  do {
    iVar21 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar21;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5be0;
LAB_025e5e24:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) goto LAB_025e5e78;
  plVar3 = plVar26 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar21 = FUN_00d78f50(plVar26,&local_1d0);
  do {
    iVar6 = (int)*plVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  goto LAB_025e5e7c;
LAB_025e49d8:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4a2c:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_190);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  _local_160 = CONCAT44(stack0xfffffffffffffea4,uVar20);
  local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_168 = (char *)CONCAT44(local_168._4_4_,1);
  FUN_025d35b8(local_90[0],&local_170);
  uVar22 = puVar17[0x153] | 8;
  puVar17[0x153] = uVar22;
LAB_025e4a6c:
  uVar22 = uVar22 & 0xfffffffffffffffb;
  goto LAB_025e34b4;
LAB_025e4b90:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4be4:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_190);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  _local_160 = CONCAT44(stack0xfffffffffffffea4,uVar20);
  local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_168 = (char *)CONCAT44(local_168._4_4_,1);
  FUN_025d35b8(local_90[0],&local_170);
  uVar22 = puVar17[0x153] | 4;
  puVar17[0x153] = uVar22;
LAB_025e4c24:
  uVar22 = uVar22 & 0xfffffffffffffff7;
LAB_025e34b4:
  puVar17[0x153] = uVar22;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
LAB_025e34bc:
  uVar22 = puVar17[0x153] & 0xfffffffffffffffd;
  goto LAB_025e31bc;
LAB_025e490c:
  plVar26 = (long *)plVar26[3];
  if (plVar26 == (long *)0x0) {
LAB_025e4960:
    uVar20 = 0;
  }
  else {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = FUN_00d78f50(plVar26,&local_190);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  _local_160 = CONCAT44(stack0xfffffffffffffea4,uVar20);
  local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_168 = (char *)CONCAT44(local_168._4_4_,1);
  FUN_025d35b8(local_90[0],&local_170);
  uVar22 = puVar17[0x153] | 2;
LAB_025e36a8:
  puVar17[0x153] = uVar22;
  goto LAB_025e36ac;
LAB_025e3588:
  plVar26 = (long *)plVar26[3];
  if (plVar26 != (long *)0x0) {
    plVar3 = plVar26 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    fVar28 = (float)FUN_00d7905c(plVar26,&local_170);
    do {
      iVar18 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
joined_r0x025e3bc0:
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  FUN_009c69bc(&local_170,local_78);
  (**(code **)(*local_170 + 0x40))();
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  fVar29 = (float)FUN_01a75574(local_78);
  fVar30 = (float)FUN_01a75574(puVar17);
  FUN_009c69bc(&local_170,puVar17);
  local_1e0 = (float)uVar32;
  fStack_1dc = (float)((ulong)uVar32 >> 0x20);
  fStack_1d8 = (float)uVar34;
  fStack_1d4 = (float)((ulong)uVar34 >> 0x20);
  local_1e0 = local_1e0 - (float)local_170[0x1a];
  fStack_1dc = fStack_1dc - (float)((ulong)local_170[0x1a] >> 0x20);
  fStack_1d8 = fStack_1d8 - (float)local_170[0x1b];
  fStack_1d4 = fStack_1d4 - (float)((ulong)local_170[0x1b] >> 0x20);
  local_1e0 = local_1e0 * local_1e0;
  fStack_1dc = fStack_1dc * fStack_1dc;
  fStack_1d8 = fStack_1d8 * fStack_1d8;
  fStack_1d4 = fStack_1d4 * fStack_1d4;
  auVar9._4_4_ = fStack_1dc;
  auVar9._0_4_ = local_1e0;
  auVar9._8_4_ = fStack_1d8;
  auVar9._12_4_ = fStack_1d4;
  auVar10._4_4_ = fStack_1dc;
  auVar10._0_4_ = local_1e0;
  auVar10._8_4_ = fStack_1d8;
  auVar10._12_4_ = fStack_1d4;
  auVar31 = NEON_ext(auVar9,auVar10,8,1);
  if (local_170 != (long *)0x0) {
    lVar23 = local_170[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if (fVar28 * fVar28 <=
      ((auVar31._0_4_ + local_1e0 + auVar31._4_4_ + fStack_1dc) - fVar29 * fVar29) - fVar30 * fVar30
     ) {
    uVar22 = puVar17[0x153];
LAB_025e36a4:
    uVar22 = uVar22 & 0xfffffffffffffffd;
    goto LAB_025e36a8;
  }
  iVar18 = FUN_01b9a14c(puVar17);
  uVar22 = puVar17[0x153];
  if (iVar18 != 5) goto LAB_025e36a4;
  if (((uint)uVar22 >> 1 & 1) == 0) {
    local_168 = (char *)CONCAT35(local_168._5_3_,4);
    local_160 = (uint5)(uint)local_160;
    local_158._0_5_ = (uint5)(uint)local_158;
    local_170 = (long *)FUN_025d3d5c(local_90[0]);
    local_178 = (long *)0x0;
    local_190 = (undefined8 *)0xa426404eb6027ea1;
    local_188 = "wildpokemon_reaction_escaping_keep_time";
    local_180 = 0x27;
    if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04379660), iVar18 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar23 = *(long *)puVar15;
    *(long *)puVar16 = lVar23;
    uVar22 = *(ulong *)(lVar23 + 0x60);
    if (uVar22 != 0) {
      uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar25 = 0xdda9f413319d82e4;
        if (uVar22 < 0xdda9f413319d82e5) {
          uVar25 = 0;
          if (uVar22 != 0) {
            uVar25 = 0xdda9f413319d82e4 / uVar22;
          }
          uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar24 < 2) {
          do {
            if (plVar26[1] == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e490c;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == 0xdda9f413319d82e4) {
              if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e490c;
            }
            else {
              if (uVar22 <= uVar24) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar7 * uVar22;
              }
              if (uVar24 != uVar25) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_025e4960;
  }
LAB_025e36ac:
  uVar22 = uVar22 & 0xfffffffffffffff3;
LAB_025e31bc:
  puVar17[0x153] = uVar22;
joined_r0x025e5b1c:
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  puVar13 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_170 = (long *)*puVar13;
      FUN_02a44274(lVar23 + 0xd8,&local_170);
    }
  }
  puVar13 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_130 + 1);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_170 = (long *)*puVar13;
      FUN_02a44274(lVar23 + 0xd8,&local_170);
    }
  }
  uVar22 = puVar17[0xb];
  piVar1 = (int *)(uVar22 + 0xc);
  do {
    iVar18 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar18 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar18 == 1) {
    *(undefined8 *)(uVar22 + 0x18) = 0;
    (**(code **)(*puVar17 + 0x20))(puVar17);
  }
LAB_025e2928:
  uVar27 = 1;
  puVar13 = local_d0;
joined_r0x025e2930:
  if ((char)local_f0[0] != '\0') {
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar18 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar18 + -1 == 0) {
        puVar13[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_150[0] = (ulong *)*puVar13;
        FUN_02a44274(lVar23 + 0xd8,local_150);
      }
    }
    if (local_e0[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_e0[0] + 1);
      do {
        iVar18 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar18 + -1 == 0) {
        local_e0[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_150[0] = (ulong *)*local_e0[0];
        FUN_02a44274(lVar23 + 0xd8,local_150);
      }
    }
    local_f0[0] = local_f0[0] & 0xffffffffffffff00;
  }
joined_r0x025e29fc:
  if (local_98 != (long *)0x0) {
    lVar23 = local_98[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x025e27a8:
  if (local_90[0] != (long *)0x0) {
    lVar23 = local_90[0][0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_90[0] + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
LAB_025e27d0:
    lVar23 = local_78[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return uVar27;
}


