/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0265aef0; name: FUN_0265aef0
 */


void FUN_0265aef0(float param_1,long param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar26;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar27;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar28;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar29;
  undefined1 extraout_var_07;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined **local_190 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_68;
  
  if (*(long *)(param_2 + 0xcb8) == 0) {
    local_68 = (long *)0x0;
  }
  else {
    FUN_025fa884(&local_68);
  }
  uVar9 = *(undefined8 *)(*param_4 + 8);
  uVar6 = *(undefined8 *)*param_4;
  FUN_026c3894(local_68);
  fVar25 = (float)*param_3 + 0.0;
  fVar7 = (float)((ulong)*param_3 >> 0x20) +
          (float)CONCAT13(extraout_var_05,
                          CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
  fVar24 = (float)param_3[1] + 0.0;
  fVar10 = (float)((ulong)param_3[1] >> 0x20) + 0.0;
  uStack_88 = CONCAT17((char)((uint)fVar10 >> 0x18),
                       CONCAT16((char)((uint)fVar10 >> 0x10),
                                CONCAT15((char)((uint)fVar10 >> 8),CONCAT14(SUB41(fVar10,0),fVar24))
                               ));
  local_90 = CONCAT17((char)((uint)fVar7 >> 0x18),
                      CONCAT16((char)((uint)fVar7 >> 0x10),
                               CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),fVar25))));
  auVar43 = *param_4;
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  fVar7 = fVar7 + auVar43._4_4_;
  fVar10 = fVar10 + auVar43._12_4_;
  uStack_98 = CONCAT17((char)((uint)fVar10 >> 0x18),
                       CONCAT16((char)((uint)fVar10 >> 0x10),
                                CONCAT15((char)((uint)fVar10 >> 8),
                                         CONCAT14(SUB41(fVar10,0),fVar24 + auVar43._8_4_))));
  local_a0 = CONCAT17((char)((uint)fVar7 >> 0x18),
                      CONCAT16((char)((uint)fVar7 >> 0x10),
                               CONCAT15((char)((uint)fVar7 >> 8),
                                        CONCAT14(SUB41(fVar7,0),fVar25 + auVar43._0_4_))));
  FUN_00cf98c8(&local_160,param_2 + 0x260);
  puVar22 = local_160;
  puVar14 = PTR_DAT_0437a668;
  puVar13 = PTR_DAT_0437a660;
  puVar12 = PTR_DAT_043794d0;
  plVar23 = (long *)0x0;
  if (local_160 != (undefined8 *)0x0) {
    if (*(int *)((long)local_160 + 0xc) != 0) {
      piVar1 = (int *)((long)local_160 + 0xc);
      iVar15 = *(int *)((long)local_160 + 0xc);
      do {
        plVar23 = (long *)puVar22[2];
        if (((*puVar14 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar14), iVar16 != 0)) {
          if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
            uVar19 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar19;
            __cxa_guard_release(puVar12);
          }
          *(undefined **)puVar13 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar14);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_0265b414;
          if (plVar23 == (long *)puVar13) break;
          plVar23 = (long *)*plVar23;
        }
        iVar16 = *piVar1;
        if (iVar16 == iVar15) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar20 = puVar22[3];
            plVar23 = (long *)0x0;
            puVar22 = local_160;
            if (lVar20 != 0) {
              plVar23 = (long *)(lVar20 + -0x50);
            }
            goto joined_r0x0265b378;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar16;
      } while (iVar16 != 0);
    }
LAB_0265b414:
    plVar23 = (long *)0x0;
    puVar22 = local_160;
joined_r0x0265b378:
    local_160 = puVar22;
    if (puVar22 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar22 + 1);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 + -1 == 0) {
        puVar22[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_190[0] = (undefined **)*puVar22;
        FUN_02a44274(lVar20 + 0xd8,local_190);
      }
    }
  }
  local_100 = 0x7f7fffee;
  local_f8 = 0xffffffffffffffff;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0xffffffffffffffff;
  local_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_e8 = 0xffffffff;
  local_f0 = 0xffffff;
  local_e4 = 0xf;
  local_e0 = 0xffff;
  local_dc = 0;
  local_c0 = 0xffffffff;
  local_c8 = 0xffffff;
  local_bc = 0xf;
  local_b8 = 0xffff;
  local_b4 = 0;
  local_190[0] = &PTR_FUN_04287c08;
  local_110 = 0;
  uStack_108 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  local_180 = 0;
  uStack_178 = 0;
  FUN_026c3894(local_68);
  local_170 = CONCAT13(extraout_var_06,
                       CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar20 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar20;
  uVar17 = FUN_02bf6354(*(undefined8 *)(lVar20 + 0x230),local_190,&local_90,&local_a0,0x120ee010,
                        &local_160,1);
  if ((uVar17 & 1) == 0) {
    *(undefined1 *)(param_5 + 4) = 0;
    auVar43 = *param_4;
    fVar25 = (float)*param_3 + auVar43._0_4_;
    uVar26 = SUB41(fVar25,0);
    uVar27 = (undefined1)((uint)fVar25 >> 8);
    uVar28 = (undefined1)((uint)fVar25 >> 0x10);
    uVar29 = (undefined1)((uint)fVar25 >> 0x18);
    fVar25 = (float)((ulong)*param_3 >> 0x20) + auVar43._4_4_;
    uVar30 = SUB41(fVar25,0);
    uVar31 = (undefined1)((uint)fVar25 >> 8);
    uVar32 = (undefined1)((uint)fVar25 >> 0x10);
    uVar33 = (undefined1)((uint)fVar25 >> 0x18);
    fVar25 = (float)param_3[1] + auVar43._8_4_;
    uVar34 = SUB41(fVar25,0);
    uVar35 = (undefined1)((uint)fVar25 >> 8);
    uVar36 = (undefined1)((uint)fVar25 >> 0x10);
    uVar37 = (undefined1)((uint)fVar25 >> 0x18);
    fVar25 = (float)((ulong)param_3[1] >> 0x20) + auVar43._12_4_;
    uVar38 = SUB41(fVar25,0);
    uVar39 = (undefined1)((uint)fVar25 >> 8);
    uVar40 = (undefined1)((uint)fVar25 >> 0x10);
    uVar41 = (undefined1)((uint)fVar25 >> 0x18);
  }
  else {
    fVar42 = (float)uVar6;
    fVar25 = fVar42 * fVar42;
    fVar45 = (float)((ulong)uVar6 >> 0x20);
    fVar7 = fVar45 * fVar45;
    uVar26 = (undefined1)((uint)fVar7 >> 8);
    uVar27 = (undefined1)((uint)fVar7 >> 0x10);
    uVar28 = (undefined1)((uint)fVar7 >> 0x18);
    fVar46 = (float)uVar9;
    fVar24 = fVar46 * fVar46;
    uVar29 = (undefined1)((uint)fVar24 >> 8);
    uVar30 = (undefined1)((uint)fVar24 >> 0x10);
    uVar31 = (undefined1)((uint)fVar24 >> 0x18);
    fVar47 = (float)((ulong)uVar9 >> 0x20);
    fVar10 = fVar47 * fVar47;
    uVar32 = (undefined1)((uint)fVar10 >> 8);
    uVar33 = (undefined1)((uint)fVar10 >> 0x10);
    uVar34 = (undefined1)((uint)fVar10 >> 0x18);
    auVar43[4] = SUB41(fVar7,0);
    auVar43._0_4_ = fVar25;
    auVar43[5] = uVar26;
    auVar43[6] = uVar27;
    auVar43[7] = uVar28;
    auVar43[8] = SUB41(fVar24,0);
    auVar43[9] = uVar29;
    auVar43[10] = uVar30;
    auVar43[0xb] = uVar31;
    auVar43[0xc] = SUB41(fVar10,0);
    auVar43[0xd] = uVar32;
    auVar43[0xe] = uVar33;
    auVar43[0xf] = uVar34;
    auVar49[4] = SUB41(fVar7,0);
    auVar49._0_4_ = fVar25;
    auVar49[5] = uVar26;
    auVar49[6] = uVar27;
    auVar49[7] = uVar28;
    auVar49[8] = SUB41(fVar24,0);
    auVar49[9] = uVar29;
    auVar49[10] = uVar30;
    auVar49[0xb] = uVar31;
    auVar49[0xc] = SUB41(fVar10,0);
    auVar49[0xd] = uVar32;
    auVar49[0xe] = uVar33;
    auVar49[0xf] = uVar34;
    auVar43 = NEON_ext(auVar43,auVar49,8,1);
    fVar25 = auVar43._0_4_ + fVar25;
    fVar7 = auVar43._4_4_ + fVar7;
    fVar24 = fVar25 + fVar7;
    fVar25 = fVar25 + fVar7;
    uVar26 = SUB41(fVar25,0);
    uVar27 = (undefined1)((uint)fVar25 >> 8);
    uVar28 = (undefined1)((uint)fVar25 >> 0x10);
    uVar29 = (undefined1)((uint)fVar25 >> 0x18);
    auVar4[4] = uVar26;
    auVar4._0_4_ = fVar24;
    auVar4[5] = uVar27;
    auVar4[6] = uVar28;
    auVar4[7] = uVar29;
    auVar4[8] = SUB41(fVar24,0);
    auVar4[9] = (char)((uint)fVar24 >> 8);
    auVar4[10] = (char)((uint)fVar24 >> 0x10);
    auVar4[0xb] = (char)((uint)fVar24 >> 0x18);
    auVar4[0xc] = uVar26;
    auVar4[0xd] = uVar27;
    auVar4[0xe] = uVar28;
    auVar4[0xf] = uVar29;
    auVar43 = NEON_frsqrte(auVar4,4);
    auVar48._0_4_ = auVar43._0_4_ * fVar24;
    auVar48._4_4_ = auVar43._4_4_ * fVar25;
    auVar48._8_4_ = auVar43._8_4_ * fVar24;
    uVar5 = (undefined2)(CONCAT15(uVar27,CONCAT14(uVar26,fVar24)) >> 0x20);
    auVar48._12_4_ = auVar43._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar5));
    auVar49 = NEON_frsqrts(auVar43,auVar48,4);
    auVar44._0_4_ = auVar43._0_4_ * auVar49._0_4_;
    auVar44._4_4_ = auVar43._4_4_ * auVar49._4_4_;
    auVar44._8_4_ = auVar43._8_4_ * auVar49._8_4_;
    auVar44._12_4_ = auVar43._12_4_ * auVar49._12_4_;
    auVar50._0_4_ = fVar24 * auVar44._0_4_;
    auVar50._4_4_ = fVar25 * auVar44._4_4_;
    auVar50._8_4_ = fVar24 * auVar44._8_4_;
    auVar50._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar5)) * auVar44._12_4_;
    iVar15 = -(uint)(fVar24 == 0.0);
    iVar16 = -(uint)(fVar25 == 0.0);
    iVar8 = -(uint)(fVar24 == 0.0);
    iVar11 = -(uint)((float)CONCAT13(uVar29,CONCAT12(uVar28,uVar5)) == 0.0);
    auVar43 = NEON_frsqrts(auVar44,auVar50,4);
    fVar42 = fVar42 * auVar44._0_4_ * auVar43._0_4_;
    fVar45 = fVar45 * auVar44._4_4_ * auVar43._4_4_;
    fVar46 = fVar46 * auVar44._8_4_ * auVar43._8_4_;
    fVar47 = fVar47 * auVar44._12_4_ * auVar43._12_4_;
    local_140 = local_140 + param_1;
    if (local_140 < 0.0) {
      local_140 = 0.0;
    }
    fVar25 = (float)local_90 +
             (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                      CONCAT11((byte)((uint)fVar42 >> 8) &
                                               ~(byte)((uint)iVar15 >> 8),
                                               SUB41(fVar42,0) & ~(byte)iVar15))) * local_140;
    fVar24 = (float)((ulong)local_90 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                             CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                      CONCAT11((byte)((uint)fVar45 >> 8) &
                                               ~(byte)((uint)iVar16 >> 8),
                                               SUB41(fVar45,0) & ~(byte)iVar16))) * local_140;
    fVar10 = (float)uStack_88 +
             (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar8 >> 8)
                                               ,SUB41(fVar46,0) & ~(byte)iVar8))) * local_140;
    fVar42 = (float)((ulong)uStack_88 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar47 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar47,0) & ~(byte)iVar11))) * local_140;
    param_5[2] = local_150;
    param_5[3] = uStack_148;
    FUN_026c3894(local_68);
    *(undefined1 *)(param_5 + 4) = 1;
    param_5[6] = local_138;
    param_5[9] = uStack_118;
    param_5[8] = local_120;
    fVar7 = fVar25 + 0.0;
    uVar26 = SUB41(fVar7,0);
    uVar27 = (undefined1)((uint)fVar7 >> 8);
    uVar28 = (undefined1)((uint)fVar7 >> 0x10);
    uVar29 = (undefined1)((uint)fVar7 >> 0x18);
    fVar25 = -(float)CONCAT13(extraout_var_07,
                              CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))) +
             (float)(CONCAT17((char)((uint)fVar24 >> 0x18),
                              CONCAT16((char)((uint)fVar24 >> 0x10),
                                       CONCAT15((char)((uint)fVar24 >> 8),
                                                CONCAT14(SUB41(fVar24,0),fVar25)))) >> 0x20);
    uVar30 = SUB41(fVar25,0);
    uVar31 = (undefined1)((uint)fVar25 >> 8);
    uVar32 = (undefined1)((uint)fVar25 >> 0x10);
    uVar33 = (undefined1)((uint)fVar25 >> 0x18);
    fVar25 = fVar10 + 0.0;
    uVar34 = SUB41(fVar25,0);
    uVar35 = (undefined1)((uint)fVar25 >> 8);
    uVar36 = (undefined1)((uint)fVar25 >> 0x10);
    uVar37 = (undefined1)((uint)fVar25 >> 0x18);
    fVar25 = (float)(CONCAT17((char)((uint)fVar42 >> 0x18),
                              CONCAT16((char)((uint)fVar42 >> 0x10),
                                       CONCAT15((char)((uint)fVar42 >> 8),
                                                CONCAT14(SUB41(fVar42,0),fVar10)))) >> 0x20) + 0.0;
    uVar38 = SUB41(fVar25,0);
    uVar39 = (undefined1)((uint)fVar25 >> 8);
    uVar40 = (undefined1)((uint)fVar25 >> 0x10);
    uVar41 = (undefined1)((uint)fVar25 >> 0x18);
    param_5[0xb] = uStack_108;
    param_5[10] = local_110;
    *(undefined4 *)(param_5 + 0xc) = local_100;
    *(undefined4 *)(param_5 + 0xe) = local_f0;
    param_5[0xd] = local_f8;
    *(undefined4 *)(param_5 + 0xf) = local_e8;
    *(undefined1 *)((long)param_5 + 0x7c) = local_e4;
    *(undefined2 *)(param_5 + 0x10) = local_e0;
    *(ulong *)((long)param_5 + 0x84) = CONCAT44(uStack_d8,local_dc);
    *(undefined4 *)((long)param_5 + 0x8c) = uStack_d4;
    param_5[0x12] = local_d0;
    *(undefined4 *)(param_5 + 0x13) = local_c8;
    *(undefined4 *)(param_5 + 0x14) = local_c0;
    *(undefined1 *)((long)param_5 + 0xa4) = local_bc;
    *(undefined2 *)(param_5 + 0x15) = local_b8;
    *(ulong *)((long)param_5 + 0xac) = CONCAT44(uStack_b0,local_b4);
    *(undefined4 *)((long)param_5 + 0xb4) = uStack_ac;
    param_5[0x17] = local_a8;
  }
  uVar17 = local_130;
  param_5[1] = CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(uVar38,CONCAT13(uVar37,
                                                  CONCAT12(uVar36,CONCAT11(uVar35,uVar34)))))));
  *param_5 = CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,CONCAT13(uVar29,
                                                  CONCAT12(uVar28,CONCAT11(uVar27,uVar26)))))));
  if ((local_130 & 1) != 0) {
    lVar20 = tpidr_el0;
    lVar21 = *(long *)(lVar20 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar21;
    }
    plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
    puVar22 = (undefined8 *)(uVar17 - 0x11);
    *puVar22 = 0;
    (**(code **)(*plVar18 + 0x18))(plVar18,puVar22,(long)*(int *)(uVar17 - 9) + 0x10);
  }
  if (plVar23 != (long *)0x0) {
    lVar20 = plVar23[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar20 = local_68[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


