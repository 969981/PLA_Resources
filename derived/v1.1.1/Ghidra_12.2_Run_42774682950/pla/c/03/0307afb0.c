/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307afb0; name: FUN_0307afb0
 */


undefined8 FUN_0307afb0(long param_1,long param_2,undefined8 *param_3,long param_4,float *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [12];
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  byte bVar41;
  float fVar42;
  ulong uVar38;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined8 in_d16;
  undefined8 in_register_00005208;
  undefined8 in_d17;
  float local_110;
  float fStack_10c;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_68 = param_3[0x1f];
  uVar45 = 0;
  local_78 = param_3[0x1d];
  uVar2 = *(undefined1 *)(param_4 + 0x2b);
  local_88 = param_3[0x1b];
  local_98 = param_3[0x19];
  local_a0 = param_3[0x18];
  local_90 = param_3[0x1a];
  local_80 = param_3[0x1c];
  local_70 = param_3[0x1e];
  fVar25 = (float)param_3[9];
  fVar27 = (float)((ulong)param_3[9] >> 0x20);
  fVar19 = (float)param_3[8];
  fVar23 = (float)((ulong)param_3[8] >> 0x20);
  iVar44 = 0;
  uVar37 = param_3[0xf];
  fVar42 = (float)*(undefined8 *)param_5;
  fVar21 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
  fVar26 = (float)*(undefined8 *)(param_5 + 2);
  fVar20 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
  fVar22 = *param_5;
  fVar24 = param_5[1];
  fVar43 = param_5[2];
  fVar48 = (float)param_3[0xf];
  while (iVar44 != -6) {
    auVar46._0_4_ = fVar22 * fVar19;
    auVar46._4_4_ = fVar24 * fVar23;
    auVar46._8_4_ = fVar43 * fVar25;
    auVar46._12_4_ = fVar48 * fVar27;
    fVar18 = auVar46._0_4_ + auVar46._4_4_;
    uVar29 = CONCAT44(-(auVar46._8_4_ + auVar46._0_4_ + auVar46._4_4_),-(auVar46._8_4_ + fVar18));
    if ((float)param_3[0xc] * -(auVar46._8_4_ + fVar18) < (float)param_3[0x12]) {
      local_c0 = in_d16;
      uStack_b8 = in_register_00005208;
      if (iVar44 == 0) {
        return 0x80040200;
      }
      goto LAB_0307b17c;
    }
    uVar10 = NEON_frecpe(uVar29,4);
    uVar36 = NEON_frecps(uVar29,uVar10,4);
    fVar19 = (float)uVar10 * (float)uVar36;
    fVar23 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar36 >> 0x20);
    uVar29 = NEON_frecps(uVar29,CONCAT44(fVar23,fVar19),4);
    uVar37 = NEON_fmax(uVar37,0,4);
    uVar45 = NEON_fmin(CONCAT44((float)((ulong)uVar45 >> 0x20) +
                                (float)((ulong)param_3[0x21] >> 0x20) +
                                fVar23 * (float)((ulong)uVar29 >> 0x20) *
                                (float)((ulong)uVar37 >> 0x20),
                                (float)uVar45 + (float)param_3[0x21] +
                                fVar19 * (float)uVar29 * (float)uVar37),param_3[0xd],4);
    fVar18 = (float)uVar45;
    fVar19 = (float)((ulong)uVar45 >> 0x20);
    auVar46 = *(undefined1 (*) [16])(param_3 + 0x1e);
    uStack_68 = CONCAT44(auVar46._12_4_ + fVar19 * *(float *)((long)param_3 + 0x5c),
                         auVar46._8_4_ + fVar18 * *(float *)(param_3 + 0xb));
    local_70 = CONCAT44(auVar46._4_4_ + fVar19 * *(float *)((long)param_3 + 0x54),
                        auVar46._0_4_ + fVar18 * *(float *)(param_3 + 10));
    iVar17 = FUN_0307a310(param_4,uVar2,&local_a0,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_2 + 0x28),local_d0);
    if (iVar17 < 0) {
      pauVar1 = (undefined1 (*) [12])(param_3 + 8);
      fVar25 = (float)param_3[9];
      fVar27 = (float)((ulong)param_3[9] >> 0x20);
      uVar45 = *(undefined8 *)*pauVar1;
      fVar19 = (float)uVar45;
      fVar23 = (float)((ulong)uVar45 >> 0x20);
      auVar40._12_4_ = fVar27;
      auVar40._0_12_ = *pauVar1;
      auVar7._12_4_ = fVar27;
      auVar7._0_12_ = *pauVar1;
      auVar46 = NEON_ext(auVar40,auVar7,8,1);
      auVar14._4_4_ = fVar24;
      auVar14._0_4_ = fVar22;
      auVar14._8_4_ = fVar43;
      auVar13._4_4_ = fVar24;
      auVar13._0_4_ = fVar22;
      auVar13._8_4_ = fVar43;
      auVar13._12_4_ = fVar48;
      auVar14._12_4_ = fVar48;
      auVar40 = NEON_ext(auVar13,auVar14,4,1);
      uVar45 = NEON_ext(uVar45,auVar46._0_8_,4,1);
      fVar18 = (float)((ulong)uVar45 >> 0x20);
      fVar34 = auVar40._0_4_ * fVar19 - fVar22 * (float)uVar45;
      fVar35 = auVar40._4_4_ * fVar23 - fVar24 * fVar18;
      auVar47._0_8_ = CONCAT44(fVar35,fVar34);
      auVar47._8_4_ = fVar22 * fVar25 - fVar43 * fVar19;
      auVar47._12_4_ = fVar24 * fVar27 - fVar48 * fVar23;
      auVar46 = NEON_ext(auVar47,auVar47,4,1);
      fVar28 = auVar46._0_4_;
      fVar33 = auVar46._4_4_;
      if (1.1920929e-07 <= fVar28 * fVar28 + fVar33 * fVar33 + fVar34 * fVar34 &&
          1.1920929e-07 <= fVar28 * fVar28 + fVar33 * fVar33 + fVar34 * fVar34) {
        uVar37 = NEON_ext(auVar46._0_8_,auVar47._0_8_,4,1);
        fVar21 = fVar19 * (float)uVar37 - (float)uVar45 * fVar28;
        fVar42 = fVar23 * (float)((ulong)uVar37 >> 0x20) - fVar18 * fVar33;
        fVar26 = fVar25 * fVar28 - fVar19 * fVar34;
        fVar20 = fVar27 * fVar33 - fVar23 * fVar35;
        auVar8._4_4_ = fVar42;
        auVar8._0_4_ = fVar21;
        auVar8._8_4_ = fVar26;
        auVar8._12_4_ = fVar20;
        auVar9._4_4_ = fVar42;
        auVar9._0_4_ = fVar21;
        auVar9._8_4_ = fVar26;
        auVar9._12_4_ = fVar20;
        auVar46 = NEON_ext(auVar8,auVar9,4,1);
        fVar22 = fVar22 * auVar46._0_4_;
        fVar24 = fVar24 * auVar46._4_4_;
        fVar42 = fVar43 * fVar21 + fVar22 + fVar24;
        fVar20 = fVar42 * fVar48;
        bVar41 = (byte)((uint)fVar42 >> 0x18);
        uVar38 = CONCAT17((char)((uint)(fVar43 * fVar21 + fVar22 + fVar24) >> 0x18),
                          (uint7)(bVar41 & 0x80) << 0x18) & 0x80ffffffffffffff;
        fVar42 = (float)CONCAT13((byte)(uVar38 >> 0x18) ^ auVar46[3],auVar46._0_3_);
        auVar30._0_8_ =
             CONCAT17((byte)(uVar38 >> 0x38) ^ auVar46[7],
                      CONCAT16(auVar46[6],CONCAT15(auVar46[5],CONCAT14(auVar46[4],fVar42))));
        auVar30[8] = SUB41(fVar21,0);
        auVar30[9] = (undefined1)((uint)fVar21 >> 8);
        auVar30[10] = (undefined1)((uint)fVar21 >> 0x10);
        auVar30[0xb] = bVar41 & 0x80 ^ (byte)((uint)fVar21 >> 0x18);
        fVar21 = (float)((ulong)auVar30._0_8_ >> 0x20);
        fVar22 = auVar30._8_4_;
        fVar26 = fVar42 * fVar42 + fVar21 * fVar21 + fVar22 * fVar22;
        fVar43 = fVar42 * fVar42 + fVar21 * fVar21 + fVar22 * fVar22;
        uVar45 = CONCAT44(fVar43,fVar26);
        uVar37 = NEON_frsqrte(uVar45,4);
        fVar24 = (float)uVar37;
        fVar48 = (float)((ulong)uVar37 >> 0x20);
        uVar37 = NEON_frsqrts(uVar45,CONCAT44(fVar48 * fVar48,fVar24 * fVar24),4);
        fVar24 = fVar24 * (float)uVar37;
        fVar48 = fVar48 * (float)((ulong)uVar37 >> 0x20);
        iVar44 = -(uint)(fVar26 <= 0.0);
        iVar17 = -(uint)(fVar43 <= 0.0);
        uVar45 = NEON_frsqrts(uVar45,CONCAT44(fVar48 * fVar48,fVar24 * fVar24),4);
        fVar24 = (float)uVar45 * fVar24;
        fVar48 = (float)((ulong)uVar45 >> 0x20) * fVar48;
        fVar26 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                 CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                          ~(byte)((uint)iVar44 >> 0x10),
                                          CONCAT11((byte)((uint)fVar24 >> 8) &
                                                   ~(byte)((uint)iVar44 >> 8),
                                                   SUB41(fVar24,0) & ~(byte)iVar44)));
        fVar42 = fVar26 * fVar42;
        fVar21 = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                  CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                           ~(byte)((uint)iVar17 >> 0x10),
                                           CONCAT15((byte)((uint)fVar48 >> 8) &
                                                    ~(byte)((uint)iVar17 >> 8),
                                                    CONCAT14(SUB41(fVar48,0) & ~(byte)iVar17,fVar26)
                                                   ))) >> 0x20) * fVar21;
        fVar26 = fVar26 * fVar22;
      }
      goto LAB_0307b198;
    }
    fVar21 = (float)((ulong)local_c0 >> 0x20);
    fVar42 = (float)local_c0;
    fVar26 = (float)uStack_b8;
    fVar28 = *(float *)(param_3 + 4) * fVar26 +
             (float)*param_3 * fVar42 + *(float *)(param_3 + 2) * fVar21;
    fVar33 = *(float *)((long)param_3 + 0x24) * fVar26 +
             (float)((ulong)*param_3 >> 0x20) * fVar42 + *(float *)((long)param_3 + 0x14) * fVar21;
    fVar34 = *(float *)(param_3 + 5) * fVar26 +
             (float)param_3[1] * fVar42 + *(float *)(param_3 + 3) * fVar21;
    fVar25 = (float)param_3[9];
    fVar27 = (float)((ulong)param_3[9] >> 0x20);
    fVar19 = (float)param_3[8];
    fVar23 = (float)((ulong)param_3[8] >> 0x20);
    auVar39._0_4_ = fVar19 * fVar28;
    auVar39._4_4_ = fVar23 * fVar33;
    auVar39._8_4_ = fVar25 * fVar34;
    auVar39._12_4_ =
         fVar27 * (*(float *)((long)param_3 + 0x2c) * fVar26 +
                  (float)((ulong)param_3[1] >> 0x20) * fVar42 +
                  *(float *)((long)param_3 + 0x1c) * fVar21);
    auVar46 = NEON_ext(auVar39,auVar39,8,1);
    fVar35 = (float)local_d0[0] - fVar18 * (auVar39._0_4_ + auVar39._4_4_ + auVar46._0_4_);
    fVar42 = fVar22;
    fVar21 = fVar24;
    fVar26 = fVar43;
    fVar20 = fVar48;
    fVar22 = fVar28;
    fVar24 = fVar33;
    fVar43 = fVar34;
    fVar48 = fVar35;
    if ((float)local_d0[0] <= 0.0) goto LAB_0307b16c;
    iVar44 = iVar44 + -1;
    uVar37 = local_d0[0];
    in_d16 = local_c0;
    in_register_00005208 = uStack_b8;
    in_d17 = local_d0[0];
    if ((float)param_3[0xd] <= fVar18) goto LAB_0307b16c;
  }
  local_c0 = in_d16;
  uStack_b8 = in_register_00005208;
  local_d0[0] = in_d17;
LAB_0307b16c:
  auVar46._0_4_ = fVar19 * fVar22;
  auVar46._4_4_ = fVar23 * fVar24;
  auVar46._8_4_ = fVar25 * fVar43;
  auVar46._12_4_ = fVar27 * fVar48;
  fVar18 = auVar46._0_4_ + auVar46._4_4_;
  in_d17 = local_d0[0];
LAB_0307b17c:
  auVar46 = NEON_ext(auVar46,auVar46,8,1);
  if (1.1920929e-07 < fVar18 + auVar46._0_4_) {
    auVar15._4_4_ = fVar21;
    auVar15._0_4_ = fVar42;
    auVar15._8_4_ = fVar26;
    auVar15._12_4_ = fVar20;
    auVar16._4_4_ = fVar21;
    auVar16._0_4_ = fVar42;
    auVar16._8_4_ = fVar26;
    auVar16._12_4_ = fVar20;
    auVar46 = NEON_ext(auVar15,auVar16,4,1);
    auVar11._4_4_ = fVar24;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar43;
    auVar11._12_4_ = fVar48;
    auVar12._4_4_ = fVar24;
    auVar12._0_4_ = fVar22;
    auVar12._8_4_ = fVar43;
    auVar12._12_4_ = fVar48;
    auVar40 = NEON_ext(auVar11,auVar12,4,1);
    fVar18 = fVar42 * auVar40._0_4_ - fVar22 * auVar46._0_4_;
    fVar28 = fVar21 * auVar40._4_4_ - fVar24 * auVar46._4_4_;
    auVar31._0_8_ = CONCAT44(fVar28,fVar18);
    auVar31._8_4_ = fVar26 * fVar22 - fVar43 * fVar42;
    auVar31._12_4_ = fVar20 * fVar24 - fVar48 * fVar21;
    auVar40 = NEON_ext(auVar31,auVar31,4,1);
    uVar45 = NEON_ext(auVar40._0_8_,auVar31._0_8_,4,1);
    fVar18 = fVar19 * fVar18;
    fVar28 = fVar23 * fVar28;
    auVar3._4_4_ = fVar28;
    auVar3._0_4_ = fVar18;
    auVar3._8_4_ = fVar25 * auVar31._8_4_;
    auVar3._12_4_ = fVar27 * auVar31._12_4_;
    auVar4._4_4_ = fVar28;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar25 * auVar31._8_4_;
    auVar4._12_4_ = fVar27 * auVar31._12_4_;
    auVar46 = NEON_ext(auVar3,auVar4,4,1);
    auVar32._0_4_ = fVar19 * (float)uVar45 - auVar46._0_4_;
    auVar32._4_4_ = fVar23 * (float)((ulong)uVar45 >> 0x20) - auVar46._4_4_;
    auVar32._8_4_ = fVar25 * auVar40._0_4_ - fVar18;
    auVar32._12_4_ = fVar27 * auVar40._4_4_ - fVar28;
    auVar46 = NEON_ext(auVar32,auVar32,4,1);
    local_e0 = auVar46._0_4_;
    fStack_dc = auVar46._4_4_;
    fVar19 = auVar32._0_4_ * auVar32._0_4_ + local_e0 * local_e0 + fStack_dc * fStack_dc;
    fVar23 = auVar32._0_4_ * auVar32._0_4_ + local_e0 * local_e0 + fStack_dc * fStack_dc;
    uVar45 = CONCAT44(fVar23,fVar19);
    if (1.1920929e-07 <= fVar19 && 1.1920929e-07 <= fVar23) {
      uVar37 = NEON_frsqrte(uVar45,4);
      fVar19 = (float)uVar37;
      fVar42 = (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(uVar45,CONCAT44(fVar42 * fVar42,fVar19 * fVar19),4);
      fVar19 = fVar19 * (float)uVar37;
      fVar42 = fVar42 * (float)((ulong)uVar37 >> 0x20);
      uVar45 = NEON_frsqrts(uVar45,CONCAT44(fVar42 * fVar42,fVar19 * fVar19),4);
      fVar19 = (float)uVar45 * fVar19;
      fVar42 = (float)((ulong)uVar45 >> 0x20) * fVar42;
      local_e0 = local_e0 * fVar19;
      fStack_dc = fStack_dc * fVar42;
      fVar19 = auVar32._0_4_ * fVar19;
      uStack_d8 = CONCAT44(auVar32._4_4_ * fVar42,fVar19);
      fVar42 = fVar22;
      fVar21 = fVar24;
      fVar26 = fVar43;
      fVar20 = fVar48;
      if (1.1920929e-07 < ABS(fVar43 - fVar19) ||
          (1.1920929e-07 < ABS(fVar24 - fStack_dc) || 1.1920929e-07 < ABS(fVar22 - local_e0))) {
        fStack_f8 = (float)uStack_b8;
        fStack_f4 = (float)((ulong)uStack_b8 >> 0x20);
        local_100 = (float)local_c0;
        fStack_fc = (float)((ulong)local_c0 >> 0x20);
        FUN_032cc3ac(&local_f0,param_3,&local_e0);
        local_110 = (float)in_d17;
        fStack_10c = (float)((ulong)in_d17 >> 0x20);
        fVar26 = (float)uStack_d8;
        local_f0 = local_f0 * (local_b0 - (local_b0 - local_100 * local_110));
        fStack_ec = fStack_ec * (fStack_ac - (fStack_ac - fStack_fc * fStack_10c));
        fStack_e8 = fStack_e8 * (fStack_a8 - (fStack_a8 - fStack_f8 * local_110));
        fStack_e4 = fStack_e4 * (fStack_a4 - (fStack_a4 - fStack_f4 * fStack_10c));
        auVar5._4_4_ = fStack_ec;
        auVar5._0_4_ = local_f0;
        auVar5._8_4_ = fStack_e8;
        auVar5._12_4_ = fStack_e4;
        auVar6._4_4_ = fStack_ec;
        auVar6._0_4_ = local_f0;
        auVar6._8_4_ = fStack_e8;
        auVar6._12_4_ = fStack_e4;
        auVar46 = NEON_ext(auVar5,auVar6,8,1);
        fVar20 = local_f0 + fStack_ec + auVar46._0_4_;
        fVar42 = local_e0;
        fVar21 = fStack_dc;
      }
    }
  }
  else {
    fVar42 = fVar22;
    fVar21 = fVar24;
    fVar26 = fVar43;
    fVar20 = fVar48;
  }
LAB_0307b198:
  *(ulong *)(param_5 + 2) = CONCAT44(fVar20,fVar26);
  *(ulong *)param_5 = CONCAT44(fVar21,fVar42);
  return 0;
}


