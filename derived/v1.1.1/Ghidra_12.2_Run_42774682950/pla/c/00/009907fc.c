/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009907fc; name: FUN_009907fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009907fc(long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_var;
  undefined1 auVar19 [16];
  undefined8 extraout_var_00;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  float fVar32;
  int iVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar33;
  int iVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  float fVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  uint uVar54;
  uint uVar56;
  uint uVar57;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar58;
  uint uVar59;
  uint uVar62;
  float fVar63;
  uint uVar64;
  float fVar65;
  uint uVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  undefined8 uVar71;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar77 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar91 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar100 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar117 [16];
  float fVar122;
  undefined1 auVar123 [16];
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined4 local_134;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar6 = PTR_DAT_0437a100;
  puVar5 = PTR_DAT_0437a0f8;
  puVar4 = PTR_DAT_04379580;
  puVar3 = PTR_DAT_04379578;
  fVar21 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar36 = *(float *)PTR_FloatPi_04372cf0;
  fVar13 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar42 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar107 = -fVar36;
  fVar67 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar22 = *(float *)(param_1 + 0x540) * (fVar36 / fVar21);
  fVar23 = *(float *)PTR_CosCoefficients_04372d40;
  fVar78 = fVar22 * fVar13;
  auVar117 = NEON_fmov(0x3f800000,4);
  auVar91._0_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar91._4_4_ = (int)(fVar78 + (float)(-(uint)(0.0 <= fVar78) & 0x80000000 ^ 0xbf000000));
  auVar91._8_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar91._12_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar77 = NEON_scvtf(auVar91,4);
  fVar37 = *(float *)PTR_Float2Pi_04372d30;
  fVar78 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar58 = 0.0 - auVar77._0_4_ * fVar37;
  fVar22 = fVar22 - auVar77._4_4_ * fVar37;
  fVar63 = 0.0 - auVar77._8_4_ * fVar37;
  fVar65 = 0.0 - auVar77._12_4_ * fVar37;
  fVar106 = -fVar42;
  uVar43 = -(uint)(fVar42 < fVar58);
  uVar54 = -(uint)(fVar42 < fVar22);
  uVar56 = -(uint)(fVar42 < fVar63);
  uVar57 = -(uint)(fVar42 < fVar65);
  fVar97 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar58 = (float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)(fVar36 - fVar58)) & uVar43);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar36 - fVar22)) & uVar54);
  fVar63 = (float)((uint)fVar63 ^ ((uint)fVar63 ^ (uint)(fVar36 - fVar63)) & uVar56);
  fVar65 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)(fVar36 - fVar65)) & uVar57);
  fVar20 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  uVar59 = -(uint)(fVar58 < fVar106);
  uVar62 = -(uint)(fVar22 < fVar106);
  uVar64 = -(uint)(fVar63 < fVar106);
  uVar66 = -(uint)(fVar65 < fVar106);
  auVar100[0] = (byte)uVar59 | (byte)uVar43;
  auVar100[1] = (byte)(uVar59 >> 8) | (byte)(uVar43 >> 8);
  auVar100[2] = (byte)(uVar59 >> 0x10) | (byte)(uVar43 >> 0x10);
  auVar100[3] = (byte)(uVar59 >> 0x18) | (byte)(uVar43 >> 0x18);
  auVar100[4] = (byte)uVar62 | (byte)uVar54;
  auVar100[5] = (byte)(uVar62 >> 8) | (byte)(uVar54 >> 8);
  auVar100[6] = (byte)(uVar62 >> 0x10) | (byte)(uVar54 >> 0x10);
  auVar100[7] = (byte)(uVar62 >> 0x18) | (byte)(uVar54 >> 0x18);
  auVar100[8] = (byte)uVar64 | (byte)uVar56;
  auVar100[9] = (byte)(uVar64 >> 8) | (byte)(uVar56 >> 8);
  auVar100[10] = (byte)(uVar64 >> 0x10) | (byte)(uVar56 >> 0x10);
  auVar100[0xb] = (byte)(uVar64 >> 0x18) | (byte)(uVar56 >> 0x18);
  auVar100[0xc] = (byte)uVar66 | (byte)uVar57;
  auVar100[0xd] = (byte)(uVar66 >> 8) | (byte)(uVar57 >> 8);
  auVar100[0xe] = (byte)(uVar66 >> 0x10) | (byte)(uVar57 >> 0x10);
  auVar100[0xf] = (byte)(uVar66 >> 0x18) | (byte)(uVar57 >> 0x18);
  fVar44 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  fVar58 = (float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)(fVar107 - fVar58)) & uVar59);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar107 - fVar22)) & uVar62);
  fVar63 = (float)((uint)fVar63 ^ ((uint)fVar63 ^ (uint)(fVar107 - fVar63)) & uVar64);
  fVar65 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)(fVar107 - fVar65)) & uVar66);
  fVar73 = fVar58 * fVar58;
  fVar79 = fVar22 * fVar22;
  fVar83 = fVar63 * fVar63;
  fVar86 = fVar65 * fVar65;
  fVar46 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar45 = *(float *)PTR_SinCoefficients_04372d28;
  fVar88 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  auVar123 = NEON_fmov(0xbf800000,4);
  fVar55 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  auVar77 = auVar117 ^ (auVar117 ^ auVar123) & auVar100;
  fVar98 = auVar117._0_4_;
  fVar101 = auVar117._4_4_;
  fVar103 = auVar117._8_4_;
  fVar105 = auVar117._12_4_;
  auVar48._0_4_ =
       auVar77._0_4_ *
       (fVar98 + fVar73 * (fVar44 + fVar73 * (fVar46 + fVar73 * (fVar97 + fVar73 * (fVar20 - fVar73 
                                                  * fVar23)))));
  auVar48._4_4_ =
       auVar77._4_4_ *
       (fVar101 +
       fVar79 * (fVar44 + fVar79 * (fVar46 + fVar79 * (fVar97 + fVar79 * (fVar20 - fVar79 * fVar23))
                                   )));
  auVar48._8_4_ =
       auVar77._8_4_ *
       (fVar103 +
       fVar83 * (fVar44 + fVar83 * (fVar46 + fVar83 * (fVar97 + fVar83 * (fVar20 - fVar83 * fVar23))
                                   )));
  auVar48._12_4_ =
       auVar77._12_4_ *
       (fVar105 +
       fVar86 * (fVar44 + fVar86 * (fVar46 + fVar86 * (fVar97 + fVar86 * (fVar20 - fVar86 * fVar23))
                                   )));
  auVar100 = NEON_ext(auVar48,auVar48,8,1);
  auVar77._0_4_ =
       fVar58 * (fVar98 + fVar73 * (fVar67 + fVar73 * (fVar55 + fVar73 * (fVar88 + fVar73 * (fVar78 
                                                  - fVar73 * fVar45)))));
  auVar77._4_4_ =
       fVar22 * (fVar101 +
                fVar79 * (fVar67 + fVar79 * (fVar55 + fVar79 * (fVar88 + fVar79 * (fVar78 - fVar79 *
                                                                                            fVar45))
                                            )));
  auVar77._8_4_ =
       fVar63 * (fVar103 +
                fVar83 * (fVar67 + fVar83 * (fVar55 + fVar83 * (fVar88 + fVar83 * (fVar78 - fVar83 *
                                                                                            fVar45))
                                            )));
  auVar77._12_4_ =
       fVar65 * (fVar105 +
                fVar86 * (fVar67 + fVar86 * (fVar55 + fVar86 * (fVar88 + fVar86 * (fVar78 - fVar86 *
                                                                                            fVar45))
                                            )));
  auVar91 = NEON_ext(auVar77,auVar77,8,1);
  fVar22 = auVar100._0_4_;
  fVar58 = auVar91._0_4_;
  fVar63 = (float)DAT_0388a618;
  fVar86 = auVar48._4_4_ * fVar63;
  fVar74 = fVar22 * auVar48._4_4_;
  fVar80 = fVar58 * auVar48._4_4_;
  fVar23 = -fVar23;
  fVar99 = (float)_DAT_03889200;
  fVar102 = (float)((ulong)_DAT_03889200 >> 0x20);
  fVar104 = (float)_UNK_03889208;
  fVar116 = (float)_DAT_03889a80;
  fVar118 = (float)((ulong)_DAT_03889a80 >> 0x20);
  fVar120 = (float)_UNK_03889a88;
  fVar122 = (float)((ulong)_UNK_03889a88 >> 0x20);
  fVar112 = (float)DAT_0388a140;
  fVar113 = (float)((ulong)DAT_0388a140 >> 0x20);
  fVar114 = (float)DAT_0388a148;
  fVar115 = (float)((ulong)DAT_0388a148 >> 0x20);
  fVar65 = fVar58 * auVar48._0_4_ * fVar99 + fVar22 * auVar77._4_4_ * auVar77._0_4_;
  fVar73 = fVar22 * auVar48._0_4_ * fVar102 + fVar58 * auVar77._4_4_ * auVar77._0_4_;
  fVar79 = auVar48._0_4_ * 0.0 * fVar104 + fVar86 * auVar77._0_4_;
  fVar75 = (float)_DAT_03889d50;
  fVar81 = (float)((ulong)_DAT_03889d50 >> 0x20);
  fVar84 = (float)_UNK_03889d58;
  fVar83 = fVar58 * auVar77._0_4_ * fVar75 + fVar22 * auVar77._4_4_ * auVar48._0_4_;
  fVar58 = fVar22 * auVar77._0_4_ * fVar81 + fVar58 * auVar77._4_4_ * auVar48._0_4_;
  fVar86 = auVar77._0_4_ * 0.0 * fVar84 + fVar86 * auVar48._0_4_;
  fVar89 = (float)_DAT_03888d10;
  fVar92 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar94 = (float)_UNK_03888d18;
  fVar96 = (float)((ulong)_UNK_03888d18 >> 0x20);
  fVar108 = (fVar116 * fVar74 + fVar112 * fVar80) - fVar89 * auVar77._4_4_;
  fVar109 = (fVar118 * fVar74 + fVar113 * fVar80) - fVar92 * auVar77._4_4_;
  fVar110 = (fVar120 * fVar74 + fVar114 * fVar80) - fVar94 * auVar77._4_4_;
  fVar111 = (fVar122 * fVar74 + fVar115 * fVar80) - fVar96 * auVar77._4_4_;
  fVar76 = fVar116 * fVar65 + fVar112 * fVar73 + fVar89 * fVar79;
  fVar82 = fVar118 * fVar65 + fVar113 * fVar73 + fVar92 * fVar79;
  fVar85 = fVar120 * fVar65 + fVar114 * fVar73 + fVar94 * fVar79;
  fVar87 = fVar122 * fVar65 + fVar115 * fVar73 + fVar96 * fVar79;
  fVar79 = (float)_DAT_043a9000;
  fVar22 = fVar116 * fVar83 + fVar112 * fVar58 + fVar89 * fVar86;
  fVar65 = fVar118 * fVar83 + fVar113 * fVar58 + fVar92 * fVar86;
  fVar73 = fVar120 * fVar83 + fVar114 * fVar58 + fVar94 * fVar86;
  fVar83 = fVar122 * fVar83 + fVar115 * fVar58 + fVar96 * fVar86;
  fVar124 = (float)_DAT_043a9020;
  fVar74 = (float)_DAT_043a8fe0;
  fVar32 = (float)((ulong)_DAT_043a8fe0 >> 0x20);
  fVar95 = (float)_DAT_043a9010;
  fVar119 = (float)((ulong)_DAT_043a9010 >> 0x20);
  fVar90 = (float)_DAT_043a8ff0;
  fVar58 = (float)((ulong)_DAT_043a9000 >> 0x20);
  fVar127 = (float)_DAT_043a9030;
  fVar121 = (float)uRam00000000043a9018;
  fVar128 = (float)((ulong)_DAT_043a9030 >> 0x20);
  fVar86 = (float)uRam00000000043a9008;
  fVar69 = (float)uRam00000000043a8fe8;
  fVar80 = *(float *)(param_1 + 0x530) + 0.0;
  fVar68 = *(float *)(param_1 + 0x534) + 0.0;
  fVar70 = *(float *)(param_1 + 0x538) + 0.0;
  fVar72 = *(float *)(param_1 + 0x53c) + 0.0;
  fVar93 = (float)((ulong)_DAT_043a8ff0 >> 0x20);
  fVar125 = (float)((ulong)_DAT_043a9020 >> 0x20);
  fVar129 = (float)uRam00000000043a9038;
  fVar126 = (float)uRam00000000043a9028;
  _fStack_a8 = CONCAT44(fVar72 + fVar111 * fVar95 + fVar87 * fVar119 + fVar83 * fVar121,
                        fVar70 + fVar110 * fVar95 + fVar85 * fVar119 + fVar73 * fVar121);
  _local_b0 = CONCAT44(fVar68 + fVar109 * fVar95 + fVar82 * fVar119 + fVar65 * fVar121,
                       fVar80 + fVar108 * fVar95 + fVar76 * fVar119 + fVar22 * fVar121);
  fVar95 = (float)uRam00000000043a8ff8;
  _fStack_b8 = CONCAT44(fVar72 + fVar111 * fVar79 + fVar87 * fVar58 + fVar83 * fVar86,
                        fVar70 + fVar110 * fVar79 + fVar85 * fVar58 + fVar73 * fVar86);
  _local_c0 = CONCAT44(fVar68 + fVar109 * fVar79 + fVar82 * fVar58 + fVar65 * fVar86,
                       fVar80 + fVar108 * fVar79 + fVar76 * fVar58 + fVar22 * fVar86);
  lVar11 = 0;
  uVar10 = 0x1027000;
  _fStack_88 = CONCAT44(fVar72 + fVar111 * fVar127 + fVar87 * fVar128 + fVar83 * fVar129,
                        fVar70 + fVar110 * fVar127 + fVar85 * fVar128 + fVar73 * fVar129);
  _local_90 = CONCAT44(fVar68 + fVar109 * fVar127 + fVar82 * fVar128 + fVar65 * fVar129,
                       fVar80 + fVar108 * fVar127 + fVar76 * fVar128 + fVar22 * fVar129);
  fVar58 = fVar80 + fVar108 * fVar90 + fVar76 * fVar93 + fVar22 * fVar95;
  fVar79 = fVar70 + fVar110 * fVar90 + fVar85 * fVar93 + fVar73 * fVar95;
  fVar86 = fVar72 + fVar111 * fVar90 + fVar87 * fVar93 + fVar83 * fVar95;
  _fStack_98 = CONCAT44(fVar72 + fVar111 * fVar124 + fVar87 * fVar125 + fVar83 * fVar126,
                        fVar70 + fVar110 * fVar124 + fVar85 * fVar125 + fVar73 * fVar126);
  _local_a0 = CONCAT44(fVar68 + fVar109 * fVar124 + fVar82 * fVar125 + fVar65 * fVar126,
                       fVar80 + fVar108 * fVar124 + fVar76 * fVar125 + fVar22 * fVar126);
  fVar80 = fVar80 + fVar108 * fVar74 + fVar76 * fVar32 + fVar22 * fVar69;
  fVar70 = fVar70 + fVar110 * fVar74 + fVar85 * fVar32 + fVar73 * fVar69;
  fVar72 = fVar72 + fVar111 * fVar74 + fVar87 * fVar32 + fVar83 * fVar69;
  fVar45 = -fVar45;
  uStack_d8 = CONCAT44(fVar72,fVar70);
  local_e0 = CONCAT44(fVar68 + fVar109 * fVar74 + fVar82 * fVar32 + fVar65 * fVar69,fVar80);
  _fStack_c8 = CONCAT44(fVar86,fVar79);
  _local_d0 = CONCAT44(fVar68 + fVar109 * fVar90 + fVar82 * fVar93 + fVar65 * fVar95,fVar58);
  local_134 = 0x1001000;
  puVar12 = (undefined8 *)(param_1 + 0x180);
  do {
    local_f0 = *(undefined8 *)((long)&local_e0 + lVar11);
    local_e8 = *(undefined8 *)((long)&uStack_d8 + lVar11);
    if (((*puVar3 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar3), iVar24 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar3);
    }
    lVar9 = *(long *)puVar4;
    *(long *)PTR_DAT_04379588 = lVar9;
    lVar9 = *(long *)(lVar9 + 200);
    uVar1 = uVar10;
    if ((*(char *)(lVar9 + 0x566) == '\0') && (uVar1 = 0x26000, *(char *)(lVar9 + 0x568) != '\0')) {
      uVar1 = local_134;
    }
    uVar8 = FUN_00ab5160(&local_f0,&local_100,uVar1,5);
    if ((uVar8 & 1) != 0) {
      local_f0 = local_100;
      local_e8 = uStack_f8;
    }
    puVar12[-1] = local_e8;
    puVar12[-2] = local_f0;
    fVar22 = fVar58 - fVar80;
    fVar65 = fVar79 - fVar70;
    fVar73 = fVar86 - fVar72;
    if (lVar11 != 0) {
      fVar22 = fVar80 - *(float *)((long)&local_e0 + lVar11);
      fVar65 = fVar70 - *(float *)((long)&uStack_d8 + lVar11);
      fVar73 = fVar72 - *(float *)((long)&uStack_d8 + lVar11 + 4);
    }
    auVar25._0_4_ = fVar22 * fVar22;
    auVar25._4_4_ = 0;
    auVar25._8_4_ = fVar65 * fVar65;
    auVar25._12_4_ = fVar73 * fVar73;
    auVar77 = NEON_ext(auVar25,auVar25,8,1);
    fVar74 = auVar77._0_4_ + auVar25._0_4_;
    fVar32 = auVar77._4_4_ + 0.0;
    fVar83 = fVar74 + fVar32;
    fVar74 = fVar74 + fVar32;
    auVar26._8_8_ = CONCAT44(fVar74,fVar83);
    auVar26._0_8_ = CONCAT44(fVar74,fVar83);
    auVar77 = NEON_frsqrte(auVar26,4);
    auVar47._0_4_ = auVar77._0_4_ * fVar83;
    auVar47._4_4_ = auVar77._4_4_ * fVar74;
    auVar47._8_4_ = auVar77._8_4_ * fVar83;
    auVar47._12_4_ = auVar77._12_4_ * fVar74;
    auVar48 = NEON_frsqrts(auVar77,auVar47,4);
    auVar38._0_4_ = auVar77._0_4_ * auVar48._0_4_;
    auVar38._4_4_ = auVar77._4_4_ * auVar48._4_4_;
    auVar38._8_4_ = auVar77._8_4_ * auVar48._8_4_;
    auVar38._12_4_ = auVar77._12_4_ * auVar48._12_4_;
    auVar49._0_4_ = fVar83 * auVar38._0_4_;
    auVar49._4_4_ = fVar74 * auVar38._4_4_;
    auVar49._8_4_ = fVar83 * auVar38._8_4_;
    auVar49._12_4_ = fVar74 * auVar38._12_4_;
    iVar24 = -(uint)(fVar83 == 0.0);
    iVar33 = -(uint)(fVar74 == 0.0);
    iVar34 = -(uint)(fVar83 == 0.0);
    iVar35 = -(uint)(fVar74 == 0.0);
    auVar77 = NEON_frsqrts(auVar38,auVar49,4);
    fVar22 = fVar22 * auVar38._0_4_ * auVar77._0_4_;
    fVar83 = auVar38._4_4_ * auVar77._4_4_ * 0.0;
    fVar65 = fVar65 * auVar38._8_4_ * auVar77._8_4_;
    fVar73 = fVar73 * auVar38._12_4_ * auVar77._12_4_;
    auVar14._0_8_ =
         CONCAT17((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                  CONCAT16((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                           CONCAT15((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                    CONCAT14(SUB41(fVar83,0) & ~(byte)iVar33,
                                             CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                      ~(byte)((uint)iVar24 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                               ~(byte)((uint)iVar24 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                        ~(byte)((uint)iVar24 >> 8),
                                                                        SUB41(fVar22,0) &
                                                                        ~(byte)iVar24)))))));
    auVar14[8] = SUB41(fVar65,0) & ~(byte)iVar34;
    auVar14[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar14[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar14[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    auVar14[0xc] = SUB41(fVar73,0) & ~(byte)iVar35;
    auVar14[0xd] = (byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar14[0xe] = (byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar14[0xf] = (byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    uStack_108 = auVar14._8_8_;
    local_110 = auVar14._0_8_;
    auVar77 = FUN_009960a0(puVar5,&local_110,puVar6);
    lVar11 = lVar11 + 0x10;
    puVar12[1] = auVar77._8_8_;
    *puVar12 = auVar77._0_8_;
    puVar12 = puVar12 + 4;
  } while (lVar11 != 0x60);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x178);
  fVar22 = (fVar36 / fVar21) * *(float *)(param_1 + 0x540);
  fVar58 = fVar13 * fVar22;
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 400);
  auVar15._0_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar15._4_4_ = (int)(fVar58 + (float)(-(uint)(0.0 <= fVar58) & 0x80000000 ^ 0xbf000000));
  auVar15._8_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar15._12_4_ =
       (int)(fVar13 * 0.0 + (float)(-(uint)(0.0 <= fVar13 * 0.0) & 0x80000000 ^ 0xbf000000));
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x198);
  auVar77 = NEON_scvtf(auVar15,4);
  fVar58 = 0.0 - auVar77._0_4_ * fVar37;
  fVar22 = fVar22 - auVar77._4_4_ * fVar37;
  fVar13 = 0.0 - auVar77._8_4_ * fVar37;
  fVar21 = 0.0 - auVar77._12_4_ * fVar37;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1c0);
  uVar43 = -(uint)(fVar42 < fVar58);
  uVar54 = -(uint)(fVar42 < fVar22);
  uVar56 = -(uint)(fVar42 < fVar13);
  uVar57 = -(uint)(fVar42 < fVar21);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x1e8);
  fVar58 = (float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)(fVar36 - fVar58)) & uVar43);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar36 - fVar22)) & uVar54);
  fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar36 - fVar13)) & uVar56);
  fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)(fVar36 - fVar21)) & uVar57);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x1f0);
  uVar59 = -(uint)(fVar58 < fVar106);
  uVar62 = -(uint)(fVar22 < fVar106);
  uVar64 = -(uint)(fVar13 < fVar106);
  uVar66 = -(uint)(fVar21 < fVar106);
  auVar60[0] = (byte)uVar59 | (byte)uVar43;
  auVar60[1] = (byte)(uVar59 >> 8) | (byte)(uVar43 >> 8);
  auVar60[2] = (byte)(uVar59 >> 0x10) | (byte)(uVar43 >> 0x10);
  auVar60[3] = (byte)(uVar59 >> 0x18) | (byte)(uVar43 >> 0x18);
  auVar60[4] = (byte)uVar62 | (byte)uVar54;
  auVar60[5] = (byte)(uVar62 >> 8) | (byte)(uVar54 >> 8);
  auVar60[6] = (byte)(uVar62 >> 0x10) | (byte)(uVar54 >> 0x10);
  auVar60[7] = (byte)(uVar62 >> 0x18) | (byte)(uVar54 >> 0x18);
  auVar60[8] = (byte)uVar64 | (byte)uVar56;
  auVar60[9] = (byte)(uVar64 >> 8) | (byte)(uVar56 >> 8);
  auVar60[10] = (byte)(uVar64 >> 0x10) | (byte)(uVar56 >> 0x10);
  auVar60[0xb] = (byte)(uVar64 >> 0x18) | (byte)(uVar56 >> 0x18);
  auVar60[0xc] = (byte)uVar66 | (byte)uVar57;
  auVar60[0xd] = (byte)(uVar66 >> 8) | (byte)(uVar57 >> 8);
  auVar60[0xe] = (byte)(uVar66 >> 0x10) | (byte)(uVar57 >> 0x10);
  auVar60[0xf] = (byte)(uVar66 >> 0x18) | (byte)(uVar57 >> 0x18);
  fVar58 = (float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)(fVar107 - fVar58)) & uVar59);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar107 - fVar22)) & uVar62);
  fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar107 - fVar13)) & uVar64);
  fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)(fVar107 - fVar21)) & uVar66);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
  fVar36 = fVar58 * fVar58;
  fVar37 = fVar22 * fVar22;
  fVar42 = fVar13 * fVar13;
  fVar65 = fVar21 * fVar21;
  auVar117 = auVar117 ^ (auVar117 ^ auVar123) & auVar60;
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
  uVar7 = uRam00000000043a9058;
  auVar16._0_4_ =
       fVar58 * (fVar98 + fVar36 * (fVar67 + fVar36 * (fVar55 + fVar36 * (fVar88 + fVar36 * (fVar78 
                                                  + fVar36 * fVar45)))));
  auVar16._4_4_ =
       fVar22 * (fVar101 +
                fVar37 * (fVar67 + fVar37 * (fVar55 + fVar37 * (fVar88 + fVar37 * (fVar78 + fVar37 *
                                                                                            fVar45))
                                            )));
  auVar16._8_4_ =
       fVar13 * (fVar103 +
                fVar42 * (fVar67 + fVar42 * (fVar55 + fVar42 * (fVar88 + fVar42 * (fVar78 + fVar42 *
                                                                                            fVar45))
                                            )));
  auVar16._12_4_ =
       fVar21 * (fVar105 +
                fVar65 * (fVar67 + fVar65 * (fVar55 + fVar65 * (fVar88 + fVar65 * (fVar78 + fVar65 *
                                                                                            fVar45))
                                            )));
  auVar27._0_4_ =
       auVar117._0_4_ *
       (fVar98 + fVar36 * (fVar44 + fVar36 * (fVar46 + fVar36 * (fVar97 + fVar36 * (fVar20 + fVar36 
                                                  * fVar23)))));
  auVar27._4_4_ =
       auVar117._4_4_ *
       (fVar101 +
       fVar37 * (fVar44 + fVar37 * (fVar46 + fVar37 * (fVar97 + fVar37 * (fVar20 + fVar37 * fVar23))
                                   )));
  auVar27._8_4_ =
       auVar117._8_4_ *
       (fVar103 +
       fVar42 * (fVar44 + fVar42 * (fVar46 + fVar42 * (fVar97 + fVar42 * (fVar20 + fVar42 * fVar23))
                                   )));
  auVar27._12_4_ =
       auVar117._12_4_ *
       (fVar105 +
       fVar65 * (fVar44 + fVar65 * (fVar46 + fVar65 * (fVar97 + fVar65 * (fVar20 + fVar65 * fVar23))
                                   )));
  auVar77 = NEON_ext(auVar16,auVar16,8,1);
  auVar117 = NEON_ext(auVar27,auVar27,8,1);
  fVar78 = auVar117._0_4_;
  fVar20 = auVar77._0_4_;
  fVar46 = fVar78 * auVar27._4_4_;
  fVar55 = fVar20 * auVar27._4_4_;
  fVar36 = (fVar116 * fVar46 + fVar112 * fVar55) - fVar89 * auVar16._4_4_;
  fVar37 = (fVar118 * fVar46 + fVar113 * fVar55) - fVar92 * auVar16._4_4_;
  fVar42 = (fVar120 * fVar46 + fVar114 * fVar55) - fVar94 * auVar16._4_4_;
  fVar44 = (fVar122 * fVar46 + fVar115 * fVar55) - fVar96 * auVar16._4_4_;
  fVar63 = auVar27._4_4_ * fVar63;
  fVar13 = fVar20 * auVar27._0_4_ * fVar99 + fVar78 * auVar16._4_4_ * auVar16._0_4_;
  fVar45 = fVar78 * auVar27._0_4_ * fVar102 + fVar20 * auVar16._4_4_ * auVar16._0_4_;
  fVar21 = auVar27._0_4_ * 0.0 * fVar104 + fVar63 * auVar16._0_4_;
  fVar46 = fVar20 * auVar16._0_4_ * fVar75 + fVar78 * auVar16._4_4_ * auVar27._0_4_;
  fVar78 = fVar78 * auVar16._0_4_ * fVar81 + fVar20 * auVar16._4_4_ * auVar27._0_4_;
  fVar20 = auVar16._0_4_ * 0.0 * fVar84 + fVar63 * auVar27._0_4_;
  fVar55 = fVar116 * fVar13 + fVar112 * fVar45 + fVar89 * fVar21;
  fVar22 = fVar118 * fVar13 + fVar113 * fVar45 + fVar92 * fVar21;
  fVar58 = fVar120 * fVar13 + fVar114 * fVar45 + fVar94 * fVar21;
  fVar13 = fVar122 * fVar13 + fVar115 * fVar45 + fVar96 * fVar21;
  auVar61._0_4_ = *(float *)(param_1 + 0x530) + 0.0;
  auVar61._4_4_ = *(float *)(param_1 + 0x534) + 0.0;
  auVar61._8_4_ = *(float *)(param_1 + 0x538) + 0.0;
  auVar61._12_4_ = *(float *)(param_1 + 0x53c) + 0.0;
  fVar21 = fVar116 * fVar46 + fVar112 * fVar78 + fVar89 * fVar20;
  fVar23 = fVar118 * fVar46 + fVar113 * fVar78 + fVar92 * fVar20;
  auVar117._0_8_ = CONCAT44(fVar23,fVar21);
  auVar117._8_4_ = fVar120 * fVar46 + fVar114 * fVar78 + fVar94 * fVar20;
  auVar117._12_4_ = fVar122 * fVar46 + fVar115 * fVar78 + fVar96 * fVar20;
  fVar20 = (float)_DAT_043a9040;
  fVar46 = (float)((ulong)_DAT_043a9040 >> 0x20);
  fVar45 = (float)uRam00000000043a9048;
  fVar78 = auVar61._0_4_ + fVar36 * fVar20 + fVar55 * fVar46 + fVar21 * fVar45;
  auVar17._0_8_ =
       CONCAT44(auVar61._4_4_ + fVar37 * fVar20 + fVar22 * fVar46 + fVar23 * fVar45,fVar78);
  auVar17._8_4_ = auVar61._8_4_ + fVar42 * fVar20 + fVar58 * fVar46 + auVar117._8_4_ * fVar45;
  auVar17._12_4_ = auVar61._12_4_ + fVar44 * fVar20 + fVar13 * fVar46 + auVar117._12_4_ * fVar45;
  fVar20 = (float)_DAT_043a9050;
  uStack_d8 = auVar17._8_8_;
  fVar46 = (float)((ulong)_DAT_043a9050 >> 0x20);
  auVar123._0_8_ = CONCAT44(fVar37 * fVar20 + fVar22 * fVar46,fVar36 * fVar20 + fVar55 * fVar46);
  auVar123._8_4_ = fVar42 * fVar20 + fVar58 * fVar46;
  auVar123._12_4_ = fVar44 * fVar20 + fVar13 * fVar46;
  local_e0 = auVar17._0_8_;
  if ((*puVar3 & 1) == 0) {
    uVar71 = auVar117._8_8_;
    uVar41 = auVar123._8_8_;
    iVar24 = __cxa_guard_acquire(PTR_DAT_04379578);
    auVar117._8_8_ = uVar71;
    auVar123._8_8_ = uVar41;
    if (iVar24 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  lVar11 = *(long *)puVar4;
  fVar20 = (float)uVar7;
  *(long *)PTR_DAT_04379588 = lVar11;
  lVar11 = *(long *)(lVar11 + 200);
  uVar1 = uVar10;
  if ((*(char *)(lVar11 + 0x566) == '\0') && (uVar1 = 0x26000, *(char *)(lVar11 + 0x568) != '\0')) {
    uVar1 = local_134;
  }
  fVar46 = auVar61._0_4_ + auVar123._0_4_ + auVar117._0_4_ * fVar20;
  fVar55 = auVar61._8_4_ + auVar123._8_4_ + auVar117._8_4_ * fVar20;
  fVar22 = auVar61._12_4_ + auVar123._12_4_ + auVar117._12_4_ * fVar20;
  uVar8 = FUN_00ab5160(&local_e0,&local_f0,uVar1,5);
  if ((uVar8 & 1) != 0) {
    local_e0 = local_f0;
    uStack_d8 = local_e8;
  }
  fVar45 = fVar46 - fVar78;
  fVar21 = fVar55 - auVar17._8_4_;
  fVar23 = fVar22 - auVar17._12_4_;
  auVar28._0_4_ = fVar45 * fVar45;
  auVar28._4_4_ = 0;
  auVar28._8_4_ = fVar21 * fVar21;
  auVar28._12_4_ = fVar23 * fVar23;
  auVar77 = NEON_ext(auVar28,auVar28,8,1);
  fVar13 = auVar77._0_4_ + auVar28._0_4_;
  fVar36 = auVar77._4_4_ + 0.0;
  fVar58 = fVar13 + fVar36;
  fVar13 = fVar13 + fVar36;
  *(undefined8 *)(param_1 + 0x2f8) = uStack_d8;
  auVar29._8_8_ = CONCAT44(fVar13,fVar58);
  auVar29._0_8_ = CONCAT44(fVar13,fVar58);
  auVar77 = NEON_frsqrte(auVar29,4);
  *(undefined8 *)(param_1 + 0x2f0) = local_e0;
  auVar50._0_4_ = auVar77._0_4_ * fVar58;
  auVar50._4_4_ = auVar77._4_4_ * fVar13;
  auVar50._8_4_ = auVar77._8_4_ * fVar58;
  auVar50._12_4_ = auVar77._12_4_ * fVar13;
  auVar48 = NEON_frsqrts(auVar77,auVar50,4);
  auVar39._0_4_ = auVar77._0_4_ * auVar48._0_4_;
  auVar39._4_4_ = auVar77._4_4_ * auVar48._4_4_;
  auVar39._8_4_ = auVar77._8_4_ * auVar48._8_4_;
  auVar39._12_4_ = auVar77._12_4_ * auVar48._12_4_;
  auVar51._0_4_ = fVar58 * auVar39._0_4_;
  auVar51._4_4_ = fVar13 * auVar39._4_4_;
  auVar51._8_4_ = fVar58 * auVar39._8_4_;
  auVar51._12_4_ = fVar13 * auVar39._12_4_;
  iVar24 = -(uint)(fVar58 == 0.0);
  iVar33 = -(uint)(fVar13 == 0.0);
  iVar34 = -(uint)(fVar58 == 0.0);
  iVar35 = -(uint)(fVar13 == 0.0);
  auVar77 = NEON_frsqrts(auVar39,auVar51,4);
  fVar45 = fVar45 * auVar39._0_4_ * auVar77._0_4_;
  fVar58 = auVar39._4_4_ * auVar77._4_4_ * 0.0;
  fVar21 = fVar21 * auVar39._8_4_ * auVar77._8_4_;
  fVar23 = fVar23 * auVar39._12_4_ * auVar77._12_4_;
  auVar18._0_8_ =
       CONCAT17((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                CONCAT16((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                         CONCAT15((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                  CONCAT14(SUB41(fVar58,0) & ~(byte)iVar33,
                                           CONCAT13((byte)((uint)fVar45 >> 0x18) &
                                                    ~(byte)((uint)iVar24 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                                             ~(byte)((uint)iVar24 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar45 >> 8) &
                                                                      ~(byte)((uint)iVar24 >> 8),
                                                                      SUB41(fVar45,0) &
                                                                      ~(byte)iVar24)))))));
  auVar18[8] = SUB41(fVar21,0) & ~(byte)iVar34;
  auVar18[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar34 >> 8);
  auVar18[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  auVar18[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  auVar18[0xc] = SUB41(fVar23,0) & ~(byte)iVar35;
  auVar18[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar18[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar18[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  uStack_f8 = auVar18._8_8_;
  local_100 = auVar18._0_8_;
  FUN_009960a0(PTR_DAT_0437a0f8,&local_100,PTR_DAT_0437a100);
  *(undefined8 *)(param_1 + 0x308) = extraout_var;
  *(undefined8 *)(param_1 + 0x300) = extraout_d0;
  local_e0 = CONCAT44(auVar61._4_4_ + auVar123._4_4_ + auVar117._4_4_ * fVar20,fVar46);
  auVar2._8_4_ = fVar55;
  auVar2._0_8_ = local_e0;
  auVar2._12_4_ = fVar22;
  uStack_d8 = auVar2._8_8_;
  if (((*puVar3 & 1) == 0) && (iVar24 = __cxa_guard_acquire(PTR_DAT_04379578), iVar24 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar11 = *(long *)puVar4;
  *(long *)PTR_DAT_04379588 = lVar11;
  lVar11 = *(long *)(lVar11 + 200);
  if ((*(char *)(lVar11 + 0x566) == '\0') && (uVar10 = 0x26000, *(char *)(lVar11 + 0x568) != '\0'))
  {
    uVar10 = local_134;
  }
  uVar8 = FUN_00ab5160(&local_e0,&local_f0,uVar10,5);
  if ((uVar8 & 1) != 0) {
    local_e0 = local_f0;
    uStack_d8 = local_e8;
  }
  fVar78 = fVar78 - fVar46;
  fVar55 = auVar17._8_4_ - fVar55;
  fVar22 = auVar17._12_4_ - fVar22;
  auVar30._0_4_ = fVar78 * fVar78;
  auVar30._4_4_ = 0;
  auVar30._8_4_ = fVar55 * fVar55;
  auVar30._12_4_ = fVar22 * fVar22;
  auVar77 = NEON_ext(auVar30,auVar30,8,1);
  fVar46 = auVar77._0_4_ + auVar30._0_4_;
  fVar58 = auVar77._4_4_ + 0.0;
  fVar20 = fVar46 + fVar58;
  fVar46 = fVar46 + fVar58;
  *(undefined8 *)(param_1 + 0x318) = uStack_d8;
  auVar31._8_8_ = CONCAT44(fVar46,fVar20);
  auVar31._0_8_ = CONCAT44(fVar46,fVar20);
  auVar77 = NEON_frsqrte(auVar31,4);
  *(undefined8 *)(param_1 + 0x310) = local_e0;
  auVar52._0_4_ = auVar77._0_4_ * fVar20;
  auVar52._4_4_ = auVar77._4_4_ * fVar46;
  auVar52._8_4_ = auVar77._8_4_ * fVar20;
  auVar52._12_4_ = auVar77._12_4_ * fVar46;
  auVar117 = NEON_frsqrts(auVar77,auVar52,4);
  auVar40._0_4_ = auVar77._0_4_ * auVar117._0_4_;
  auVar40._4_4_ = auVar77._4_4_ * auVar117._4_4_;
  auVar40._8_4_ = auVar77._8_4_ * auVar117._8_4_;
  auVar40._12_4_ = auVar77._12_4_ * auVar117._12_4_;
  auVar53._0_4_ = fVar20 * auVar40._0_4_;
  auVar53._4_4_ = fVar46 * auVar40._4_4_;
  auVar53._8_4_ = fVar20 * auVar40._8_4_;
  auVar53._12_4_ = fVar46 * auVar40._12_4_;
  iVar24 = -(uint)(fVar20 == 0.0);
  iVar33 = -(uint)(fVar46 == 0.0);
  iVar34 = -(uint)(fVar20 == 0.0);
  iVar35 = -(uint)(fVar46 == 0.0);
  auVar77 = NEON_frsqrts(auVar40,auVar53,4);
  fVar78 = fVar78 * auVar40._0_4_ * auVar77._0_4_;
  fVar20 = auVar40._4_4_ * auVar77._4_4_ * 0.0;
  fVar55 = fVar55 * auVar40._8_4_ * auVar77._8_4_;
  fVar22 = fVar22 * auVar40._12_4_ * auVar77._12_4_;
  auVar19._0_8_ =
       CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                         CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                  CONCAT14(SUB41(fVar20,0) & ~(byte)iVar33,
                                           CONCAT13((byte)((uint)fVar78 >> 0x18) &
                                                    ~(byte)((uint)iVar24 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar78 >> 0x10) &
                                                             ~(byte)((uint)iVar24 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar78 >> 8) &
                                                                      ~(byte)((uint)iVar24 >> 8),
                                                                      SUB41(fVar78,0) &
                                                                      ~(byte)iVar24)))))));
  auVar19[8] = SUB41(fVar55,0) & ~(byte)iVar34;
  auVar19[9] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar34 >> 8);
  auVar19[10] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  auVar19[0xb] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  auVar19[0xc] = SUB41(fVar22,0) & ~(byte)iVar35;
  auVar19[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar19[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar19[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  uStack_f8 = auVar19._8_8_;
  local_100 = auVar19._0_8_;
  FUN_009960a0(PTR_DAT_0437a0f8,&local_100,PTR_DAT_0437a100);
  *(undefined8 *)(param_1 + 0x328) = extraout_var_00;
  *(undefined8 *)(param_1 + 800) = extraout_d0_00;
  return;
}


