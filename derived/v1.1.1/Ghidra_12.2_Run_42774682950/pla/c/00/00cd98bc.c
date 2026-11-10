/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd98bc; name: FUN_00cd98bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cd98bc(float param_1)

{
  ulong uVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  undefined1 auVar10 [16];
  float fVar16;
  float fVar17;
  float fVar21;
  uint uVar23;
  undefined1 auVar19 [16];
  uint uVar18;
  uint uVar22;
  uint uVar24;
  undefined1 auVar20 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if ((*PTR_DAT_04379678 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379678);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
  }
  lVar4 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar4;
  puVar5 = *(ulong **)(lVar4 + 0xd8);
  uVar1 = *puVar5;
  uVar6 = puVar5[1] ^ uVar1;
  fVar7 = *(float *)PTR_FloatPi_04372cf0;
  fVar16 = -((fVar7 / *(float *)PTR_FloatDegree180_04372ce0) *
            ((float)(puVar5[1] + uVar1) * 5.421011e-20 * param_1 + 0.0 + param_1 * -0.5));
  fVar17 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar21 = fVar16 * fVar17;
  fVar25 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar2 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  auVar19._0_4_ =
       (int)(fVar17 * 0.0 + (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19._4_4_ = (int)(fVar21 + (float)(-(uint)(0.0 <= fVar21) & 0x80000000 ^ 0xbf000000));
  auVar19._8_4_ =
       (int)(fVar17 * 0.0 + (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19._12_4_ =
       (int)(fVar17 * 0.0 + (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
  fVar17 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar21 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar26 = *(float *)PTR_Float2Pi_04372d30;
  auVar19 = NEON_scvtf(auVar19,4);
  fVar30 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar8 = 0.0 - auVar19._0_4_ * fVar26;
  fVar16 = fVar16 - auVar19._4_4_ * fVar26;
  fVar12 = 0.0 - auVar19._8_4_ * fVar26;
  fVar14 = 0.0 - auVar19._12_4_ * fVar26;
  fVar26 = -fVar7;
  uVar18 = -(uint)(fVar30 < fVar8);
  uVar22 = -(uint)(fVar30 < fVar16);
  uVar23 = -(uint)(fVar30 < fVar12);
  uVar24 = -(uint)(fVar30 < fVar14);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar7 - fVar8)) & uVar18);
  fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)(fVar7 - fVar16)) & uVar22);
  fVar12 = (float)((uint)fVar12 ^ ((uint)fVar12 ^ (uint)(fVar7 - fVar12)) & uVar23);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar7 - fVar14)) & uVar24);
  fVar30 = -fVar30;
  uVar9 = -(uint)(fVar8 < fVar30);
  uVar11 = -(uint)(fVar16 < fVar30);
  uVar13 = -(uint)(fVar12 < fVar30);
  uVar15 = -(uint)(fVar14 < fVar30);
  auVar20[0] = (byte)uVar9 | (byte)uVar18;
  auVar20[1] = (byte)(uVar9 >> 8) | (byte)(uVar18 >> 8);
  auVar20[2] = (byte)(uVar9 >> 0x10) | (byte)(uVar18 >> 0x10);
  auVar20[3] = (byte)(uVar9 >> 0x18) | (byte)(uVar18 >> 0x18);
  auVar20[4] = (byte)uVar11 | (byte)uVar22;
  auVar20[5] = (byte)(uVar11 >> 8) | (byte)(uVar22 >> 8);
  auVar20[6] = (byte)(uVar11 >> 0x10) | (byte)(uVar22 >> 0x10);
  auVar20[7] = (byte)(uVar11 >> 0x18) | (byte)(uVar22 >> 0x18);
  auVar20[8] = (byte)uVar13 | (byte)uVar23;
  auVar20[9] = (byte)(uVar13 >> 8) | (byte)(uVar23 >> 8);
  auVar20[10] = (byte)(uVar13 >> 0x10) | (byte)(uVar23 >> 0x10);
  auVar20[0xb] = (byte)(uVar13 >> 0x18) | (byte)(uVar23 >> 0x18);
  auVar20[0xc] = (byte)uVar15 | (byte)uVar24;
  auVar20[0xd] = (byte)(uVar15 >> 8) | (byte)(uVar24 >> 8);
  auVar20[0xe] = (byte)(uVar15 >> 0x10) | (byte)(uVar24 >> 0x10);
  auVar20[0xf] = (byte)(uVar15 >> 0x18) | (byte)(uVar24 >> 0x18);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar26 - fVar8)) & uVar9);
  fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)(fVar26 - fVar16)) & uVar11);
  fVar12 = (float)((uint)fVar12 ^ ((uint)fVar12 ^ (uint)(fVar26 - fVar12)) & uVar13);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar26 - fVar14)) & uVar15);
  auVar19 = NEON_fmov(0x3f800000,4);
  auVar29 = NEON_fmov(0xbf800000,4);
  auVar20 = auVar19 ^ (auVar19 ^ auVar29) & auVar20;
  fVar27 = *(float *)PTR_SinCoefficients_04372d28;
  fVar31 = fVar8 * fVar8;
  fVar32 = fVar16 * fVar16;
  fVar33 = fVar12 * fVar12;
  fVar34 = fVar14 * fVar14;
  fVar28 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar7 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar26 = *(float *)PTR_CosCoefficients_04372d40;
  fVar30 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  auVar10._0_4_ =
       fVar8 * (auVar19._0_4_ +
               fVar31 * (fVar7 + fVar31 * (fVar2 + fVar31 * (fVar28 + fVar31 * (fVar25 - fVar31 * 
                                                  fVar27)))));
  auVar10._4_4_ =
       fVar16 * (auVar19._4_4_ +
                fVar32 * (fVar7 + fVar32 * (fVar2 + fVar32 * (fVar28 + fVar32 * (fVar25 - fVar32 * 
                                                  fVar27)))));
  auVar10._8_4_ =
       fVar12 * (auVar19._8_4_ +
                fVar33 * (fVar7 + fVar33 * (fVar2 + fVar33 * (fVar28 + fVar33 * (fVar25 - fVar33 * 
                                                  fVar27)))));
  auVar10._12_4_ =
       fVar14 * (auVar19._12_4_ +
                fVar34 * (fVar7 + fVar34 * (fVar2 + fVar34 * (fVar28 + fVar34 * (fVar25 - fVar34 * 
                                                  fVar27)))));
  NEON_ext(auVar10,auVar10,8,1);
  fVar25 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  *puVar5 = uVar6 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar6 << 0x10;
  puVar5[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  fVar25 = -fVar25;
  auVar29._0_4_ =
       auVar20._0_4_ *
       (auVar19._0_4_ +
       fVar31 * (fVar25 + fVar31 * (fVar21 + fVar31 * (fVar30 + fVar31 * (fVar17 - fVar31 * fVar26))
                                   )));
  auVar29._4_4_ =
       auVar20._4_4_ *
       (auVar19._4_4_ +
       fVar32 * (fVar25 + fVar32 * (fVar21 + fVar32 * (fVar30 + fVar32 * (fVar17 - fVar32 * fVar26))
                                   )));
  auVar29._8_4_ =
       auVar20._8_4_ *
       (auVar19._8_4_ +
       fVar33 * (fVar25 + fVar33 * (fVar21 + fVar33 * (fVar30 + fVar33 * (fVar17 - fVar33 * fVar26))
                                   )));
  auVar29._12_4_ =
       auVar20._12_4_ *
       (auVar19._12_4_ +
       fVar34 * (fVar25 + fVar34 * (fVar21 + fVar34 * (fVar30 + fVar34 * (fVar17 - fVar34 * fVar26))
                                   )));
  NEON_ext(auVar29,auVar29,8,1);
  return;
}


