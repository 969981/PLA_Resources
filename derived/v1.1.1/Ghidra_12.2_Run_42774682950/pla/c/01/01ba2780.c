/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba2780; name: FUN_01ba2780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01ba2780(long *param_1,float *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  byte bVar20;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar21;
  byte bVar22;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar23;
  byte bVar24;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar25;
  byte bVar26;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar30;
  byte bVar31;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar32;
  byte bVar33;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar34;
  byte bVar35;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar36;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar37;
  byte bVar38;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar39;
  byte bVar40;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar41;
  byte bVar42;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar46;
  byte bVar47;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar48;
  byte bVar49;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar50;
  byte bVar51;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  float fVar52;
  int iVar53;
  float fVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar54 [16];
  int iVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fStack_ac;
  float fStack_a4;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined8 local_60;
  char local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x18))(&local_90);
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_00946790(&local_a0,&local_90);
  if (local_90 != (long *)0x0) {
    plVar17 = local_90 + 1;
    do {
      iVar53 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar53;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar53 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_50 = (undefined8 *)*local_90;
      FUN_02a44274(lVar12 + 0xd8,&local_50);
    }
  }
  local_80 = 0;
  local_78 = &DAT_cbf29ce484222645;
  puStack_70 = &DAT_cbf29ce484222645;
  local_58 = '\x01';
  local_90 = (long *)0x0;
  local_88 = (ulong)local_88._2_2_ << 0x10;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0x3f800000;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00b63bec(&local_50,&local_a0);
  FUN_01b99ce0(&local_90,&local_50);
  puVar11 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_50 + 1);
    do {
      iVar53 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar53 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar53 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_28 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_28);
    }
  }
  plVar17 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 1;
    do {
      iVar53 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar53;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar53 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_50 = (undefined8 *)*plVar17;
      FUN_02a44274(lVar12 + 0xd8,&local_50);
    }
  }
  if ((ulong)(long)local_58 < 4) {
    uVar13 = *(ulong *)(&UNK_03888a40 + (long)local_58 * 8);
  }
  else {
    uVar13 = 0xe163a72358a15b37;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar53 = __cxa_guard_acquire(PTR_DAT_04379660), iVar53 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  uVar14 = *(ulong *)(lVar12 + 0x60);
  fVar64 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & DAT_043d2c70;
    }
    else if (DAT_043d2c70 < uVar14) {
      uVar16 = DAT_043d2c70;
    }
    else {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = DAT_043d2c70 / uVar14;
      }
      uVar16 = DAT_043d2c70 - uVar16 * uVar14;
    }
    plVar17 = *(long **)(*(long *)(lVar12 + 0x58) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == DAT_043d2c70) {
            if (plVar17[2] == DAT_043d2c70) goto LAB_01ba2a1c;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == DAT_043d2c70) {
            if (plVar17[2] == DAT_043d2c70) goto LAB_01ba2a1c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_01ba2b6c:
  fVar65 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar13 = (ulong)(fVar64 * (fVar65 / *(float *)PTR_FloatDegree180_04372ce0));
  local_90 = (long *)0x0;
  local_88 = 0;
  fVar64 = *(float *)(PTR_SinCosSampleTable_04372ce8 + (uVar13 >> 0x18 & 0xff) * 0x10);
  fVar65 = *(float *)((long)(PTR_SinCosSampleTable_04372ce8 + (uVar13 >> 0x18 & 0xff) * 0x10) + 8);
  FUN_00ac3fa4(&local_90,param_1 + 0x49);
  FUN_0099c748(&local_a0,&local_90);
  plVar17 = local_90;
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 1;
    do {
      iVar53 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar53;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar53 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_50 = (undefined8 *)*plVar17;
      FUN_02a44274(lVar12 + 0xd8,&local_50);
    }
  }
  if (local_a0 == (long *)0x0) {
    return false;
  }
  uVar9 = *(undefined8 *)(param_2 + 6);
  uVar37 = (undefined1)uVar9;
  uVar39 = (undefined1)((ulong)uVar9 >> 8);
  uVar41 = (undefined1)((ulong)uVar9 >> 0x10);
  uVar43 = (undefined1)((ulong)uVar9 >> 0x18);
  uVar44 = (undefined1)((ulong)uVar9 >> 0x20);
  uVar46 = (undefined1)((ulong)uVar9 >> 0x28);
  uVar48 = (undefined1)((ulong)uVar9 >> 0x30);
  uVar50 = (undefined1)((ulong)uVar9 >> 0x38);
  uVar8 = *(undefined8 *)(param_2 + 4);
  uVar21 = (undefined1)uVar8;
  uVar23 = (undefined1)((ulong)uVar8 >> 8);
  uVar25 = (undefined1)((ulong)uVar8 >> 0x10);
  uVar27 = (undefined1)((ulong)uVar8 >> 0x18);
  uVar28 = (undefined1)((ulong)uVar8 >> 0x20);
  uVar30 = (undefined1)((ulong)uVar8 >> 0x28);
  uVar32 = (undefined1)((ulong)uVar8 >> 0x30);
  uVar34 = (undefined1)((ulong)uVar8 >> 0x38);
  auVar59._0_4_ = (float)uVar8 * (float)uVar8;
  fVar19 = (float)((ulong)uVar8 >> 0x20);
  auVar59._4_4_ = fVar19 * fVar19;
  auVar59._8_4_ = (float)uVar9 * (float)uVar9;
  fVar19 = (float)((ulong)uVar9 >> 0x20);
  auVar59._12_4_ = fVar19 * fVar19;
  auVar54 = NEON_ext(auVar59,auVar59,8,1);
  fVar52 = auVar54._0_4_ + auVar59._0_4_;
  fVar55 = auVar54._4_4_ + auVar59._4_4_;
  fVar19 = fVar52 + fVar55;
  fVar52 = fVar52 + fVar55;
  auVar54._8_8_ = CONCAT44(fVar52,fVar19);
  auVar54._0_8_ = CONCAT44(fVar52,fVar19);
  if (SQRT(fVar19) <= 1.1920929e-07) {
    FUN_01a87f20();
    fVar19 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) -
             *param_2;
    uVar21 = SUB41(fVar19,0);
    uVar23 = (undefined1)((uint)fVar19 >> 8);
    uVar25 = (undefined1)((uint)fVar19 >> 0x10);
    uVar27 = (undefined1)((uint)fVar19 >> 0x18);
    fVar52 = (float)CONCAT13(extraout_var_12,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) -
             param_2[1];
    uVar28 = SUB41(fVar52,0);
    uVar30 = (undefined1)((uint)fVar52 >> 8);
    uVar32 = (undefined1)((uint)fVar52 >> 0x10);
    uVar34 = (undefined1)((uint)fVar52 >> 0x18);
    fVar55 = (float)CONCAT13(extraout_var_20,
                             CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) -
             param_2[2];
    uVar37 = SUB41(fVar55,0);
    uVar39 = (undefined1)((uint)fVar55 >> 8);
    uVar41 = (undefined1)((uint)fVar55 >> 0x10);
    uVar43 = (undefined1)((uint)fVar55 >> 0x18);
    fVar10 = (float)CONCAT13(extraout_var_28,
                             CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) -
             param_2[3];
    uVar44 = SUB41(fVar10,0);
    uVar46 = (undefined1)((uint)fVar10 >> 8);
    uVar48 = (undefined1)((uint)fVar10 >> 0x10);
    uVar50 = (undefined1)((uint)fVar10 >> 0x18);
    auVar62._0_4_ = fVar19 * fVar19;
    auVar62._4_4_ = fVar52 * fVar52;
    auVar62._8_4_ = fVar55 * fVar55;
    auVar62._12_4_ = fVar10 * fVar10;
    auVar54 = NEON_ext(auVar62,auVar62,8,1);
    fVar52 = auVar54._0_4_ + auVar62._0_4_;
    fVar55 = auVar54._4_4_ + auVar62._4_4_;
    fVar19 = fVar52 + fVar55;
    fVar52 = fVar52 + fVar55;
    if (fVar19 == 0.0) {
      bVar36 = (byte)_UNK_03888d18;
      bVar38 = (byte)((ulong)_UNK_03888d18 >> 8);
      bVar40 = (byte)((ulong)_UNK_03888d18 >> 0x10);
      bVar42 = (byte)((ulong)_UNK_03888d18 >> 0x18);
      bVar45 = (byte)((ulong)_UNK_03888d18 >> 0x20);
      bVar47 = (byte)((ulong)_UNK_03888d18 >> 0x28);
      bVar49 = (byte)((ulong)_UNK_03888d18 >> 0x30);
      bVar51 = (byte)((ulong)_UNK_03888d18 >> 0x38);
      bVar20 = (byte)_DAT_03888d10;
      bVar22 = (byte)((ulong)_DAT_03888d10 >> 8);
      bVar24 = (byte)((ulong)_DAT_03888d10 >> 0x10);
      bVar26 = (byte)((ulong)_DAT_03888d10 >> 0x18);
      bVar29 = (byte)((ulong)_DAT_03888d10 >> 0x20);
      bVar31 = (byte)((ulong)_DAT_03888d10 >> 0x28);
      bVar33 = (byte)((ulong)_DAT_03888d10 >> 0x30);
      bVar35 = (byte)((ulong)_DAT_03888d10 >> 0x38);
      goto LAB_01ba2ca4;
    }
    auVar54._8_8_ = CONCAT44(fVar52,fVar19);
    auVar54._0_8_ = CONCAT44(fVar52,fVar19);
    auVar59 = NEON_frsqrte(auVar54,4);
    auVar61._0_4_ = auVar59._0_4_ * fVar19;
    auVar61._4_4_ = auVar59._4_4_ * fVar52;
    auVar61._8_4_ = auVar59._8_4_ * fVar19;
    auVar61._12_4_ = auVar59._12_4_ * fVar52;
  }
  else {
    auVar59 = NEON_frsqrte(auVar54,4);
    auVar61._0_4_ = fVar19 * auVar59._0_4_;
    auVar61._4_4_ = fVar52 * auVar59._4_4_;
    auVar61._8_4_ = fVar19 * auVar59._8_4_;
    auVar61._12_4_ = fVar52 * auVar59._12_4_;
  }
  auVar62 = NEON_frsqrts(auVar59,auVar61,4);
  auVar60._0_4_ = auVar59._0_4_ * auVar62._0_4_;
  auVar60._4_4_ = auVar59._4_4_ * auVar62._4_4_;
  auVar60._8_4_ = auVar59._8_4_ * auVar62._8_4_;
  auVar60._12_4_ = auVar59._12_4_ * auVar62._12_4_;
  auVar63._0_4_ = auVar54._0_4_ * auVar60._0_4_;
  auVar63._4_4_ = auVar54._4_4_ * auVar60._4_4_;
  auVar63._8_4_ = auVar54._8_4_ * auVar60._8_4_;
  auVar63._12_4_ = auVar54._12_4_ * auVar60._12_4_;
  iVar53 = -(uint)(auVar54._0_4_ == 0.0);
  iVar56 = -(uint)(auVar54._4_4_ == 0.0);
  iVar57 = -(uint)(auVar54._8_4_ == 0.0);
  iVar58 = -(uint)(auVar54._12_4_ == 0.0);
  auVar54 = NEON_frsqrts(auVar60,auVar63,4);
  fVar19 = (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar23,uVar21))) *
           auVar60._0_4_ * auVar54._0_4_;
  fVar52 = (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) *
           auVar60._4_4_ * auVar54._4_4_;
  fVar55 = (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar39,uVar37))) *
           auVar60._8_4_ * auVar54._8_4_;
  fVar10 = (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44))) *
           auVar60._12_4_ * auVar54._12_4_;
  bVar20 = SUB41(fVar19,0) & ~(byte)iVar53;
  bVar22 = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar53 >> 8);
  bVar24 = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
  bVar26 = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
  bVar29 = SUB41(fVar52,0) & ~(byte)iVar56;
  bVar31 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar56 >> 8);
  bVar33 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
  bVar35 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
  bVar36 = SUB41(fVar55,0) & ~(byte)iVar57;
  bVar38 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar57 >> 8);
  bVar40 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  bVar42 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  bVar45 = SUB41(fVar10,0) & ~(byte)iVar58;
  bVar47 = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar58 >> 8);
  bVar49 = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
  bVar51 = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
LAB_01ba2ca4:
  fVar52 = (float)CONCAT13(bVar42,CONCAT12(bVar40,CONCAT11(bVar38,bVar36)));
  fVar19 = (float)CONCAT13(bVar26,CONCAT12(bVar24,CONCAT11(bVar22,bVar20)));
  FUN_01a831dc(local_a0);
  fStack_ac = (float)(CONCAT17(bVar35,CONCAT16(bVar33,CONCAT15(bVar31,CONCAT14(bVar29,fVar19)))) >>
                     0x20);
  fStack_a4 = (float)(CONCAT17(bVar51,CONCAT16(bVar49,CONCAT15(bVar47,CONCAT14(bVar45,fVar52)))) >>
                     0x20);
  fVar19 = fVar19 * (float)CONCAT13(extraout_var_03,
                                    CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  fStack_ac = fStack_ac *
              (float)CONCAT13(extraout_var_11,
                              CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05)));
  uVar21 = (undefined1)((uint)fStack_ac >> 8);
  uVar23 = (undefined1)((uint)fStack_ac >> 0x10);
  uVar25 = (undefined1)((uint)fStack_ac >> 0x18);
  fVar52 = fVar52 * (float)CONCAT13(extraout_var_19,
                                    CONCAT12(extraout_var_17,
                                             CONCAT11(extraout_var_15,extraout_var_13)));
  uVar27 = (undefined1)((uint)fVar52 >> 8);
  uVar28 = (undefined1)((uint)fVar52 >> 0x10);
  uVar30 = (undefined1)((uint)fVar52 >> 0x18);
  fStack_a4 = fStack_a4 *
              (float)CONCAT13(extraout_var_27,
                              CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21)));
  uVar32 = (undefined1)((uint)fStack_a4 >> 8);
  uVar34 = (undefined1)((uint)fStack_a4 >> 0x10);
  uVar37 = (undefined1)((uint)fStack_a4 >> 0x18);
  auVar6[4] = SUB41(fStack_ac,0);
  auVar6._0_4_ = fVar19;
  auVar6[5] = uVar21;
  auVar6[6] = uVar23;
  auVar6[7] = uVar25;
  auVar6[8] = SUB41(fVar52,0);
  auVar6[9] = uVar27;
  auVar6[10] = uVar28;
  auVar6[0xb] = uVar30;
  auVar6[0xc] = SUB41(fStack_a4,0);
  auVar6[0xd] = uVar32;
  auVar6[0xe] = uVar34;
  auVar6[0xf] = uVar37;
  auVar7[4] = SUB41(fStack_ac,0);
  auVar7._0_4_ = fVar19;
  auVar7[5] = uVar21;
  auVar7[6] = uVar23;
  auVar7[7] = uVar25;
  auVar7[8] = SUB41(fVar52,0);
  auVar7[9] = uVar27;
  auVar7[10] = uVar28;
  auVar7[0xb] = uVar30;
  auVar7[0xc] = SUB41(fStack_a4,0);
  auVar7[0xd] = uVar32;
  auVar7[0xe] = uVar34;
  auVar7[0xf] = uVar37;
  auVar54 = NEON_ext(auVar6,auVar7,8,1);
  if (local_a0 != (long *)0x0) {
    lVar12 = local_a0[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar53 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar53 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar53 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  return fVar64 + fVar65 * (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08 <
         auVar54._0_4_ + fVar19 + auVar54._4_4_ + fStack_ac;
LAB_01ba2a1c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar17[0x21];
    fVar64 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else {
        uVar16 = uVar13;
        if (uVar14 <= uVar13) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = uVar13 / uVar14;
          }
          uVar16 = uVar13 - uVar16 * uVar14;
        }
      }
      plVar18 = *(long **)(plVar17[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == uVar13) {
              if (plVar18[2] == uVar13) goto LAB_01ba2b54;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == uVar13) {
              if (plVar18[2] == uVar13) goto LAB_01ba2b54;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar5 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01ba2b58;
  }
  goto LAB_01ba2b6c;
LAB_01ba2b54:
  fVar64 = *(float *)(plVar18 + 6);
LAB_01ba2b58:
  do {
    iVar53 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar53;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar53 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
  goto LAB_01ba2b6c;
}


