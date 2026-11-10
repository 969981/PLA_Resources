/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019039e0; name: FUN_019039e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019039e0(float *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined1 auVar12 [12];
  float fVar23;
  undefined1 auVar14 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar13 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar27 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar40;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar28 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar29 [12];
  float fVar41;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  double dVar68;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  long *local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  long local_60;
  ulong uStack_58;
  
  uVar5 = param_2[9];
  dVar68 = (double)param_2[0x2a];
  fVar1 = *(float *)(param_2 + 0x2b);
  *(undefined8 *)(param_1 + 0x16) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 10) = param_2[5];
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 2) = param_2[1];
  *(undefined8 *)(param_1 + 6) = uVar5;
  uVar5 = param_2[2];
  *(undefined8 *)param_1 = *param_2;
  uVar6 = param_2[4];
  *(undefined8 *)(param_1 + 0xc) = param_2[6];
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar6 = param_2[8];
  *(undefined8 *)(param_1 + 0x14) = param_2[10];
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  pfVar7 = param_1 + 4;
  *(undefined8 *)pfVar7 = uVar5;
  uVar5 = param_2[0x17];
  *(undefined8 *)(param_1 + 0x2a) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x2e) = uVar5;
  uVar5 = param_2[0x13];
  *(undefined8 *)(param_1 + 0x22) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  uVar5 = param_2[0xf];
  *(undefined8 *)(param_1 + 0x1a) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x1e) = uVar5;
  uVar5 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x1c) = param_2[0xe];
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = param_2[0x10];
  *(undefined8 *)(param_1 + 0x24) = param_2[0x12];
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar5 = param_2[0x14];
  *(undefined8 *)(param_1 + 0x2c) = param_2[0x16];
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = param_2[0x23];
  *(undefined8 *)(param_1 + 0x42) = param_2[0x21];
  *(undefined8 *)(param_1 + 0x46) = uVar5;
  uVar5 = param_2[0x1f];
  *(undefined8 *)(param_1 + 0x3a) = param_2[0x1d];
  *(undefined8 *)(param_1 + 0x3e) = uVar5;
  uVar5 = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x32) = param_2[0x19];
  *(undefined8 *)(param_1 + 0x36) = uVar5;
  uVar5 = param_2[0x18];
  *(undefined8 *)(param_1 + 0x34) = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  uVar5 = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x3c) = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar5 = param_2[0x20];
  *(undefined8 *)(param_1 + 0x44) = param_2[0x22];
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  fVar64 = *pfVar7 - 0.0;
  fVar65 = param_1[5] - *param_1;
  fVar66 = param_1[6] - param_1[1];
  fVar67 = param_1[7] - 0.0;
  auVar31._0_4_ = fVar64 * fVar64;
  auVar31._4_4_ = fVar65 * fVar65;
  auVar31._8_4_ = fVar66 * fVar66;
  auVar31._12_4_ = fVar67 * fVar67;
  auVar30 = NEON_ext(auVar31,auVar31,8,1);
  fVar9 = auVar30._0_4_ + auVar31._0_4_;
  fVar23 = auVar30._4_4_ + auVar31._4_4_;
  fVar8 = fVar9 + fVar23;
  fVar9 = fVar9 + fVar23;
  uVar60 = SUB41(fVar9,0);
  uVar61 = (undefined1)((uint)fVar9 >> 8);
  uVar62 = (undefined1)((uint)fVar9 >> 0x10);
  uVar63 = (undefined1)((uint)fVar9 >> 0x18);
  if (fVar8 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar10 = fVar66 * fVar66 + fVar64 * fVar64;
    fVar23 = fVar10 + 0.0;
    fVar10 = fVar10 + 0.0;
    auVar14._8_8_ = CONCAT44(fVar10,fVar23);
    auVar14._0_8_ = CONCAT44(fVar10,fVar23);
    auVar31 = NEON_frsqrte(auVar14,4);
    auVar48._0_4_ = auVar31._0_4_ * fVar23;
    auVar48._4_4_ = auVar31._4_4_ * fVar10;
    auVar48._8_4_ = auVar31._8_4_ * fVar23;
    auVar48._12_4_ = auVar31._12_4_ * fVar10;
    auVar30 = NEON_frsqrts(auVar31,auVar48,4);
    auVar32._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar32._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar32._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar32._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar49._0_4_ = fVar23 * auVar32._0_4_;
    auVar49._4_4_ = fVar10 * auVar32._4_4_;
    auVar49._8_4_ = fVar23 * auVar32._8_4_;
    auVar49._12_4_ = fVar10 * auVar32._12_4_;
    iVar11 = -(uint)(fVar23 == 0.0);
    iVar24 = -(uint)(fVar10 == 0.0);
    iVar25 = -(uint)(fVar23 == 0.0);
    iVar26 = -(uint)(fVar10 == 0.0);
    auVar31 = NEON_frsqrts(auVar32,auVar49,4);
    fVar23 = fVar64 * auVar32._0_4_ * auVar31._0_4_;
    fVar10 = auVar32._4_4_ * auVar31._4_4_ * 0.0;
    fVar40 = fVar66 * auVar32._8_4_ * auVar31._8_4_;
    fVar42 = auVar32._12_4_ * auVar31._12_4_ * 0.0;
    fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar23 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar23,0) & ~(byte)iVar11)));
    auVar12._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar24,fVar23))));
    auVar12[8] = SUB41(fVar40,0) & ~(byte)iVar25;
    auVar12[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar12[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar12[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar15[0xc] = SUB41(fVar42,0) & ~(byte)iVar26;
    auVar15._0_12_ = auVar12;
    auVar15[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar15[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar15[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar30[4] = uVar60;
    auVar30._0_4_ = fVar8;
    auVar30[5] = uVar61;
    auVar30[6] = uVar62;
    auVar30[7] = uVar63;
    auVar30[8] = SUB41(fVar8,0);
    auVar30[9] = (char)((uint)fVar8 >> 8);
    auVar30[10] = (char)((uint)fVar8 >> 0x10);
    auVar30[0xb] = (char)((uint)fVar8 >> 0x18);
    auVar30[0xc] = uVar60;
    auVar30[0xd] = uVar61;
    auVar30[0xe] = uVar62;
    auVar30[0xf] = uVar63;
    auVar31 = NEON_frsqrte(auVar30,4);
    auVar50._0_4_ = fVar8 * auVar31._0_4_;
    auVar50._4_4_ = fVar9 * auVar31._4_4_;
    auVar50._8_4_ = fVar8 * auVar31._8_4_;
    uVar4 = (undefined2)(CONCAT15(uVar61,CONCAT14(uVar60,fVar8)) >> 0x20);
    auVar50._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar31._12_4_;
    auVar30 = NEON_frsqrts(auVar31,auVar50,4);
    auVar45._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar45._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar45._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar45._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar51._0_4_ = fVar8 * auVar45._0_4_;
    auVar51._4_4_ = fVar9 * auVar45._4_4_;
    auVar51._8_4_ = fVar8 * auVar45._8_4_;
    auVar51._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar45._12_4_;
    auVar31 = NEON_frsqrts(auVar45,auVar51,4);
    fVar64 = fVar64 * auVar45._0_4_ * auVar31._0_4_;
    fVar10 = fVar65 * auVar45._4_4_ * auVar31._4_4_;
    fVar66 = fVar66 * auVar45._8_4_ * auVar31._8_4_;
    fVar67 = fVar67 * auVar45._12_4_ * auVar31._12_4_;
    iVar11 = -(uint)(fVar8 == 0.0);
    iVar24 = -(uint)(fVar9 == 0.0);
    iVar25 = -(uint)(fVar8 == 0.0);
    iVar26 = -(uint)((float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) == 0.0);
    fVar9 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar11 >> 8)
                                              ,SUB41(fVar64,0) & ~(byte)iVar11)));
    auVar27._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar24,fVar9))));
    auVar27[8] = SUB41(fVar66,0) & ~(byte)iVar25;
    auVar27[9] = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar27[10] = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar27[0xb] = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar33[0xc] = SUB41(fVar67,0) & ~(byte)iVar26;
    auVar33._0_12_ = auVar27;
    auVar33[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar33[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar33[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar16._0_4_ = fVar23 * fVar9;
    auVar16._4_4_ = (float)((ulong)auVar12._0_8_ >> 0x20) * (float)((ulong)auVar27._0_8_ >> 0x20);
    auVar16._8_4_ = auVar12._8_4_ * auVar27._8_4_;
    auVar16._12_4_ = auVar15._12_4_ * auVar33._12_4_;
    NEON_ext(auVar16,auVar16,8,1);
    fVar23 = (float)FUN_01009610();
    fVar9 = -fVar23;
    if (0.0 <= fVar65) {
      fVar9 = fVar23;
    }
  }
  fVar8 = SQRT(fVar8);
  fStack_a8 = (float)_UNK_03888d18;
  fStack_a4 = (float)((ulong)_UNK_03888d18 >> 0x20);
  local_b0 = (float)_DAT_03888d10;
  fStack_ac = (float)((ulong)_DAT_03888d10 >> 0x20);
  param_1[0xe] = fStack_a8 * fVar8;
  param_1[0xf] = fStack_a4 * fVar8;
  param_1[0xc] = local_b0 * fVar8;
  param_1[0xd] = fStack_ac * fVar8;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 6);
  param_1[0x11] = fVar9;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)pfVar7;
  fVar64 = param_1[0x1c] - 0.0;
  fVar65 = param_1[0x1d] - param_1[0x18];
  fVar66 = param_1[0x1e] - param_1[0x19];
  fVar67 = param_1[0x1f] - 0.0;
  auVar17._0_4_ = fVar64 * fVar64;
  auVar17._4_4_ = fVar65 * fVar65;
  auVar17._8_4_ = fVar66 * fVar66;
  auVar17._12_4_ = fVar67 * fVar67;
  auVar31 = NEON_ext(auVar17,auVar17,8,1);
  fVar9 = auVar31._0_4_ + auVar17._0_4_;
  fVar23 = auVar31._4_4_ + auVar17._4_4_;
  fVar8 = fVar9 + fVar23;
  fVar9 = fVar9 + fVar23;
  uVar60 = SUB41(fVar9,0);
  uVar61 = (undefined1)((uint)fVar9 >> 8);
  uVar62 = (undefined1)((uint)fVar9 >> 0x10);
  uVar63 = (undefined1)((uint)fVar9 >> 0x18);
  if (fVar8 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar10 = fVar66 * fVar66 + fVar64 * fVar64;
    fVar23 = fVar10 + 0.0;
    fVar10 = fVar10 + 0.0;
    auVar18._8_8_ = CONCAT44(fVar10,fVar23);
    auVar18._0_8_ = CONCAT44(fVar10,fVar23);
    auVar31 = NEON_frsqrte(auVar18,4);
    auVar52._0_4_ = auVar31._0_4_ * fVar23;
    auVar52._4_4_ = auVar31._4_4_ * fVar10;
    auVar52._8_4_ = auVar31._8_4_ * fVar23;
    auVar52._12_4_ = auVar31._12_4_ * fVar10;
    auVar30 = NEON_frsqrts(auVar31,auVar52,4);
    auVar34._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar34._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar34._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar34._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar53._0_4_ = fVar23 * auVar34._0_4_;
    auVar53._4_4_ = fVar10 * auVar34._4_4_;
    auVar53._8_4_ = fVar23 * auVar34._8_4_;
    auVar53._12_4_ = fVar10 * auVar34._12_4_;
    iVar11 = -(uint)(fVar23 == 0.0);
    iVar24 = -(uint)(fVar10 == 0.0);
    iVar25 = -(uint)(fVar23 == 0.0);
    iVar26 = -(uint)(fVar10 == 0.0);
    auVar31 = NEON_frsqrts(auVar34,auVar53,4);
    fVar23 = fVar64 * auVar34._0_4_ * auVar31._0_4_;
    fVar10 = auVar34._4_4_ * auVar31._4_4_ * 0.0;
    fVar40 = fVar66 * auVar34._8_4_ * auVar31._8_4_;
    fVar42 = auVar34._12_4_ * auVar31._12_4_ * 0.0;
    fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar23 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar23,0) & ~(byte)iVar11)));
    auVar13._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar24,fVar23))));
    auVar13[8] = SUB41(fVar40,0) & ~(byte)iVar25;
    auVar13[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar13[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar13[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar19[0xc] = SUB41(fVar42,0) & ~(byte)iVar26;
    auVar19._0_12_ = auVar13;
    auVar19[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar19[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar19[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar2[4] = uVar60;
    auVar2._0_4_ = fVar8;
    auVar2[5] = uVar61;
    auVar2[6] = uVar62;
    auVar2[7] = uVar63;
    auVar2[8] = SUB41(fVar8,0);
    auVar2[9] = (char)((uint)fVar8 >> 8);
    auVar2[10] = (char)((uint)fVar8 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar8 >> 0x18);
    auVar2[0xc] = uVar60;
    auVar2[0xd] = uVar61;
    auVar2[0xe] = uVar62;
    auVar2[0xf] = uVar63;
    auVar31 = NEON_frsqrte(auVar2,4);
    auVar54._0_4_ = fVar8 * auVar31._0_4_;
    auVar54._4_4_ = fVar9 * auVar31._4_4_;
    auVar54._8_4_ = fVar8 * auVar31._8_4_;
    uVar4 = (undefined2)(CONCAT15(uVar61,CONCAT14(uVar60,fVar8)) >> 0x20);
    auVar54._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar31._12_4_;
    auVar30 = NEON_frsqrts(auVar31,auVar54,4);
    auVar46._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar46._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar46._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar46._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar55._0_4_ = fVar8 * auVar46._0_4_;
    auVar55._4_4_ = fVar9 * auVar46._4_4_;
    auVar55._8_4_ = fVar8 * auVar46._8_4_;
    auVar55._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar46._12_4_;
    auVar31 = NEON_frsqrts(auVar46,auVar55,4);
    fVar64 = fVar64 * auVar46._0_4_ * auVar31._0_4_;
    fVar10 = fVar65 * auVar46._4_4_ * auVar31._4_4_;
    fVar66 = fVar66 * auVar46._8_4_ * auVar31._8_4_;
    fVar67 = fVar67 * auVar46._12_4_ * auVar31._12_4_;
    iVar11 = -(uint)(fVar8 == 0.0);
    iVar24 = -(uint)(fVar9 == 0.0);
    iVar25 = -(uint)(fVar8 == 0.0);
    iVar26 = -(uint)((float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) == 0.0);
    fVar9 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar11 >> 8)
                                              ,SUB41(fVar64,0) & ~(byte)iVar11)));
    auVar28._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar24,fVar9))));
    auVar28[8] = SUB41(fVar66,0) & ~(byte)iVar25;
    auVar28[9] = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar28[10] = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar28[0xb] = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar35[0xc] = SUB41(fVar67,0) & ~(byte)iVar26;
    auVar35._0_12_ = auVar28;
    auVar35[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar35[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar35[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar20._0_4_ = fVar23 * fVar9;
    auVar20._4_4_ = (float)((ulong)auVar13._0_8_ >> 0x20) * (float)((ulong)auVar28._0_8_ >> 0x20);
    auVar20._8_4_ = auVar13._8_4_ * auVar28._8_4_;
    auVar20._12_4_ = auVar19._12_4_ * auVar35._12_4_;
    NEON_ext(auVar20,auVar20,8,1);
    fVar23 = (float)FUN_01009610();
    fVar9 = -fVar23;
    if (0.0 <= fVar65) {
      fVar9 = fVar23;
    }
  }
  fVar8 = SQRT(fVar8);
  param_1[0x26] = fStack_a8 * fVar8;
  param_1[0x27] = fStack_a4 * fVar8;
  param_1[0x24] = local_b0 * fVar8;
  param_1[0x25] = fStack_ac * fVar8;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x1e);
  param_1[0x29] = fVar9;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x1c);
  uStack_78 = *(ulong *)(param_1 + 0x30);
  fVar64 = param_1[0x34] - 0.0;
  fVar65 = param_1[0x35] - param_1[0x30];
  fVar66 = param_1[0x36] - param_1[0x31];
  fVar67 = param_1[0x37] - 0.0;
  auVar36._0_4_ = fVar64 * fVar64;
  auVar36._4_4_ = fVar65 * fVar65;
  auVar36._8_4_ = fVar66 * fVar66;
  auVar36._12_4_ = fVar67 * fVar67;
  auVar31 = NEON_ext(auVar36,auVar36,8,1);
  fVar9 = auVar31._0_4_ + auVar36._0_4_;
  fVar23 = auVar31._4_4_ + auVar36._4_4_;
  fVar8 = fVar9 + fVar23;
  fVar9 = fVar9 + fVar23;
  uVar60 = SUB41(fVar9,0);
  uVar61 = (undefined1)((uint)fVar9 >> 8);
  uVar62 = (undefined1)((uint)fVar9 >> 0x10);
  uVar63 = (undefined1)((uint)fVar9 >> 0x18);
  if (fVar8 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar10 = fVar66 * fVar66 + fVar64 * fVar64;
    fVar23 = fVar10 + 0.0;
    fVar10 = fVar10 + 0.0;
    auVar21._8_8_ = CONCAT44(fVar10,fVar23);
    auVar21._0_8_ = CONCAT44(fVar10,fVar23);
    auVar31 = NEON_frsqrte(auVar21,4);
    auVar56._0_4_ = auVar31._0_4_ * fVar23;
    auVar56._4_4_ = auVar31._4_4_ * fVar10;
    auVar56._8_4_ = auVar31._8_4_ * fVar23;
    auVar56._12_4_ = auVar31._12_4_ * fVar10;
    auVar30 = NEON_frsqrts(auVar31,auVar56,4);
    auVar37._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar37._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar37._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar37._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar57._0_4_ = fVar23 * auVar37._0_4_;
    auVar57._4_4_ = fVar10 * auVar37._4_4_;
    auVar57._8_4_ = fVar23 * auVar37._8_4_;
    auVar57._12_4_ = fVar10 * auVar37._12_4_;
    auVar31 = NEON_frsqrts(auVar37,auVar57,4);
    fVar40 = fVar64 * auVar37._0_4_ * auVar31._0_4_;
    fVar42 = auVar37._4_4_ * auVar31._4_4_ * 0.0;
    fVar41 = fVar66 * auVar37._8_4_ * auVar31._8_4_;
    fVar43 = auVar37._12_4_ * auVar31._12_4_ * 0.0;
    iVar11 = -(uint)(fVar23 == 0.0);
    iVar24 = -(uint)(fVar10 == 0.0);
    iVar25 = -(uint)(fVar23 == 0.0);
    iVar26 = -(uint)(fVar10 == 0.0);
    auVar3[4] = uVar60;
    auVar3._0_4_ = fVar8;
    auVar3[5] = uVar61;
    auVar3[6] = uVar62;
    auVar3[7] = uVar63;
    auVar3[8] = SUB41(fVar8,0);
    auVar3[9] = (char)((uint)fVar8 >> 8);
    auVar3[10] = (char)((uint)fVar8 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar8 >> 0x18);
    auVar3[0xc] = uVar60;
    auVar3[0xd] = uVar61;
    auVar3[0xe] = uVar62;
    auVar3[0xf] = uVar63;
    auVar31 = NEON_frsqrte(auVar3,4);
    fVar23 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8),
                                               SUB41(fVar40,0) & ~(byte)iVar11)));
    auVar29._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar24,fVar23))));
    auVar29[8] = SUB41(fVar41,0) & ~(byte)iVar25;
    auVar29[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar29[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar29[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar38[0xc] = SUB41(fVar43,0) & ~(byte)iVar26;
    auVar38._0_12_ = auVar29;
    auVar38[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar38[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar58._0_4_ = fVar8 * auVar31._0_4_;
    auVar58._4_4_ = fVar9 * auVar31._4_4_;
    auVar58._8_4_ = fVar8 * auVar31._8_4_;
    uVar4 = (undefined2)(CONCAT15(uVar61,CONCAT14(uVar60,fVar8)) >> 0x20);
    auVar58._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar31._12_4_;
    auVar30 = NEON_frsqrts(auVar31,auVar58,4);
    auVar22._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar22._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar22._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar22._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar59._0_4_ = fVar8 * auVar22._0_4_;
    auVar59._4_4_ = fVar9 * auVar22._4_4_;
    auVar59._8_4_ = fVar8 * auVar22._8_4_;
    auVar59._12_4_ = (float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) * auVar22._12_4_;
    iVar11 = -(uint)(fVar8 == 0.0);
    iVar24 = -(uint)(fVar9 == 0.0);
    iVar25 = -(uint)(fVar8 == 0.0);
    iVar26 = -(uint)((float)CONCAT13(uVar63,CONCAT12(uVar62,uVar4)) == 0.0);
    auVar31 = NEON_frsqrts(auVar22,auVar59,4);
    fVar64 = fVar64 * auVar22._0_4_ * auVar31._0_4_;
    fVar10 = fVar65 * auVar22._4_4_ * auVar31._4_4_;
    fVar66 = fVar66 * auVar22._8_4_ * auVar31._8_4_;
    fVar67 = fVar67 * auVar22._12_4_ * auVar31._12_4_;
    fVar9 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar11 >> 8)
                                              ,SUB41(fVar64,0) & ~(byte)iVar11)));
    auVar44._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar24,fVar9))));
    auVar44[8] = SUB41(fVar66,0) & ~(byte)iVar25;
    auVar44[9] = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar44[10] = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar44[0xb] = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar47[0xc] = SUB41(fVar67,0) & ~(byte)iVar26;
    auVar47._0_12_ = auVar44;
    auVar47[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar47[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar47[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar39._0_4_ = fVar23 * fVar9;
    auVar39._4_4_ = (float)((ulong)auVar29._0_8_ >> 0x20) * (float)((ulong)auVar44._0_8_ >> 0x20);
    auVar39._8_4_ = auVar29._8_4_ * auVar44._8_4_;
    auVar39._12_4_ = auVar38._12_4_ * auVar47._12_4_;
    NEON_ext(auVar39,auVar39,8,1);
    fVar23 = (float)FUN_01009610();
    fVar9 = -fVar23;
    if (0.0 <= fVar65) {
      fVar9 = fVar23;
    }
    uStack_78 = *(ulong *)(param_1 + 0x30);
  }
  local_80 = uStack_78 << 0x20;
  fVar8 = SQRT(fVar8);
  param_1[0x3e] = fStack_a8 * fVar8;
  param_1[0x3f] = fStack_a4 * fVar8;
  param_1[0x3c] = local_b0 * fVar8;
  param_1[0x3d] = fStack_ac * fVar8;
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_1 + 0x36);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x34);
  param_1[0x41] = fVar9;
  uStack_78 = uStack_78 >> 0x20;
  local_70 = (ulong)(uint)param_1[0x18] << 0x20;
  uStack_68 = (ulong)(uint)param_1[0x19];
  local_60 = (ulong)(uint)*param_1 << 0x20;
  uStack_58 = (ulong)(uint)param_1[1];
  local_98 = &local_80;
  local_88 = 0;
  uStack_90 = 0x100000003;
  FUN_01f611e0(*(undefined8 *)(param_1 + 0x4c),&local_98);
  param_1[0x56] = fVar1;
  *(double *)(param_1 + 0x54) = (double)(float)dVar68;
  memmove(param_1 + 0x57,(void *)((long)param_2 + 0x15c),0x400);
  memmove(param_1 + 0x157,(void *)((long)param_2 + 0x55c),0x400);
  return;
}


