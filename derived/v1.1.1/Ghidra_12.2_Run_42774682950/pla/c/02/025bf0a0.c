/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025bf0a0; name: FUN_025bf0a0
 */


void FUN_025bf0a0(long param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  char *pcVar2;
  ulong *puVar3;
  long *plVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  char cVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  char *pcVar26;
  long *plVar27;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar28;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  float extraout_var_02;
  long extraout_var_03;
  long extraout_var_04;
  float fVar29;
  long *local_1e8;
  ulong local_1e0 [3];
  long *local_1c8;
  ulong *local_1c0 [2];
  long local_1b0;
  long *plStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  float local_18c;
  undefined8 *local_180;
  undefined8 uStack_178;
  long *local_170;
  long *local_168;
  long *local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90 [2];
  
  FUN_016c24d0(local_90,param_1 + 0x240);
  if (local_90[0] == (long *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    local_98 = (long *)0x0;
    goto joined_r0x025bf1dc;
  }
  FUN_00959eac(&local_98);
  if (local_98 == (long *)0x0) goto joined_r0x025bf1dc;
  iVar14 = FUN_0267081c();
  lVar19 = (long)iVar14 * 0x18;
  local_b0 = *(undefined8 *)(&DAT_0425fb98 + lVar19);
  puStack_a8 = (&PTR_s_odoshishi_collision_0425fba0)[(long)iVar14 * 3];
  local_a0 = *(undefined8 *)(&DAT_0425fba8 + lVar19);
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  FUN_00ac3fa4(&local_158,local_98 + 0x49);
  puVar8 = local_158;
  puVar12 = PTR_DAT_04379e90;
  puVar11 = PTR_DAT_04379e88;
  puVar10 = PTR_DAT_043795d8;
  puVar9 = PTR_DAT_043794d0;
  if (local_158 != (undefined8 *)0x0) {
    if (*(int *)((long)local_158 + 0xc) != 0) {
      piVar1 = (int *)((long)local_158 + 0xc);
      iVar14 = *(int *)((long)local_158 + 0xc);
      do {
        plVar27 = (long *)puVar8[2];
        if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)puVar12 = PTR_DAT_043795e0;
          __cxa_guard_release(puVar11);
        }
        while( true ) {
          if (plVar27 == (long *)0x0) goto LAB_025bf2fc;
          if (plVar27 == (long *)puVar12) break;
          plVar27 = (long *)*plVar27;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar14) {
          cVar22 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
          if (cVar22 == '\0') {
            lVar19 = puVar8[3];
            local_1e8 = (long *)0x0;
            puVar8 = local_158;
            if (lVar19 != 0) {
              local_1e8 = (long *)(lVar19 + -0x50);
            }
            goto joined_r0x025bf274;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
LAB_025bf2fc:
    local_1e8 = (long *)0x0;
    puVar8 = local_158;
joined_r0x025bf274:
    local_158 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
      do {
        iVar14 = *piVar1;
        cVar22 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar14 + -1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
      if (iVar14 + -1 == 0) {
        puVar8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_1c0[0] = (ulong *)*puVar8;
        FUN_02a44274(lVar19 + 0xd8,local_1c0);
      }
    }
    if (local_1e8 != (long *)0x0) {
      iVar14 = FUN_0267081c(local_98);
      param_1 = param_1 + (long)iVar14 * 0x128;
      pcVar2 = (char *)(param_1 + 0x4a0);
      pcVar26 = (char *)(param_1 + 0x380);
      fVar29 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
      lVar19 = 0;
LAB_025bf3e0:
      *pcVar26 = '\0';
      FUN_00ab5ae0(&local_b8,pcVar26 + 8);
      if (local_b8 != (long *)0x0) {
        local_158 = (undefined8 *)(&DAT_043e9770)[lVar19 * 0x14];
        uStack_150 = (&DAT_043e9778)[lVar19 * 0x14];
        local_148 = (&DAT_043e9780)[lVar19 * 0x14];
        local_140 = (long *)(&DAT_043e9788)[lVar19 * 0x14];
        if (local_140 != (long *)0x0) {
          (**(code **)(*local_140 + 0x18))();
        }
        local_138 = (&DAT_043e9790)[lVar19 * 0x14];
        uStack_130 = (&DAT_043e9798)[lVar19 * 0x14];
        local_128 = (&DAT_043e97a0)[lVar19 * 0x14];
        local_120 = (long *)(&DAT_043e97a8)[lVar19 * 0x14];
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x18))();
        }
        local_118 = (&DAT_043e97b0)[lVar19 * 0x14];
        uStack_110 = (&DAT_043e97b8)[lVar19 * 0x14];
        local_108 = (&DAT_043e97c0)[lVar19 * 0x14];
        local_100 = (long *)(&DAT_043e97c8)[lVar19 * 0x14];
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x18))();
        }
        local_f8 = (&DAT_043e97d0)[lVar19 * 0x14];
        uStack_f0 = (&DAT_043e97d8)[lVar19 * 0x14];
        local_e8 = (&DAT_043e97e0)[lVar19 * 0x14];
        local_e0 = (long *)(&DAT_043e97e8)[lVar19 * 0x14];
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x18))();
        }
        local_d8 = (&DAT_043e97f0)[lVar19 * 0x14];
        uStack_d0 = (&DAT_043e97f8)[lVar19 * 0x14];
        local_c8 = (&DAT_043e9800)[lVar19 * 0x14];
        local_c0 = (long *)(&DAT_043e9808)[lVar19 * 0x14];
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x18))();
        }
        FUN_02a4754c(local_1c0,&local_b0);
        FUN_00bef9ac(&local_160,local_1c0,&local_158);
        if (plStack_1a8 != (long *)0x0) {
          (**(code **)(*plStack_1a8 + 0x20))();
        }
        if (((local_160 != (long *)0x0) && (*(char *)local_160[0xc] != '\0')) &&
           (FUN_00956dac(&local_168,pcVar26 + 0x38), local_168 != (long *)0x0)) {
          lVar17 = FUN_00b13c20(local_168 + 0x1e,local_1c0);
          if (lVar17 != 0) {
            FUN_01a9b800(local_1c0,local_1e8);
            FUN_00956dac(&local_170,local_1c0);
            puVar13 = local_1c0[0];
            if (local_1c0[0] != (ulong *)0x0) {
              puVar3 = local_1c0[0] + 1;
              do {
                iVar14 = (int)*puVar3 + -1;
                cVar22 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar6) {
                  *(int *)puVar3 = iVar14;
                  cVar22 = ExclusiveMonitorsStatus();
                }
              } while (cVar22 != '\0');
              if (iVar14 == 0) {
                local_1c0[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_1e0[0] = *puVar13;
                FUN_02a44274(lVar20 + 0xd8,local_1e0);
              }
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x18))(local_1c0);
              local_180 = (undefined8 *)0x0;
              uStack_178 = 0;
              FUN_0087f944(&local_180,local_1c0);
              puVar13 = local_1c0[0];
              if (local_1c0[0] != (ulong *)0x0) {
                puVar3 = local_1c0[0] + 1;
                do {
                  iVar14 = (int)*puVar3 + -1;
                  cVar22 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *(int *)puVar3 = iVar14;
                    cVar22 = ExclusiveMonitorsStatus();
                  }
                } while (cVar22 != '\0');
                if (iVar14 == 0) {
                  local_1c0[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar20 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar20;
                  local_1e0[0] = *puVar13;
                  FUN_02a44274(lVar20 + 0xd8,local_1e0);
                }
              }
              FUN_00d81760(lVar17,&local_180,&local_160,0);
              puVar8 = local_180;
              if (local_180 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_180 + 1);
                do {
                  iVar14 = *piVar1;
                  cVar22 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar14 + -1;
                    cVar22 = ExclusiveMonitorsStatus();
                  }
                } while (cVar22 != '\0');
                if (iVar14 + -1 == 0) {
                  local_180[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar17;
                  local_1c0[0] = (ulong *)*puVar8;
                  FUN_02a44274(lVar17 + 0xd8,local_1c0);
                }
              }
              plVar27 = local_168;
              FUN_02a4754c(local_1c0,&local_b0);
              FUN_00aee408(local_1c0,&local_f8);
              plVar27[0x1b] = extraout_var_03;
              plVar27[0x1a] = CONCAT44(extraout_var,extraout_s0);
              *(undefined1 *)(plVar27 + 0x1c) = 1;
              if (plStack_1a8 != (long *)0x0) {
                (**(code **)(*plStack_1a8 + 0x20))();
              }
              FUN_02a4754c(local_1c0,&local_b0);
              FUN_00aee408(local_1c0,&local_d8);
              if (plStack_1a8 != (long *)0x0) {
                (**(code **)(*plStack_1a8 + 0x20))();
              }
              plVar27 = local_168;
              FUN_009a7ff4(fVar29 * extraout_var_00,fVar29 * extraout_s0_00,fVar29 * extraout_var_02
                          );
              *(undefined1 *)(plVar27 + 0x1c) = 1;
              plVar27[0x19] = extraout_var_04;
              plVar27[0x18] = CONCAT44(extraout_var_01,extraout_s0_01);
              *pcVar26 = '\x01';
              if (local_170 != (long *)0x0) {
                lVar17 = local_170[0xb];
                piVar1 = (int *)(lVar17 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar22 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar14 + -1;
                    cVar22 = ExclusiveMonitorsStatus();
                  }
                } while (cVar22 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar17 + 0x18) = 0;
                  (**(code **)(*local_170 + 0x20))();
                }
              }
            }
          }
          if (local_168 == (long *)0x0) goto LAB_025bf72c;
          lVar17 = local_168[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar22 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar14 + -1;
              cVar22 = ExclusiveMonitorsStatus();
            }
          } while (cVar22 != '\0');
          if (iVar14 + -1 != 0) goto LAB_025bf72c;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_168 + 0x20))();
          if ((param_3 & 1) != 0) goto LAB_025bf730;
          goto LAB_025bf9ec;
        }
LAB_025bf72c:
        if ((param_3 & 1) == 0) goto LAB_025bf9ec;
LAB_025bf730:
        if ((*pcVar2 != '\0') || (*(int *)((long)local_b8 + 0x7c) != 2)) goto LAB_025bf9ec;
        if (*pcVar26 != '\0') {
          FUN_02bd7ca4(local_1c0);
          FUN_02a4754c(local_1e0,&local_b0);
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar17 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar17;
          uVar21 = *(ulong *)(lVar17 + 0x60);
          fVar28 = 0.0;
          if (uVar21 != 0) {
            uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
            uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar23 < 2) {
              uVar24 = uVar21 - 1 & local_1e0[0];
            }
            else if (local_1e0[0] < uVar21) {
              uVar24 = local_1e0[0];
            }
            else {
              uVar24 = 0;
              if (uVar21 != 0) {
                uVar24 = local_1e0[0] / uVar21;
              }
              uVar24 = local_1e0[0] - uVar24 * uVar21;
            }
            fVar28 = 0.0;
            plVar27 = *(long **)(*(long *)(lVar17 + 0x58) + uVar24 * 8);
            if (plVar27 != (long *)0x0) {
              plVar27 = (long *)*plVar27;
              fVar28 = 0.0;
              if (plVar27 != (long *)0x0) {
                if (uVar23 < 2) {
                  do {
                    if (plVar27[1] == local_1e0[0]) {
                      if (plVar27[2] == local_1e0[0]) goto LAB_025bf820;
                    }
                    else if ((plVar27[1] & uVar21 - 1) != uVar24) break;
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                }
                else {
                  do {
                    uVar23 = plVar27[1];
                    if (uVar23 == local_1e0[0]) {
                      if (plVar27[2] == local_1e0[0]) goto LAB_025bf820;
                    }
                    else {
                      if (uVar21 <= uVar23) {
                        uVar25 = 0;
                        if (uVar21 != 0) {
                          uVar25 = uVar23 / uVar21;
                        }
                        uVar23 = uVar23 - uVar25 * uVar21;
                      }
                      if (uVar23 != uVar24) break;
                    }
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                }
                fVar28 = 0.0;
              }
            }
          }
          goto LAB_025bf864;
        }
        cVar22 = '\0';
        goto LAB_025bf9f0;
      }
      goto LAB_025bfaa8;
    }
  }
joined_r0x025bfc98:
  if (local_98 != (long *)0x0) {
    lVar19 = local_98[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x025bf1dc:
  if (local_90[0] != (long *)0x0) {
    lVar19 = local_90[0][0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_90[0] + 0x20))();
    }
  }
  return;
LAB_025bf820:
  plVar27 = (long *)plVar27[3];
  fVar28 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar4 = plVar27 + 10;
    do {
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    fVar28 = (float)FUN_00d7905c(plVar27,&local_138);
    do {
      iVar14 = (int)*plVar4 + -1;
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar14;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
  }
LAB_025bf864:
  local_18c = fVar28;
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  FUN_02a4754c(local_1e0,&local_b0);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar21 = *(ulong *)(lVar17 + 0x60);
  fVar28 = 0.0;
  if (uVar21 != 0) {
    uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = uVar21 - 1 & local_1e0[0];
    }
    else if (local_1e0[0] < uVar21) {
      uVar24 = local_1e0[0];
    }
    else {
      uVar24 = 0;
      if (uVar21 != 0) {
        uVar24 = local_1e0[0] / uVar21;
      }
      uVar24 = local_1e0[0] - uVar24 * uVar21;
    }
    fVar28 = 0.0;
    plVar27 = *(long **)(*(long *)(lVar17 + 0x58) + uVar24 * 8);
    if (plVar27 != (long *)0x0) {
      plVar27 = (long *)*plVar27;
      fVar28 = 0.0;
      if (plVar27 != (long *)0x0) {
        if (uVar23 < 2) {
          do {
            if (plVar27[1] == local_1e0[0]) {
              if (plVar27[2] == local_1e0[0]) goto LAB_025bf944;
            }
            else if ((plVar27[1] & uVar21 - 1) != uVar24) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar27[1];
            if (uVar23 == local_1e0[0]) {
              if (plVar27[2] == local_1e0[0]) goto LAB_025bf944;
            }
            else {
              if (uVar21 <= uVar23) {
                uVar25 = 0;
                if (uVar21 != 0) {
                  uVar25 = uVar23 / uVar21;
                }
                uVar23 = uVar23 - uVar25 * uVar21;
              }
              if (uVar23 != uVar24) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        fVar28 = 0.0;
      }
    }
  }
LAB_025bf988:
  local_190 = fVar28;
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  local_1b0 = (ulong)(uint)(local_190 + local_18c * 0.5) << 0x20;
  local_1a0 = *(undefined8 *)PTR_DAT_04379570;
  uStack_198 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  plStack_1a8 = (long *)0x0;
  FUN_02bd5b40(local_b8,local_1c0);
  FUN_02bdb2ec(local_b8,0);
LAB_025bf9ec:
  cVar22 = *pcVar26;
LAB_025bf9f0:
  uVar21 = 0;
  if (*(ulong **)(pcVar26 + 0x18) != (ulong *)0x0) {
    uVar21 = **(ulong **)(pcVar26 + 0x18);
  }
  uVar23 = local_90[0][0x53];
  if (cVar22 == '\0') {
    if (uVar23 != 0) {
      uVar24 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar23 - 1 & uVar21;
      }
      else {
        uVar25 = uVar21;
        if (uVar23 <= uVar21) {
          uVar25 = 0;
          if (uVar23 != 0) {
            uVar25 = uVar21 / uVar23;
          }
          uVar25 = uVar21 - uVar25 * uVar23;
        }
      }
      plVar27 = *(long **)(local_90[0][0x52] + uVar25 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        if (uVar24 < 2) {
          do {
            if (plVar27[1] == uVar21) {
              if (plVar27[2] == uVar21) goto LAB_025bfb58;
            }
            else if ((plVar27[1] & uVar23 - 1) != uVar25) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar27[1];
            if (uVar24 == uVar21) {
              if (plVar27[2] == uVar21) goto LAB_025bfb58;
            }
            else {
              if (uVar23 <= uVar24) {
                uVar7 = 0;
                if (uVar23 != 0) {
                  uVar7 = uVar24 / uVar23;
                }
                uVar24 = uVar24 - uVar7 * uVar23;
              }
              if (uVar24 != uVar25) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
  }
  else if (uVar23 != 0) {
    uVar24 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar25 = uVar23 - 1 & uVar21;
    }
    else {
      uVar25 = uVar21;
      if (uVar23 <= uVar21) {
        uVar25 = 0;
        if (uVar23 != 0) {
          uVar25 = uVar21 / uVar23;
        }
        uVar25 = uVar21 - uVar25 * uVar23;
      }
    }
    plVar27 = *(long **)(local_90[0][0x52] + uVar25 * 8);
    if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
      if (uVar24 < 2) {
        do {
          if (plVar27[1] == uVar21) {
            if (plVar27[2] == uVar21) goto LAB_025bfbf4;
          }
          else if ((plVar27[1] & uVar23 - 1) != uVar25) break;
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar27[1];
          if (uVar24 == uVar21) {
            if (plVar27[2] == uVar21) goto LAB_025bfbf4;
          }
          else {
            if (uVar23 <= uVar24) {
              uVar7 = 0;
              if (uVar23 != 0) {
                uVar7 = uVar24 / uVar23;
              }
              uVar24 = uVar24 - uVar7 * uVar23;
            }
            if (uVar24 != uVar25) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
    }
  }
  if (local_160 == (long *)0x0) goto LAB_025bfa20;
  goto LAB_025bfa14;
LAB_025bf944:
  plVar27 = (long *)plVar27[3];
  fVar28 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar4 = plVar27 + 10;
    do {
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    fVar28 = (float)FUN_00d7905c(plVar27,&local_118);
    do {
      iVar14 = (int)*plVar4 + -1;
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar14;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
  }
  goto LAB_025bf988;
LAB_025bfb58:
  puVar18 = (uint *)(plVar27 + 3);
  uVar5 = *puVar18 | 0x100;
  goto LAB_025bfbfc;
LAB_025bfbf4:
  puVar18 = (uint *)(plVar27 + 3);
  uVar5 = *puVar18 & 0xfffffeff;
LAB_025bfbfc:
  *puVar18 = uVar5;
  FUN_01839500();
  if (local_160 != (long *)0x0) {
LAB_025bfa14:
    (**(code **)(*local_160 + 0x20))();
  }
LAB_025bfa20:
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    lVar17 = local_b8[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar22 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
LAB_025bfaa8:
  pcVar26 = pcVar26 + 0x48;
  lVar19 = lVar19 + 1;
  if (pcVar26 == pcVar2) goto LAB_025bfc58;
  goto LAB_025bf3e0;
LAB_025bfc58:
  *pcVar2 = '\x01';
  lVar19 = local_1e8[0xb];
  piVar1 = (int *)(lVar19 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar22 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar14 + -1;
      cVar22 = ExclusiveMonitorsStatus();
    }
  } while (cVar22 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*local_1e8 + 0x20))();
  }
  goto joined_r0x025bfc98;
}


