/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025dbfbc; name: FUN_025dbfbc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_025dbfbc(long param_1)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong extraout_x8;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long extraout_x10;
  ulong extraout_x11;
  long *plVar31;
  bool bVar32;
  undefined8 *puVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  uint uVar38;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar39;
  float fVar40;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined1 auVar41 [16];
  undefined1 in_q3 [16];
  undefined8 uVar42;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  ulong local_1d8;
  long *local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long *local_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  long *local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 local_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 *local_120;
  long *local_f8;
  long *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80 [2];
  
  uVar42 = in_q3._8_8_;
  uVar25 = in_q3._0_8_;
  if ((*(byte *)(param_1 + 0x250) & 7) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  FUN_00cfac20(local_80,*(long *)(param_1 + 0x1f0));
  if (local_80[0] == (long *)0x0) {
    return;
  }
  FUN_01a753b4(&local_1b0);
  plVar13 = local_1b0;
  puVar16 = PTR_DAT_0437a688;
  puVar15 = PTR_DAT_0437a680;
  puVar14 = PTR_DAT_043794d0;
  if (local_1b0 == (long *)0x0) goto joined_r0x025dc300;
  if (*(int *)((long)local_1b0 + 0xc) != 0) {
    piVar1 = (int *)((long)local_1b0 + 0xc);
    iVar19 = *(int *)((long)local_1b0 + 0xc);
    do {
      plVar36 = (long *)plVar13[2];
      if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar20 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar26;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar16 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar15);
      }
      while( true ) {
        if (plVar36 == (long *)0x0) goto LAB_025dcbf8;
        if (plVar36 == (long *)puVar16) break;
        plVar36 = (long *)*plVar36;
      }
      iVar20 = *piVar1;
      if (iVar20 == iVar19) {
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = iVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar27 = plVar13[3];
          plVar13 = (long *)0x0;
          plVar36 = local_1b0;
          if (lVar27 != 0) {
            plVar13 = (long *)(lVar27 + -0x50);
          }
          goto joined_r0x025dc0f4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar19 = iVar20;
    } while (iVar20 != 0);
  }
LAB_025dcbf8:
  plVar13 = (long *)0x0;
  plVar36 = local_1b0;
joined_r0x025dc0f4:
  local_1b0 = plVar36;
  if (plVar36 != (long *)0x0) {
    plVar31 = plVar36 + 1;
    do {
      iVar19 = (int)*plVar31 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar32) {
        *(int *)plVar31 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      plVar36[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_b0 = (long *)*plVar36;
      FUN_02a44274(lVar27 + 0xd8,&local_b0);
    }
  }
  if (plVar13 == (long *)0x0) goto joined_r0x025dc300;
  FUN_01aef8b8(&local_1b0,local_80[0]);
  if (local_1b0 == (long *)0x0) {
    local_88 = (long *)0x0;
LAB_025dc16c:
    if (local_88 == (long *)0x0) goto LAB_025dc2cc;
LAB_025dc174:
    FUN_01aeda18(&local_1b0,local_80[0]);
    if (local_1b0 == (long *)0x0) {
      local_90 = (long *)0x0;
LAB_025dc18c:
      if (local_90 != (long *)0x0) goto LAB_025dcd98;
LAB_025dc194:
      plVar36 = (long *)0x0;
LAB_025dc198:
      cVar4 = *(char *)(param_1 + 0x260);
    }
    else {
      FUN_00959eac(&local_90);
      plVar36 = local_1b0;
      if (local_1b0 == (long *)0x0) goto LAB_025dc18c;
      plVar31 = local_1b0 + 1;
      do {
        iVar19 = (int)*plVar31 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar32) {
          *(int *)plVar31 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 != 0) goto LAB_025dc18c;
      local_1b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_b0 = (long *)*plVar36;
      FUN_02a44274(lVar27 + 0xd8,&local_b0);
      if (local_90 == (long *)0x0) goto LAB_025dc194;
LAB_025dcd98:
      FUN_01a753b4(&local_1b0);
      plVar36 = local_1b0;
      if (local_1b0 != (long *)0x0) {
        if (*(int *)((long)local_1b0 + 0xc) != 0) {
          piVar1 = (int *)((long)local_1b0 + 0xc);
          iVar19 = *(int *)((long)local_1b0 + 0xc);
          do {
            plVar31 = (long *)plVar36[2];
            if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar20 != 0)) {
                if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
                  uVar26 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar26;
                  __cxa_guard_release(puVar14);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar16 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar15);
            }
            while( true ) {
              if (plVar31 == (long *)0x0) goto LAB_025dd540;
              if (plVar31 == (long *)puVar16) break;
              plVar31 = (long *)*plVar31;
            }
            iVar20 = *piVar1;
            if (iVar20 == iVar19) {
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = iVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar27 = plVar36[3];
                plVar36 = (long *)0x0;
                plVar31 = local_1b0;
                if (lVar27 != 0) {
                  plVar36 = (long *)(lVar27 + -0x50);
                }
                goto joined_r0x025dd9d0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar20;
          } while (iVar20 != 0);
        }
LAB_025dd540:
        plVar36 = (long *)0x0;
        plVar31 = local_1b0;
joined_r0x025dd9d0:
        local_1b0 = plVar31;
        if (plVar31 != (long *)0x0) {
          plVar34 = plVar31 + 1;
          do {
            iVar19 = (int)*plVar34 + -1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar32) {
              *(int *)plVar34 = iVar19;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 == 0) {
            plVar31[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_b0 = (long *)*plVar31;
            FUN_02a44274(lVar27 + 0xd8,&local_b0);
            cVar4 = *(char *)(param_1 + 0x260);
            goto joined_r0x025dda68;
          }
        }
        goto LAB_025dc198;
      }
      plVar36 = (long *)0x0;
      cVar4 = *(char *)(param_1 + 0x260);
    }
joined_r0x025dda68:
    if ((cVar4 != '\0') && (*(int *)(param_1 + 0x2d0) < 999999)) {
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
    }
    *(undefined1 *)((long)local_88 + 0x2ad) = 0;
    puVar15 = PTR_DAT_04379fc8;
    lVar27 = *(long *)(param_1 + 0x220);
    pcVar2 = (char *)(param_1 + 0x260);
    if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
      piVar1 = (int *)(lVar27 + 0xc);
      iVar19 = *(int *)(lVar27 + 0xc);
      do {
        plVar31 = *(long **)(lVar27 + 0x10);
        if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar26;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)PTR_DAT_04379fd0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar15);
        }
        while( true ) {
          if (plVar31 == (long *)0x0) goto LAB_025dc1d4;
          if (plVar31 == (long *)PTR_DAT_04379fd0) break;
          plVar31 = (long *)*plVar31;
        }
        iVar20 = *piVar1;
        if (iVar20 == iVar19) {
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_025dcdd4;
          lVar27 = *(long *)(lVar27 + 0x18);
          if (lVar27 != 0) {
            plVar31 = (long *)(lVar27 + -0x50);
            FUN_018f98bc(&local_1b0,plVar31);
            if (local_1b0 == (long *)0x0) {
              local_d0 = (long *)0x0;
              goto LAB_025ddb18;
            }
            FUN_009b8630(&local_d0);
            plVar34 = local_1b0;
            if (local_1b0 != (long *)0x0) {
              plVar35 = local_1b0 + 1;
              do {
                iVar19 = (int)*plVar35 + -1;
                cVar4 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar32) {
                  *(int *)plVar35 = iVar19;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar19 == 0) {
                local_1b0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar28 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar28;
                local_b0 = (long *)*plVar34;
                FUN_02a44274(lVar28 + 0xd8,&local_b0);
              }
            }
            if (local_d0 == (long *)0x0) {
LAB_025ddb18:
              bVar32 = false;
            }
            else {
              uVar24 = FUN_01a36330();
              if ((uVar24 & 1) == 0) {
                bVar32 = false;
              }
              else {
                local_160 = 0;
                local_170 = (long *)0x0;
                uStack_168 = 0;
                uStack_15c = 0x3f800000;
                uStack_158 = 0x3f800000;
                local_1b0 = (long *)((ulong)local_1b0 & 0xffffffff00000000);
                local_180 = (long *)0x0;
                local_178 = 0;
                local_190 = (long *)0x0;
                local_188 = 0;
                local_1a0 = 0;
                uStack_198 = 0;
                FUN_01a45db0(local_d0);
                uStack_198 = CONCAT44(extraout_var_04,extraout_var_02);
                local_1a0 = CONCAT44(extraout_var_00,extraout_s0_00);
                FUN_025e2110(pcVar2,&local_1b0);
                if (local_170 != (long *)0x0) {
                  (**(code **)(*local_170 + 0x20))();
                }
                plVar34 = local_180;
                if (local_180 != (long *)0x0) {
                  plVar35 = local_180 + 1;
                  do {
                    iVar19 = (int)*plVar35 + -1;
                    cVar4 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                    if (bVar32) {
                      *(int *)plVar35 = iVar19;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar19 == 0) {
                    local_180[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar28 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar28;
                    local_b0 = (long *)*plVar34;
                    FUN_02a44274(lVar28 + 0xd8,&local_b0);
                  }
                }
                plVar34 = local_190;
                if (local_190 != (long *)0x0) {
                  plVar35 = local_190 + 1;
                  do {
                    iVar19 = (int)*plVar35 + -1;
                    cVar4 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                    if (bVar32) {
                      *(int *)plVar35 = iVar19;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar19 == 0) {
                    local_190[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar28 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar28;
                    local_b0 = (long *)*plVar34;
                    FUN_02a44274(lVar28 + 0xd8,&local_b0);
                  }
                }
                bVar32 = true;
              }
              if (local_d0 != (long *)0x0) {
                lVar28 = local_d0[0xb];
                piVar1 = (int *)(lVar28 + 0xc);
                do {
                  iVar19 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar19 + -1 == 0) {
                  *(undefined8 *)(lVar28 + 0x18) = 0;
                  (**(code **)(*local_d0 + 0x20))();
                }
              }
            }
            lVar27 = *(long *)(lVar27 + 8);
            piVar1 = (int *)(lVar27 + 0xc);
            do {
              iVar19 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 + -1 == 0) {
              *(undefined8 *)(lVar27 + 0x18) = 0;
              (**(code **)(*plVar31 + 0x20))(plVar31);
              plVar31 = (long *)0x0;
              if (bVar32) goto joined_r0x025ddcfc;
              break;
            }
            if (!bVar32) break;
            plVar31 = (long *)0x0;
            goto joined_r0x025ddcfc;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_025dcdd4:
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
LAB_025dc1d4:
    if (*(long *)(param_1 + 0x1f0) == 0) {
      local_b0 = (long *)0x0;
LAB_025dc1e0:
      plVar31 = (long *)0x0;
LAB_025dc1e4:
      uVar38 = 1;
      lVar27 = *(long *)(param_1 + 0x210);
joined_r0x025dc1ec:
      if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
        piVar1 = (int *)(lVar27 + 0xc);
        iVar19 = *(int *)(lVar27 + 0xc);
        do {
          plVar34 = *(long **)(lVar27 + 0x10);
          if (((*PTR_DAT_0437a110 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a110), iVar20 != 0)) {
            if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
              uVar25 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar25;
              __cxa_guard_release(puVar14);
            }
            *(undefined **)PTR_DAT_0437a108 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a110);
          }
          while( true ) {
            if (plVar34 == (long *)0x0) goto LAB_025dc1f0;
            if (plVar34 == (long *)PTR_DAT_0437a108) break;
            plVar34 = (long *)*plVar34;
          }
          iVar20 = *piVar1;
          if (iVar20 == iVar19) {
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_025df6b8;
            lVar27 = *(long *)(lVar27 + 0x18);
            if (lVar27 != 0) {
              local_1b0 = (long *)0x0;
              uStack_1a8 = 0;
              FUN_017db6d4(&local_1b0,lVar27 + 0x148);
              if (local_1b0 == (long *)0x0) {
                local_1d0 = (long *)0x0;
              }
              else {
                FUN_017dca7c(&local_1d0);
                plVar34 = local_1b0;
                if (local_1b0 != (long *)0x0) {
                  plVar35 = local_1b0 + 1;
                  do {
                    iVar19 = (int)*plVar35 + -1;
                    cVar4 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                    if (bVar32) {
                      *(int *)plVar35 = iVar19;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar19 == 0) {
                    local_1b0[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar28 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar28;
                    local_b0 = (long *)*plVar34;
                    FUN_02a44274(lVar28 + 0xd8,&local_b0);
                  }
                }
              }
              if (local_1d0 == (long *)0x0) {
                bVar32 = false;
              }
              else {
                uVar24 = FUN_018d469c();
                if ((uVar24 & 1) == 0) {
                  uStack_15c = 0x3f800000;
                  uStack_158 = 0x3f800000;
                  local_160 = 0;
                  local_1b0 = (long *)CONCAT44(local_1b0._4_4_,4);
                  local_170 = (long *)0x0;
                  uStack_168 = 0;
                  local_180 = (long *)0x0;
                  local_178 = 0;
                  local_190 = (long *)0x0;
                  local_188 = 0;
                  local_1a0 = 0;
                  uStack_198 = 0;
                  (**(code **)(*local_1d0 + 0x10))(&local_b0);
                  local_d0 = (long *)0x0;
                  local_c8 = (char *)0x0;
                  FUN_017dc294(&local_d0,&local_b0);
                  plVar34 = local_b0;
                  if (local_b0 != (long *)0x0) {
                    plVar35 = local_b0 + 1;
                    do {
                      iVar19 = (int)*plVar35 + -1;
                      cVar4 = '\x01';
                      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                      if (bVar32) {
                        *(int *)plVar35 = iVar19;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar19 == 0) {
                      local_b0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar28 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar28;
                      local_f0 = (long *)*plVar34;
                      FUN_02a44274(lVar28 + 0xd8,&local_f0);
                    }
                  }
                  FUN_025939c4(&local_190,&local_d0);
                  plVar34 = local_d0;
                  if (local_d0 != (long *)0x0) {
                    plVar35 = local_d0 + 1;
                    do {
                      iVar19 = (int)*plVar35 + -1;
                      cVar4 = '\x01';
                      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                      if (bVar32) {
                        *(int *)plVar35 = iVar19;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar19 == 0) {
                      local_d0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar28 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar28;
                      local_b0 = (long *)*plVar34;
                      FUN_02a44274(lVar28 + 0xd8,&local_b0);
                    }
                  }
                  FUN_025e2110(pcVar2,&local_1b0);
                  if ((*(byte *)(local_1d0 + 0xf3) >> 2 & 1) == 0) {
                    local_b0 = (long *)0x0;
                    uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
                    local_a0[4] = 0;
                    local_98._0_5_ = (uint5)(uint)local_98;
                    local_b0 = (long *)FUN_025d3e08(local_88);
                    local_b8 = (long *)0x0;
                    local_d0 = (long *)0xc769b974a002b712;
                    local_c8 = "buddy_call_keep_frame";
                    local_c0 = 0x15;
                    if (((*PTR_DAT_04379660 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379660);
                    }
                    lVar28 = *(long *)PTR_DAT_04379668;
                    *(long *)PTR_DAT_04379670 = lVar28;
                    uVar24 = *(ulong *)(lVar28 + 0x60);
                    if (uVar24 == 0) {
LAB_025e1140:
                      uVar22 = 0;
                    }
                    else {
                      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
                      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar29 < 2) {
                        uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
                      }
                      else {
                        uVar30 = 0xdda9f413319d82e4;
                        if (uVar24 < 0xdda9f413319d82e5) {
                          uVar30 = 0;
                          if (uVar24 != 0) {
                            uVar30 = 0xdda9f413319d82e4 / uVar24;
                          }
                          uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                        }
                      }
                      plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
                      if ((plVar34 == (long *)0x0) ||
                         (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0)) goto LAB_025e1140;
                      if (uVar29 < 2) {
                        do {
                          if (plVar34[1] == 0xdda9f413319d82e4) {
                            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e10ec;
                          }
                          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                          plVar34 = (long *)*plVar34;
                        } while (plVar34 != (long *)0x0);
                        goto LAB_025e1140;
                      }
                      while( true ) {
                        uVar29 = plVar34[1];
                        if (uVar29 != 0xdda9f413319d82e4) {
                          if (uVar24 <= uVar29) {
                            uVar9 = 0;
                            if (uVar24 != 0) {
                              uVar9 = uVar29 / uVar24;
                            }
                            uVar29 = uVar29 - uVar9 * uVar24;
                          }
                          if (uVar29 == uVar30) goto LAB_025e0b50;
                          goto LAB_025e1140;
                        }
                        if (plVar34[2] == -0x22560becce627d1c) break;
LAB_025e0b50:
                        plVar34 = (long *)*plVar34;
                        if (plVar34 == (long *)0x0) goto LAB_025e1140;
                      }
LAB_025e10ec:
                      plVar34 = (long *)plVar34[3];
                      if (plVar34 == (long *)0x0) goto LAB_025e1140;
                      plVar35 = plVar34 + 10;
                      do {
                        cVar4 = '\x01';
                        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                        if (bVar32) {
                          *(int *)plVar35 = (int)*plVar35 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      uVar22 = FUN_00d78f50(plVar34,&local_d0);
                      do {
                        iVar19 = (int)*plVar35 + -1;
                        cVar4 = '\x01';
                        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                        if (bVar32) {
                          *(int *)plVar35 = iVar19;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar19 == 0) {
                        (**(code **)(*plVar34 + 0x10))(plVar34);
                      }
                    }
                    local_a0._0_4_ = uVar22;
                    uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
                    if (local_b8 != (long *)0x0) {
                      (**(code **)(*local_b8 + 0x20))();
                    }
                    local_d0 = (long *)0x76f44b3fa0428cc2;
                    local_c8 = "buddy_call_lip_sync_frame";
                    local_c0 = 0x19;
                    local_b8 = (long *)0x0;
                    if (((*PTR_DAT_04379660 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379660);
                    }
                    lVar28 = *(long *)PTR_DAT_04379668;
                    *(long *)PTR_DAT_04379670 = lVar28;
                    uVar24 = *(ulong *)(lVar28 + 0x60);
                    if (uVar24 == 0) {
LAB_025e1828:
                      uVar22 = 0;
                    }
                    else {
                      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
                      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar29 < 2) {
                        uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
                      }
                      else {
                        uVar30 = 0xdda9f413319d82e4;
                        if (uVar24 < 0xdda9f413319d82e5) {
                          uVar30 = 0;
                          if (uVar24 != 0) {
                            uVar30 = 0xdda9f413319d82e4 / uVar24;
                          }
                          uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                        }
                      }
                      plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
                      if ((plVar34 == (long *)0x0) ||
                         (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0)) goto LAB_025e1828;
                      if (uVar29 < 2) {
                        do {
                          if (plVar34[1] == 0xdda9f413319d82e4) {
                            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e17d4;
                          }
                          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                          plVar34 = (long *)*plVar34;
                        } while (plVar34 != (long *)0x0);
                        goto LAB_025e1828;
                      }
                      while( true ) {
                        uVar29 = plVar34[1];
                        if (uVar29 != 0xdda9f413319d82e4) {
                          if (uVar24 <= uVar29) {
                            uVar9 = 0;
                            if (uVar24 != 0) {
                              uVar9 = uVar29 / uVar24;
                            }
                            uVar29 = uVar29 - uVar9 * uVar24;
                          }
                          if (uVar29 == uVar30) goto LAB_025e1598;
                          goto LAB_025e1828;
                        }
                        if (plVar34[2] == -0x22560becce627d1c) break;
LAB_025e1598:
                        plVar34 = (long *)*plVar34;
                        if (plVar34 == (long *)0x0) goto LAB_025e1828;
                      }
LAB_025e17d4:
                      plVar34 = (long *)plVar34[3];
                      if (plVar34 == (long *)0x0) goto LAB_025e1828;
                      plVar35 = plVar34 + 10;
                      do {
                        cVar4 = '\x01';
                        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                        if (bVar32) {
                          *(int *)plVar35 = (int)*plVar35 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      uVar22 = FUN_00d78f50(plVar34,&local_d0);
                      do {
                        iVar19 = (int)*plVar35 + -1;
                        cVar4 = '\x01';
                        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                        if (bVar32) {
                          *(int *)plVar35 = iVar19;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar19 == 0) {
                        (**(code **)(*plVar34 + 0x10))(plVar34);
                      }
                    }
                    local_98 = (long *)CONCAT44(local_98._4_4_,uVar22);
                    local_a0[4] = 1;
                    if (local_b8 != (long *)0x0) {
                      (**(code **)(*local_b8 + 0x20))();
                    }
                    uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
                    FUN_025d35b8(local_88,&local_b0);
                    local_1d0[0xf3] = local_1d0[0xf3] | 4;
                  }
                  if (local_170 != (long *)0x0) {
                    (**(code **)(*local_170 + 0x20))();
                  }
                  plVar34 = local_180;
                  if (local_180 != (long *)0x0) {
                    plVar35 = local_180 + 1;
                    do {
                      iVar19 = (int)*plVar35 + -1;
                      cVar4 = '\x01';
                      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                      if (bVar32) {
                        *(int *)plVar35 = iVar19;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar19 == 0) {
                      local_180[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar28 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar28;
                      local_b0 = (long *)*plVar34;
                      FUN_02a44274(lVar28 + 0xd8,&local_b0);
                    }
                  }
                  plVar34 = local_190;
                  if (local_190 != (long *)0x0) {
                    plVar35 = local_190 + 1;
                    do {
                      iVar19 = (int)*plVar35 + -1;
                      cVar4 = '\x01';
                      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                      if (bVar32) {
                        *(int *)plVar35 = iVar19;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar19 == 0) {
                      local_190[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar28 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar28;
                      local_b0 = (long *)*plVar34;
                      FUN_02a44274(lVar28 + 0xd8,&local_b0);
                    }
                  }
                  bVar32 = true;
                }
                else {
                  bVar32 = false;
                }
                if (local_1d0 != (long *)0x0) {
                  lVar28 = local_1d0[0xb];
                  piVar1 = (int *)(lVar28 + 0xc);
                  do {
                    iVar19 = *piVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar19 + -1 == 0) {
                    *(undefined8 *)(lVar28 + 0x18) = 0;
                    (**(code **)(*local_1d0 + 0x20))();
                  }
                }
              }
              lVar28 = *(long *)(lVar27 + 8);
              piVar1 = (int *)(lVar28 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar28 + 0x18) = 0;
                (**(code **)(*(long *)(lVar27 + -0x50) + 0x20))();
              }
              if (!bVar32) break;
              goto joined_r0x025ddcfc;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_025df6b8:
          iVar19 = iVar20;
        } while (iVar20 != 0);
      }
LAB_025dc1f0:
      if (*(long *)(param_1 + 0x200) != 0) {
        FUN_01e604d4(&local_f8);
        if (local_f8 == (long *)0x0) goto LAB_025dc1fc;
        local_1b0 = (long *)((ulong)local_1b0 & 0xffffffffffffff00);
        bVar32 = false;
        if ((char)local_f8[0x16] != '\0') {
          FUN_02594b30(&local_1b0,local_f8 + 0x18);
          if ((char)local_1b0 != '\0') {
            FUN_025e2110(pcVar2,&local_1a0);
            *(undefined4 *)(param_1 + 0x2c0) = 0x3c23d70a;
            if (local_120 == (undefined8 *)0x0) {
              local_b0 = (long *)0x0;
            }
            else {
              FUN_017dca7c(&local_b0);
              if (local_b0 != (long *)0x0) {
                uVar24 = FUN_018de07c();
                if ((uVar24 & 1) != 0) {
                  FUN_025d61b8(local_88,local_b0);
                  *(undefined1 *)((long)local_88 + 0x2ad) = 1;
                }
                if (local_b0 != (long *)0x0) {
                  lVar27 = local_b0[0xb];
                  piVar1 = (int *)(lVar27 + 0xc);
                  do {
                    iVar19 = *piVar1;
                    cVar4 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar32) {
                      *piVar1 = iVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar19 + -1 == 0) {
                    *(undefined8 *)(lVar27 + 0x18) = 0;
                    (**(code **)(*local_b0 + 0x20))();
                  }
                }
              }
            }
            uVar24 = FUN_01af8d50(local_80[0]);
            if ((uVar24 & 1) != 0) {
              if ((local_130 != (undefined8 *)0x0) && (uVar24 = FUN_02a43a8c(), (uVar24 & 1) == 0))
              {
LAB_025dddb0:
                uVar21 = *(uint *)(param_1 + 0x2d0);
                local_1d8 = (ulong)uVar21;
                local_b0 = (long *)0x3ee1fff5da8ad108;
                uStack_a8 = "town_smile_look_keep_time";
                local_a0 = (undefined1  [8])0x19;
                local_98 = (long *)0x0;
                if (((*PTR_DAT_04379660 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379660);
                }
                lVar27 = *(long *)PTR_DAT_04379668;
                *(long *)PTR_DAT_04379670 = lVar27;
                uVar24 = *(ulong *)(lVar27 + 0x60);
                if (uVar24 != 0) {
                  uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                  uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
                  uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar29 < 2) {
LAB_025de4d0:
                    uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
                  }
                  else {
                    uVar30 = 0xdda9f413319d82e4;
                    local_1d8._0_4_ = uVar21;
                    if (uVar24 < 0xdda9f413319d82e5) {
                      uVar30 = 0;
                      if (uVar24 != 0) {
                        uVar30 = 0xdda9f413319d82e4 / uVar24;
                      }
                      uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                    }
                  }
                  plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
                  uVar21 = (uint)local_1d8;
                  if ((plVar34 != (long *)0x0) &&
                     (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
                    if (uVar29 < 2) {
                      do {
                        if (plVar34[1] == 0xdda9f413319d82e4) {
                          if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df250;
                        }
                        else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                        plVar34 = (long *)*plVar34;
                      } while (plVar34 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar29 = plVar34[1];
                        if (uVar29 == 0xdda9f413319d82e4) {
                          if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df250;
                        }
                        else {
                          if (uVar24 <= uVar29) {
                            uVar9 = 0;
                            if (uVar24 != 0) {
                              uVar9 = uVar29 / uVar24;
                            }
                            uVar29 = uVar29 - uVar9 * uVar24;
                          }
                          if (uVar29 != uVar30) break;
                        }
                        plVar34 = (long *)*plVar34;
                      } while (plVar34 != (long *)0x0);
                    }
                  }
                }
                local_1d8._0_4_ = uVar21;
                uVar21 = 0;
                goto joined_r0x025df2a4;
              }
              if ((local_140 != (long *)0x0) && (uVar24 = FUN_02a43a8c(), (uVar24 & 1) == 0)) {
                cVar4 = DAT_00000700;
                if (local_140 != (long *)0x0) {
                  FUN_00b9e6a4(&local_b0);
                  cVar4 = (char)local_b0[0xe0];
                  if (local_b0 != (long *)0x0) {
                    lVar27 = local_b0[0xb];
                    piVar1 = (int *)(lVar27 + 0xc);
                    do {
                      iVar19 = *piVar1;
                      cVar5 = '\x01';
                      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar32) {
                        *piVar1 = iVar19 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar19 + -1 == 0) {
                      *(undefined8 *)(lVar27 + 0x18) = 0;
                      (**(code **)(*local_b0 + 0x20))();
                    }
                  }
                }
                if (cVar4 != '\0') goto LAB_025dddb0;
              }
            }
            goto LAB_025e1c28;
          }
          bVar32 = false;
        }
        goto joined_r0x025e1f48;
      }
      local_f8 = (long *)0x0;
      goto LAB_025dc1fc;
    }
    FUN_00cfac20(&local_b0);
    plVar31 = (long *)PTR_DAT_04380748;
    if (local_b0 == (long *)0x0) goto LAB_025dc1e0;
    lVar27 = *(long *)(param_1 + 0x230);
    if ((lVar27 != 0) && (*(uint *)(lVar27 + 0xc) != 0)) {
      puVar3 = (uint *)(lVar27 + 0xc);
      uVar38 = *(uint *)(lVar27 + 0xc);
      while( true ) {
        plVar34 = *(long **)(lVar27 + 0x10);
        if (((*(byte *)plVar31 & 1) == 0) && (iVar19 = __cxa_guard_acquire(plVar31), iVar19 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar14), iVar19 != 0)) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar26;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)PTR_DAT_04380750 = PTR_DAT_043794d8;
          __cxa_guard_release(plVar31);
        }
        while( true ) {
          if (plVar34 == (long *)0x0) goto LAB_025dd654;
          if (plVar34 == (long *)PTR_DAT_04380750) break;
          plVar34 = (long *)*plVar34;
        }
        uVar21 = *puVar3;
        if (uVar21 == uVar38) break;
        ClearExclusiveLocal();
LAB_025dceb4:
        uVar38 = uVar21;
        if (uVar21 == 0) goto LAB_025dd654;
      }
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar32) {
        *puVar3 = uVar38 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_025dceb4;
      local_1d8 = *(ulong *)(lVar27 + 0x18);
      if (local_1d8 == 0) goto LAB_025dd654;
      FUN_009c69bc(&local_1b0,local_b0);
      (**(code **)(*local_1b0 + 0x40))();
      if (local_1b0 != (long *)0x0) {
        lVar27 = local_1b0[0xb];
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*local_1b0 + 0x20))();
        }
      }
      uVar24 = *(ulong *)(local_1d8 + 0xf0);
      if (uVar24 == 0) {
LAB_025de4cc:
        FUN_025e6a80();
        uVar24 = extraout_x8;
        lVar27 = extraout_x10;
        uVar29 = extraout_x11;
        goto LAB_025de4d0;
      }
      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar30 = (ulong)((uint)uVar24 - 1) & 6;
      }
      else {
        uVar30 = 6;
        if (uVar24 < 7) {
          uVar21 = (uint)uVar24 & 0xff;
          uVar8 = 0;
          if ((uVar24 & 0xff) != 0) {
            uVar8 = 6 / uVar21;
          }
          uVar30 = (ulong)(6 - uVar8 * uVar21);
        }
      }
      plVar34 = *(long **)(*(long *)(local_1d8 + 0xe8) + uVar30 * 8);
      if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0))
      goto LAB_025de4cc;
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 6) {
            if ((int)plVar34[2] == 6) goto LAB_025de708;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
        goto LAB_025de4cc;
      }
      while( true ) {
        uVar29 = plVar34[1];
        if (uVar29 != 6) {
          if (uVar24 <= uVar29) {
            uVar9 = 0;
            if (uVar24 != 0) {
              uVar9 = uVar29 / uVar24;
            }
            uVar29 = uVar29 - uVar9 * uVar24;
          }
          if (uVar29 == uVar30) goto LAB_025ddd60;
          goto LAB_025de4cc;
        }
        if ((int)plVar34[2] == 6) break;
LAB_025ddd60:
        plVar34 = (long *)*plVar34;
        if (plVar34 == (long *)0x0) goto LAB_025de4cc;
      }
LAB_025de708:
      plVar34 = (long *)plVar34[3];
      if (plVar34 != (long *)0x0) {
        lVar27 = plVar34[0xb];
        if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_025df238;
        if (*(long *)(lVar27 + 0x10) == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
          *(undefined8 *)(lVar27 + 0x10) = uVar26;
        }
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar31 = (long *)(**(code **)plVar34[10])(plVar34 + 10);
      puVar15 = PTR_DAT_0437eef0;
      if (((*PTR_DAT_0437eee8 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_0437eee8), puVar16 = PTR_DAT_0437ef00, iVar19 != 0))
      {
        if (((*PTR_DAT_0437eef8 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar19 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)
             ) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar26;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar16 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437eef8);
        }
        *(undefined **)puVar15 = puVar16;
        __cxa_guard_release(PTR_DAT_0437eee8);
      }
      for (; plVar31 != (long *)puVar15; plVar31 = (long *)*plVar31) {
      }
      plVar35 = (long *)plVar34[0x13];
      if (plVar35 == (long *)0x0) {
        plVar31 = (long *)0x0;
LAB_025dee9c:
        if (plVar34 != (long *)0x0) {
          lVar27 = plVar34[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar34 + 0x20))(plVar34);
          }
        }
        lVar27 = *(long *)(local_1d8 + 8);
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*(long *)(local_1d8 - 0x50) + 0x20))((long *)(local_1d8 - 0x50));
        }
        goto joined_r0x025def10;
      }
      plVar31 = (long *)0x0;
      fVar39 = 0.0;
      plVar37 = (long *)plVar35[3];
      do {
        if (plVar37 != (long *)0x0) {
          lVar27 = plVar37[0xb];
          if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_025df238;
          if (*(long *)(lVar27 + 0x10) == 0) {
            uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
            *(undefined8 *)(lVar27 + 0x10) = uVar26;
          }
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar27 = plVar37[0xb];
          if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_025df238;
          if (*(long *)(lVar27 + 0x10) == 0) {
            uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
            *(undefined8 *)(lVar27 + 0x10) = uVar26;
          }
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar24 = FUN_01a73b70(plVar37);
        plVar17 = plVar31;
        if (((uVar24 & 1) != 0) &&
           ((uVar24 = FUN_01ba01d8(plVar37), (uVar24 & 1) != 0 ||
            (uVar24 = FUN_01ba01a8(plVar37), (uVar24 & 1) != 0)))) {
          local_210 = (float)uVar25;
          fStack_20c = (float)((ulong)uVar25 >> 0x20);
          fStack_208 = (float)uVar42;
          fStack_204 = (float)((ulong)uVar42 >> 0x20);
          if (plVar31 == (long *)0x0) {
            if (plVar37 != (long *)0x0) {
              lVar27 = plVar37[0xb];
              if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) {
LAB_025df238:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar27 + 0x10) == 0) {
                uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
                *(undefined8 *)(lVar27 + 0x10) = uVar26;
              }
              piVar1 = (int *)(lVar27 + 0xc);
              do {
                cVar4 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar32) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            FUN_009c69bc(&local_1b0,plVar37);
            local_210 = local_210 - (float)local_1b0[0x1a];
            fStack_20c = fStack_20c - (float)((ulong)local_1b0[0x1a] >> 0x20);
            fStack_208 = fStack_208 - (float)local_1b0[0x1b];
            fStack_204 = fStack_204 - (float)((ulong)local_1b0[0x1b] >> 0x20);
            local_210 = local_210 * local_210;
            fStack_20c = fStack_20c * fStack_20c;
            fStack_208 = fStack_208 * fStack_208;
            fStack_204 = fStack_204 * fStack_204;
            auVar41._4_4_ = fStack_20c;
            auVar41._0_4_ = local_210;
            auVar41._8_4_ = fStack_208;
            auVar41._12_4_ = fStack_204;
            auVar10._4_4_ = fStack_20c;
            auVar10._0_4_ = local_210;
            auVar10._8_4_ = fStack_208;
            auVar10._12_4_ = fStack_204;
            auVar41 = NEON_ext(auVar41,auVar10,8,1);
            fVar39 = auVar41._0_4_ + local_210 + auVar41._4_4_ + fStack_20c;
            plVar17 = plVar37;
            if (local_1b0 != (long *)0x0) {
              lVar27 = local_1b0[0xb];
              piVar1 = (int *)(lVar27 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar4 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar32) {
                  *piVar1 = iVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar27 + 0x18) = 0;
                (**(code **)(*local_1b0 + 0x20))();
              }
            }
          }
          else {
            FUN_009c69bc(&local_1b0,plVar37);
            local_210 = local_210 - (float)local_1b0[0x1a];
            fStack_20c = fStack_20c - (float)((ulong)local_1b0[0x1a] >> 0x20);
            fStack_208 = fStack_208 - (float)local_1b0[0x1b];
            fStack_204 = fStack_204 - (float)((ulong)local_1b0[0x1b] >> 0x20);
            local_210 = local_210 * local_210;
            fStack_20c = fStack_20c * fStack_20c;
            fStack_208 = fStack_208 * fStack_208;
            fStack_204 = fStack_204 * fStack_204;
            auVar11._4_4_ = fStack_20c;
            auVar11._0_4_ = local_210;
            auVar11._8_4_ = fStack_208;
            auVar11._12_4_ = fStack_204;
            auVar12._4_4_ = fStack_20c;
            auVar12._0_4_ = local_210;
            auVar12._8_4_ = fStack_208;
            auVar12._12_4_ = fStack_204;
            auVar41 = NEON_ext(auVar11,auVar12,8,1);
            fVar40 = auVar41._0_4_ + local_210 + auVar41._4_4_ + fStack_20c;
            if (local_1b0 != (long *)0x0) {
              lVar27 = local_1b0[0xb];
              piVar1 = (int *)(lVar27 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar4 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar32) {
                  *piVar1 = iVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar27 + 0x18) = 0;
                (**(code **)(*local_1b0 + 0x20))();
              }
            }
            if (fVar40 < fVar39) {
              if (plVar37 != (long *)0x0) {
                lVar27 = plVar37[0xb];
                if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_025df238;
                if (*(long *)(lVar27 + 0x10) == 0) {
                  uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
                  *(undefined8 *)(lVar27 + 0x10) = uVar26;
                }
                piVar1 = (int *)(lVar27 + 0xc);
                do {
                  cVar4 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar32) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              lVar27 = plVar31[0xb];
              piVar1 = (int *)(lVar27 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar4 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar32) {
                  *piVar1 = iVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar17 = plVar37;
              fVar39 = fVar40;
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar27 + 0x18) = 0;
                (**(code **)(*plVar31 + 0x20))(plVar31);
              }
            }
          }
        }
        plVar31 = plVar17;
        if (plVar37 != (long *)0x0) {
          lVar27 = plVar37[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar37 + 0x20))(plVar37);
          }
          lVar27 = plVar37[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar37 + 0x20))(plVar37);
          }
        }
        plVar35 = (long *)*plVar35;
        if (plVar35 == (long *)0x0) goto LAB_025dee9c;
        plVar37 = (long *)plVar35[3];
      } while( true );
    }
LAB_025dd654:
    plVar31 = (long *)0x0;
joined_r0x025def10:
    if (local_b0 == (long *)0x0) {
LAB_025def14:
      if (plVar31 != (long *)0x0) goto LAB_025def18;
      goto LAB_025dc1e4;
    }
    lVar27 = local_b0[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 != 0) goto LAB_025def14;
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*local_b0 + 0x20))();
    if (plVar31 == (long *)0x0) goto LAB_025dc1e4;
LAB_025def18:
    uVar24 = FUN_01ba01d8(plVar31);
    if ((uVar24 & 1) == 0) {
      uVar38 = 0;
      lVar27 = *(long *)(param_1 + 0x210);
      goto joined_r0x025dc1ec;
    }
    local_160 = 0;
    local_170 = (long *)0x0;
    uStack_168 = 0;
    uStack_15c = 0x3f800000;
    uStack_158 = 0x3f800000;
    local_1b0 = (long *)CONCAT44(local_1b0._4_4_,4);
    local_180 = (long *)0x0;
    local_178 = 0;
    local_190 = (long *)0x0;
    local_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    (**(code **)(*plVar31 + 0x10))(&local_b0,plVar31);
    local_d0 = (long *)0x0;
    local_c8 = (char *)0x0;
    FUN_00946790(&local_d0,&local_b0);
    plVar34 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar35 = local_b0 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_f0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_f0);
      }
    }
    FUN_00bfffdc(&local_190,&local_d0);
    plVar34 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar35 = local_d0 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    FUN_025e2110(pcVar2,&local_1b0);
    uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
    local_d0 = (long *)0xdda9f413319d82e4;
    local_c8 = "player_face";
    local_a0[4] = 0;
    local_c0 = 0xb;
    local_b8 = (long *)0x0;
    local_f0 = (long *)0xb7f80e002cdb9e90;
    local_e8 = "face_look_warlike";
    local_98._0_5_ = (uint5)(uint)local_98;
    local_e0 = 0x11;
    local_d8 = (long *)0x0;
    local_b0 = (long *)FUN_00ea3260(&local_d0,&local_f0);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_a0._0_4_ = 2;
    uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,0x100000000);
    uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
    FUN_025d35b8(local_88,&local_b0);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    plVar34 = local_180;
    if (local_180 != (long *)0x0) {
      plVar35 = local_180 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    if (local_190 != (long *)0x0) {
      plVar34 = local_190 + 1;
      do {
        iVar19 = (int)*plVar34 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar32) {
          *(int *)plVar34 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_025dc6cc;
    }
    goto joined_r0x025ddcfc;
  }
  FUN_016c3724(&local_88);
  plVar36 = local_1b0;
  if (local_1b0 == (long *)0x0) goto LAB_025dc16c;
  plVar31 = local_1b0 + 1;
  do {
    iVar19 = (int)*plVar31 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar32) {
      *(int *)plVar31 = iVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 != 0) goto LAB_025dc16c;
  local_1b0[2] = 0;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar27 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar27;
  local_b0 = (long *)*plVar36;
  FUN_02a44274(lVar27 + 0xd8,&local_b0);
  if (local_88 != (long *)0x0) goto LAB_025dc174;
  goto LAB_025dc2cc;
LAB_025df250:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar21 = FUN_00d78f50(plVar34,&local_b0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
joined_r0x025df2a4:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uint)local_1d8 == uVar21) {
    iVar19 = FUN_025e2580(100);
    local_b0 = (long *)0x9b7b7a00967d3cd4;
    uStack_a8 = "town_smile_percent";
    local_a0 = (undefined1  [8])0x12;
    local_98 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar27 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar27;
    uVar24 = *(ulong *)(lVar27 + 0x60);
    if (uVar24 != 0) {
      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar30 = 0xdda9f413319d82e4;
        if (uVar24 < 0xdda9f413319d82e5) {
          uVar30 = 0;
          if (uVar24 != 0) {
            uVar30 = 0xdda9f413319d82e4 / uVar24;
          }
          uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
        }
      }
      plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar29 < 2) {
          do {
            if (plVar34[1] == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0028;
            }
            else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar29 = plVar34[1];
            if (uVar29 == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0028;
            }
            else {
              if (uVar24 <= uVar29) {
                uVar9 = 0;
                if (uVar24 != 0) {
                  uVar9 = uVar29 / uVar24;
                }
                uVar29 = uVar29 - uVar9 * uVar24;
              }
              if (uVar29 != uVar30) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    iVar20 = 0;
    goto joined_r0x025e02a0;
  }
  iVar19 = *(int *)(param_1 + 0x2f0) + -1;
  if ((0 < *(int *)(param_1 + 0x2f0)) && (*(int *)(param_1 + 0x2f0) = iVar19, iVar19 == 0)) {
    local_b0 = (long *)0x0;
    uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
    local_a0[4] = 0;
    local_98._0_5_ = (uint5)(uint)local_98;
    local_b0 = (long *)FUN_025d3e08(local_88);
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x1e32bac0495deab2;
    local_c8 = "town_smile_random_reaction_keep_time";
    local_c0 = 0x24;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar27 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar27;
    uVar24 = *(ulong *)(lVar27 + 0x60);
    if (uVar24 != 0) {
      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar30 = 0xdda9f413319d82e4;
        if (uVar24 < 0xdda9f413319d82e5) {
          uVar30 = 0;
          if (uVar24 != 0) {
            uVar30 = 0xdda9f413319d82e4 / uVar24;
          }
          uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
        }
      }
      plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar29 < 2) {
          do {
            if (plVar34[1] == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dfcfc;
            }
            else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar29 = plVar34[1];
            if (uVar29 == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dfcfc;
            }
            else {
              if (uVar24 <= uVar29) {
                uVar9 = 0;
                if (uVar24 != 0) {
                  uVar9 = uVar29 / uVar24;
                }
                uVar29 = uVar29 - uVar9 * uVar24;
              }
              if (uVar29 != uVar30) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025dfd50;
  }
  goto LAB_025e1c28;
LAB_025e0028:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
    iVar20 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar20 = FUN_00d78f50(plVar34,&local_b0);
    do {
      iVar23 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
joined_r0x025e02a0:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (iVar19 <= iVar20) {
    local_b0 = (long *)0x0;
    uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
    local_a0[4] = 0;
    local_98._0_5_ = (uint5)(uint)local_98;
    local_b0 = (long *)FUN_025d3e08(local_88);
    local_c8 = "town_smile_look_keep_time";
    local_d0 = (long *)0x3ee1fff5da8ad108;
    local_b8 = (long *)0x0;
    local_c0 = 0x19;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar27 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar27;
    uVar24 = *(ulong *)(lVar27 + 0x60);
    if (uVar24 != 0) {
      uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
      uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar30 = 0xdda9f413319d82e4;
        if (uVar24 < 0xdda9f413319d82e5) {
          uVar30 = 0;
          if (uVar24 != 0) {
            uVar30 = 0xdda9f413319d82e4 / uVar24;
          }
          uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
        }
      }
      plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
      if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
        if (uVar29 < 2) {
          do {
            if (plVar34[1] == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0784;
            }
            else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar29 = plVar34[1];
            if (uVar29 == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0784;
            }
            else {
              if (uVar24 <= uVar29) {
                uVar9 = 0;
                if (uVar24 != 0) {
                  uVar9 = uVar29 / uVar24;
                }
                uVar29 = uVar29 - uVar9 * uVar24;
              }
              if (uVar29 != uVar30) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
      }
    }
    goto LAB_025e07d8;
  }
LAB_025e080c:
  uStack_a8 = "town_smile_random_reaction_frame_min";
  local_b0 = (long *)0xc7854f2b0220cab3;
  local_a0 = (undefined1  [8])0x24;
  local_98 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1260;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1260;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e12b4:
  iVar19 = 0;
LAB_025e12b8:
  local_c8 = "town_smile_random_reaction_frame_max";
  local_d0 = (long *)0xc7a1652b02396acd;
  local_c0 = 0x24;
  local_b8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1a24;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1a24;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e1a78:
  iVar20 = 0;
LAB_025e1a7c:
  local_e8 = "town_smile_random_reaction_frame_min";
  local_f0 = (long *)0xc7854f2b0220cab3;
  local_e0 = 0x24;
  local_d8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar23 = __cxa_guard_acquire(PTR_DAT_04379660), iVar23 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e206c;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e206c;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e20c0:
  iVar23 = 0;
LAB_025e20c4:
  iVar20 = FUN_025e2580(iVar20 - iVar23);
  *(int *)(param_1 + 0x2f0) = iVar20 + iVar19;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  plVar34 = local_98;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
    plVar34 = local_98;
  }
  goto joined_r0x025e2108;
LAB_025e0784:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
LAB_025e07d8:
    uVar22 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar22 = FUN_00d78f50(plVar34,&local_d0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
  local_a0._0_4_ = uVar22;
  uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
  FUN_025d35b8(local_88,&local_b0);
  goto LAB_025e080c;
LAB_025e1260:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e12b4;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar34,&local_b0);
  do {
    iVar20 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar20;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e12b8;
LAB_025e1a24:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e1a78;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar20 = FUN_00d78f50(plVar34,&local_d0);
  do {
    iVar23 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar23;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e1a7c;
LAB_025e206c:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e20c0;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar23 = FUN_00d78f50(plVar34,&local_f0);
  do {
    iVar7 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e20c4;
LAB_025dfcfc:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
LAB_025dfd50:
    uVar22 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar22 = FUN_00d78f50(plVar34,&local_d0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
  local_a0._0_4_ = uVar22;
  uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
  FUN_025d35b8(local_88,&local_b0);
  local_c8 = "town_smile_random_reaction_frame_min";
  local_d0 = (long *)0xc7854f2b0220cab3;
  local_c0 = 0x24;
  local_b8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e090c;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e090c;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e0960:
  iVar19 = 0;
  goto LAB_025e0964;
LAB_025e090c:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e0960;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar19 = FUN_00d78f50(plVar34,&local_d0);
  do {
    iVar20 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar20;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
LAB_025e0964:
  local_e8 = "town_smile_random_reaction_frame_max";
  local_f0 = (long *)0xc7a1652b02396acd;
  local_e0 = 0x24;
  local_d8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e13b8;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e13b8;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e140c:
  iVar20 = 0;
LAB_025e1410:
  local_1c8 = "town_smile_random_reaction_frame_min";
  local_1d0 = (long *)0xc7854f2b0220cab3;
  local_1c0 = 0x24;
  local_1b8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar23 = __cxa_guard_acquire(PTR_DAT_04379660), iVar23 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar27 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar27;
  uVar24 = *(ulong *)(lVar27 + 0x60);
  if (uVar24 != 0) {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar30 = 0xdda9f413319d82e4;
      if (uVar24 < 0xdda9f413319d82e5) {
        uVar30 = 0;
        if (uVar24 != 0) {
          uVar30 = 0xdda9f413319d82e4 / uVar24;
        }
        uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar29 < 2) {
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1b7c;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar34[1];
          if (uVar29 == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e1b7c;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar30) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_025e1bd0:
  iVar23 = 0;
LAB_025e1bd4:
  iVar20 = FUN_025e2580(iVar20 - iVar23);
  *(int *)(param_1 + 0x2f0) = iVar20 + iVar19;
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  plVar34 = local_b8;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
    plVar34 = local_b8;
  }
joined_r0x025e2108:
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))();
  }
LAB_025e1c28:
  if ((char)local_1b0 != '\0') {
    if (local_120 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_120 + 1);
      do {
        iVar19 = *piVar1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 + -1 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*local_120;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar19 = *piVar1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*local_130;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    plVar34 = local_140;
    if (local_140 != (long *)0x0) {
      plVar35 = local_140 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    if ((long *)CONCAT44(uStack_15c,local_160) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_15c,local_160) + 0x20))();
    }
    plVar34 = local_170;
    if (local_170 != (long *)0x0) {
      plVar35 = local_170 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_170[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    plVar34 = local_180;
    if (local_180 != (long *)0x0) {
      plVar35 = local_180 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar27 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar27;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar27 + 0xd8,&local_b0);
      }
    }
    local_1b0 = (long *)((ulong)local_1b0 & 0xffffffffffffff00);
  }
  bVar32 = true;
joined_r0x025e1f48:
  if (local_f8 != (long *)0x0) {
    lVar27 = local_f8[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (!bVar32) {
LAB_025dc1fc:
    uVar24 = FUN_025e26b4(param_1);
    if ((uVar24 & 1) != 0) goto joined_r0x025ddcfc;
    if (((uVar38 & 1) == 0) && (uVar24 = FUN_01ba01a8(plVar31), (uVar24 & 1) != 0)) {
      local_160 = 0;
      local_170 = (long *)0x0;
      uStack_168 = 0;
      uStack_15c = 0x3f800000;
      uStack_158 = 0x3f800000;
      local_1b0 = (long *)CONCAT44(local_1b0._4_4_,4);
      local_180 = (long *)0x0;
      local_178 = 0;
      local_190 = (long *)0x0;
      local_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      (**(code **)(*plVar31 + 0x10))(&local_b0,plVar31);
      local_d0 = (long *)0x0;
      local_c8 = (char *)0x0;
      FUN_00946790(&local_d0,&local_b0);
      plVar34 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar35 = local_b0 + 1;
        do {
          iVar19 = (int)*plVar35 + -1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar32) {
            *(int *)plVar35 = iVar19;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar27 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar27;
          local_f0 = (long *)*plVar34;
          FUN_02a44274(lVar27 + 0xd8,&local_f0);
        }
      }
      FUN_00bfffdc(&local_190,&local_d0);
      plVar34 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar35 = local_d0 + 1;
        do {
          iVar19 = (int)*plVar35 + -1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar32) {
            *(int *)plVar35 = iVar19;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar27 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar27;
          local_b0 = (long *)*plVar34;
          FUN_02a44274(lVar27 + 0xd8,&local_b0);
        }
      }
      FUN_025e2110(pcVar2,&local_1b0);
      puVar14 = PTR_DAT_04379660;
      iVar19 = *(int *)(param_1 + 0x2d0);
      local_b0 = (long *)0x377ebcb6869b415b;
      uStack_a8 = "look_capture_face_delay_frame";
      local_a0 = (undefined1  [8])0x1d;
      local_98 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar27 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar27;
      uVar24 = *(ulong *)(lVar27 + 0x60);
      if (uVar24 == 0) {
LAB_025dd1d8:
        iVar20 = 0;
      }
      else {
        uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
        uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
        uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar29 < 2) {
          uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar30 = 0xdda9f413319d82e4;
          if (uVar24 < 0xdda9f413319d82e5) {
            uVar30 = 0;
            if (uVar24 != 0) {
              uVar30 = 0xdda9f413319d82e4 / uVar24;
            }
            uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
          }
        }
        plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
        if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0))
        goto LAB_025dd1d8;
        if (1 < uVar29) {
          do {
            uVar29 = plVar34[1];
            if (uVar29 == 0xdda9f413319d82e4) {
              if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dc520;
            }
            else {
              if (uVar24 <= uVar29) {
                uVar9 = 0;
                if (uVar24 != 0) {
                  uVar9 = uVar29 / uVar24;
                }
                uVar29 = uVar29 - uVar9 * uVar24;
              }
              if (uVar29 != uVar30) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
          goto LAB_025dd1d8;
        }
        do {
          if (plVar34[1] == 0xdda9f413319d82e4) {
            if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dc520;
          }
          else if ((plVar34[1] & uVar24 - 1) != uVar30) goto LAB_025dd1d8;
          plVar34 = (long *)*plVar34;
          iVar20 = 0;
        } while (plVar34 != (long *)0x0);
      }
joined_r0x025dc9e8:
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (iVar20 <= iVar19) {
        uVar24 = FUN_01ba01d0(plVar31);
        if ((uVar24 & 1) == 0) {
          uVar24 = FUN_01ba01bc(plVar31);
          if ((uVar24 & 1) == 0) {
            local_d0 = (long *)0xdda9f413319d82e4;
            local_c8 = "player_face";
            local_c0 = 0xb;
            uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
            local_f0 = (long *)0xba2976e5d443e718;
            local_e8 = "face_look_capturing";
            local_a0[4] = 0;
            local_98._0_5_ = (uint5)(uint)local_98;
            local_b8 = (long *)0x0;
            local_b0 = (long *)0x0;
            local_e0 = 0x13;
            local_d8 = (long *)0x0;
            local_b0 = (long *)FUN_00ea3260(&local_d0,&local_f0);
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x20))();
            }
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            local_a0._0_4_ = 2;
            uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,0x100000000);
            uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
            FUN_025d35b8(local_88,&local_b0);
          }
          else if ((*(byte *)(plVar31 + 0x153) & 1) == 0) {
            local_b0 = (long *)0x0;
            uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
            local_a0[4] = 0;
            local_98._0_5_ = (uint5)(uint)local_98;
            local_b0 = (long *)FUN_025d3c0c(local_88);
            local_b8 = (long *)0x0;
            local_d0 = (long *)0x11dee3c68f240638;
            local_c8 = "capture_result_win_keep_frame";
            local_c0 = 0x1d;
            if (((*puVar14 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar27 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar27;
            uVar24 = *(ulong *)(lVar27 + 0x60);
            if (uVar24 != 0) {
              uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
              uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
              uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar29 < 2) {
                uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
              }
              else {
                uVar30 = 0xdda9f413319d82e4;
                if (uVar24 < 0xdda9f413319d82e5) {
                  uVar30 = 0;
                  if (uVar24 != 0) {
                    uVar30 = 0xdda9f413319d82e4 / uVar24;
                  }
                  uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                }
              }
              plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
              if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0))
              {
                if (uVar29 < 2) {
                  do {
                    if (plVar34[1] == 0xdda9f413319d82e4) {
                      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dd940;
                    }
                    else if ((plVar34[1] & uVar24 - 1) != uVar30) goto LAB_025de42c;
                    plVar34 = (long *)*plVar34;
                    uVar22 = 0;
                  } while (plVar34 != (long *)0x0);
                }
                else {
                  do {
                    uVar29 = plVar34[1];
                    if (uVar29 == 0xdda9f413319d82e4) {
                      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dd940;
                    }
                    else {
                      if (uVar24 <= uVar29) {
                        uVar9 = 0;
                        if (uVar24 != 0) {
                          uVar9 = uVar29 / uVar24;
                        }
                        uVar29 = uVar29 - uVar9 * uVar24;
                      }
                      if (uVar29 != uVar30) goto LAB_025de42c;
                    }
                    plVar34 = (long *)*plVar34;
                    uVar22 = 0;
                  } while (plVar34 != (long *)0x0);
                }
                goto LAB_025de430;
              }
            }
            goto LAB_025de42c;
          }
        }
        else if ((*(byte *)(plVar31 + 0x153) & 1) == 0) {
          local_b0 = (long *)0x0;
          uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
          local_a0[4] = 0;
          local_98._0_5_ = (uint5)(uint)local_98;
          local_b0 = (long *)FUN_025d3d5c(local_88);
          local_b8 = (long *)0x0;
          local_d0 = (long *)0x11dee3c68f240638;
          local_c8 = "capture_result_win_keep_frame";
          local_c0 = 0x1d;
          if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)
             ) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar27 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar27;
          uVar24 = *(ulong *)(lVar27 + 0x60);
          if (uVar24 == 0) {
LAB_025de42c:
            uVar22 = 0;
          }
          else {
            uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
            uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
            uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar29 < 2) {
              uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
            }
            else {
              uVar30 = 0xdda9f413319d82e4;
              if (uVar24 < 0xdda9f413319d82e5) {
                uVar30 = 0;
                if (uVar24 != 0) {
                  uVar30 = 0xdda9f413319d82e4 / uVar24;
                }
                uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
              }
            }
            plVar34 = *(long **)(*(long *)(lVar27 + 0x58) + uVar30 * 8);
            if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0))
            goto LAB_025de42c;
            if (uVar29 < 2) {
              do {
                if (plVar34[1] == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025de3d8;
                }
                else if ((plVar34[1] & uVar24 - 1) != uVar30) goto LAB_025de42c;
                plVar34 = (long *)*plVar34;
                uVar22 = 0;
              } while (plVar34 != (long *)0x0);
            }
            else {
              do {
                uVar29 = plVar34[1];
                if (uVar29 == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025de3d8;
                }
                else {
                  if (uVar24 <= uVar29) {
                    uVar9 = 0;
                    if (uVar24 != 0) {
                      uVar9 = uVar29 / uVar24;
                    }
                    uVar29 = uVar29 - uVar9 * uVar24;
                  }
                  if (uVar29 != uVar30) goto LAB_025de42c;
                }
                plVar34 = (long *)*plVar34;
                uVar22 = 0;
              } while (plVar34 != (long *)0x0);
            }
          }
LAB_025de430:
          local_a0._0_4_ = uVar22;
          uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
          FUN_025d35b8(local_88,&local_b0);
          plVar31[0x153] = plVar31[0x153] | 1;
        }
      }
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 0x20))();
      }
      plVar34 = local_180;
      if (local_180 != (long *)0x0) {
        plVar35 = local_180 + 1;
        do {
          iVar19 = (int)*plVar35 + -1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar32) {
            *(int *)plVar35 = iVar19;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 == 0) {
          local_180[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar27 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar27;
          local_b0 = (long *)*plVar34;
          FUN_02a44274(lVar27 + 0xd8,&local_b0);
        }
      }
      if (local_190 != (long *)0x0) {
        plVar34 = local_190 + 1;
        do {
          iVar19 = (int)*plVar34 + -1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar32) {
            *(int *)plVar34 = iVar19;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_025dc6cc:
        plVar34 = local_190;
        if (iVar19 == 0) {
          local_190[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar27 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar27;
          local_b0 = (long *)*plVar34;
          FUN_02a44274(lVar27 + 0xd8,&local_b0);
        }
      }
      goto joined_r0x025ddcfc;
    }
    lVar27 = *(long *)(param_1 + 0x210);
    if ((lVar27 != 0) && (*(int *)(lVar27 + 0xc) != 0)) {
      piVar1 = (int *)(lVar27 + 0xc);
      iVar19 = *(int *)(lVar27 + 0xc);
      do {
        plVar34 = *(long **)(lVar27 + 0x10);
        if (((*PTR_DAT_0437a110 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a110), iVar20 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
            uVar25 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar25;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)PTR_DAT_0437a108 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a110);
        }
        while( true ) {
          if (plVar34 == (long *)0x0) goto LAB_025dc214;
          if (plVar34 == (long *)PTR_DAT_0437a108) break;
          plVar34 = (long *)*plVar34;
        }
        iVar20 = *piVar1;
        if (iVar20 == iVar19) {
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar27 = *(long *)(lVar27 + 0x18);
            if (lVar27 != 0) {
              local_1b0 = (long *)((ulong)local_1b0 & 0xffffffffffffff00);
              bVar32 = false;
              if (*(char *)(lVar27 + 0xb0) == '\0') goto LAB_025e10b0;
              local_188 = *(undefined8 *)(lVar27 + 0xd8);
              uStack_198 = *(undefined8 *)(lVar27 + 200);
              local_180 = (long *)0x0;
              local_1a0 = *(undefined8 *)(lVar27 + 0xc0);
              local_190 = *(long **)(lVar27 + 0xd0);
              local_178 = 0;
              FUN_00b636fc(&local_180,lVar27 + 0xe0);
              local_170 = (long *)0x0;
              uStack_168 = 0;
              FUN_008c4b3c(&local_170,lVar27 + 0xf0);
              plVar34 = *(long **)(lVar27 + 0x100);
              local_160 = SUB84(plVar34,0);
              uStack_15c = (undefined4)((ulong)plVar34 >> 0x20);
              if (plVar34 != (long *)0x0) {
                (**(code **)(*plVar34 + 0x18))();
              }
              uStack_150 = *(undefined8 *)(lVar27 + 0x110);
              local_148 = *(undefined4 *)(lVar27 + 0x118);
              uStack_158 = (undefined4)*(undefined8 *)(lVar27 + 0x108);
              uStack_154 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x108) >> 0x20);
              local_140 = (long *)0x0;
              uStack_138 = 0;
              FUN_017db6d4(&local_140,lVar27 + 0x120);
              local_1b0 = (long *)CONCAT71(local_1b0._1_7_,1);
              FUN_025e2110(pcVar2,&local_1a0);
              if (local_140 == (long *)0x0) {
                local_f0 = (long *)0x0;
                plVar34 = local_140;
                goto joined_r0x025dd820;
              }
              FUN_017dca7c(&local_f0);
              if (local_f0 == (long *)0x0) goto LAB_025e0ec4;
              iVar19 = *(int *)(param_1 + 0x2d0);
              if (*(char *)((long)local_f0 + 0x75e) != '\0') {
                local_b0 = (long *)&DAT_abc56b1d538bc3be;
                uStack_a8 = "look_buddy_return_face_delay_frame";
                local_a0 = (undefined1  [8])0x22;
                local_98 = (long *)0x0;
                if (((*PTR_DAT_04379660 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379660);
                }
                lVar28 = *(long *)PTR_DAT_04379668;
                *(long *)PTR_DAT_04379670 = lVar28;
                uVar24 = *(ulong *)(lVar28 + 0x60);
                if (uVar24 == 0) goto LAB_025df47c;
                uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
                uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar29 < 2) {
                  uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
                }
                else {
                  uVar30 = 0xdda9f413319d82e4;
                  if (uVar24 < 0xdda9f413319d82e5) {
                    uVar30 = 0;
                    if (uVar24 != 0) {
                      uVar30 = 0xdda9f413319d82e4 / uVar24;
                    }
                    uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                  }
                }
                plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
                if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0)
                   ) goto LAB_025df47c;
                if (1 < uVar29) goto LAB_025decb8;
                goto LAB_025df44c;
              }
              local_b0 = (long *)0x550a366f7eb34589;
              uStack_a8 = "look_buddy_face_delay_frame";
              local_a0 = (undefined1  [8])0x1b;
              local_98 = (long *)0x0;
              if (((*PTR_DAT_04379660 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              lVar28 = *(long *)PTR_DAT_04379668;
              *(long *)PTR_DAT_04379670 = lVar28;
              uVar24 = *(ulong *)(lVar28 + 0x60);
              if (uVar24 == 0) goto LAB_025ded2c;
              uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
              uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
              uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar29 < 2) {
                uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
              }
              else {
                uVar30 = 0xdda9f413319d82e4;
                if (uVar24 < 0xdda9f413319d82e5) {
                  uVar30 = 0;
                  if (uVar24 != 0) {
                    uVar30 = 0xdda9f413319d82e4 / uVar24;
                  }
                  uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                }
              }
              plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
              if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0))
              goto LAB_025ded2c;
              if (1 < uVar29) goto LAB_025de664;
              goto LAB_025decfc;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
    goto LAB_025dc214;
  }
  goto joined_r0x025ddcfc;
LAB_025e13b8:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e140c;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar20 = FUN_00d78f50(plVar34,&local_f0);
  do {
    iVar23 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar23;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e1410;
LAB_025e1b7c:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e1bd0;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar23 = FUN_00d78f50(plVar34,&local_1d0);
  do {
    iVar7 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e1bd4;
LAB_025dc520:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025dd1d8;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar20 = FUN_00d78f50(plVar34,&local_b0);
  do {
    iVar23 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar23;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar23 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto joined_r0x025dc9e8;
LAB_025dd940:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025de42c;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar22 = FUN_00d78f50(plVar34,&local_d0);
  do {
    iVar19 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_025de414:
  if (iVar19 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025de430;
LAB_025de3d8:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar22 = FUN_00d78f50(plVar34,&local_d0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_025de414;
  }
  goto LAB_025de42c;
LAB_025de664:
  do {
    uVar29 = plVar34[1];
    if (uVar29 == 0xdda9f413319d82e4) {
      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df4cc;
    }
    else {
      if (uVar24 <= uVar29) {
        uVar9 = 0;
        if (uVar24 != 0) {
          uVar9 = uVar29 / uVar24;
        }
        uVar29 = uVar29 - uVar9 * uVar24;
      }
      if (uVar29 != uVar30) break;
    }
    plVar34 = (long *)*plVar34;
  } while (plVar34 != (long *)0x0);
  goto LAB_025ded2c;
LAB_025decfc:
  do {
    if (plVar34[1] == 0xdda9f413319d82e4) {
      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df4cc;
    }
    else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
    plVar34 = (long *)*plVar34;
  } while (plVar34 != (long *)0x0);
LAB_025ded2c:
  iVar20 = 0;
joined_r0x025dfa8c:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (iVar20 <= iVar19) {
    uVar24 = FUN_018de07c(local_f0);
    if ((uVar24 & 1) != 0) {
      FUN_025d61b8(local_88,local_f0);
      *(undefined1 *)((long)local_88 + 0x2ad) = 1;
    }
    if (((*(byte *)(local_f0 + 0xf3) & 1) == 0) &&
       ((*(ulong *)((long)local_f0 + 0x78c) & 0xff) != 0)) {
      iVar19 = (int)(*(ulong *)((long)local_f0 + 0x78c) >> 0x20);
      if (iVar19 == 0) {
        local_b0 = (long *)0x0;
        uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
        local_a0[4] = 0;
        local_98._0_5_ = (uint5)(uint)local_98;
        local_b0 = (long *)FUN_025d3cb0(local_88);
        local_b8 = (long *)0x0;
        local_d0 = (long *)0xa1afd24159bcb328;
        local_c8 = "buddy_ballout_action_result_success_keep_frame";
        local_c0 = 0x2e;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar28 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar28;
        uVar24 = *(ulong *)(lVar28 + 0x60);
        if (uVar24 != 0) {
          uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
          uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
          uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar29 < 2) {
            uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar30 = 0xdda9f413319d82e4;
            if (uVar24 < 0xdda9f413319d82e5) {
              uVar30 = 0;
              if (uVar24 != 0) {
                uVar30 = 0xdda9f413319d82e4 / uVar24;
              }
              uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
            }
          }
          plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
          if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
            if (uVar29 < 2) {
              do {
                if (plVar34[1] == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dff30;
                }
                else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
            else {
              do {
                uVar29 = plVar34[1];
                if (uVar29 == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025dff30;
                }
                else {
                  if (uVar24 <= uVar29) {
                    uVar9 = 0;
                    if (uVar24 != 0) {
                      uVar9 = uVar29 / uVar24;
                    }
                    uVar29 = uVar29 - uVar9 * uVar24;
                  }
                  if (uVar29 != uVar30) break;
                }
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
          }
        }
      }
      else {
        if (iVar19 != 1) goto LAB_025e0e94;
        local_b0 = (long *)0x0;
        uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
        local_a0[4] = 0;
        local_98._0_5_ = (uint5)(uint)local_98;
        local_b0 = (long *)FUN_025d3d5c(local_88);
        local_b8 = (long *)0x0;
        local_d0 = (long *)0xb1f8c318a3eb4a6b;
        local_c8 = "buddy_ballout_action_result_failure_keep_frame";
        local_c0 = 0x2e;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar28 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar28;
        uVar24 = *(ulong *)(lVar28 + 0x60);
        if (uVar24 != 0) {
          uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
          uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
          uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar29 < 2) {
            uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar30 = 0xdda9f413319d82e4;
            if (uVar24 < 0xdda9f413319d82e5) {
              uVar30 = 0;
              if (uVar24 != 0) {
                uVar30 = 0xdda9f413319d82e4 / uVar24;
              }
              uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
            }
          }
          plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
          if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
            if (uVar29 < 2) {
              do {
                if (plVar34[1] == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e01e4;
                }
                else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
            else {
              do {
                uVar29 = plVar34[1];
                if (uVar29 == 0xdda9f413319d82e4) {
                  if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e01e4;
                }
                else {
                  if (uVar24 <= uVar29) {
                    uVar9 = 0;
                    if (uVar24 != 0) {
                      uVar9 = uVar29 / uVar24;
                    }
                    uVar29 = uVar29 - uVar9 * uVar24;
                  }
                  if (uVar29 != uVar30) break;
                }
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
          }
        }
      }
LAB_025e0238:
      uVar22 = 0;
LAB_025e023c:
      local_a0._0_4_ = uVar22;
      uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
      FUN_025d35b8(local_88,&local_b0);
      local_f0[0xf3] = local_f0[0xf3] | 1;
    }
  }
  goto LAB_025e0e94;
LAB_025df4cc:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
    iVar20 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar20 = FUN_00d78f50(plVar34,&local_b0);
    do {
      iVar23 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
  goto joined_r0x025dfa8c;
LAB_025e01e4:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar22 = FUN_00d78f50(plVar34,&local_d0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_025e0220;
  }
  goto LAB_025e0238;
LAB_025dff30:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e0238;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar22 = FUN_00d78f50(plVar34,&local_d0);
  do {
    iVar19 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_025e0220:
  if (iVar19 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e023c;
LAB_025decb8:
  do {
    uVar29 = plVar34[1];
    if (uVar29 == 0xdda9f413319d82e4) {
      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df878;
    }
    else {
      if (uVar24 <= uVar29) {
        uVar9 = 0;
        if (uVar24 != 0) {
          uVar9 = uVar29 / uVar24;
        }
        uVar29 = uVar29 - uVar9 * uVar24;
      }
      if (uVar29 != uVar30) break;
    }
    plVar34 = (long *)*plVar34;
  } while (plVar34 != (long *)0x0);
  goto LAB_025df47c;
LAB_025df878:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) {
    iVar20 = 0;
  }
  else {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar20 = FUN_00d78f50(plVar34,&local_b0);
    do {
      iVar23 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar23;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
  goto joined_r0x025dfe8c;
LAB_025e0358:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar35 = plVar34 + 10;
    do {
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = (int)*plVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    fVar40 = (float)FUN_00d7905c(plVar34,&local_b0);
    do {
      iVar19 = (int)*plVar35 + -1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar32) {
        *(int *)plVar35 = iVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
  }
  goto LAB_025e03a8;
LAB_025e0dc4:
  plVar34 = (long *)plVar34[3];
  if (plVar34 == (long *)0x0) goto LAB_025e0e18;
  plVar35 = plVar34 + 10;
  do {
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = (int)*plVar35 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar22 = FUN_00d78f50(plVar34,&local_d0);
  do {
    iVar19 = (int)*plVar35 + -1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar32) {
      *(int *)plVar35 = iVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  goto LAB_025e0e1c;
LAB_025df44c:
  do {
    if (plVar34[1] == 0xdda9f413319d82e4) {
      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025df878;
    }
    else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
    plVar34 = (long *)*plVar34;
  } while (plVar34 != (long *)0x0);
LAB_025df47c:
  iVar20 = 0;
joined_r0x025dfe8c:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((iVar20 <= iVar19) && ((*(byte *)(local_f0 + 0xf3) >> 1 & 1) == 0)) {
    FUN_01a73640(&local_b0);
    if (local_b0 == (long *)0x0) {
      local_1d0 = (long *)0x0;
    }
    else {
      FUN_00bd915c(&local_1d0);
      plVar34 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar35 = local_b0 + 1;
        do {
          iVar19 = (int)*plVar35 + -1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar32) {
            *(int *)plVar35 = iVar19;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar28 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar28;
          local_d0 = (long *)*plVar34;
          FUN_02a44274(lVar28 + 0xd8,&local_d0);
        }
      }
      if (local_1d0 != (long *)0x0) {
        if (*(ulong *)((long)local_f0 + 0x78c) >> 0x20 == 0 &&
            (*(ulong *)((long)local_f0 + 0x78c) & 0xff) != 0) {
          fVar39 = (float)FUN_01b429b0();
          local_b0 = (long *)0x28093823b257b37b;
          uStack_a8 = "buddy_return_reaction_rate";
          local_a0 = (undefined1  [8])0x1a;
          local_98 = (long *)0x0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar28 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar28;
          uVar24 = *(ulong *)(lVar28 + 0x60);
          fVar40 = 0.0;
          if (uVar24 != 0) {
            uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
            uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
            uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar29 < 2) {
              uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
            }
            else {
              uVar30 = 0xdda9f413319d82e4;
              if (uVar24 < 0xdda9f413319d82e5) {
                uVar30 = 0;
                if (uVar24 != 0) {
                  uVar30 = 0xdda9f413319d82e4 / uVar24;
                }
                uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
              }
            }
            plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
            if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
              if (uVar29 < 2) {
                do {
                  if (plVar34[1] == 0xdda9f413319d82e4) {
                    if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0358;
                  }
                  else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
              else {
                do {
                  uVar29 = plVar34[1];
                  if (uVar29 == 0xdda9f413319d82e4) {
                    if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0358;
                  }
                  else {
                    if (uVar24 <= uVar29) {
                      uVar9 = 0;
                      if (uVar24 != 0) {
                        uVar9 = uVar29 / uVar24;
                      }
                      uVar29 = uVar29 - uVar9 * uVar24;
                    }
                    if (uVar29 != uVar30) break;
                  }
                  plVar34 = (long *)*plVar34;
                } while (plVar34 != (long *)0x0);
              }
            }
          }
LAB_025e03a8:
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (fVar40 <= fVar39) {
            local_b0 = (long *)0x0;
            uStack_a8 = (char *)CONCAT35(uStack_a8._5_3_,4);
            local_a0[4] = 0;
            local_98._0_5_ = (uint5)(uint)local_98;
            local_b0 = (long *)FUN_025d3eb4(local_88);
            local_b8 = (long *)0x0;
            local_d0 = (long *)0x2cd6254a40460c28;
            local_c8 = "buddy_return_keep_frame";
            local_c0 = 0x17;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar28 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar28;
            uVar24 = *(ulong *)(lVar28 + 0x60);
            if (uVar24 != 0) {
              uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
              uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
              uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar29 < 2) {
                uVar30 = uVar24 - 1 & 0xdda9f413319d82e4;
              }
              else {
                uVar30 = 0xdda9f413319d82e4;
                if (uVar24 < 0xdda9f413319d82e5) {
                  uVar30 = 0;
                  if (uVar24 != 0) {
                    uVar30 = 0xdda9f413319d82e4 / uVar24;
                  }
                  uVar30 = 0xdda9f413319d82e4 - uVar30 * uVar24;
                }
              }
              plVar34 = *(long **)(*(long *)(lVar28 + 0x58) + uVar30 * 8);
              if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0))
              {
                if (uVar29 < 2) {
                  do {
                    if (plVar34[1] == 0xdda9f413319d82e4) {
                      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0dc4;
                    }
                    else if ((plVar34[1] & uVar24 - 1) != uVar30) break;
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
                else {
                  do {
                    uVar29 = plVar34[1];
                    if (uVar29 == 0xdda9f413319d82e4) {
                      if (plVar34[2] == -0x22560becce627d1c) goto LAB_025e0dc4;
                    }
                    else {
                      if (uVar24 <= uVar29) {
                        uVar9 = 0;
                        if (uVar24 != 0) {
                          uVar9 = uVar29 / uVar24;
                        }
                        uVar29 = uVar29 - uVar9 * uVar24;
                      }
                      if (uVar29 != uVar30) break;
                    }
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
              }
            }
LAB_025e0e18:
            uVar22 = 0;
LAB_025e0e1c:
            local_a0._0_4_ = uVar22;
            uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            uStack_a8 = (char *)CONCAT44(uStack_a8._4_4_,1);
            FUN_025d35b8(local_88,&local_b0);
            local_f0[0xf3] = local_f0[0xf3] | 2;
          }
        }
        if (local_1d0 != (long *)0x0) {
          lVar28 = local_1d0[0xb];
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*local_1d0 + 0x20))();
          }
        }
      }
    }
  }
LAB_025e0e94:
  if (local_f0 != (long *)0x0) {
    lVar28 = local_f0[0xb];
    piVar1 = (int *)(lVar28 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
LAB_025e0ec4:
  plVar34 = local_140;
joined_r0x025dd820:
  local_140 = plVar34;
  if ((char)local_1b0 != '\0') {
    if (plVar34 != (long *)0x0) {
      plVar35 = plVar34 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        plVar34[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar28 + 0xd8,&local_b0);
      }
    }
    if ((long *)CONCAT44(uStack_15c,local_160) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_15c,local_160) + 0x20))();
    }
    plVar34 = local_170;
    if (local_170 != (long *)0x0) {
      plVar35 = local_170 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_170[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar28 + 0xd8,&local_b0);
      }
    }
    plVar34 = local_180;
    if (local_180 != (long *)0x0) {
      plVar35 = local_180 + 1;
      do {
        iVar19 = (int)*plVar35 + -1;
        cVar4 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar32) {
          *(int *)plVar35 = iVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 == 0) {
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_b0 = (long *)*plVar34;
        FUN_02a44274(lVar28 + 0xd8,&local_b0);
      }
    }
    local_1b0 = (long *)((ulong)local_1b0 & 0xffffffffffffff00);
  }
  bVar32 = true;
LAB_025e10b0:
  lVar28 = *(long *)(lVar27 + 8);
  piVar1 = (int *)(lVar28 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar28 + 0x18) = 0;
    (**(code **)(*(long *)(lVar27 + -0x50) + 0x20))();
  }
  if (bVar32) {
joined_r0x025ddcfc:
    if (local_90 != (long *)0x0) {
LAB_025de6c8:
      iVar19 = FUN_0267081c();
      if (iVar19 == 1) {
        (**(code **)(*plVar36 + 0x100))(plVar36,2,param_1 + 0x270);
        (**(code **)(*plVar13 + 0x170))(plVar13,2);
        goto joined_r0x025dc244;
      }
    }
LAB_025dc718:
    (**(code **)(*plVar13 + 0x100))(plVar13,2,param_1 + 0x270);
  }
  else {
LAB_025dc214:
    if (*(long *)(param_1 + 0x240) == 0) {
      local_1d0 = (long *)0x0;
LAB_025dc220:
      if (local_90 != (long *)0x0) {
LAB_025de3b4:
        iVar19 = FUN_0267081c();
        if (iVar19 == 1) {
          (**(code **)(*plVar36 + 0x170))(plVar36,2);
        }
      }
    }
    else {
      FUN_01dacb8c(&local_1d0);
      plVar34 = local_1d0;
      if (local_1d0 == (long *)0x0) goto LAB_025dc220;
      (**(code **)(*local_80[0] + 0x140))();
      uStack_a8 = (char *)CONCAT44(extraout_var_03,extraout_var_01);
      local_b0 = (long *)CONCAT44(extraout_var,extraout_s0);
      FUN_01f89a74(&local_1b0,plVar34,&local_b0);
      plVar34 = local_1b0;
      puVar15 = PTR_DAT_043795c8;
      if (local_1b0 == (long *)0x0) {
        bVar32 = false;
        bVar6 = false;
        if (local_1d0 == (long *)0x0) goto LAB_025de3a0;
LAB_025de384:
        lVar27 = local_1d0[0xb];
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = bVar32;
        if (iVar19 + -1 != 0) goto LAB_025de3a0;
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*local_1d0 + 0x20))();
        bVar18 = local_90 != (long *)0x0;
        if (bVar32) goto LAB_025de6c4;
      }
      else {
        if (*(int *)((long)local_1b0 + 0xc) != 0) {
          piVar1 = (int *)((long)local_1b0 + 0xc);
          iVar19 = *(int *)((long)local_1b0 + 0xc);
          do {
            plVar35 = (long *)plVar34[2];
            if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar20 != 0)) {
                if (((*puVar14 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar14), iVar20 != 0)) {
                  uVar25 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar25;
                  __cxa_guard_release(puVar14);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)PTR_DAT_043795d0 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar15);
            }
            while( true ) {
              if (plVar35 == (long *)0x0) goto LAB_025dd930;
              if (plVar35 == (long *)PTR_DAT_043795d0) break;
              plVar35 = (long *)*plVar35;
            }
            iVar20 = *piVar1;
            if (iVar20 == iVar19) {
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = iVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar27 = plVar34[3];
                plVar34 = (long *)0x0;
                plVar35 = local_1b0;
                if (lVar27 != 0) {
                  plVar34 = (long *)(lVar27 + -0x50);
                }
                goto joined_r0x025ddfd4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar19 = iVar20;
          } while (iVar20 != 0);
        }
LAB_025dd930:
        plVar34 = (long *)0x0;
        plVar35 = local_1b0;
joined_r0x025ddfd4:
        local_1b0 = plVar35;
        if (plVar35 != (long *)0x0) {
          plVar37 = plVar35 + 1;
          do {
            iVar19 = (int)*plVar37 + -1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar32) {
              *(int *)plVar37 = iVar19;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 == 0) {
            plVar35[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_d0 = (long *)*plVar35;
            FUN_02a44274(lVar27 + 0xd8,&local_d0);
          }
        }
        bVar32 = false;
        if (plVar34 != (long *)0x0) {
          local_160 = 0;
          local_170 = (long *)0x0;
          uStack_168 = 0;
          uStack_15c = 0x3f800000;
          uStack_158 = 0x3f800000;
          local_1b0 = (long *)CONCAT44(local_1b0._4_4_,4);
          local_180 = (long *)0x0;
          local_178 = 0;
          local_190 = (long *)0x0;
          local_188 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          (**(code **)(*plVar34 + 0x10))(&local_b0,plVar34);
          local_d0 = (long *)0x0;
          local_c8 = (char *)0x0;
          FUN_00b5ff1c(&local_d0,&local_b0);
          plVar35 = local_b0;
          if (local_b0 != (long *)0x0) {
            plVar37 = local_b0 + 1;
            do {
              iVar19 = (int)*plVar37 + -1;
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar32) {
                *(int *)plVar37 = iVar19;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 == 0) {
              local_b0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar27 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar27;
              local_f0 = (long *)*plVar35;
              FUN_02a44274(lVar27 + 0xd8,&local_f0);
            }
          }
          FUN_00b6021c(&local_190,&local_d0);
          plVar35 = local_d0;
          if (local_d0 != (long *)0x0) {
            plVar37 = local_d0 + 1;
            do {
              iVar19 = (int)*plVar37 + -1;
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar32) {
                *(int *)plVar37 = iVar19;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 == 0) {
              local_d0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar27 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar27;
              local_b0 = (long *)*plVar35;
              FUN_02a44274(lVar27 + 0xd8,&local_b0);
            }
          }
          FUN_025e2110(pcVar2,&local_1b0);
          if (local_170 != (long *)0x0) {
            (**(code **)(*local_170 + 0x20))();
          }
          plVar35 = local_180;
          if (local_180 != (long *)0x0) {
            plVar37 = local_180 + 1;
            do {
              iVar19 = (int)*plVar37 + -1;
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar32) {
                *(int *)plVar37 = iVar19;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 == 0) {
              local_180[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar27 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar27;
              local_b0 = (long *)*plVar35;
              FUN_02a44274(lVar27 + 0xd8,&local_b0);
            }
          }
          plVar35 = local_190;
          if (local_190 != (long *)0x0) {
            plVar37 = local_190 + 1;
            do {
              iVar19 = (int)*plVar37 + -1;
              cVar4 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar32) {
                *(int *)plVar37 = iVar19;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar19 == 0) {
              local_190[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar27 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar27;
              local_b0 = (long *)*plVar35;
              FUN_02a44274(lVar27 + 0xd8,&local_b0);
            }
          }
          lVar27 = plVar34[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 == 1) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar34 + 0x20))(plVar34);
          }
          bVar32 = true;
        }
        bVar6 = bVar32;
        if (local_1d0 != (long *)0x0) goto LAB_025de384;
LAB_025de3a0:
        bVar18 = local_90 != (long *)0x0;
        if (bVar6) {
LAB_025de6c4:
          if (bVar18) goto LAB_025de6c8;
          goto LAB_025dc718;
        }
      }
      if (bVar18) goto LAB_025de3b4;
    }
    (**(code **)(*plVar13 + 0x170))(plVar13,2);
    if (*pcVar2 != '\0') {
      if (*(long *)(param_1 + 0x2d8) == 0) {
        local_1b0 = (long *)0x0;
LAB_025dc88c:
        cVar4 = *pcVar2;
      }
      else {
        FUN_00b911c4(&local_1b0);
        if (local_1b0 == (long *)0x0) goto LAB_025dc88c;
        local_1b0[0x153] = local_1b0[0x153] & 0xfffffffffffffff1;
        lVar27 = local_1b0[0xb];
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar4 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar19 + -1 != 0) goto LAB_025dc88c;
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*local_1b0 + 0x20))();
        cVar4 = *pcVar2;
      }
      if (cVar4 != '\0') {
        puVar33 = *(undefined8 **)(param_1 + 0x2d8);
        if (puVar33 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar33 + 1);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            puVar33[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_1b0 = (long *)*puVar33;
            FUN_02a44274(lVar27 + 0xd8,&local_1b0);
          }
        }
        if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x2b0) + 0x20))();
        }
        puVar33 = *(undefined8 **)(param_1 + 0x2a0);
        if (puVar33 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar33 + 1);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            puVar33[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_1b0 = (long *)*puVar33;
            FUN_02a44274(lVar27 + 0xd8,&local_1b0);
          }
        }
        puVar33 = *(undefined8 **)(param_1 + 0x290);
        if (puVar33 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar33 + 1);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            puVar33[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_1b0 = (long *)*puVar33;
            FUN_02a44274(lVar27 + 0xd8,&local_1b0);
          }
        }
        *pcVar2 = '\0';
      }
    }
  }
joined_r0x025dc244:
  if (plVar31 != (long *)0x0) {
    lVar27 = *(long *)((long)plVar31 + 0x58);
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if (plVar36 != (long *)0x0) {
    lVar27 = plVar36[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar36 + 0x20))(plVar36);
    }
  }
  if (local_90 != (long *)0x0) {
    lVar27 = *(long *)((long)local_90 + 0x58);
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    lVar27 = local_88[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
LAB_025dc2cc:
  lVar27 = plVar13[0xb];
  piVar1 = (int *)(lVar27 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar4 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
joined_r0x025dc300:
  if (local_80[0] != (long *)0x0) {
    lVar27 = local_80[0][0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar4 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_80[0] + 0x20))();
    }
  }
  return;
}


