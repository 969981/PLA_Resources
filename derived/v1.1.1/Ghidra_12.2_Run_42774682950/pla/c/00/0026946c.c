/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026946c; name: FUN_0026946c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026946c(undefined8 param_1,long param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  undefined1 auVar14 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar29;
  uint uVar30;
  undefined1 auVar26 [16];
  uint uVar25;
  uint uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar9 = DAT_0388a148;
  uVar8 = DAT_0388a140;
  uVar7 = _UNK_03889a88;
  uVar6 = _DAT_03889a80;
  uVar3 = _UNK_03888d18;
  uVar10 = _DAT_03888d10;
  *(undefined8 *)(param_3 + 2) = _UNK_03889a88;
  *(undefined8 *)param_3 = uVar6;
  *(undefined8 *)(param_3 + 6) = uVar9;
  *(undefined8 *)(param_3 + 4) = uVar8;
  *(undefined8 *)(param_3 + 10) = uVar3;
  *(undefined8 *)(param_3 + 8) = uVar10;
  param_3[0xe] = 0.0;
  param_3[0xf] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  param_4[1] = uVar7;
  *param_4 = uVar6;
  param_4[3] = uVar9;
  param_4[2] = uVar8;
  param_4[5] = uVar3;
  param_4[4] = uVar10;
  param_4[7] = 0;
  param_4[6] = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x600);
  fVar1 = *(float *)(param_2 + 0x608);
  if (*(long *)(*(long *)(param_2 + 0x238) + 0x298) == 0) {
    fVar21 = (float)*(undefined8 *)(param_2 + 0x60c);
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x60c) >> 0x20);
    fVar22 = *(float *)(param_2 + 0x614);
    fVar11 = *(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar11 = *(float *)PTR_FloatPi_04372cf0;
    fVar22 = fVar11 / *(float *)PTR_FloatDegree180_04372ce0;
    fVar21 = *(float *)(param_2 + 0x60c) * fVar22;
    fVar24 = fVar22 * *(float *)(param_2 + 0x610);
    fVar22 = fVar22 * *(float *)(param_2 + 0x614);
  }
  fVar13 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar23 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar16 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar18 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar34 = -fVar11;
  fVar20 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  auVar28._0_4_ =
       (int)(fVar21 * fVar23 + (float)(-(uint)(0.0 <= fVar21 * fVar23) & 0x80000000 ^ 0xbf000000));
  auVar28._4_4_ =
       (int)(fVar24 * fVar23 + (float)(-(uint)(0.0 <= fVar24 * fVar23) & 0x80000000 ^ 0xbf000000));
  auVar28._8_4_ =
       (int)(fVar22 * fVar23 + (float)(-(uint)(0.0 <= fVar22 * fVar23) & 0x80000000 ^ 0xbf000000));
  auVar28._12_4_ =
       (int)(fVar23 * 0.0 + (float)(-(uint)(0.0 <= fVar23 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar26 = NEON_scvtf(auVar28,4);
  fVar23 = *(float *)PTR_Float2Pi_04372d30;
  fVar32 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar36 = *(float *)PTR_SinCoefficients_04372d28;
  fVar21 = fVar21 - auVar26._0_4_ * fVar23;
  fVar24 = fVar24 - auVar26._4_4_ * fVar23;
  fVar22 = fVar22 - auVar26._8_4_ * fVar23;
  fVar23 = 0.0 - auVar26._12_4_ * fVar23;
  fVar33 = -fVar32;
  uVar25 = -(uint)(fVar32 < fVar21);
  uVar29 = -(uint)(fVar32 < fVar24);
  uVar30 = -(uint)(fVar32 < fVar22);
  uVar31 = -(uint)(fVar32 < fVar23);
  fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)(fVar11 - fVar21)) & uVar25);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar11 - fVar24)) & uVar29);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar11 - fVar22)) & uVar30);
  fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)(fVar11 - fVar23)) & uVar31);
  uVar12 = -(uint)(fVar21 < fVar33);
  uVar15 = -(uint)(fVar24 < fVar33);
  uVar17 = -(uint)(fVar22 < fVar33);
  uVar19 = -(uint)(fVar23 < fVar33);
  uVar2 = *(uint *)(param_2 + 0x620);
  fVar33 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  auVar27[0] = (byte)uVar12 | (byte)uVar25;
  auVar27[1] = (byte)(uVar12 >> 8) | (byte)(uVar25 >> 8);
  auVar27[2] = (byte)(uVar12 >> 0x10) | (byte)(uVar25 >> 0x10);
  auVar27[3] = (byte)(uVar12 >> 0x18) | (byte)(uVar25 >> 0x18);
  auVar27[4] = (byte)uVar15 | (byte)uVar29;
  auVar27[5] = (byte)(uVar15 >> 8) | (byte)(uVar29 >> 8);
  auVar27[6] = (byte)(uVar15 >> 0x10) | (byte)(uVar29 >> 0x10);
  auVar27[7] = (byte)(uVar15 >> 0x18) | (byte)(uVar29 >> 0x18);
  auVar27[8] = (byte)uVar17 | (byte)uVar30;
  auVar27[9] = (byte)(uVar17 >> 8) | (byte)(uVar30 >> 8);
  auVar27[10] = (byte)(uVar17 >> 0x10) | (byte)(uVar30 >> 0x10);
  auVar27[0xb] = (byte)(uVar17 >> 0x18) | (byte)(uVar30 >> 0x18);
  auVar27[0xc] = (byte)uVar19 | (byte)uVar31;
  auVar27[0xd] = (byte)(uVar19 >> 8) | (byte)(uVar31 >> 8);
  auVar27[0xe] = (byte)(uVar19 >> 0x10) | (byte)(uVar31 >> 0x10);
  auVar27[0xf] = (byte)(uVar19 >> 0x18) | (byte)(uVar31 >> 0x18);
  fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)(fVar34 - fVar21)) & uVar12);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar34 - fVar24)) & uVar15);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar34 - fVar22)) & uVar17);
  fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)(fVar34 - fVar23)) & uVar19);
  fVar35 = *(float *)PTR_CosCoefficients_04372d40;
  fVar38 = fVar21 * fVar21;
  fVar39 = fVar24 * fVar24;
  fVar40 = fVar22 * fVar22;
  fVar41 = fVar23 * fVar23;
  fVar11 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar34 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar32 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar26 = NEON_fmov(0x3f800000,4);
  auVar37 = NEON_fmov(0xbf800000,4);
  auVar37 = auVar26 ^ (auVar26 ^ auVar37) & auVar27;
  uVar3 = *(undefined8 *)(param_2 + 0x618);
  auVar14._0_4_ =
       fVar21 * (auVar26._0_4_ +
                fVar38 * (fVar34 + fVar38 * (fVar16 + fVar38 * (fVar33 + fVar38 * (fVar13 - fVar38 *
                                                                                            fVar36))
                                            )));
  auVar14._4_4_ =
       fVar24 * (auVar26._4_4_ +
                fVar39 * (fVar34 + fVar39 * (fVar16 + fVar39 * (fVar33 + fVar39 * (fVar13 - fVar39 *
                                                                                            fVar36))
                                            )));
  auVar14._8_4_ =
       fVar22 * (auVar26._8_4_ +
                fVar40 * (fVar34 + fVar40 * (fVar16 + fVar40 * (fVar33 + fVar40 * (fVar13 - fVar40 *
                                                                                            fVar36))
                                            )));
  auVar14._12_4_ =
       fVar23 * (auVar26._12_4_ +
                fVar41 * (fVar34 + fVar41 * (fVar16 + fVar41 * (fVar33 + fVar41 * (fVar13 - fVar41 *
                                                                                            fVar36))
                                            )));
  fVar24 = auVar37._0_4_ *
           (auVar26._0_4_ +
           fVar38 * (fVar32 + fVar38 * (fVar20 + fVar38 * (fVar11 + fVar38 * (fVar18 - fVar38 * 
                                                  fVar35)))));
  fVar33 = auVar37._4_4_ *
           (auVar26._4_4_ +
           fVar39 * (fVar32 + fVar39 * (fVar20 + fVar39 * (fVar11 + fVar39 * (fVar18 - fVar39 * 
                                                  fVar35)))));
  fVar22 = auVar37._8_4_ *
           (auVar26._8_4_ +
           fVar40 * (fVar32 + fVar40 * (fVar20 + fVar40 * (fVar11 + fVar40 * (fVar18 - fVar40 * 
                                                  fVar35)))));
  fVar21 = auVar37._12_4_ *
           (auVar26._12_4_ +
           fVar41 * (fVar32 + fVar41 * (fVar20 + fVar41 * (fVar11 + fVar41 * (fVar18 - fVar41 * 
                                                  fVar35)))));
  auVar28 = NEON_ext(auVar14,auVar14,8,1);
  auVar26._4_4_ = fVar33;
  auVar26._0_4_ = fVar24;
  auVar26._8_4_ = fVar22;
  auVar26._12_4_ = fVar21;
  auVar37._4_4_ = fVar33;
  auVar37._0_4_ = fVar24;
  auVar37._8_4_ = fVar22;
  auVar37._12_4_ = fVar21;
  auVar26 = NEON_ext(auVar26,auVar37,8,1);
  fVar22 = auVar26._0_4_;
  fVar21 = auVar28._0_4_;
  fVar11 = fVar33 * (float)DAT_0388a618;
  fVar35 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
  fVar36 = auVar14._4_4_ * (float)DAT_0388a870;
  fVar38 = (float)((ulong)DAT_0388a870 >> 0x20) * 0.0;
  fVar13 = fVar21 * fVar24 * (float)_DAT_03889200 + fVar22 * auVar14._4_4_ * auVar14._0_4_;
  fVar16 = fVar22 * fVar24 * (float)((ulong)_DAT_03889200 >> 0x20) +
           fVar21 * auVar14._4_4_ * auVar14._0_4_;
  fVar18 = fVar24 * 0.0 * (float)_UNK_03889208 + fVar11 * auVar14._0_4_;
  fVar20 = fVar24 * 0.0 * (float)((ulong)_UNK_03889208 >> 0x20) + fVar35 * auVar14._0_4_;
  fVar23 = (float)_DAT_03889d50;
  uVar4 = (ulong)_DAT_03889d50 >> 0x20;
  fVar34 = (float)_UNK_03889d58;
  uVar5 = (ulong)_UNK_03889d58 >> 0x20;
  param_4[1] = CONCAT44(fVar38,fVar36);
  *param_4 = CONCAT44(fVar21 * fVar33,fVar22 * fVar33);
  *(float *)(param_4 + 3) = fVar18;
  *(float *)((long)param_4 + 0x1c) = fVar20;
  *(float *)(param_4 + 2) = fVar13;
  *(float *)((long)param_4 + 0x14) = fVar16;
  fVar23 = fVar21 * auVar14._0_4_ * fVar23 + fVar22 * auVar14._4_4_ * fVar24;
  fVar32 = fVar22 * auVar14._0_4_ * (float)uVar4 + fVar21 * auVar14._4_4_ * fVar24;
  fVar34 = auVar14._0_4_ * 0.0 * fVar34 + fVar11 * fVar24;
  fVar35 = auVar14._0_4_ * 0.0 * (float)uVar5 + fVar35 * fVar24;
  fVar24 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  param_4[5] = CONCAT44(fVar35,fVar34);
  param_4[4] = CONCAT44(fVar32,fVar23);
  param_4[7] = (ulong)uVar2;
  param_4[6] = uVar3;
  param_3[2] = fVar36 * fVar24;
  param_3[3] = fVar38 * fVar24;
  *param_3 = fVar22 * fVar33 * fVar24;
  param_3[1] = fVar21 * fVar33 * fVar24;
  *(ulong *)(param_3 + 6) = CONCAT44(fVar20 * fVar11,fVar18 * fVar11);
  *(ulong *)(param_3 + 4) = CONCAT44(fVar16 * fVar11,fVar13 * fVar11);
  *(ulong *)(param_3 + 10) = CONCAT44(fVar35 * fVar1,fVar34 * fVar1);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar32 * fVar1,fVar23 * fVar1);
  *(ulong *)(param_3 + 0xe) = (ulong)uVar2;
  *(undefined8 *)(param_3 + 0xc) = uVar3;
  return;
}


