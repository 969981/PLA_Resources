/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c1f388; name: FUN_00c1f388
 */


undefined1  [16] FUN_00c1f388(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar17;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar19;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar20;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar21;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar22;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar23;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar24;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar25;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 uVar26;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar27;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 uVar28;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar29;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar30;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar31;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 uVar32;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar33;
  undefined1 auVar18 [16];
  float fVar34;
  float fVar41;
  float fVar43;
  float fVar45;
  undefined1 auVar36 [16];
  int iVar35;
  undefined1 auVar37 [16];
  int iVar42;
  int iVar44;
  int iVar46;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 in_q3 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_00b5f47c(&local_90,*(undefined8 *)(param_1 + 0x58));
  FUN_00c1e8d8(&local_40,&local_90);
  plVar15 = local_90;
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 1;
    do {
      iVar35 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar35;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_b0 = (long *)*plVar15;
      FUN_02a44274(lVar14 + 0xd8,&local_b0);
    }
  }
  FUN_00b5f5f4(&local_90,*(undefined8 *)(param_1 + 0x58));
  if (local_90 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    FUN_00b911c4(&local_b0);
    plVar1 = local_90;
    plVar15 = local_b0;
    if (local_90 != (long *)0x0) {
      plVar2 = local_90 + 1;
      do {
        iVar35 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar35;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar35 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_b0 = (long *)*plVar1;
        FUN_02a44274(lVar14 + 0xd8,&local_b0);
      }
    }
  }
  FUN_00b5f5a4(&local_90,*(undefined8 *)(param_1 + 0x58));
  FUN_00be5694(&local_48,&local_90);
  plVar1 = local_90;
  if (local_90 != (long *)0x0) {
    plVar2 = local_90 + 1;
    do {
      iVar35 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar35;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_b0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_b0);
    }
  }
  if ((((local_40 == (long *)0x0) || (plVar15 == (long *)0x0)) || (local_48 == (long *)0x0)) ||
     (pcVar9 = (char *)FUN_01ba02fc(plVar15), *pcVar9 == '\0')) {
    uVar12 = *(undefined8 *)(param_1 + 0x168);
    uVar26 = (undefined1)uVar12;
    uVar27 = (undefined1)((ulong)uVar12 >> 8);
    uVar28 = (undefined1)((ulong)uVar12 >> 0x10);
    uVar29 = (undefined1)((ulong)uVar12 >> 0x18);
    uVar30 = (undefined1)((ulong)uVar12 >> 0x20);
    uVar31 = (undefined1)((ulong)uVar12 >> 0x28);
    uVar32 = (undefined1)((ulong)uVar12 >> 0x30);
    uVar33 = (undefined1)((ulong)uVar12 >> 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x160);
    uVar17 = (undefined1)uVar12;
    uVar19 = (undefined1)((ulong)uVar12 >> 8);
    uVar20 = (undefined1)((ulong)uVar12 >> 0x10);
    uVar21 = (undefined1)((ulong)uVar12 >> 0x18);
    uVar22 = (undefined1)((ulong)uVar12 >> 0x20);
    uVar23 = (undefined1)((ulong)uVar12 >> 0x28);
    uVar24 = (undefined1)((ulong)uVar12 >> 0x30);
    uVar25 = (undefined1)((ulong)uVar12 >> 0x38);
  }
  else {
    fVar8 = *(float *)(pcVar9 + 0x24);
    fVar55 = *(float *)(pcVar9 + 0x28);
    (**(code **)(*local_40 + 0x40))();
    uStack_58 = in_q3._8_8_;
    local_60 = in_q3._0_8_;
    FUN_00b5f458(&local_90,*(undefined8 *)(param_1 + 0x58));
    puVar10 = (undefined8 *)FUN_00b8a9f8(local_90[0xb],&DAT_03a77b58);
    fStack_b8 = (float)puVar10[1];
    fStack_b4 = (float)((ulong)puVar10[1] >> 0x20);
    local_c0 = (float)*puVar10;
    if (local_90 != (long *)0x0) {
      plVar1 = local_90 + 10;
      do {
        iVar35 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar35;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar35 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_01a831dc(local_48);
    uStack_68 = CONCAT17(extraout_var_30,
                         CONCAT16(extraout_var_28,
                                  CONCAT15(extraout_var_26,
                                           CONCAT14(extraout_var_24,
                                                    CONCAT13(extraout_var_22,
                                                             CONCAT12(extraout_var_20,
                                                                      CONCAT11(extraout_var_18,
                                                                               extraout_var_16))))))
                        );
    local_70 = CONCAT17(extraout_var_14,
                        CONCAT16(extraout_var_12,
                                 CONCAT15(extraout_var_10,
                                          CONCAT14(extraout_var_08,
                                                   CONCAT13(extraout_var_05,
                                                            CONCAT12(extraout_var_02,
                                                                     CONCAT11(extraout_var,
                                                                              extraout_b0)))))));
    fVar6 = 0.0;
    fVar34 = (float)local_60 - local_c0;
    fVar16 = (float)((ulong)uStack_58 >> 0x20);
    fVar43 = (float)uStack_58 - fStack_b8;
    fVar45 = fVar16 - fStack_b4;
    auVar48._0_4_ = fVar34 * fVar34;
    auVar48._4_4_ = 0;
    auVar48._8_4_ = fVar43 * fVar43;
    auVar48._12_4_ = fVar45 * fVar45;
    auVar47 = NEON_ext(auVar48,auVar48,8,1);
    if ((auVar47._0_4_ + auVar48._0_4_ + auVar47._4_4_ + 0.0 <= fVar55 * fVar55) ||
       (*(char *)(param_1 + 0x170) != '\0')) {
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
    else {
      fVar55 = local_c0 - (float)local_60;
      fVar34 = fStack_b8 - (float)uStack_58;
      fVar16 = fStack_b4 - fVar16;
      auVar36._0_4_ = fVar55 * fVar55;
      auVar36._4_4_ = 0;
      auVar36._8_4_ = fVar34 * fVar34;
      auVar36._12_4_ = fVar16 * fVar16;
      auVar48 = NEON_ext(auVar36,auVar36,8,1);
      fVar45 = auVar48._0_4_ + auVar36._0_4_;
      fVar41 = auVar48._4_4_ + 0.0;
      fVar43 = fVar45 + fVar41;
      fVar45 = fVar45 + fVar41;
      auVar37._8_8_ = CONCAT44(fVar45,fVar43);
      auVar37._0_8_ = CONCAT44(fVar45,fVar43);
      auVar48 = NEON_frsqrte(auVar37,4);
      auVar51._0_4_ = auVar48._0_4_ * fVar43;
      auVar51._4_4_ = auVar48._4_4_ * fVar45;
      auVar51._8_4_ = auVar48._8_4_ * fVar43;
      auVar51._12_4_ = auVar48._12_4_ * fVar45;
      auVar47 = NEON_frsqrts(auVar48,auVar51,4);
      auVar49._0_4_ = auVar48._0_4_ * auVar47._0_4_;
      auVar49._4_4_ = auVar48._4_4_ * auVar47._4_4_;
      auVar49._8_4_ = auVar48._8_4_ * auVar47._8_4_;
      auVar49._12_4_ = auVar48._12_4_ * auVar47._12_4_;
      auVar52._0_4_ = fVar43 * auVar49._0_4_;
      auVar52._4_4_ = fVar45 * auVar49._4_4_;
      auVar52._8_4_ = fVar43 * auVar49._8_4_;
      auVar52._12_4_ = fVar45 * auVar49._12_4_;
      iVar35 = -(uint)(fVar43 == 0.0);
      iVar42 = -(uint)(fVar45 == 0.0);
      iVar44 = -(uint)(fVar43 == 0.0);
      iVar46 = -(uint)(fVar45 == 0.0);
      auVar48 = NEON_frsqrts(auVar49,auVar52,4);
      fVar55 = fVar55 * auVar49._0_4_ * auVar48._0_4_;
      fVar43 = auVar49._4_4_ * auVar48._4_4_ * 0.0;
      fVar34 = fVar34 * auVar49._8_4_ * auVar48._8_4_;
      fVar16 = fVar16 * auVar49._12_4_ * auVar48._12_4_;
      fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                               CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar44 >> 8),
                                                  SUB41(fVar34,0) & ~(byte)iVar44)));
      fStack_e4 = (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                                   CONCAT16((byte)((uint)fVar16 >> 0x10) &
                                            ~(byte)((uint)iVar46 >> 0x10),
                                            CONCAT15((byte)((uint)fVar16 >> 8) &
                                                     ~(byte)((uint)iVar46 >> 8),
                                                     CONCAT14(SUB41(fVar16,0) & ~(byte)iVar46,fVar34
                                                             )))) >> 0x20);
      fVar55 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                               CONCAT12((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  SUB41(fVar55,0) & ~(byte)iVar35)));
      fStack_ec = (float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                   CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                            ~(byte)((uint)iVar42 >> 0x10),
                                            CONCAT15((byte)((uint)fVar43 >> 8) &
                                                     ~(byte)((uint)iVar42 >> 8),
                                                     CONCAT14(SUB41(fVar43,0) & ~(byte)iVar42,fVar55
                                                             )))) >> 0x20);
      FUN_01a831dc(local_48);
      fVar55 = fVar55 * (float)CONCAT13(extraout_var_06,
                                        CONCAT12(extraout_var_03,
                                                 CONCAT11(extraout_var_00,extraout_b0_00)));
      fStack_ec = fStack_ec *
                  (float)CONCAT13(extraout_var_15,
                                  CONCAT12(extraout_var_13,CONCAT11(extraout_var_11,extraout_var_09)
                                          ));
      uVar17 = (undefined1)((uint)fStack_ec >> 8);
      uVar19 = (undefined1)((uint)fStack_ec >> 0x10);
      uVar20 = (undefined1)((uint)fStack_ec >> 0x18);
      fVar34 = fVar34 * (float)CONCAT13(extraout_var_23,
                                        CONCAT12(extraout_var_21,
                                                 CONCAT11(extraout_var_19,extraout_var_17)));
      uVar21 = (undefined1)((uint)fVar34 >> 8);
      uVar22 = (undefined1)((uint)fVar34 >> 0x10);
      uVar23 = (undefined1)((uint)fVar34 >> 0x18);
      fStack_e4 = fStack_e4 *
                  (float)CONCAT13(extraout_var_31,
                                  CONCAT12(extraout_var_29,CONCAT11(extraout_var_27,extraout_var_25)
                                          ));
      uVar24 = (undefined1)((uint)fStack_e4 >> 8);
      uVar25 = (undefined1)((uint)fStack_e4 >> 0x10);
      uVar26 = (undefined1)((uint)fStack_e4 >> 0x18);
      auVar47[4] = SUB41(fStack_ec,0);
      auVar47._0_4_ = fVar55;
      auVar47[5] = uVar17;
      auVar47[6] = uVar19;
      auVar47[7] = uVar20;
      auVar47[8] = SUB41(fVar34,0);
      auVar47[9] = uVar21;
      auVar47[10] = uVar22;
      auVar47[0xb] = uVar23;
      auVar47[0xc] = SUB41(fStack_e4,0);
      auVar47[0xd] = uVar24;
      auVar47[0xe] = uVar25;
      auVar47[0xf] = uVar26;
      auVar7[4] = SUB41(fStack_ec,0);
      auVar7._0_4_ = fVar55;
      auVar7[5] = uVar17;
      auVar7[6] = uVar19;
      auVar7[7] = uVar20;
      auVar7[8] = SUB41(fVar34,0);
      auVar7[9] = uVar21;
      auVar7[10] = uVar22;
      auVar7[0xb] = uVar23;
      auVar7[0xc] = SUB41(fStack_e4,0);
      auVar7[0xd] = uVar24;
      auVar7[0xe] = uVar25;
      auVar7[0xf] = uVar26;
      auVar48 = NEON_ext(auVar47,auVar7,8,1);
      fVar55 = auVar48._0_4_ + fVar55 + auVar48._4_4_ + fStack_ec;
      if ((-1.0 <= fVar55) && ((1.0 < fVar55 || (0.0 < fVar55)))) {
        FUN_00b5f458(&local_90,*(undefined8 *)(param_1 + 0x58));
        pcVar9 = (char *)FUN_00b8605c(local_90[0xb],&DAT_03a77b60);
        cVar3 = *pcVar9;
        if (local_90 != (long *)0x0) {
          plVar1 = local_90 + 10;
          do {
            iVar35 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar35;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        local_90 = (long *)0x4c8ef777c2d7493e;
        if (cVar3 != '\0') {
          local_90 = (long *)0x51ed7ea03ec4d72c;
        }
        FUN_00b5f458(&local_b0,*(undefined8 *)(param_1 + 0x58));
        pauVar11 = (undefined1 (*) [16])FUN_00b8a9f8(local_b0[0xb],&local_90);
        auVar48 = *pauVar11;
        local_f0 = auVar48._0_4_;
        fStack_e8 = auVar48._8_4_;
        fStack_e4 = auVar48._12_4_;
        if (local_b0 != (long *)0x0) {
          plVar1 = local_b0 + 10;
          do {
            iVar35 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar35;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*local_b0 + 0x10))();
          }
        }
        fVar55 = (local_c0 + local_f0) - (float)local_60;
        fVar43 = (fStack_b8 + fStack_e8) - (float)uStack_58;
        fVar45 = (fStack_b4 + fStack_e4) - uStack_58._4_4_;
        auVar38._0_4_ = fVar55 * fVar55;
        auVar38._4_4_ = 0;
        auVar38._8_4_ = fVar43 * fVar43;
        auVar38._12_4_ = fVar45 * fVar45;
        auVar48 = NEON_ext(auVar38,auVar38,8,1);
        fVar34 = auVar48._0_4_ + auVar38._0_4_;
        fVar41 = auVar48._4_4_ + 0.0;
        fVar16 = fVar34 + fVar41;
        fVar34 = fVar34 + fVar41;
        auVar39._8_8_ = CONCAT44(fVar34,fVar16);
        auVar39._0_8_ = CONCAT44(fVar34,fVar16);
        auVar48 = NEON_frsqrte(auVar39,4);
        auVar53._0_4_ = auVar48._0_4_ * fVar16;
        auVar53._4_4_ = auVar48._4_4_ * fVar34;
        auVar53._8_4_ = auVar48._8_4_ * fVar16;
        auVar53._12_4_ = auVar48._12_4_ * fVar34;
        auVar47 = NEON_frsqrts(auVar48,auVar53,4);
        auVar50._0_4_ = auVar48._0_4_ * auVar47._0_4_;
        auVar50._4_4_ = auVar48._4_4_ * auVar47._4_4_;
        auVar50._8_4_ = auVar48._8_4_ * auVar47._8_4_;
        auVar50._12_4_ = auVar48._12_4_ * auVar47._12_4_;
        auVar54._0_4_ = fVar16 * auVar50._0_4_;
        auVar54._4_4_ = fVar34 * auVar50._4_4_;
        auVar54._8_4_ = fVar16 * auVar50._8_4_;
        auVar54._12_4_ = fVar34 * auVar50._12_4_;
        iVar35 = -(uint)(fVar16 == 0.0);
        iVar42 = -(uint)(fVar34 == 0.0);
        iVar44 = -(uint)(fVar16 == 0.0);
        iVar46 = -(uint)(fVar34 == 0.0);
        auVar48 = NEON_frsqrts(auVar50,auVar54,4);
        fVar55 = fVar55 * auVar50._0_4_ * auVar48._0_4_;
        fVar16 = auVar50._4_4_ * auVar48._4_4_ * 0.0;
        fVar43 = fVar43 * auVar50._8_4_ * auVar48._8_4_;
        fVar45 = fVar45 * auVar50._12_4_ * auVar48._12_4_;
        fVar34 = (float)((ulong)local_70 >> 0x20);
        fVar41 = (float)((ulong)uStack_68 >> 0x20);
        fVar34 = fVar34 + ((float)CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                           ~(byte)((uint)iVar42 >> 0x18),
                                           CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                    ~(byte)((uint)iVar42 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar16 >> 8) &
                                                             ~(byte)((uint)iVar42 >> 8),
                                                             SUB41(fVar16,0) & ~(byte)iVar42))) -
                          fVar34) * fVar8;
        fVar41 = fVar41 + ((float)CONCAT13((byte)((uint)fVar45 >> 0x18) &
                                           ~(byte)((uint)iVar46 >> 0x18),
                                           CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                                    ~(byte)((uint)iVar46 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar45 >> 8) &
                                                             ~(byte)((uint)iVar46 >> 8),
                                                             SUB41(fVar45,0) & ~(byte)iVar46))) -
                          fVar41) * fVar8;
        uStack_68 = CONCAT17((char)((uint)fVar41 >> 0x18),
                             CONCAT16((char)((uint)fVar41 >> 0x10),
                                      CONCAT15((char)((uint)fVar41 >> 8),
                                               CONCAT14(SUB41(fVar41,0),
                                                        (float)uStack_68 +
                                                        ((float)CONCAT13((byte)((uint)fVar43 >> 0x18
                                                                               ) & ~(byte)((uint)
                                                  iVar44 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                                           ~(byte)((uint)iVar44 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar43 >> 8) &
                                                                    ~(byte)((uint)iVar44 >> 8),
                                                                    SUB41(fVar43,0) & ~(byte)iVar44)
                                                          )) - (float)uStack_68) * fVar8))));
        local_70 = CONCAT17((char)((uint)fVar34 >> 0x18),
                            CONCAT16((char)((uint)fVar34 >> 0x10),
                                     CONCAT15((char)((uint)fVar34 >> 8),
                                              CONCAT14(SUB41(fVar34,0),
                                                       (float)local_70 +
                                                       ((float)CONCAT13((byte)((uint)fVar55 >> 0x18)
                                                                        & ~(byte)((uint)iVar35 >>
                                                                                 0x18),
                                                                        CONCAT12((byte)((uint)fVar55
                                                                                       >> 0x10) &
                                                                                 ~(byte)((uint)
                                                  iVar35 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar55 >> 8) &
                                                           ~(byte)((uint)iVar35 >> 8),
                                                           SUB41(fVar55,0) & ~(byte)iVar35))) -
                                                  (float)local_70) * fVar8))));
      }
    }
    fVar8 = *(float *)(param_1 + 0x15c);
    fStack_e8 = (float)uStack_68;
    fStack_e4 = (float)((ulong)uStack_68 >> 0x20);
    local_f0 = (float)local_70;
    fStack_ec = (float)((ulong)local_70 >> 0x20);
    fStack_b8 = (float)uStack_58;
    fStack_b4 = (float)((ulong)uStack_58 >> 0x20);
    local_c0 = (float)local_60;
    fStack_bc = (float)((ulong)local_60 >> 0x20);
    FUN_01a835d8(0xcd,local_48,&local_70);
    local_90 = (long *)&DAT_5aed9c38b7dfcc60;
    pcStack_88 = "ai_field_waza";
    local_80 = 0xd;
    local_78 = (long *)0x0;
    local_b0 = (long *)0xd2f0a357c260d992;
    pcStack_a8 = "rush_check_find_direct_path_distance";
    local_a0 = 0x24;
    local_98 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar35 = __cxa_guard_acquire(PTR_DAT_04379660), iVar35 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar12 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar12;
    FUN_00d7d9e4(&local_38,uVar12,&local_90);
    if (local_38 != (long *)0x0) {
      FUN_00d7905c(local_38,&local_b0);
      fVar6 = (float)CONCAT13(extraout_var_07,
                              CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 10;
        do {
          iVar35 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar35;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    auVar40._0_4_ = local_f0 * fVar8;
    auVar40._4_4_ = fStack_ec * fVar8;
    auVar40._8_4_ = fStack_e8 * fVar8;
    auVar40._12_4_ = fStack_e4 * fVar8;
    if (local_78 != (long *)0x0) {
      uVar12 = auVar40._8_8_;
      (**(code **)(*local_78 + 0x20))();
      auVar40._8_8_ = uVar12;
    }
    local_c0 = local_c0 + auVar40._0_4_;
    fStack_bc = fStack_bc + auVar40._4_4_;
    fStack_b8 = fStack_b8 + auVar40._8_4_;
    fStack_b4 = fStack_b4 + auVar40._12_4_;
    fStack_b4 = (float)(CONCAT17((char)((uint)fStack_b4 >> 0x18),
                                 CONCAT16((char)((uint)fStack_b4 >> 0x10),
                                          CONCAT15((char)((uint)fStack_b4 >> 8),
                                                   CONCAT14(SUB41(fStack_b4,0),fStack_b8)))) >> 0x20
                       );
    fStack_bc = (float)(CONCAT17((char)((uint)fStack_bc >> 0x18),
                                 CONCAT16((char)((uint)fStack_bc >> 0x10),
                                          CONCAT15((char)((uint)fStack_bc >> 8),
                                                   CONCAT14(SUB41(fStack_bc,0),local_c0)))) >> 0x20)
    ;
    if ((*(float *)(param_1 + 0x15c) <= fVar6) ||
       (uVar13 = FUN_01f56a18(&local_60,&local_70,(int)local_48[0xee],&local_90), (uVar13 & 1) == 0)
       ) goto LAB_00c1f890;
    uVar26 = SUB81(pcStack_88,0);
    uVar27 = (undefined1)((ulong)pcStack_88 >> 8);
    uVar28 = (undefined1)((ulong)pcStack_88 >> 0x10);
    uVar29 = (undefined1)((ulong)pcStack_88 >> 0x18);
    uVar30 = (undefined1)((ulong)pcStack_88 >> 0x20);
    uVar31 = (undefined1)((ulong)pcStack_88 >> 0x28);
    uVar32 = (undefined1)((ulong)pcStack_88 >> 0x30);
    uVar33 = (undefined1)((ulong)pcStack_88 >> 0x38);
    uVar17 = SUB81(local_90,0);
    uVar19 = (undefined1)((ulong)local_90 >> 8);
    uVar20 = (undefined1)((ulong)local_90 >> 0x10);
    uVar21 = (undefined1)((ulong)local_90 >> 0x18);
    uVar22 = (undefined1)((ulong)local_90 >> 0x20);
    uVar23 = (undefined1)((ulong)local_90 >> 0x28);
    uVar24 = (undefined1)((ulong)local_90 >> 0x30);
    uVar25 = (undefined1)((ulong)local_90 >> 0x38);
  }
  fStack_b8 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26)));
  fStack_b4 = (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,fStack_b8))))
                     >> 0x20);
  local_c0 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar17)));
  fStack_bc = (float)(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,local_c0))))
                     >> 0x20);
LAB_00c1f890:
  if ((local_48 != (long *)0x0) && (uVar13 = FUN_02a43a5c(local_48[0xb]), (uVar13 & 1) != 0)) {
    (**(code **)(*local_48 + 0x20))(local_48);
  }
  plVar1 = local_40;
  if ((plVar15 != (long *)0x0) &&
     (uVar13 = FUN_02a43a5c(plVar15[0xb]), plVar1 = local_40, (uVar13 & 1) != 0)) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
    plVar1 = local_40;
  }
  if ((plVar1 != (long *)0x0) && (uVar13 = FUN_02a43a5c(plVar1[0xb]), (uVar13 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  auVar18[9] = (undefined1)((uint)fStack_b8 >> 8);
  auVar18[10] = (undefined1)((uint)fStack_b8 >> 0x10);
  auVar18[0xb] = (undefined1)((uint)fStack_b8 >> 0x18);
  auVar18[0xc] = SUB41(fStack_b4,0);
  auVar18[0xd] = (undefined1)((uint)fStack_b4 >> 8);
  auVar18[0xe] = (undefined1)((uint)fStack_b4 >> 0x10);
  auVar18[0xf] = (undefined1)((uint)fStack_b4 >> 0x18);
  auVar18._4_4_ = fStack_bc;
  auVar18._0_4_ = local_c0;
  auVar18[8] = fStack_b8._0_1_;
  return auVar18;
}


