/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02643ff4; name: FUN_02643ff4
 */


/* WARNING: Removing unreachable block (ram,0x026442f4) */

undefined8 FUN_02643ff4(float param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  long *local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  int *local_198;
  ulong local_190;
  char local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined **local_e0 [2];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_80 [2];
  long *local_68;
  
  lVar24 = *(long *)PTR_DAT_0437b4e8;
  if (*(long *)(param_2 + 0x208) != 0) {
    FUN_00959eac(&local_68);
    if (*(long *)(param_2 + 0x218) == 0) goto LAB_0264403c;
LAB_026445bc:
    FUN_0095a0ac(local_80);
    if (local_68 != (long *)0x0) goto LAB_02644048;
LAB_026445d4:
    uVar23 = 0;
    goto LAB_026445d8;
  }
  local_68 = (long *)0x0;
  if (*(long *)(param_2 + 0x218) != 0) goto LAB_026445bc;
LAB_0264403c:
  local_80[0] = (long *)0x0;
  if (local_68 == (long *)0x0) goto LAB_026445d4;
LAB_02644048:
  if (local_80[0] != (long *)0x0) {
    local_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    FUN_00cf98c8(&local_1c0,local_80[0] + 0x4c);
    plVar21 = local_1c0;
    puVar10 = PTR_DAT_0437a668;
    puVar9 = PTR_DAT_0437a660;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    plVar20 = (long *)0x0;
    if (local_1c0 != (long *)0x0) {
      if (*(int *)((long)local_1c0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_1c0 + 0xc);
        iVar12 = *(int *)((long)local_1c0 + 0xc);
        do {
          plVar20 = (long *)plVar21[2];
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
              uVar23 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar23;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar9 = puVar8;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_02644c2c;
            if (plVar20 == (long *)puVar9) break;
            plVar20 = (long *)*plVar20;
          }
          iVar13 = *piVar2;
          if (iVar13 == iVar12) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = plVar21[3];
              plVar20 = (long *)0x0;
              plVar21 = local_1c0;
              if (lVar15 != 0) {
                plVar20 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x02644750;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_02644c2c:
      plVar20 = (long *)0x0;
      plVar21 = local_1c0;
joined_r0x02644750:
      if (plVar21 != (long *)0x0) {
        plVar18 = plVar21 + 1;
        do {
          iVar12 = (int)*plVar18 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          plVar21[2] = 0;
          local_1c0 = plVar21;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_e0[0] = (undefined **)*plVar21;
          FUN_02a44274(lVar15 + 0xd8,local_e0);
        }
      }
    }
    local_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    FUN_01a0703c(&local_1c0,local_80[0] + 0x15a);
    plVar18 = local_1c0;
    puVar9 = PTR_DAT_0437a590;
    puVar8 = PTR_DAT_0437a588;
    puVar7 = PTR_DAT_0437a580;
    plVar21 = (long *)0x0;
    if (local_1c0 != (long *)0x0) {
      if (*(int *)((long)local_1c0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_1c0 + 0xc);
        iVar12 = *(int *)((long)local_1c0 + 0xc);
        do {
          plVar21 = (long *)plVar18[2];
          if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
            if (((*PTR_DAT_0437a598 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar13 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                uVar23 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar23;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a598);
            }
            *(undefined **)puVar9 = puVar8;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_02644c78;
            if (plVar21 == (long *)puVar9) break;
            plVar21 = (long *)*plVar21;
          }
          iVar13 = *piVar2;
          if (iVar13 == iVar12) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = plVar18[3];
              plVar21 = (long *)0x0;
              plVar18 = local_1c0;
              if (lVar15 != 0) {
                plVar21 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x02644b6c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_02644c78:
      plVar21 = (long *)0x0;
      plVar18 = local_1c0;
joined_r0x02644b6c:
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          iVar12 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          plVar18[2] = 0;
          local_1c0 = plVar18;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_e0[0] = (undefined **)*plVar18;
          FUN_02a44274(lVar15 + 0xd8,local_e0);
        }
      }
    }
    local_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    FUN_01a9e404(&local_1c0,local_80[0] + 0xc1);
    FUN_01a821fc(&local_88,&local_1c0);
    plVar18 = local_1c0;
    if (local_1c0 != (long *)0x0) {
      plVar1 = local_1c0 + 1;
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        local_1c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_e0[0] = (undefined **)*plVar18;
        FUN_02a44274(lVar15 + 0xd8,local_e0);
      }
    }
    if (((plVar20 == (long *)0x0) || (plVar21 == (long *)0x0)) || (local_88 == (long *)0x0)) {
      uVar23 = 0;
      goto joined_r0x026443fc;
    }
    FUN_009c69bc(&local_1c0,local_80[0]);
    uStack_98 = local_1c0[0x1b];
    local_a0 = local_1c0[0x1a];
    if (local_1c0 != (long *)0x0) {
      lVar15 = local_1c0[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_1c0 + 0x20))();
      }
    }
    uVar14 = (**(code **)(*local_80[0] + 0x1b0))();
    if ((uVar14 & 1) != 0) {
      if (*(int *)(param_2 + 0x2c0) != 0) goto LAB_026449f4;
      local_e0[0] = &PTR_FUN_04287c30;
      local_b8 = plVar21[0x5d];
      lStack_c8 = plVar21[0x5b];
      local_d0 = plVar21[0x5a];
      local_c0 = plVar21[0x5c];
      local_b0 = plVar21[0x5e];
      fVar25 = (float)FUN_00ae6464();
      fVar32 = (float)DAT_0388a140;
      fVar33 = (float)((ulong)DAT_0388a140 >> 0x20);
      fVar29 = (float)DAT_0388a148;
      fVar30 = (float)((ulong)DAT_0388a148 >> 0x20);
      fVar26 = (float)local_a0 + fVar32 * fVar25;
      fVar27 = local_a0._4_4_ + fVar33 * fVar25;
      fVar28 = (float)uStack_98 + fVar29 * fVar25;
      fVar25 = uStack_98._4_4_ + fVar30 * fVar25;
      uStack_e8 = CONCAT44(fVar25,fVar28);
      local_f0 = CONCAT44(fVar27,fVar26);
      uStack_f8 = CONCAT44(fVar25 - fVar30 * param_1,fVar28 - fVar29 * param_1);
      local_100 = CONCAT44(fVar27 - fVar33 * param_1,fVar26 - fVar32 * param_1);
      uVar11 = (**(code **)(*local_80[0] + 0x240))();
      local_1a0 = 0;
      local_160 = 0x7f7fffee;
      local_198 = (int *)0x0;
      local_190 = 0;
      local_158 = 0xffffffffffffffff;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_150 = 0xffffff;
      local_148 = 0xfffffffff;
      local_140 = 0xffff;
      local_128 = 0xffffff;
      local_120 = 0xfffffffff;
      local_108 = 0;
      local_138 = 0;
      local_130 = 0xffffffffffffffff;
      local_118 = 0xffff;
      local_110 = 0;
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar24 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar24;
      uVar14 = FUN_02bf711c(*(undefined8 *)(lVar24 + 0x230),local_e0,&local_f0,&local_100,uVar11,
                            &local_1c0,1);
      if ((((uVar14 & 1) != 0) && (local_198 != (int *)0x0)) && (*local_198 != 0x18)) {
        local_1b0 = local_1b0 * fVar32;
        fStack_1ac = fStack_1ac * fVar33;
        fVar29 = (float)uStack_1a8 * fVar29;
        fVar30 = (float)((ulong)uStack_1a8 >> 0x20) * fVar30;
        auVar31._4_4_ = fStack_1ac;
        auVar31._0_4_ = local_1b0;
        auVar31._8_4_ = fVar29;
        auVar31._12_4_ = fVar30;
        auVar6._4_4_ = fStack_1ac;
        auVar6._0_4_ = local_1b0;
        auVar6._8_4_ = fVar29;
        auVar6._12_4_ = fVar30;
        auVar31 = NEON_ext(auVar31,auVar6,8,1);
        fVar26 = auVar31._0_4_ + local_1b0 + auVar31._4_4_ + fStack_1ac;
        fVar25 = -1.0;
        if (-1.0 <= fVar26) {
          fVar25 = fVar26;
        }
        fVar25 = (float)FUN_0095d8f0(fVar25);
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar24 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar24;
        uVar14 = *(ulong *)(lVar24 + 0x60);
        fVar26 = 0.0;
        if (uVar14 != 0) {
          uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
          uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar16 < 2) {
            uVar17 = uVar14 - 1 & 0x7ae129403ce05f36;
          }
          else if (uVar14 < 0x7ae129403ce05f37) {
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = 0x7ae129403ce05f36 / uVar14;
            }
            uVar17 = 0x7ae129403ce05f36 - uVar17 * uVar14;
          }
          else {
            uVar17 = 0x7ae129403ce05f36;
          }
          plVar18 = *(long **)(*(long *)(lVar24 + 0x58) + uVar17 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if (uVar16 < 2) {
              do {
                if (plVar18[1] == 0x7ae129403ce05f36) {
                  if (plVar18[2] == 0x7ae129403ce05f36) goto LAB_0264483c;
                }
                else if ((plVar18[1] & uVar14 - 1) != uVar17) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar16 = plVar18[1];
                if (uVar16 == 0x7ae129403ce05f36) {
                  if (plVar18[2] == 0x7ae129403ce05f36) goto LAB_0264483c;
                }
                else {
                  if (uVar14 <= uVar16) {
                    uVar5 = 0;
                    if (uVar14 != 0) {
                      uVar5 = uVar16 / uVar14;
                    }
                    uVar16 = uVar16 - uVar5 * uVar14;
                  }
                  if (uVar16 != uVar17) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        goto LAB_02644974;
      }
      goto LAB_026449ec;
    }
    FUN_0182efb8(&local_1c0,local_88,&local_a0);
    if ((char)local_1c0 != '\0') {
      if ((local_188 == '\0') &&
         (fVar25 = (float)FUN_026b6328(lVar24 + 0x58), fVar25 <= fStack_1ac - local_1b0))
      goto LAB_026449f4;
      goto LAB_026444a8;
    }
    uVar14 = (**(code **)(*local_80[0] + 0x1a8))();
    if ((uVar14 & 1) == 0) goto LAB_026444a8;
    goto LAB_026449f4;
  }
  uVar23 = 0;
  goto LAB_026445fc;
LAB_0264483c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar18[0x21];
    fVar26 = 0.0;
    if (uVar14 != 0) {
      uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar14 - 1 & 0xf043aaa57b7066ed;
      }
      else if (uVar14 < 0xf043aaa57b7066ee) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = 0xf043aaa57b7066ed / uVar14;
        }
        uVar17 = 0xf043aaa57b7066ed - uVar17 * uVar14;
      }
      else {
        uVar17 = 0xf043aaa57b7066ed;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar17 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar19[1] == 0xf043aaa57b7066ed) {
              if (plVar19[2] == -0xfbc555a848f9913) goto LAB_0264495c;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar17) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar19[1];
            if (uVar16 == 0xf043aaa57b7066ed) {
              if (plVar19[2] == -0xfbc555a848f9913) goto LAB_0264495c;
            }
            else {
              if (uVar14 <= uVar16) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar16 / uVar14;
                }
                uVar16 = uVar16 - uVar5 * uVar14;
              }
              if (uVar16 != uVar17) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_02644960;
  }
LAB_02644974:
  if (fVar26 <= fVar25) goto LAB_026449ec;
LAB_0264497c:
  uVar14 = local_190;
  if ((local_190 & 1) != 0) {
    lVar24 = tpidr_el0;
    lVar15 = *(long *)(lVar24 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar15;
    }
    plVar18 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
    puVar22 = (undefined8 *)(uVar14 - 0x11);
    *puVar22 = 0;
    (**(code **)(*plVar18 + 0x18))(plVar18,puVar22,(long)*(int *)(uVar14 - 9) + 0x10);
  }
LAB_026444a8:
  uVar23 = 1;
joined_r0x026443fc:
  if (local_88 != (long *)0x0) goto LAB_02644400;
LAB_0264441c:
  if (plVar21 == (long *)0x0) goto LAB_0264443c;
LAB_02644420:
  lVar24 = plVar21[0xb];
  piVar2 = (int *)(lVar24 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 != 0) goto LAB_0264443c;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  (**(code **)(*plVar21 + 0x20))(plVar21);
  if (plVar20 == (long *)0x0) goto LAB_026445d8;
LAB_02644440:
  lVar24 = plVar20[0xb];
  piVar2 = (int *)(lVar24 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 != 0) goto LAB_026445d8;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  if (local_80[0] == (long *)0x0) goto LAB_026445fc;
LAB_026445e0:
  lVar24 = local_80[0][0xb];
  piVar2 = (int *)(lVar24 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 != 0) goto LAB_026445fc;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  (**(code **)(*local_80[0] + 0x20))();
  if (local_68 == (long *)0x0) {
    return uVar23;
  }
  goto LAB_02644604;
LAB_0264495c:
  fVar26 = *(float *)(plVar19 + 6);
LAB_02644960:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 != 0) goto LAB_02644974;
  (**(code **)(*plVar18 + 0x10))();
  if (fVar25 < fVar26) goto LAB_0264497c;
LAB_026449ec:
  uVar14 = local_190;
  if ((local_190 & 1) != 0) {
    lVar24 = tpidr_el0;
    lVar15 = *(long *)(lVar24 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar15;
    }
    plVar18 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
    puVar22 = (undefined8 *)(uVar14 - 0x11);
    *puVar22 = 0;
    (**(code **)(*plVar18 + 0x18))(plVar18,puVar22,(long)*(int *)(uVar14 - 9) + 0x10);
  }
LAB_026449f4:
  uVar23 = 0;
  if (local_88 == (long *)0x0) goto LAB_0264441c;
LAB_02644400:
  lVar24 = local_88[0xb];
  piVar2 = (int *)(lVar24 + 0xc);
  do {
    iVar12 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 != 0) goto LAB_0264441c;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  (**(code **)(*local_88 + 0x20))();
  if (plVar21 != (long *)0x0) goto LAB_02644420;
LAB_0264443c:
  if (plVar20 != (long *)0x0) goto LAB_02644440;
LAB_026445d8:
  if (local_80[0] != (long *)0x0) goto LAB_026445e0;
LAB_026445fc:
  if (local_68 != (long *)0x0) {
LAB_02644604:
    lVar24 = local_68[0xb];
    piVar2 = (int *)(lVar24 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return uVar23;
}


