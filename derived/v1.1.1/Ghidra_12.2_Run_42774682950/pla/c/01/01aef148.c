/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aef148; name: FUN_01aef148
 */


undefined1  [16] FUN_01aef148(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float extraout_s0;
  float fVar21;
  float fVar22;
  int iVar23;
  undefined1 auVar24 [12];
  float extraout_var;
  float fVar28;
  float fVar29;
  float extraout_var_00;
  float fVar30;
  float extraout_var_01;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar35;
  int iVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  long *local_1a0;
  undefined8 uStack_198;
  float local_180;
  undefined8 local_170 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined2 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined2 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined **local_e0 [2];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long *local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *local_70 [2];
  
  if ((*(long *)(param_1 + 0x788) == 0) || (FUN_00959eac(local_70), local_70[0] == (long *)0x0)) {
    return ZEXT816(0);
  }
  FUN_009c69bc(&local_1a0);
  auVar25 = *(undefined1 (*) [16])(local_1a0 + 0x1a);
  fStack_78 = auVar25._8_4_;
  fStack_74 = auVar25._12_4_;
  local_80 = auVar25._0_4_;
  fStack_7c = auVar25._4_4_;
  if (local_1a0 != (long *)0x0) {
    lVar17 = local_1a0[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_1a0 + 0x20))();
    }
  }
  local_1a0 = (long *)0x0;
  uStack_198 = 0;
  FUN_00ac3fa4(&local_1a0,param_1 + 0x248);
  FUN_0099c748(&local_88,&local_1a0);
  plVar8 = local_1a0;
  if (local_1a0 != (long *)0x0) {
    plVar19 = local_1a0 + 1;
    do {
      iVar23 = (int)*plVar19 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar23;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 == 0) {
      local_1a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_e0[0] = (undefined **)*plVar8;
      FUN_02a44274(lVar17 + 0xd8,local_e0);
    }
  }
  if (local_88 != (long *)0x0) {
    FUN_0267485c(local_70[0]);
    fVar21 = extraout_s0 - local_80;
    fVar28 = extraout_var - fStack_7c;
    fVar30 = extraout_var_00 - fStack_78;
    fVar31 = extraout_var_01 - fStack_74;
    fStack_1a8 = fStack_78;
    fStack_1a4 = fStack_74;
    local_1b0 = local_80;
    fStack_1ac = fStack_7c;
    auVar25._0_4_ = fVar21 * fVar21;
    auVar25._4_4_ = fVar28 * fVar28;
    auVar25._8_4_ = fVar30 * fVar30;
    auVar25._12_4_ = fVar31 * fVar31;
    auVar32 = NEON_ext(auVar25,auVar25,8,1);
    fVar22 = auVar32._0_4_ + auVar25._0_4_;
    fVar29 = auVar32._4_4_ + auVar25._4_4_;
    fVar20 = fVar22 + fVar29;
    fVar22 = fVar22 + fVar29;
    local_a0 = extraout_s0;
    fStack_9c = extraout_var;
    fStack_98 = extraout_var_00;
    fStack_94 = extraout_var_01;
    if (fVar20 == 0.0) {
LAB_01aef4b0:
      bVar5 = true;
      bVar4 = true;
      goto joined_r0x01aef4b8;
    }
    FUN_01a8d348(&local_1a0,local_88);
    plVar8 = local_1a0;
    puVar12 = PTR_DAT_0437a668;
    puVar11 = PTR_DAT_0437a660;
    puVar10 = PTR_DAT_043794d8;
    puVar9 = PTR_DAT_043794d0;
    if (local_1a0 != (long *)0x0) {
      if (*(int *)((long)local_1a0 + 0xc) != 0) {
        piVar1 = (int *)((long)local_1a0 + 0xc);
        iVar23 = *(int *)((long)local_1a0 + 0xc);
        do {
          plVar19 = (long *)plVar8[2];
          if (((*puVar12 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar12), iVar35 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar9), iVar35 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)puVar10 = uVar15;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar11 = puVar10;
            __cxa_guard_release(puVar12);
          }
          while( true ) {
            if (plVar19 == (long *)0x0) goto LAB_01aef528;
            if (plVar19 == (long *)puVar11) break;
            plVar19 = (long *)*plVar19;
          }
          iVar35 = *piVar1;
          if (iVar35 == iVar23) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar23 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar17 = plVar8[3];
              plVar8 = (long *)0x0;
              plVar19 = local_1a0;
              if (lVar17 != 0) {
                plVar8 = (long *)(lVar17 + -0x50);
              }
              goto joined_r0x01aef418;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar23 = iVar35;
        } while (iVar35 != 0);
      }
LAB_01aef528:
      plVar8 = (long *)0x0;
      plVar19 = local_1a0;
joined_r0x01aef418:
      local_1a0 = plVar19;
      if (plVar19 != (long *)0x0) {
        plVar18 = plVar19 + 1;
        do {
          iVar23 = (int)*plVar18 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = iVar23;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 == 0) {
          plVar19[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_e0[0] = (undefined **)*plVar19;
          FUN_02a44274(lVar17 + 0xd8,local_e0);
        }
      }
      if (plVar8 != (long *)0x0) {
        FUN_01a88a64(&local_1a0,local_88);
        plVar19 = local_1a0;
        puVar13 = PTR_DAT_0437a598;
        puVar12 = PTR_DAT_0437a590;
        puVar11 = PTR_DAT_0437a580;
        if (local_1a0 == (long *)0x0) {
          bVar4 = false;
        }
        else {
          if (*(int *)((long)local_1a0 + 0xc) != 0) {
            piVar1 = (int *)((long)local_1a0 + 0xc);
            iVar23 = *(int *)((long)local_1a0 + 0xc);
            do {
              plVar18 = (long *)plVar19[2];
              if (((*puVar11 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar11), iVar35 != 0)) {
                if (((*puVar13 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar13), iVar35 != 0)) {
                  if (((*puVar9 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar9), iVar35 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)puVar10 = uVar15;
                    __cxa_guard_release(puVar9);
                  }
                  *(undefined **)PTR_DAT_0437a588 = puVar10;
                  __cxa_guard_release(puVar13);
                }
                *(undefined **)puVar12 = PTR_DAT_0437a588;
                __cxa_guard_release(puVar11);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_01aef658;
                if (plVar18 == (long *)puVar12) break;
                plVar18 = (long *)*plVar18;
              }
              iVar35 = *piVar1;
              if (iVar35 == iVar23) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar23 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar17 = plVar19[3];
                  plVar19 = (long *)0x0;
                  plVar18 = local_1a0;
                  if (lVar17 != 0) {
                    plVar19 = (long *)(lVar17 + -0x50);
                  }
                  goto joined_r0x01aef67c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar23 = iVar35;
            } while (iVar35 != 0);
          }
LAB_01aef658:
          plVar19 = (long *)0x0;
          plVar18 = local_1a0;
joined_r0x01aef67c:
          local_1a0 = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar2 = plVar18 + 1;
            do {
              iVar23 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar23;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar23 == 0) {
              plVar18[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_e0[0] = (undefined **)*plVar18;
              FUN_02a44274(lVar17 + 0xd8,local_e0);
            }
          }
          bVar4 = false;
          if (plVar19 != (long *)0x0) {
            local_e0[0] = &PTR_FUN_04287c30;
            local_b8 = plVar19[0x5d];
            lStack_c8 = plVar19[0x5b];
            local_d0 = plVar19[0x5a];
            local_c0 = plVar19[0x5c];
            local_b0 = plVar19[0x5e];
            uVar14 = FUN_01e48220(0);
            local_11c = 0;
            local_140 = 0x7f7fffee;
            local_170[0] = 0;
            local_138 = 0xffffffffffffffff;
            local_128 = 0xffffffff;
            local_130 = 0xffffff;
            local_160 = 0;
            uStack_158 = 0;
            local_124 = 0xf;
            local_120 = 0xffff;
            local_100 = 0xffffffff;
            local_108 = 0xffffff;
            local_fc = 0xf;
            local_f8 = 0xffff;
            local_f4 = 0;
            local_150 = 0;
            uStack_148 = 0;
            local_118 = 0;
            uStack_110 = 0xffffffffffffffff;
            local_f0 = 0;
            uStack_e8 = 0;
            uVar16 = FUN_01e43f00(plVar8,local_e0,&local_80,&local_a0,uVar14,&local_1a0);
            if ((uVar16 & 1) == 0) {
              auVar32._4_4_ = fStack_9c;
              auVar32._0_4_ = local_a0;
              auVar32._8_4_ = fStack_98;
              auVar32._12_4_ = fStack_94;
            }
            else {
              auVar39._8_8_ = CONCAT44(fVar22,fVar20);
              auVar39._0_8_ = CONCAT44(fVar22,fVar20);
              auVar25 = NEON_frsqrte(auVar39,4);
              auVar33._0_4_ = auVar25._0_4_ * fVar20;
              auVar33._4_4_ = auVar25._4_4_ * fVar22;
              auVar33._8_4_ = auVar25._8_4_ * fVar20;
              auVar33._12_4_ = auVar25._12_4_ * fVar22;
              auVar32 = NEON_frsqrts(auVar25,auVar33,4);
              auVar26._0_4_ = auVar25._0_4_ * auVar32._0_4_;
              auVar26._4_4_ = auVar25._4_4_ * auVar32._4_4_;
              auVar26._8_4_ = auVar25._8_4_ * auVar32._8_4_;
              auVar26._12_4_ = auVar25._12_4_ * auVar32._12_4_;
              auVar34._0_4_ = fVar20 * auVar26._0_4_;
              auVar34._4_4_ = fVar22 * auVar26._4_4_;
              auVar34._8_4_ = fVar20 * auVar26._8_4_;
              auVar34._12_4_ = fVar22 * auVar26._12_4_;
              auVar25 = NEON_frsqrts(auVar26,auVar34,4);
              iVar23 = -(uint)(fVar20 == 0.0);
              iVar35 = -(uint)(fVar22 == 0.0);
              iVar36 = -(uint)(fVar20 == 0.0);
              iVar37 = -(uint)(fVar22 == 0.0);
              fVar21 = fVar21 * auVar26._0_4_ * auVar25._0_4_;
              fVar28 = fVar28 * auVar26._4_4_ * auVar25._4_4_;
              fVar30 = fVar30 * auVar26._8_4_ * auVar25._8_4_;
              fVar31 = fVar31 * auVar26._12_4_ * auVar25._12_4_;
              fVar20 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                       CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                ~(byte)((uint)iVar23 >> 0x10),
                                                CONCAT11((byte)((uint)fVar21 >> 8) &
                                                         ~(byte)((uint)iVar23 >> 8),
                                                         SUB41(fVar21,0) & ~(byte)iVar23)));
              auVar24._0_8_ =
                   CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                            CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                     CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar35 >> 8)
                                              ,CONCAT14(SUB41(fVar28,0) & ~(byte)iVar35,fVar20))));
              auVar24[8] = SUB41(fVar30,0) & ~(byte)iVar36;
              auVar24[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar36 >> 8);
              auVar24[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
              auVar24[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
              auVar27[0xc] = SUB41(fVar31,0) & ~(byte)iVar37;
              auVar27._0_12_ = auVar24;
              auVar27[0xd] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar37 >> 8);
              auVar27[0xe] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
              auVar27[0xf] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
              auVar32._0_4_ = local_80 + fVar20 * local_180;
              auVar32._4_4_ = fStack_7c + (float)((ulong)auVar24._0_8_ >> 0x20) * local_180;
              auVar32._8_4_ = fStack_78 + auVar24._8_4_ * local_180;
              auVar32._12_4_ = fStack_74 + auVar27._12_4_ * local_180;
            }
            fStack_1a8 = auVar32._8_4_;
            fStack_1a4 = auVar32._12_4_;
            local_1b0 = auVar32._0_4_;
            fStack_1ac = auVar32._4_4_;
            FUN_032c7b9c(local_170);
            lVar17 = plVar19[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar23 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar23 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar23 == 1) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
            bVar4 = true;
          }
        }
        lVar17 = plVar8[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar23 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (bVar4) goto LAB_01aef4b0;
      }
    }
  }
  bVar5 = false;
  bVar4 = false;
joined_r0x01aef4b8:
  if (local_88 != (long *)0x0) {
    lVar17 = local_88[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = bVar5;
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  iVar23 = -(uint)!bVar4;
  auVar6._4_4_ = fStack_1ac;
  auVar6._0_4_ = local_1b0;
  auVar6._8_4_ = fStack_1a8;
  auVar6._12_4_ = fStack_1a4;
  auVar38._4_4_ = iVar23;
  auVar38._0_4_ = iVar23;
  auVar38._8_4_ = iVar23;
  auVar38._12_4_ = iVar23;
  auVar7._4_4_ = fStack_7c;
  auVar7._0_4_ = local_80;
  auVar7._8_4_ = fStack_78;
  auVar7._12_4_ = fStack_74;
  if (local_70[0] != (long *)0x0) {
    lVar17 = local_70[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  return auVar6 ^ (auVar6 ^ auVar7) & auVar38;
}


