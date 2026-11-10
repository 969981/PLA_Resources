/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c05038; name: FUN_00c05038
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00c05038(long param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar87;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [16];
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined1 local_60 [16];
  undefined8 local_48;
  
  fVar18 = *(float *)(param_1 + 0x140);
  fVar21 = *(float *)PTR_FloatPi_04372cf0;
  fVar19 = fVar18 * (fVar21 / *(float *)PTR_FloatDegree180_04372ce0);
  fVar25 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar5 = fVar19 * fVar25;
  fVar22 = -fVar21;
  iVar16 = (int)(fVar5 + (float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000));
  iVar6 = (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  iVar7 = (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar54[4] = (char)iVar16;
  auVar54._0_4_ =
       (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar54[5] = (char)((uint)iVar16 >> 8);
  auVar54[6] = (char)((uint)iVar16 >> 0x10);
  auVar54[7] = (char)((uint)iVar16 >> 0x18);
  auVar54[8] = (char)iVar6;
  auVar54[9] = (char)((uint)iVar6 >> 8);
  auVar54[10] = (char)((uint)iVar6 >> 0x10);
  auVar54[0xb] = (char)((uint)iVar6 >> 0x18);
  auVar54[0xc] = (char)iVar7;
  auVar54[0xd] = (char)((uint)iVar7 >> 8);
  auVar54[0xe] = (char)((uint)iVar7 >> 0x10);
  auVar54[0xf] = (char)((uint)iVar7 >> 0x18);
  auVar54 = NEON_scvtf(auVar54,4);
  fVar43 = *(float *)PTR_Float2Pi_04372d30;
  fVar29 = 0.0 - auVar54._0_4_ * fVar43;
  fVar19 = fVar19 - auVar54._4_4_ * fVar43;
  fVar33 = 0.0 - auVar54._8_4_ * fVar43;
  fVar34 = 0.0 - auVar54._12_4_ * fVar43;
  fVar52 = *(float *)PTR_FloatPiDivided2_04372d38;
  uVar61 = -(uint)(fVar52 < fVar29);
  uVar62 = -(uint)(fVar52 < fVar19);
  uVar63 = -(uint)(fVar52 < fVar33);
  uVar64 = -(uint)(fVar52 < fVar34);
  fVar29 = (float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar21 - fVar29)) & uVar61);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar21 - fVar19)) & uVar62);
  fVar33 = (float)((uint)fVar33 ^ ((uint)fVar33 ^ (uint)(fVar21 - fVar33)) & uVar63);
  fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar21 - fVar34)) & uVar64);
  fVar30 = -fVar52;
  fVar53 = *(float *)PTR_SinCoefficients_04372d28;
  auVar32 = NEON_fmov(0xbf800000,4);
  uVar73 = -(uint)(fVar29 < fVar30);
  uVar75 = -(uint)(fVar19 < fVar30);
  uVar76 = -(uint)(fVar33 < fVar30);
  uVar77 = -(uint)(fVar34 < fVar30);
  auVar35[0] = (byte)uVar73 | (byte)uVar61;
  auVar35[1] = (byte)(uVar73 >> 8) | (byte)(uVar61 >> 8);
  auVar35[2] = (byte)(uVar73 >> 0x10) | (byte)(uVar61 >> 0x10);
  auVar35[3] = (byte)(uVar73 >> 0x18) | (byte)(uVar61 >> 0x18);
  auVar35[4] = (byte)uVar75 | (byte)uVar62;
  auVar35[5] = (byte)(uVar75 >> 8) | (byte)(uVar62 >> 8);
  auVar35[6] = (byte)(uVar75 >> 0x10) | (byte)(uVar62 >> 0x10);
  auVar35[7] = (byte)(uVar75 >> 0x18) | (byte)(uVar62 >> 0x18);
  auVar35[8] = (byte)uVar76 | (byte)uVar63;
  auVar35[9] = (byte)(uVar76 >> 8) | (byte)(uVar63 >> 8);
  auVar35[10] = (byte)(uVar76 >> 0x10) | (byte)(uVar63 >> 0x10);
  auVar35[0xb] = (byte)(uVar76 >> 0x18) | (byte)(uVar63 >> 0x18);
  auVar35[0xc] = (byte)uVar77 | (byte)uVar64;
  auVar35[0xd] = (byte)(uVar77 >> 8) | (byte)(uVar64 >> 8);
  auVar35[0xe] = (byte)(uVar77 >> 0x10) | (byte)(uVar64 >> 0x10);
  auVar35[0xf] = (byte)(uVar77 >> 0x18) | (byte)(uVar64 >> 0x18);
  fVar5 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar29 = (float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar22 - fVar29)) & uVar73);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar22 - fVar19)) & uVar75);
  fVar33 = (float)((uint)fVar33 ^ ((uint)fVar33 ^ (uint)(fVar22 - fVar33)) & uVar76);
  fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar22 - fVar34)) & uVar77);
  fVar37 = fVar29 * fVar29;
  fVar38 = fVar19 * fVar19;
  fVar39 = fVar33 * fVar33;
  fVar40 = fVar34 * fVar34;
  fVar70 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar4 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  auVar54 = NEON_fmov(0x3f800000,4);
  auVar35 = auVar54 ^ (auVar54 ^ auVar32) & auVar35;
  fVar72 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar78 = auVar54._0_4_;
  fVar80 = auVar54._4_4_;
  fVar81 = auVar54._8_4_;
  fVar82 = auVar54._12_4_;
  fVar20 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar31 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar29 = fVar29 * (fVar78 + fVar37 * (fVar72 + fVar37 * (fVar4 + fVar37 * (fVar70 + fVar37 * (
                                                  fVar5 - fVar37 * fVar53)))));
  fVar19 = fVar19 * (fVar80 + fVar38 * (fVar72 + fVar38 * (fVar4 + fVar38 * (fVar70 + fVar38 * (
                                                  fVar5 - fVar38 * fVar53)))));
  fVar33 = fVar33 * (fVar81 + fVar39 * (fVar72 + fVar39 * (fVar4 + fVar39 * (fVar70 + fVar39 * (
                                                  fVar5 - fVar39 * fVar53)))));
  fVar34 = fVar34 * (fVar82 + fVar40 * (fVar72 + fVar40 * (fVar4 + fVar40 * (fVar70 + fVar40 * (
                                                  fVar5 - fVar40 * fVar53)))));
  fVar74 = *(float *)PTR_CosCoefficients_04372d40;
  fVar79 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar86 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar36._0_4_ =
       auVar35._0_4_ *
       (fVar78 + fVar37 * (fVar86 + fVar37 * (fVar31 + fVar37 * (fVar79 + fVar37 * (fVar20 - fVar37 
                                                  * fVar74)))));
  auVar36._4_4_ =
       auVar35._4_4_ *
       (fVar80 + fVar38 * (fVar86 + fVar38 * (fVar31 + fVar38 * (fVar79 + fVar38 * (fVar20 - fVar38 
                                                  * fVar74)))));
  auVar36._8_4_ =
       auVar35._8_4_ *
       (fVar81 + fVar39 * (fVar86 + fVar39 * (fVar31 + fVar39 * (fVar79 + fVar39 * (fVar20 - fVar39 
                                                  * fVar74)))));
  auVar36._12_4_ =
       auVar35._12_4_ *
       (fVar82 + fVar40 * (fVar86 + fVar40 * (fVar31 + fVar40 * (fVar79 + fVar40 * (fVar20 - fVar40 
                                                  * fVar74)))));
  fVar37 = 90.0;
  if (fVar18 <= 0.0) {
    fVar37 = -90.0;
  }
  auVar11._4_4_ = fVar19;
  auVar11._0_4_ = fVar29;
  auVar11._8_4_ = fVar33;
  auVar11._12_4_ = fVar34;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar29;
  auVar12._8_4_ = fVar33;
  auVar12._12_4_ = fVar34;
  auVar44 = NEON_ext(auVar11,auVar12,8,1);
  fVar37 = fVar37 * (fVar21 / *(float *)PTR_FloatDegree180_04372ce0);
  fVar38 = fVar37 * fVar25;
  auVar35 = NEON_ext(auVar36,auVar36,8,1);
  fVar33 = auVar35._0_4_;
  fVar34 = auVar44._0_4_;
  auVar24._0_4_ =
       (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar24._4_4_ = (int)(fVar38 + (float)(-(uint)(0.0 <= fVar38) & 0x80000000 ^ 0xbf000000));
  auVar24._8_4_ =
       (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar24._12_4_ =
       (int)(fVar25 * 0.0 + (float)(-(uint)(0.0 <= fVar25 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar35 = NEON_scvtf(auVar24,4);
  fVar25 = 0.0 - auVar35._0_4_ * fVar43;
  fVar37 = fVar37 - auVar35._4_4_ * fVar43;
  fVar38 = 0.0 - auVar35._8_4_ * fVar43;
  fVar43 = 0.0 - auVar35._12_4_ * fVar43;
  iVar16 = -(uint)(fVar52 < fVar25);
  iVar6 = -(uint)(fVar52 < fVar37);
  bVar46 = (byte)((uint)iVar6 >> 8);
  bVar47 = (byte)((uint)iVar6 >> 0x10);
  bVar48 = (byte)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(fVar52 < fVar38);
  iVar8 = -(uint)(fVar52 < fVar43);
  bVar49 = (byte)((uint)iVar8 >> 8);
  bVar50 = (byte)((uint)iVar8 >> 0x10);
  bVar51 = (byte)((uint)iVar8 >> 0x18);
  auVar68[0xc] = (byte)iVar8;
  auVar68._8_4_ = iVar7;
  auVar68[0xd] = bVar49;
  auVar68[0xe] = bVar50;
  auVar68[0xf] = bVar51;
  auVar68[4] = (byte)iVar6;
  auVar68._0_4_ = iVar16;
  auVar68[5] = bVar46;
  auVar68[6] = bVar47;
  auVar68[7] = bVar48;
  auVar71._4_4_ = fVar37;
  auVar71._0_4_ = fVar25;
  auVar71._8_4_ = fVar38;
  auVar71._12_4_ = fVar43;
  auVar9._4_4_ = fVar21 - fVar37;
  auVar9._0_4_ = fVar21 - fVar25;
  auVar9._8_4_ = fVar21 - fVar38;
  auVar9._12_4_ = fVar21 - fVar43;
  auVar69._4_4_ = fVar37;
  auVar69._0_4_ = fVar25;
  auVar69._8_4_ = fVar38;
  auVar69._12_4_ = fVar43;
  auVar69 = auVar69 ^ (auVar71 ^ auVar9) & auVar68;
  auVar57._0_4_ = -(uint)(auVar69._0_4_ < fVar30);
  auVar57._4_4_ = -(uint)(auVar69._4_4_ < fVar30);
  auVar57._8_4_ = -(uint)(auVar69._8_4_ < fVar30);
  auVar57._12_4_ = -(uint)(auVar69._12_4_ < fVar30);
  fVar41 = (float)DAT_0388a870;
  fVar42 = (float)((ulong)DAT_0388a870 >> 0x20);
  auVar45[0] = (byte)auVar57._0_4_ | (byte)iVar16;
  auVar45[1] = (byte)((uint)auVar57._0_4_ >> 8) | (byte)((uint)iVar16 >> 8);
  auVar45[2] = (byte)((uint)auVar57._0_4_ >> 0x10) | (byte)((uint)iVar16 >> 0x10);
  auVar45[3] = (byte)((uint)auVar57._0_4_ >> 0x18) | (byte)((uint)iVar16 >> 0x18);
  auVar45[4] = (byte)auVar57._4_4_ | (byte)iVar6;
  auVar45[5] = (byte)((uint)auVar57._4_4_ >> 8) | bVar46;
  auVar45[6] = (byte)((uint)auVar57._4_4_ >> 0x10) | bVar47;
  auVar45[7] = (byte)((uint)auVar57._4_4_ >> 0x18) | bVar48;
  auVar45[8] = (byte)auVar57._8_4_ | (byte)iVar7;
  auVar45[9] = (byte)((uint)auVar57._8_4_ >> 8) | (byte)((uint)iVar7 >> 8);
  auVar45[10] = (byte)((uint)auVar57._8_4_ >> 0x10) | (byte)((uint)iVar7 >> 0x10);
  auVar45[0xb] = (byte)((uint)auVar57._8_4_ >> 0x18) | (byte)((uint)iVar7 >> 0x18);
  auVar45[0xc] = (byte)auVar57._12_4_ | (byte)iVar8;
  auVar45[0xd] = (byte)((uint)auVar57._12_4_ >> 8) | bVar49;
  auVar45[0xe] = (byte)((uint)auVar57._12_4_ >> 0x10) | bVar50;
  auVar45[0xf] = (byte)((uint)auVar57._12_4_ >> 0x18) | bVar51;
  auVar10._4_4_ = fVar22 - auVar69._4_4_;
  auVar10._0_4_ = fVar22 - auVar69._0_4_;
  auVar10._8_4_ = fVar22 - auVar69._8_4_;
  auVar10._12_4_ = fVar22 - auVar69._12_4_;
  auVar69 = auVar69 ^ (auVar69 ^ auVar10) & auVar57;
  auVar54 = auVar54 ^ (auVar54 ^ auVar32) & auVar45;
  fVar56 = auVar69._0_4_;
  fVar21 = fVar56 * fVar56;
  fVar58 = auVar69._4_4_;
  fVar22 = fVar58 * fVar58;
  fVar59 = auVar69._8_4_;
  fVar25 = fVar59 * fVar59;
  fVar60 = auVar69._12_4_;
  fVar30 = fVar60 * fVar60;
  fVar39 = (float)DAT_0388a618;
  fVar40 = (float)((ulong)DAT_0388a618 >> 0x20);
  fVar38 = auVar36._4_4_ * fVar39;
  fVar52 = fVar40 * 0.0;
  fVar66 = (float)_UNK_03889208;
  fVar67 = (float)((ulong)_UNK_03889208 >> 0x20);
  fVar65 = (float)_DAT_03889200;
  uVar13 = (ulong)_DAT_03889200 >> 0x20;
  fVar84 = (float)_UNK_03889d58;
  fVar85 = (float)((ulong)_UNK_03889d58 >> 0x20);
  fVar83 = (float)_DAT_03889d50;
  uVar14 = (ulong)_DAT_03889d50 >> 0x20;
  fVar37 = *(float *)(param_1 + 0x194) + *(float *)(param_1 + 400);
  *(float *)(param_1 + 400) = fVar37;
  auVar32 = *(undefined1 (*) [16])(param_1 + 0x170);
  fVar37 = fVar37 / fVar18;
  fVar26 = auVar32._0_4_;
  fVar27 = auVar32._4_4_;
  fVar43 = *(float *)(param_1 + 0x14c);
  fVar28 = auVar32._8_4_;
  auVar55._0_4_ =
       fVar56 * (fVar78 + fVar21 * (fVar72 + fVar21 * (fVar4 + fVar21 * (fVar70 + fVar21 * (fVar5 - 
                                                  fVar21 * fVar53)))));
  auVar55._4_4_ =
       fVar58 * (fVar80 + fVar22 * (fVar72 + fVar22 * (fVar4 + fVar22 * (fVar70 + fVar22 * (fVar5 - 
                                                  fVar22 * fVar53)))));
  auVar55._8_4_ =
       fVar59 * (fVar81 + fVar25 * (fVar72 + fVar25 * (fVar4 + fVar25 * (fVar70 + fVar25 * (fVar5 - 
                                                  fVar25 * fVar53)))));
  auVar55._12_4_ =
       fVar60 * (fVar82 + fVar30 * (fVar72 + fVar30 * (fVar4 + fVar30 * (fVar70 + fVar30 * (fVar5 - 
                                                  fVar30 * fVar53)))));
  auVar35 = NEON_ext(auVar55,auVar55,8,1);
  auVar23._0_4_ =
       auVar54._0_4_ *
       (fVar78 + fVar21 * (fVar86 + fVar21 * (fVar31 + fVar21 * (fVar79 + fVar21 * (fVar20 - fVar21 
                                                  * fVar74)))));
  auVar23._4_4_ =
       auVar54._4_4_ *
       (fVar80 + fVar22 * (fVar86 + fVar22 * (fVar31 + fVar22 * (fVar79 + fVar22 * (fVar20 - fVar22 
                                                  * fVar74)))));
  auVar23._8_4_ =
       auVar54._8_4_ *
       (fVar81 + fVar25 * (fVar86 + fVar25 * (fVar31 + fVar25 * (fVar79 + fVar25 * (fVar20 - fVar25 
                                                  * fVar74)))));
  auVar23._12_4_ =
       auVar54._12_4_ *
       (fVar82 + fVar30 * (fVar86 + fVar30 * (fVar31 + fVar30 * (fVar79 + fVar30 * (fVar20 - fVar30 
                                                  * fVar74)))));
  fVar5 = *param_2 +
          (fVar33 * auVar36._4_4_ * fVar26 +
           (fVar34 * auVar36._0_4_ * fVar65 + fVar33 * fVar19 * fVar29) * fVar27 +
          (fVar34 * fVar29 * fVar83 + fVar33 * fVar19 * auVar36._0_4_) * fVar28) * fVar43;
  fVar4 = param_2[2] +
          (fVar19 * fVar41 * fVar26 + (auVar36._0_4_ * 0.0 * fVar66 + fVar38 * fVar29) * fVar27 +
          (fVar29 * 0.0 * fVar84 + fVar38 * auVar36._0_4_) * fVar28) * fVar43;
  fVar20 = param_2[3] +
           (fVar42 * 0.0 * fVar26 + (auVar36._0_4_ * 0.0 * fVar67 + fVar52 * fVar29) * fVar27 +
           (fVar29 * 0.0 * fVar85 + fVar52 * auVar36._0_4_) * fVar28) * fVar43;
  auVar71 = NEON_ext(auVar23,auVar23,8,1);
  fVar39 = auVar23._4_4_ * fVar39;
  fVar40 = fVar40 * 0.0;
  fVar52 = auVar71._0_4_ * auVar55._4_4_;
  fVar31 = *(float *)(param_1 + 0x1c0);
  fVar18 = *(float *)(param_1 + 0x1c4);
  fVar21 = *(float *)(param_1 + 0x1c8);
  fVar22 = *(float *)(param_1 + 0x1cc);
  fVar70 = (float)(CONCAT17((char)((uint)fVar20 >> 0x18),
                            CONCAT16((char)((uint)fVar20 >> 0x10),
                                     CONCAT15((char)((uint)fVar20 >> 8),
                                              CONCAT14(SUB41(fVar20,0),fVar4)))) >> 0x20);
  fVar38 = fVar22 - fVar70;
  fVar25 = (fVar31 - fVar5) * (fVar31 - fVar5);
  fVar30 = (fVar21 - fVar4) * (fVar21 - fVar4);
  fVar38 = fVar38 * fVar38;
  auVar32._4_4_ = 0;
  auVar32._0_4_ = fVar25;
  auVar32._8_4_ = fVar30;
  auVar32._12_4_ = fVar38;
  auVar44._4_4_ = 0;
  auVar44._0_4_ = fVar25;
  auVar44._8_4_ = fVar30;
  auVar44._12_4_ = fVar38;
  auVar54 = NEON_ext(auVar32,auVar44,8,1);
  fVar38 = *(float *)(param_1 + 0x154) * SQRT(auVar54._0_4_ + fVar25 + auVar54._4_4_ + 0.0);
  fVar25 = (auVar71._0_4_ * auVar23._4_4_ * fVar26 +
            (auVar35._0_4_ * auVar23._0_4_ * fVar65 + fVar52 * auVar55._0_4_) * fVar27 +
           (auVar35._0_4_ * auVar55._0_4_ * fVar83 + fVar52 * auVar23._0_4_) * fVar28) * fVar38 +
           (fVar31 + fVar5) * 0.5;
  fVar30 = (auVar55._4_4_ * fVar41 * fVar26 +
            (auVar23._0_4_ * 0.0 * fVar66 + fVar39 * auVar55._0_4_) * fVar27 +
           (auVar55._0_4_ * 0.0 * fVar84 + fVar39 * auVar23._0_4_) * fVar28) * fVar38 +
           (fVar21 + fVar4) * 0.5;
  fVar20 = (fVar42 * 0.0 * fVar26 + (auVar23._0_4_ * 0.0 * fVar67 + fVar40 * auVar55._0_4_) * fVar27
           + (auVar55._0_4_ * 0.0 * fVar85 + fVar40 * auVar23._0_4_) * fVar28) * fVar38 +
           (fVar22 + fVar20) * 0.5;
  fVar31 = fVar31 + (fVar25 - fVar31) * fVar37;
  fVar53 = fVar18 + (0.0 - fVar18) * fVar37;
  fVar21 = fVar21 + (fVar30 - fVar21) * fVar37;
  fVar22 = fVar22 + (fVar20 - fVar22) * fVar37;
  fVar38 = fVar25 + (fVar25 - fVar25) * fVar37;
  fVar39 = fVar37 * 0.0 + 0.0;
  fVar40 = fVar30 + (fVar30 - fVar30) * fVar37;
  fVar52 = fVar20 + (fVar20 - fVar20) * fVar37;
  fVar31 = fVar31 + (fVar38 - fVar31) * fVar37;
  fVar53 = fVar53 + (fVar39 - fVar53) * fVar37;
  fVar21 = fVar21 + (fVar40 - fVar21) * fVar37;
  fVar22 = fVar22 + (fVar52 - fVar22) * fVar37;
  fVar87 = fVar31 + ((fVar38 + ((fVar25 + (fVar5 - fVar25) * fVar37) - fVar38) * fVar37) - fVar31) *
                    fVar37;
  register0x000050e4 =
       fVar53 + ((fVar39 + ((fVar37 * 0.0 + 0.0) - fVar39) * fVar37) - fVar53) * fVar37;
  register0x000050e8 =
       fVar21 + ((fVar40 + ((fVar30 + (fVar4 - fVar30) * fVar37) - fVar40) * fVar37) - fVar21) *
                fVar37;
  register0x000050ec =
       fVar22 + ((fVar52 + ((fVar20 + (fVar70 - fVar20) * fVar37) - fVar52) * fVar37) - fVar22) *
                fVar37;
  local_60._8_8_ = fVar87._8_8_;
  local_60._0_8_ =
       CONCAT44((fVar18 + param_2[1] +
                          (fVar34 * auVar36._4_4_ * fVar26 +
                           (fVar33 * auVar36._0_4_ * (float)uVar13 + fVar34 * fVar19 * fVar29) *
                           fVar27 + (fVar33 * fVar29 * (float)uVar14 +
                                    fVar34 * fVar19 * auVar36._0_4_) * fVar28) * fVar43) * 0.5,
                fVar87);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00ac3fa4(&local_78,*(long *)(param_1 + 0x58) + 0x160);
  FUN_00be5694(&local_68,&local_78);
  puVar15 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar16 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar16 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_48 = *puVar15;
      FUN_02a44274(lVar17 + 0xd8,&local_48);
    }
  }
  if ((local_68 != (long *)0x0) &&
     (local_60 = FUN_01a8afd4(0x42480000,local_68,local_60), local_68 != (long *)0x0)) {
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return local_60;
}


