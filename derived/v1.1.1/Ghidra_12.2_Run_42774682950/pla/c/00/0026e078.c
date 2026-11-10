/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e078; name: FUN_0026e078
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026e078(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar13;
  undefined8 uVar10;
  float fVar14;
  uint uVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar17;
  ulong uVar16;
  float fVar18;
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  puVar3 = PTR_CosCoefficients_04372d40;
  puVar2 = PTR_SinCoefficients_04372d28;
  uVar9 = *(uint *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  fVar8 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar7 = (float)*(uint *)(param_1 + 0xac) * 2.3283064e-10;
  fVar5 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar6 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  lVar4 = *(long *)(param_1 + 0xa0);
  fVar24 = *(float *)(lVar4 + 0x788);
  fVar18 = *(float *)PTR_Float2Pi_04372d30;
  fVar27 = *(float *)PTR_FloatPiDivided2_04372d38;
  *(uint *)(param_1 + 0xac) = uVar9;
  fVar30 = *(float *)(lVar4 + 0x794);
  uVar13 = uVar9 * 0x41c64e6d + 0x3039;
  fVar34 = *(float *)(lVar4 + 0x78c);
  *(uint *)(param_1 + 0xac) = uVar13;
  fVar36 = *(float *)(lVar4 + 0x798);
  fVar24 = fVar24 + fVar30 * (fVar7 + fVar7 + -1.0);
  uVar1 = uVar13 * 0x41c64e6d + 0x3039;
  fVar31 = *(float *)(lVar4 + 0x790);
  *(uint *)(param_1 + 0xac) = uVar1;
  fVar34 = fVar34 + fVar36 * ((float)uVar9 * 2.3283064e-10 + (float)uVar9 * 2.3283064e-10 + -1.0);
  fVar7 = *(float *)(puVar3 + 4);
  fVar31 = fVar31 + ((float)uVar13 * 2.3283064e-10 + (float)uVar13 * 2.3283064e-10 + -1.0) *
                    *(float *)(lVar4 + 0x79c);
  fVar30 = fVar24 * fVar8;
  fVar36 = fVar34 * fVar8;
  fVar14 = fVar31 * fVar8;
  fVar25 = *(float *)PTR_FloatPi_04372cf0;
  fVar29 = *(float *)puVar2;
  auVar11._0_4_ = (int)(fVar30 + (float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000));
  auVar11._4_4_ = (int)(fVar36 + (float)(-(uint)(0.0 <= fVar36) & 0x80000000 ^ 0xbf000000));
  auVar11._8_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
  auVar11._12_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  fVar32 = -*(float *)(puVar2 + 8);
  auVar12 = NEON_scvtf(auVar11,4);
  fVar24 = fVar24 - auVar12._0_4_ * fVar18;
  fVar34 = fVar34 - auVar12._4_4_ * fVar18;
  fVar31 = fVar31 - auVar12._8_4_ * fVar18;
  fVar18 = 0.0 - auVar12._12_4_ * fVar18;
  uVar9 = -(uint)(fVar27 < fVar24);
  uVar13 = -(uint)(fVar27 < fVar34);
  uVar15 = -(uint)(fVar27 < fVar31);
  uVar17 = -(uint)(fVar27 < fVar18);
  fVar8 = -fVar25;
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar25 - fVar24)) & uVar9);
  fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar25 - fVar34)) & uVar13);
  fVar31 = (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)(fVar25 - fVar31)) & uVar15);
  fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)(fVar25 - fVar18)) & uVar17);
  fVar27 = -fVar27;
  fVar14 = -*(float *)(puVar2 + 0x10);
  uVar20 = -(uint)(fVar24 < fVar27);
  uVar21 = -(uint)(fVar34 < fVar27);
  uVar22 = -(uint)(fVar31 < fVar27);
  uVar23 = -(uint)(fVar18 < fVar27);
  auVar28[0] = (byte)uVar20 | (byte)uVar9;
  auVar28[1] = (byte)(uVar20 >> 8) | (byte)(uVar9 >> 8);
  auVar28[2] = (byte)(uVar20 >> 0x10) | (byte)(uVar9 >> 0x10);
  auVar28[3] = (byte)(uVar20 >> 0x18) | (byte)(uVar9 >> 0x18);
  auVar28[4] = (byte)uVar21 | (byte)uVar13;
  auVar28[5] = (byte)(uVar21 >> 8) | (byte)(uVar13 >> 8);
  auVar28[6] = (byte)(uVar21 >> 0x10) | (byte)(uVar13 >> 0x10);
  auVar28[7] = (byte)(uVar21 >> 0x18) | (byte)(uVar13 >> 0x18);
  auVar28[8] = (byte)uVar22 | (byte)uVar15;
  auVar28[9] = (byte)(uVar22 >> 8) | (byte)(uVar15 >> 8);
  auVar28[10] = (byte)(uVar22 >> 0x10) | (byte)(uVar15 >> 0x10);
  auVar28[0xb] = (byte)(uVar22 >> 0x18) | (byte)(uVar15 >> 0x18);
  auVar28[0xc] = (byte)uVar23 | (byte)uVar17;
  auVar28[0xd] = (byte)(uVar23 >> 8) | (byte)(uVar17 >> 8);
  auVar28[0xe] = (byte)(uVar23 >> 0x10) | (byte)(uVar17 >> 0x10);
  auVar28[0xf] = (byte)(uVar23 >> 0x18) | (byte)(uVar17 >> 0x18);
  fVar30 = *(float *)puVar3;
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar8 - fVar24)) & uVar20);
  fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar8 - fVar34)) & uVar21);
  fVar31 = (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)(fVar8 - fVar31)) & uVar22);
  fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)(fVar8 - fVar18)) & uVar23);
  auVar26 = NEON_fmov(0x3f800000,4);
  fVar37 = fVar24 * fVar24;
  fVar38 = fVar34 * fVar34;
  fVar39 = fVar31 * fVar31;
  fVar40 = fVar18 * fVar18;
  fVar27 = -*(float *)(puVar3 + 8);
  fVar8 = *(float *)(puVar3 + 0xc);
  uVar9 = uVar1 * 0x41c64e6d + 0x3039;
  fVar25 = *(float *)(lVar4 + 0x770);
  fVar36 = *(float *)(puVar3 + 0x10);
  *(uint *)(param_1 + 0xac) = uVar9;
  fVar35 = *(float *)(lVar4 + 0x77c);
  fVar36 = -fVar36;
  auVar12 = NEON_fmov(0xbf800000,4);
  auVar12 = auVar26 ^ (auVar26 ^ auVar12) & auVar28;
  uVar13 = uVar9 * 0x41c64e6d + 0x3039;
  fVar33 = *(float *)(lVar4 + 0x774);
  *(uint *)(param_1 + 0xac) = uVar13;
  uVar10 = CONCAT44(fVar33 + ((float)uVar9 * 2.3283064e-10 + (float)uVar9 * 2.3283064e-10 + -1.0) *
                             *(float *)(lVar4 + 0x780),
                    fVar25 + ((float)uVar1 * 2.3283064e-10 + (float)uVar1 * 2.3283064e-10 + -1.0) *
                             fVar35);
  auVar19._0_4_ =
       auVar12._0_4_ *
       (auVar26._0_4_ +
       fVar37 * (fVar36 + fVar37 * (fVar8 + fVar37 * (fVar27 + fVar37 * (fVar7 - fVar37 * fVar30))))
       );
  auVar19._4_4_ =
       auVar12._4_4_ *
       (auVar26._4_4_ +
       fVar38 * (fVar36 + fVar38 * (fVar8 + fVar38 * (fVar27 + fVar38 * (fVar7 - fVar38 * fVar30))))
       );
  auVar19._8_4_ =
       auVar12._8_4_ *
       (auVar26._8_4_ +
       fVar39 * (fVar36 + fVar39 * (fVar8 + fVar39 * (fVar27 + fVar39 * (fVar7 - fVar39 * fVar30))))
       );
  auVar19._12_4_ =
       auVar12._12_4_ *
       (auVar26._12_4_ +
       fVar40 * (fVar36 + fVar40 * (fVar8 + fVar40 * (fVar27 + fVar40 * (fVar7 - fVar40 * fVar30))))
       );
  fVar24 = fVar24 * (auVar26._0_4_ +
                    fVar37 * (fVar14 + fVar37 * (fVar6 + fVar37 * (fVar32 + fVar37 * (fVar5 - fVar37
                                                                                              * 
                                                  fVar29)))));
  fVar34 = fVar34 * (auVar26._4_4_ +
                    fVar38 * (fVar14 + fVar38 * (fVar6 + fVar38 * (fVar32 + fVar38 * (fVar5 - fVar38
                                                                                              * 
                                                  fVar29)))));
  fVar31 = fVar31 * (auVar26._8_4_ +
                    fVar39 * (fVar14 + fVar39 * (fVar6 + fVar39 * (fVar32 + fVar39 * (fVar5 - fVar39
                                                                                              * 
                                                  fVar29)))));
  fVar18 = fVar18 * (auVar26._12_4_ +
                    fVar40 * (fVar14 + fVar40 * (fVar6 + fVar40 * (fVar32 + fVar40 * (fVar5 - fVar40
                                                                                              * 
                                                  fVar29)))));
  auVar12._4_4_ = fVar34;
  auVar12._0_4_ = fVar24;
  auVar12._8_4_ = fVar31;
  auVar12._12_4_ = fVar18;
  auVar26._4_4_ = fVar34;
  auVar26._0_4_ = fVar24;
  auVar26._8_4_ = fVar31;
  auVar26._12_4_ = fVar18;
  auVar12 = NEON_ext(auVar12,auVar26,8,1);
  auVar26 = NEON_ext(auVar19,auVar19,8,1);
  fVar5 = auVar12._0_4_;
  fVar6 = auVar26._0_4_;
  fVar7 = auVar19._4_4_ * (float)DAT_0388a618;
  fVar8 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
  fVar33 = fVar34 * (float)DAT_0388a870;
  fVar35 = (float)((ulong)DAT_0388a870 >> 0x20) * 0.0;
  fVar32 = *(float *)(lVar4 + 0x778);
  *(uint *)(param_1 + 0xac) = uVar13 * 0x41c64e6d + 0x3039;
  fVar30 = *(float *)(lVar4 + 0x7a8);
  fVar37 = *(float *)(lVar4 + 0x784);
  fVar31 = fVar5 * auVar19._0_4_ * (float)_DAT_03889200 + fVar6 * fVar34 * fVar24;
  fVar27 = fVar6 * auVar19._0_4_ * (float)((ulong)_DAT_03889200 >> 0x20) + fVar5 * fVar34 * fVar24;
  fVar25 = auVar19._0_4_ * 0.0 * (float)_UNK_03889208 + fVar7 * fVar24;
  fVar29 = auVar19._0_4_ * 0.0 * (float)((ulong)_UNK_03889208 >> 0x20) + fVar8 * fVar24;
  fVar36 = fVar5 * fVar24 * (float)_DAT_03889d50 + fVar6 * fVar34 * auVar19._0_4_;
  fVar14 = fVar6 * fVar24 * (float)((ulong)_DAT_03889d50 >> 0x20) + fVar5 * fVar34 * auVar19._0_4_;
  fVar18 = fVar24 * 0.0 * (float)_UNK_03889d58 + fVar7 * auVar19._0_4_;
  fVar24 = fVar24 * 0.0 * (float)((ulong)_UNK_03889d58 >> 0x20) + fVar8 * auVar19._0_4_;
  fVar7 = (float)*(undefined8 *)(lVar4 + 0x7a0);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + 0x7a0) >> 0x20);
  *(ulong *)(param_1 + 0x308) = CONCAT44(fVar35,fVar33);
  *(ulong *)(param_1 + 0x300) = CONCAT44(fVar5 * auVar19._4_4_,fVar6 * auVar19._4_4_);
  *(ulong *)(param_1 + 0x318) = CONCAT44(fVar29,fVar25);
  *(ulong *)(param_1 + 0x310) = CONCAT44(fVar27,fVar31);
  *(float *)(param_1 + 0x2c8) = fVar33 * fVar7;
  *(float *)(param_1 + 0x2cc) = fVar35 * fVar7;
  *(float *)(param_1 + 0x2c0) = fVar6 * auVar19._4_4_ * fVar7;
  *(float *)(param_1 + 0x2c4) = fVar5 * auVar19._4_4_ * fVar7;
  *(float *)(param_1 + 0x2d8) = fVar25 * fVar8;
  *(float *)(param_1 + 0x2dc) = fVar29 * fVar8;
  *(float *)(param_1 + 0x2d0) = fVar31 * fVar8;
  *(float *)(param_1 + 0x2d4) = fVar27 * fVar8;
  *(ulong *)(param_1 + 0x2e8) = CONCAT44(fVar24 * fVar30,fVar18 * fVar30);
  *(ulong *)(param_1 + 0x2e0) = CONCAT44(fVar14 * fVar30,fVar36 * fVar30);
  uVar16 = (ulong)(uint)(fVar32 + ((float)uVar13 * 2.3283064e-10 + (float)uVar13 * 2.3283064e-10 +
                                  -1.0) * fVar37);
  *(ulong *)(param_1 + 0x2f8) = uVar16;
  *(undefined8 *)(param_1 + 0x2f0) = uVar10;
  *(ulong *)(param_1 + 0x328) = CONCAT44(fVar24,fVar18);
  *(ulong *)(param_1 + 800) = CONCAT44(fVar14,fVar36);
  *(ulong *)(param_1 + 0x338) = uVar16;
  *(undefined8 *)(param_1 + 0x330) = uVar10;
  return;
}


