/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fed474; name: FUN_02fed474
 */


undefined8 FUN_02fed474(long param_1,undefined4 *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined1 auVar3 [14];
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  float fVar14;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  undefined1 auVar17 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  lVar4 = *(long *)(param_1 + 0x30);
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar4 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      lVar1 = *plVar5 + (long)plVar5;
      if ((*plVar5 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
        auVar15 = *(undefined1 (*) [16])(lVar1 + 0x28);
        auVar17 = *(undefined1 (*) [16])(lVar1 + 0x30);
        uVar32 = NEON_fmov(0x3f800000,4);
        auVar8._0_8_ = auVar15._6_8_ << 0x30;
        auVar8._10_6_ = auVar15._10_6_;
        auVar8._8_2_ = 0;
        auVar10._14_2_ = auVar15._14_2_;
        auVar10._0_12_ = auVar8._0_12_;
        auVar10._12_2_ = 0;
        auVar3._2_12_ = auVar10._4_12_;
        auVar3._0_2_ = auVar15._0_2_;
        auVar24._0_6_ = auVar3._0_6_ << 0x10;
        auVar24._8_8_ = auVar10._8_8_;
        auVar24._6_2_ = auVar15._2_2_;
        auVar9._12_4_ = auVar10._12_4_;
        auVar9._0_10_ = auVar24._0_10_;
        auVar9._10_2_ = auVar15._4_2_;
        auVar11._0_14_ = auVar9._0_14_;
        auVar11._14_2_ = auVar15._6_2_;
        auVar15 = NEON_scvtf(auVar11,4);
        fVar13 = auVar11._12_4_;
        fVar7 = auVar15._0_4_ * fVar13;
        fVar12 = auVar15._4_4_ * fVar13;
        fVar13 = auVar15._8_4_ * fVar13;
        auVar16._0_8_ =
             CONCAT17(auVar17[3],
                      CONCAT16(auVar17[2],(uint6)(ushort)(auVar17._0_2_ ^ 0x8000) << 0x10)) ^
             0x8000000000000000;
        auVar16._8_2_ = 0;
        auVar16[10] = auVar17[4];
        auVar16[0xb] = auVar17[5] ^ 0x80;
        auVar16._12_2_ = 0;
        auVar16[0xe] = auVar17[6];
        auVar16[0xf] = auVar17[7] ^ 0x80;
        auVar15 = NEON_scvtf(auVar16,4);
        fVar14 = auVar15._0_4_ * 5.086263e-10;
        fVar18 = auVar15._4_4_ * 5.086263e-10;
        fVar19 = auVar15._8_4_ * 5.086263e-10;
        fVar20 = auVar15._12_4_ * 5.086263e-10;
        auVar22._0_4_ = fVar14 * fVar14;
        auVar22._4_4_ = fVar18 * fVar18;
        auVar22._8_4_ = fVar19 * fVar19;
        auVar22._12_4_ = fVar20 * fVar20;
        auVar15 = NEON_ext(auVar22,auVar22,8,1);
        fVar6 = auVar15._0_4_ + auVar15._4_4_;
        uVar21 = CONCAT44(auVar22._0_4_ + auVar22._4_4_ + fVar6,
                          auVar22._0_4_ + auVar22._4_4_ + fVar6);
        uVar25 = NEON_frsqrte(uVar21,4);
        fVar6 = (float)uVar25;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        uVar25 = NEON_frsqrts(uVar21,CONCAT44(fVar26 * fVar26,fVar6 * fVar6),4);
        fVar6 = fVar6 * (float)uVar25;
        fVar26 = fVar26 * (float)((ulong)uVar25 >> 0x20);
        uVar21 = NEON_frsqrts(uVar21,CONCAT44(fVar26 * fVar26,fVar6 * fVar6),4);
        fVar6 = (float)uVar21 * fVar6;
        fVar26 = (float)((ulong)uVar21 >> 0x20) * fVar26;
        auVar17._0_4_ = fVar14 * fVar6;
        auVar17._4_4_ = fVar18 * fVar26;
        auVar17._8_4_ = fVar19 * fVar6;
        auVar17._12_4_ = fVar20 * fVar26;
        auVar23._0_4_ = auVar17._0_4_ + auVar17._0_4_;
        auVar23._4_4_ = auVar17._4_4_ + auVar17._4_4_;
        auVar23._8_4_ = auVar17._8_4_ + auVar17._8_4_;
        auVar23._12_4_ = auVar17._12_4_ + auVar17._12_4_;
        auVar15 = NEON_ext(auVar17,auVar17,8,1);
        auVar24 = NEON_ext(auVar23,auVar23,8,1);
        fVar6 = auVar15._0_4_ * auVar24._0_4_;
        fVar37 = auVar23._4_4_ * auVar17._0_4_ + auVar23._8_4_ * auVar17._12_4_;
        fVar39 = auVar23._8_4_ * auVar17._0_4_ - auVar23._4_4_ * auVar17._12_4_;
        fVar35 = auVar23._4_4_ * auVar17._0_4_ - auVar23._8_4_ * auVar17._12_4_;
        fVar36 = auVar23._8_4_ * auVar17._4_4_ + auVar23._0_4_ * auVar17._12_4_;
        fVar20 = (float)uVar32;
        fVar26 = fVar20 - (auVar23._0_4_ * auVar17._0_4_ + auVar23._4_4_ * auVar17._4_4_);
        fVar19 = fVar20 - (auVar23._4_4_ * auVar17._4_4_ + fVar6);
        fVar20 = fVar20 - (auVar23._0_4_ * auVar17._0_4_ + fVar6);
        fVar38 = auVar23._8_4_ * auVar17._0_4_ + auVar23._4_4_ * auVar17._12_4_;
        fVar27 = auVar23._8_4_ * auVar17._4_4_ - auVar23._0_4_ * auVar17._12_4_;
        fVar28 = fVar19 * fVar7;
        fVar29 = fVar37 * fVar7;
        fVar30 = fVar39 * fVar7;
        fVar7 = fVar7 * 0.0;
        fVar31 = fVar35 * fVar12;
        fVar33 = fVar20 * fVar12;
        fVar34 = fVar36 * fVar12;
        fVar12 = fVar12 * 0.0;
        fVar6 = fVar38 * fVar13;
        fVar14 = fVar27 * fVar13;
        fVar18 = fVar26 * fVar13;
        fVar13 = fVar13 * 0.0;
        param_2[0x12] = fVar18 * fVar26 + fVar30 * fVar39 + fVar34 * fVar36;
        param_2[0x13] = fVar13 * fVar26 + fVar7 * fVar39 + fVar12 * fVar36;
        param_2[0x10] = fVar6 * fVar26 + fVar28 * fVar39 + fVar31 * fVar36;
        param_2[0x11] = fVar14 * fVar26 + fVar29 * fVar39 + fVar33 * fVar36;
        param_2[10] = fVar18 * fVar38 + fVar30 * fVar19 + fVar34 * fVar35;
        param_2[0xb] = fVar13 * fVar38 + fVar7 * fVar19 + fVar12 * fVar35;
        param_2[8] = fVar6 * fVar38 + fVar28 * fVar19 + fVar31 * fVar35;
        param_2[9] = fVar14 * fVar38 + fVar29 * fVar19 + fVar33 * fVar35;
        param_2[0xe] = fVar18 * fVar27 + fVar30 * fVar37 + fVar34 * fVar20;
        param_2[0xf] = fVar13 * fVar27 + fVar7 * fVar37 + fVar12 * fVar20;
        param_2[0xc] = fVar6 * fVar27 + fVar28 * fVar37 + fVar31 * fVar20;
        param_2[0xd] = fVar14 * fVar27 + fVar29 * fVar37 + fVar33 * fVar20;
        *param_2 = *(undefined4 *)(lVar1 + 0x3c);
        uVar2 = *(ushort *)(lVar1 + 0x26);
        auVar15._6_2_ = *(undefined2 *)(lVar1 + 0x22);
        auVar15._0_6_ = (uint6)*(ushort *)(lVar1 + 0x20) << 0x10;
        auVar15._8_2_ = 0;
        auVar15._10_2_ = *(undefined2 *)(lVar1 + 0x24);
        auVar15._12_2_ = 0;
        auVar15._14_2_ = uVar2;
        auVar15 = NEON_scvtf(auVar15,4);
        fVar6 = auVar15._4_4_ * (float)((uint)uVar2 << 0x10);
        fVar7 = auVar15._12_4_ * (float)((uint)uVar2 << 0x10);
        *(ulong *)(param_2 + 6) =
             CONCAT26((short)((uint)fVar7 >> 0x10),
                      CONCAT24(SUB42(fVar7,0),auVar15._8_4_ * (float)((uint)uVar2 << 0x10)));
        *(ulong *)(param_2 + 4) =
             CONCAT26((short)((uint)fVar6 >> 0x10),
                      CONCAT24(SUB42(fVar6,0),auVar15._0_4_ * (float)((uint)uVar2 << 0x10)));
        param_2[1] = *(undefined4 *)(lVar1 + 0x38);
        return 0;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0x80040200;
}


