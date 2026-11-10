/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cda89c; name: FUN_00cda89c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cda89c(undefined1 *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar29;
  uint uVar31;
  undefined1 auVar26 [16];
  uint uVar30;
  uint uVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar33;
  uint uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar13 = DAT_0388a870;
  uVar12 = DAT_0388a618;
  uVar11 = _UNK_03889d58;
  uVar10 = _DAT_03889d50;
  uVar9 = _UNK_03889208;
  uVar8 = _DAT_03889200;
  if (0 < *param_2) {
    fVar2 = *(float *)PTR_Float1Divided2Pi_04372d20;
    fVar3 = *(float *)PTR_Float2Pi_04372d30;
    fVar4 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
    fVar5 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
    fVar6 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
    fVar41 = *(float *)PTR_FloatPi_04372cf0;
    fVar47 = *(float *)PTR_FloatDegree180_04372ce0;
    fVar48 = *(float *)PTR_FloatPiDivided2_04372d38;
    fVar50 = 180.0 / (float)(*param_2 + 1);
    fVar16 = -fVar48;
    fVar17 = -fVar41;
    fVar7 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
    fVar18 = -*(float *)PTR_SinCoefficients_04372d28;
    fVar19 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
    fVar20 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
    fVar21 = -*(float *)PTR_CosCoefficients_04372d40;
    fVar22 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
    fVar23 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
    auVar51 = NEON_fmov(0x3f800000,4);
    auVar52 = NEON_fmov(0xbf800000,4);
    iVar15 = 0;
    do {
      iVar15 = iVar15 + 1;
      fVar24 = fVar50 * (float)iVar15;
      if ((param_3 & 1) == 0) {
        fVar24 = -(fVar50 * (float)iVar15);
      }
      fVar24 = -((fVar41 / fVar47) * fVar24);
      iVar1 = param_2[0xd];
      fVar29 = fVar2 * fVar24;
      auVar26._0_4_ =
           (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000));
      auVar26._4_4_ = (int)(fVar29 + (float)(-(uint)(0.0 <= fVar29) & 0x80000000 ^ 0xbf000000));
      auVar26._8_4_ =
           (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000));
      auVar26._12_4_ =
           (int)(fVar2 * 0.0 + (float)(-(uint)(0.0 <= fVar2 * 0.0) & 0x80000000 ^ 0xbf000000));
      auVar26 = NEON_scvtf(auVar26,4);
      fVar29 = 0.0 - auVar26._0_4_ * fVar3;
      fVar24 = fVar24 - auVar26._4_4_ * fVar3;
      fVar37 = 0.0 - auVar26._8_4_ * fVar3;
      fVar39 = 0.0 - auVar26._12_4_ * fVar3;
      uVar25 = -(uint)(fVar48 < fVar29);
      uVar30 = -(uint)(fVar48 < fVar24);
      uVar31 = -(uint)(fVar48 < fVar37);
      uVar32 = -(uint)(fVar48 < fVar39);
      fVar29 = (float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar41 - fVar29)) & uVar25);
      fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar41 - fVar24)) & uVar30);
      fVar37 = (float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)(fVar41 - fVar37)) & uVar31);
      fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar41 - fVar39)) & uVar32);
      uVar33 = -(uint)(fVar29 < fVar16);
      uVar36 = -(uint)(fVar24 < fVar16);
      uVar38 = -(uint)(fVar37 < fVar16);
      uVar40 = -(uint)(fVar39 < fVar16);
      auVar49[0] = (byte)uVar33 | (byte)uVar25;
      auVar49[1] = (byte)(uVar33 >> 8) | (byte)(uVar25 >> 8);
      auVar49[2] = (byte)(uVar33 >> 0x10) | (byte)(uVar25 >> 0x10);
      auVar49[3] = (byte)(uVar33 >> 0x18) | (byte)(uVar25 >> 0x18);
      auVar49[4] = (byte)uVar36 | (byte)uVar30;
      auVar49[5] = (byte)(uVar36 >> 8) | (byte)(uVar30 >> 8);
      auVar49[6] = (byte)(uVar36 >> 0x10) | (byte)(uVar30 >> 0x10);
      auVar49[7] = (byte)(uVar36 >> 0x18) | (byte)(uVar30 >> 0x18);
      auVar49[8] = (byte)uVar38 | (byte)uVar31;
      auVar49[9] = (byte)(uVar38 >> 8) | (byte)(uVar31 >> 8);
      auVar49[10] = (byte)(uVar38 >> 0x10) | (byte)(uVar31 >> 0x10);
      auVar49[0xb] = (byte)(uVar38 >> 0x18) | (byte)(uVar31 >> 0x18);
      auVar49[0xc] = (byte)uVar40 | (byte)uVar32;
      auVar49[0xd] = (byte)(uVar40 >> 8) | (byte)(uVar32 >> 8);
      auVar49[0xe] = (byte)(uVar40 >> 0x10) | (byte)(uVar32 >> 0x10);
      auVar49[0xf] = (byte)(uVar40 >> 0x18) | (byte)(uVar32 >> 0x18);
      fVar29 = (float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar17 - fVar29)) & uVar33);
      fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar17 - fVar24)) & uVar36);
      fVar37 = (float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)(fVar17 - fVar37)) & uVar38);
      fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar17 - fVar39)) & uVar40);
      fVar42 = fVar29 * fVar29;
      fVar44 = fVar24 * fVar24;
      fVar45 = fVar37 * fVar37;
      fVar46 = fVar39 * fVar39;
      auVar26 = auVar51 ^ (auVar51 ^ auVar52) & auVar49;
      auVar34._0_4_ =
           fVar29 * (auVar51._0_4_ +
                    fVar42 * (fVar20 + fVar42 * (fVar5 + fVar42 * (fVar19 + fVar42 * (fVar4 + fVar42
                                                                                              * 
                                                  fVar18)))));
      auVar34._4_4_ =
           fVar24 * (auVar51._4_4_ +
                    fVar44 * (fVar20 + fVar44 * (fVar5 + fVar44 * (fVar19 + fVar44 * (fVar4 + fVar44
                                                                                              * 
                                                  fVar18)))));
      auVar34._8_4_ =
           fVar37 * (auVar51._8_4_ +
                    fVar45 * (fVar20 + fVar45 * (fVar5 + fVar45 * (fVar19 + fVar45 * (fVar4 + fVar45
                                                                                              * 
                                                  fVar18)))));
      auVar34._12_4_ =
           fVar39 * (auVar51._12_4_ +
                    fVar46 * (fVar20 + fVar46 * (fVar5 + fVar46 * (fVar19 + fVar46 * (fVar4 + fVar46
                                                                                              * 
                                                  fVar18)))));
      auVar49 = NEON_ext(auVar34,auVar34,8,1);
      auVar27._0_4_ =
           auVar26._0_4_ *
           (auVar51._0_4_ +
           fVar42 * (fVar23 + fVar42 * (fVar7 + fVar42 * (fVar22 + fVar42 * (fVar6 + fVar42 * fVar21
                                                                            )))));
      auVar27._4_4_ =
           auVar26._4_4_ *
           (auVar51._4_4_ +
           fVar44 * (fVar23 + fVar44 * (fVar7 + fVar44 * (fVar22 + fVar44 * (fVar6 + fVar44 * fVar21
                                                                            )))));
      auVar27._8_4_ =
           auVar26._8_4_ *
           (auVar51._8_4_ +
           fVar45 * (fVar23 + fVar45 * (fVar7 + fVar45 * (fVar22 + fVar45 * (fVar6 + fVar45 * fVar21
                                                                            )))));
      auVar27._12_4_ =
           auVar26._12_4_ *
           (auVar51._12_4_ +
           fVar46 * (fVar23 + fVar46 * (fVar7 + fVar46 * (fVar22 + fVar46 * (fVar6 + fVar46 * fVar21
                                                                            )))));
      auVar26 = NEON_ext(auVar27,auVar27,8,1);
      fVar39 = auVar26._0_4_;
      fVar42 = auVar49._0_4_;
      fVar44 = auVar27._4_4_ * (float)uVar12;
      fVar46 = (float)((ulong)uVar12 >> 0x20) * 0.0;
      local_e0 = (float)uVar10;
      fStack_dc = (float)((ulong)uVar10 >> 0x20);
      fStack_d8 = (float)uVar11;
      fStack_d4 = (float)((ulong)uVar11 >> 0x20);
      fVar24 = (float)param_2[8];
      fVar29 = (float)param_2[9];
      fVar37 = (float)param_2[10];
      fVar45 = fVar39 * auVar27._4_4_ * fVar24 +
               (fVar42 * auVar27._0_4_ * (float)uVar8 + fVar39 * auVar34._4_4_ * auVar34._0_4_) *
               fVar29 + (fVar42 * auVar34._0_4_ * local_e0 + fVar39 * auVar34._4_4_ * auVar27._0_4_)
                        * fVar37;
      fVar39 = fVar42 * auVar27._4_4_ * fVar24 +
               (fVar39 * auVar27._0_4_ * (float)((ulong)uVar8 >> 0x20) +
               fVar42 * auVar34._4_4_ * auVar34._0_4_) * fVar29 +
               (fVar39 * auVar34._0_4_ * fStack_dc + fVar42 * auVar34._4_4_ * auVar27._0_4_) *
               fVar37;
      auVar43._0_8_ = CONCAT44(fVar39,fVar45);
      auVar43._8_4_ =
           auVar34._4_4_ * (float)uVar13 * fVar24 +
           (auVar27._0_4_ * 0.0 * (float)uVar9 + fVar44 * auVar34._0_4_) * fVar29 +
           (auVar34._0_4_ * 0.0 * fStack_d8 + fVar44 * auVar27._0_4_) * fVar37;
      auVar43._12_4_ =
           (float)((ulong)uVar13 >> 0x20) * 0.0 * fVar24 +
           (auVar27._0_4_ * 0.0 * (float)((ulong)uVar9 >> 0x20) + fVar46 * auVar34._0_4_) * fVar29 +
           (auVar34._0_4_ * 0.0 * fStack_d4 + fVar46 * auVar27._0_4_) * fVar37;
      fVar24 = (float)param_2[0xc];
      auVar35._0_4_ = fVar45 * fVar24;
      auVar35._4_4_ = fVar39 * fVar24;
      auVar35._8_4_ = auVar43._8_4_ * fVar24;
      auVar35._12_4_ = auVar43._12_4_ * fVar24;
      auVar28._0_4_ = (float)param_2[4] + auVar35._0_4_;
      auVar28._4_4_ = (float)param_2[5] + auVar35._4_4_;
      auVar28._8_4_ = (float)param_2[6] + auVar35._8_4_;
      auVar28._12_4_ = (float)param_2[7] + auVar35._12_4_;
      fVar24 = (float)FUN_00cd52dc();
      uStack_90 = CONCAT44(fVar24 + auVar28._4_4_,auVar28._0_4_);
      local_a0 = CONCAT44(auVar35._0_4_ + auVar28._4_4_,auVar28._0_4_);
      uStack_98 = auVar28._8_8_;
      uStack_88 = auVar28._8_8_;
      uVar14 = FUN_01f56878(&uStack_90,&local_a0,iVar1,auStack_c0);
      if ((uVar14 & 1) != 0) {
        *param_1 = 1;
        *(long *)(param_1 + 0x18) = auVar43._8_8_;
        *(undefined8 *)(param_1 + 0x10) = auVar43._0_8_;
        return;
      }
    } while (iVar15 < *param_2);
  }
  *param_1 = 0;
  return;
}


