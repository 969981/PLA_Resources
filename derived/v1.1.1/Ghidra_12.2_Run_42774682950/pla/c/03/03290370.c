/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290370; name: FUN_03290370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_03290370(float param_1,float param_2,float *param_3,float *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar16;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  float fVar36;
  byte bVar38;
  byte bVar39;
  int iVar37;
  byte bVar40;
  int iVar41;
  float fVar42;
  float *local_e0;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar5 = DAT_0388a148;
  uVar4 = DAT_0388a140;
  uVar3 = _UNK_03889a88;
  uVar2 = _DAT_03889a80;
  uVar8 = 0x80040200;
  if ((0.0 < param_2) && (0.0 < param_1)) {
    fVar28 = *param_4;
    fVar16 = param_4[1];
    fVar31 = param_4[2];
    fVar17 = param_4[3];
    fVar20 = *param_3;
    fVar23 = param_3[1];
    fVar24 = param_3[2];
    fVar25 = param_3[3];
    fVar9 = fVar28 - fVar20;
    fVar10 = fVar16 - fVar23;
    fVar11 = fVar31 - fVar24;
    fVar42 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    fVar27 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    uVar32 = SUB41(fVar27,0);
    uVar33 = (undefined1)((uint)fVar27 >> 8);
    uVar34 = (undefined1)((uint)fVar27 >> 0x10);
    uVar35 = (undefined1)((uint)fVar27 >> 0x18);
    uVar29 = NEON_frsqrte(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar42))))
                          ,4);
    fVar26 = (float)uVar29;
    fVar30 = (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar42))))
                          ,CONCAT44(fVar30 * fVar30,fVar26 * fVar26),4);
    fVar26 = fVar26 * (float)uVar29;
    fVar30 = fVar30 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar42))))
                          ,CONCAT44(fVar30 * fVar30,fVar26 * fVar26),4);
    fVar26 = (float)uVar29 * fVar26;
    fVar30 = (float)((ulong)uVar29 >> 0x20) * fVar30;
    iVar37 = -(uint)(fVar42 <= 0.0);
    iVar41 = -(uint)(fVar27 <= 0.0);
    fVar42 = fVar42 * fVar26;
    bVar38 = (byte)((uint)iVar37 >> 8);
    bVar39 = (byte)((uint)iVar37 >> 0x10);
    bVar40 = (byte)((uint)iVar37 >> 0x18);
    fVar42 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~bVar40,
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~bVar39,
                                      CONCAT11((byte)((uint)fVar42 >> 8) & ~bVar38,
                                               SUB41(fVar42,0) & ~(byte)iVar37)));
    if (0.0 < fVar42) {
      fVar27 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~bVar40,
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~bVar39,
                                        CONCAT11((byte)((uint)fVar26 >> 8) & ~bVar38,
                                                 SUB41(fVar26,0) & ~(byte)iVar37)));
      fVar9 = fVar9 * fVar27;
      fVar36 = (float)(CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                CONCAT16((byte)((uint)fVar30 >> 0x10) &
                                         ~(byte)((uint)iVar41 >> 0x10),
                                         CONCAT15((byte)((uint)fVar30 >> 8) &
                                                  ~(byte)((uint)iVar41 >> 8),
                                                  CONCAT14(SUB41(fVar30,0) & ~(byte)iVar41,fVar27)))
                               ) >> 0x20);
      fVar10 = fVar10 * fVar36;
      uVar32 = SUB41(fVar10,0);
      uVar33 = (undefined1)((uint)fVar10 >> 8);
      uVar34 = (undefined1)((uint)fVar10 >> 0x10);
      uVar35 = (undefined1)((uint)fVar10 >> 0x18);
      fVar11 = fVar11 * fVar27;
      fVar36 = (fVar17 - fVar25) * fVar36;
      auVar13._8_8_ = _UNK_03889a88;
      auVar13._0_8_ = _DAT_03889a80;
      fVar27 = (float)_DAT_03888d10;
      fVar26 = (float)((ulong)_DAT_03888d10 >> 0x20);
      fVar30 = (float)_UNK_03888d18;
      fVar21 = (float)(_UNK_03888d18 >> 0x20);
      local_60 = _DAT_03888d10;
      uStack_58 = _UNK_03888d18;
      uStack_70 = DAT_0388a140;
      uStack_68 = DAT_0388a148;
      if (ABS(fVar11) < 0.99999) {
        auVar22[4] = uVar32;
        auVar22._0_4_ = fVar9;
        auVar22[5] = uVar33;
        auVar22[6] = uVar34;
        auVar22[7] = uVar35;
        auVar22._8_4_ = fVar11;
        auVar22._12_4_ = fVar36;
        auVar1[4] = uVar32;
        auVar1._0_4_ = fVar9;
        auVar1[5] = uVar33;
        auVar1[6] = uVar34;
        auVar1[7] = uVar35;
        auVar1._8_4_ = fVar11;
        auVar1._12_4_ = fVar36;
        auVar13 = NEON_ext(auVar22,auVar1,4,1);
        auVar14._0_4_ = auVar13._0_4_ * fVar27 + fVar9 * (float)_DAT_03889960;
        auVar14._4_4_ = auVar13._4_4_ * fVar26 + fVar10 * (float)((ulong)_DAT_03889960 >> 0x20);
        auVar14._8_4_ = fVar9 * fVar30 + fVar11 * (float)_UNK_03889968;
        auVar14._12_4_ =
             (float)(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar9)))) >>
                    0x20) * fVar21 + fVar36 * (float)((ulong)_UNK_03889968 >> 0x20);
        auVar13 = NEON_ext(auVar14,auVar14,4,1);
        fVar17 = auVar13._0_4_;
        fVar20 = auVar13._4_4_;
        fVar10 = auVar14._0_4_ * auVar14._0_4_ + fVar17 * fVar17 + fVar20 * fVar20;
        fVar16 = auVar14._0_4_ * auVar14._0_4_ + fVar17 * fVar17 + fVar20 * fVar20;
        uVar12 = CONCAT44(fVar16,fVar10);
        uVar29 = NEON_frsqrte(uVar12,4);
        fVar28 = (float)uVar29;
        fVar31 = (float)((ulong)uVar29 >> 0x20);
        fVar9 = fVar31 * fVar31;
        uVar29 = NEON_frsqrts(uVar12,CONCAT17((char)((uint)fVar9 >> 0x18),
                                              CONCAT16((char)((uint)fVar9 >> 0x10),
                                                       CONCAT15((char)((uint)fVar9 >> 8),
                                                                CONCAT14(SUB41(fVar9,0),
                                                                         fVar28 * fVar28)))),4);
        fVar28 = fVar28 * (float)uVar29;
        fVar31 = fVar31 * (float)((ulong)uVar29 >> 0x20);
        fVar9 = fVar31 * fVar31;
        iVar37 = -(uint)(fVar10 <= 0.0);
        iVar41 = -(uint)(fVar16 <= 0.0);
        uVar29 = NEON_frsqrts(uVar12,CONCAT17((char)((uint)fVar9 >> 0x18),
                                              CONCAT16((char)((uint)fVar9 >> 0x10),
                                                       CONCAT15((char)((uint)fVar9 >> 8),
                                                                CONCAT14(SUB41(fVar9,0),
                                                                         fVar28 * fVar28)))),4);
        fVar28 = (float)uVar29 * fVar28;
        fVar31 = (float)((ulong)uVar29 >> 0x20) * fVar31;
        fVar9 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                                CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                         ~(byte)((uint)iVar37 >> 0x10),
                                         CONCAT11((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar37 >> 8),
                                                  SUB41(fVar28,0) & ~(byte)iVar37)));
        if (1.0 <= ABS(fVar11)) {
          fVar10 = 0.0;
          if (fVar11 <= 0.0) {
            fVar10 = 3.1415927;
          }
        }
        else {
          fVar10 = acosf(fVar11);
        }
        fVar28 = sinf(fVar10 * 0.5);
        fVar10 = cosf(fVar10 * 0.5);
        auVar15._0_4_ = fVar17 * fVar9 * fVar28;
        auVar15._4_4_ =
             fVar20 * (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                       CONCAT16((byte)((uint)fVar31 >> 0x10) &
                                                ~(byte)((uint)iVar41 >> 0x10),
                                                CONCAT15((byte)((uint)fVar31 >> 8) &
                                                         ~(byte)((uint)iVar41 >> 8),
                                                         CONCAT14(SUB41(fVar31,0) & ~(byte)iVar41,
                                                                  fVar9)))) >> 0x20) * fVar28;
        auVar15._8_4_ = auVar14._0_4_ * fVar9 * fVar28;
        uVar29 = NEON_fmov(0x3f800000,4);
        auVar15._12_4_ = fVar10;
        auVar13 = NEON_ext(auVar15,auVar15,8,1);
        auVar18._0_4_ = auVar15._0_4_ + auVar15._0_4_;
        auVar18._4_4_ = auVar15._4_4_ + auVar15._4_4_;
        auVar18._8_4_ = auVar15._8_4_ + auVar15._8_4_;
        auVar18._12_4_ = fVar10 + fVar10;
        auVar22 = NEON_ext(auVar18,auVar18,8,1);
        fVar9 = auVar13._0_4_ * auVar22._0_4_;
        fVar28 = (float)uVar29;
        auVar13._0_4_ = fVar28 - (auVar18._4_4_ * auVar15._4_4_ + fVar9);
        auVar13._4_4_ = auVar18._4_4_ * auVar15._0_4_ + auVar18._8_4_ * fVar10;
        auVar13._8_4_ = auVar18._8_4_ * auVar15._0_4_ - auVar18._4_4_ * fVar10;
        auVar13._12_4_ = 0;
        uStack_70 = CONCAT44(fVar28 - (auVar18._0_4_ * auVar15._0_4_ + fVar9),
                             auVar18._4_4_ * auVar15._0_4_ - auVar18._8_4_ * fVar10);
        uStack_68 = (ulong)(uint)(auVar18._8_4_ * auVar15._4_4_ + auVar18._0_4_ * fVar10);
        local_60 = CONCAT44(auVar18._8_4_ * auVar15._4_4_ - auVar18._0_4_ * fVar10,
                            auVar18._8_4_ * auVar15._0_4_ + auVar18._4_4_ * fVar10);
        uStack_58 = (ulong)(uint)(fVar28 - (auVar18._0_4_ * auVar15._0_4_ +
                                           auVar18._4_4_ * auVar15._4_4_));
        fVar20 = *param_3;
        fVar23 = param_3[1];
        fVar24 = param_3[2];
        fVar25 = param_3[3];
        fVar28 = *param_4;
        fVar16 = param_4[1];
        fVar31 = param_4[2];
        fVar17 = param_4[3];
      }
      fStack_50 = (fVar28 + fVar20) * 0.5;
      fStack_4c = (fVar16 + fVar23) * 0.5;
      fStack_48 = (fVar31 + fVar24) * 0.5;
      fStack_44 = (fVar17 + fVar25) * 0.5;
      local_e0 = &local_d0;
      uStack_78 = auVar13._8_8_;
      local_80 = auVar13._0_8_;
      fVar10 = param_1 * param_1 * 0.5;
      uVar29 = NEON_fmov(0x3e800000,4);
      local_c0 = 0;
      uStack_b8 = 0;
      fVar9 = (param_1 * param_1 + fVar42 * fVar42 * 0.33333334) * (float)uVar29;
      uStack_a0 = CONCAT44(fVar9 * (float)((ulong)uVar4 >> 0x20) * param_2,
                           fVar9 * (float)uVar4 * param_2);
      uStack_98 = CONCAT44((float)(uVar5 >> 0x20) * 0.25 * param_2,fVar10 * (float)uVar5 * param_2);
      local_b0 = fVar9 * (float)uVar2 * param_2;
      fStack_ac = fVar9 * (float)((ulong)uVar2 >> 0x20) * param_2;
      fStack_a8 = fVar10 * (float)uVar3 * param_2;
      fStack_a4 = (float)((ulong)uVar3 >> 0x20) * 0.25 * param_2;
      auVar19._0_8_ = CONCAT44(fVar9 * fVar26 * param_2,fVar9 * fVar27 * param_2);
      auVar19._8_4_ = fVar10 * fVar30 * param_2;
      auVar19._12_4_ = fVar21 * 0.25 * param_2;
      local_d8 = -0x7ffffffeffffffff;
      local_d0 = param_1 * 3.1415927 * param_1 * fVar42;
      uStack_88 = auVar19._8_8_;
      fStack_cc = param_2;
      local_90 = auVar19._0_8_;
      uVar8 = FUN_03290038(&local_e0,param_5);
      lVar6 = local_d8;
      uVar7 = local_d8._4_4_;
      local_d8 = (ulong)local_d8._4_4_ << 0x20;
      if ((-1 < lVar6) && (local_e0 != (float *)0x0)) {
        FUN_032cf244(PTR_PTR_0434a080,local_e0,0x90,uVar7 & 0x3fffffff);
      }
    }
  }
  return uVar8;
}


