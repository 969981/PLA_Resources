/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c029b4; name: FUN_00c029b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00c029b4(long param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar22;
  uint uVar24;
  undefined1 auVar19 [16];
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar23;
  uint uVar25;
  undefined1 auVar20 [16];
  undefined4 uVar18;
  undefined8 extraout_var;
  undefined1 auVar21 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  float fVar37;
  float fVar36;
  undefined1 auVar31 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar54;
  uint uVar56;
  uint uVar58;
  undefined1 auVar52 [16];
  float fVar55;
  float fVar57;
  undefined1 auVar53 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar67;
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  ulong local_90;
  float fStack_88;
  float fStack_84;
  ulong local_80;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  *(float *)(param_1 + 0x1a0) = *(float *)(param_1 + 0x1a4) + *(float *)(param_1 + 0x1a0);
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x1d0);
  plVar11 = *(long **)(*(long *)(param_1 + 0x58) + 0x98);
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar26 = *(float *)PTR_FloatPi_04372cf0;
  fVar38 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar13 = *(float *)(param_1 + 0x1a8) * (fVar26 / fVar38);
  fVar14 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar22 = fVar13 * fVar14;
  fVar49 = *(float *)PTR_Float2Pi_04372d30;
  auVar19._0_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19._4_4_ = (int)(fVar22 + (float)(-(uint)(0.0 <= fVar22) & 0x80000000 ^ 0xbf000000));
  auVar19._8_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19._12_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19 = NEON_scvtf(auVar19,4);
  fVar39 = 0.0 - auVar19._0_4_ * fVar49;
  fVar13 = fVar13 - auVar19._4_4_ * fVar49;
  fVar45 = 0.0 - auVar19._8_4_ * fVar49;
  fVar47 = 0.0 - auVar19._12_4_ * fVar49;
  fVar15 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar16 = -fVar15;
  uVar50 = -(uint)(fVar15 < fVar39);
  uVar54 = -(uint)(fVar15 < fVar13);
  uVar56 = -(uint)(fVar15 < fVar45);
  uVar58 = -(uint)(fVar15 < fVar47);
  fVar27 = -fVar26;
  fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar26 - fVar39)) & uVar50);
  fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar26 - fVar13)) & uVar54);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar26 - fVar45)) & uVar56);
  fVar47 = (float)((uint)fVar47 ^ ((uint)fVar47 ^ (uint)(fVar26 - fVar47)) & uVar58);
  uVar17 = -(uint)(fVar39 < fVar16);
  uVar23 = -(uint)(fVar13 < fVar16);
  uVar24 = -(uint)(fVar45 < fVar16);
  uVar25 = -(uint)(fVar47 < fVar16);
  auVar66[0] = (byte)uVar17 | (byte)uVar50;
  auVar66[1] = (byte)(uVar17 >> 8) | (byte)(uVar50 >> 8);
  auVar66[2] = (byte)(uVar17 >> 0x10) | (byte)(uVar50 >> 0x10);
  auVar66[3] = (byte)(uVar17 >> 0x18) | (byte)(uVar50 >> 0x18);
  auVar66[4] = (byte)uVar23 | (byte)uVar54;
  auVar66[5] = (byte)(uVar23 >> 8) | (byte)(uVar54 >> 8);
  auVar66[6] = (byte)(uVar23 >> 0x10) | (byte)(uVar54 >> 0x10);
  auVar66[7] = (byte)(uVar23 >> 0x18) | (byte)(uVar54 >> 0x18);
  auVar66[8] = (byte)uVar24 | (byte)uVar56;
  auVar66[9] = (byte)(uVar24 >> 8) | (byte)(uVar56 >> 8);
  auVar66[10] = (byte)(uVar24 >> 0x10) | (byte)(uVar56 >> 0x10);
  auVar66[0xb] = (byte)(uVar24 >> 0x18) | (byte)(uVar56 >> 0x18);
  auVar66[0xc] = (byte)uVar25 | (byte)uVar58;
  auVar66[0xd] = (byte)(uVar25 >> 8) | (byte)(uVar58 >> 8);
  auVar66[0xe] = (byte)(uVar25 >> 0x10) | (byte)(uVar58 >> 0x10);
  auVar66[0xf] = (byte)(uVar25 >> 0x18) | (byte)(uVar58 >> 0x18);
  auVar52 = NEON_fmov(0xbf800000,4);
  fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar27 - fVar39)) & uVar17);
  fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar27 - fVar13)) & uVar23);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar27 - fVar45)) & uVar24);
  fVar47 = (float)((uint)fVar47 ^ ((uint)fVar47 ^ (uint)(fVar27 - fVar47)) & uVar25);
  auVar30 = NEON_fmov(0x3f800000,4);
  auVar19 = auVar30 ^ (auVar30 ^ auVar52) & auVar66;
  fVar28 = fVar39 * fVar39;
  fVar32 = fVar13 * fVar13;
  fVar37 = auVar30._12_4_;
  fVar34 = fVar45 * fVar45;
  fVar36 = fVar47 * fVar47;
  fVar22 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar59 = *(float *)PTR_SinCoefficients_04372d28;
  fVar4 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar60 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar61 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar51 = auVar30._0_4_;
  fVar55 = auVar30._4_4_;
  fVar57 = auVar30._8_4_;
  fVar62 = *(float *)PTR_CosCoefficients_04372d40;
  auVar20._0_4_ =
       fVar39 * (fVar51 + fVar28 * (fVar61 + fVar28 * (fVar4 + fVar28 * (fVar60 + fVar28 * (fVar22 -
                                                                                           fVar28 * 
                                                  fVar59)))));
  auVar20._4_4_ =
       fVar13 * (fVar55 + fVar32 * (fVar61 + fVar32 * (fVar4 + fVar32 * (fVar60 + fVar32 * (fVar22 -
                                                                                           fVar32 * 
                                                  fVar59)))));
  auVar20._8_4_ =
       fVar45 * (fVar57 + fVar34 * (fVar61 + fVar34 * (fVar4 + fVar34 * (fVar60 + fVar34 * (fVar22 -
                                                                                           fVar34 * 
                                                  fVar59)))));
  auVar20._12_4_ =
       fVar47 * (fVar37 + fVar36 * (fVar61 + fVar36 * (fVar4 + fVar36 * (fVar60 + fVar36 * (fVar22 -
                                                                                           fVar36 * 
                                                  fVar59)))));
  fVar13 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar63 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar39 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar64 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar66 = NEON_ext(auVar20,auVar20,8,1);
  auVar31._0_4_ =
       auVar19._0_4_ *
       (fVar51 + fVar28 * (fVar64 + fVar28 * (fVar39 + fVar28 * (fVar63 + fVar28 * (fVar13 - fVar28 
                                                  * fVar62)))));
  auVar31._4_4_ =
       auVar19._4_4_ *
       (fVar55 + fVar32 * (fVar64 + fVar32 * (fVar39 + fVar32 * (fVar63 + fVar32 * (fVar13 - fVar32 
                                                  * fVar62)))));
  auVar31._8_4_ =
       auVar19._8_4_ *
       (fVar57 + fVar34 * (fVar64 + fVar34 * (fVar39 + fVar34 * (fVar63 + fVar34 * (fVar13 - fVar34 
                                                  * fVar62)))));
  auVar31._12_4_ =
       auVar19._12_4_ *
       (fVar37 + fVar36 * (fVar64 + fVar36 * (fVar39 + fVar36 * (fVar63 + fVar36 * (fVar13 - fVar36 
                                                  * fVar62)))));
  auVar19 = NEON_ext(auVar31,auVar31,8,1);
  fVar28 = auVar19._0_4_;
  fVar32 = auVar66._0_4_;
  fVar65 = (float)DAT_0388a618;
  fVar45 = auVar31._4_4_ * fVar65;
  fVar67 = (float)((ulong)DAT_0388a618 >> 0x20);
  fVar44 = fVar67 * 0.0;
  fVar71 = (float)DAT_0388a870;
  fVar72 = (float)((ulong)DAT_0388a870 >> 0x20);
  fVar68 = (float)_DAT_03889200;
  uVar5 = (ulong)_DAT_03889200 >> 0x20;
  fVar69 = (float)_UNK_03889208;
  fVar70 = (float)((ulong)_UNK_03889208 >> 0x20);
  fVar40 = (float)_DAT_03889d50;
  uVar6 = (ulong)_DAT_03889d50 >> 0x20;
  fVar46 = (float)_UNK_03889d58;
  fVar48 = (float)((ulong)_UNK_03889d58 >> 0x20);
  auVar19 = *(undefined1 (*) [16])(param_1 + 0x180);
  fVar29 = auVar19._0_4_;
  fVar33 = auVar19._4_4_;
  fVar35 = auVar19._8_4_;
  pfVar10 = (float *)FUN_00b872b0(plVar11,param_1 + 0x158);
  fVar34 = *pfVar10;
  fVar47 = param_2[1];
  fVar36 = *param_2 +
           (fVar28 * auVar31._4_4_ * fVar29 +
            (fVar32 * auVar31._0_4_ * fVar68 + fVar28 * auVar20._4_4_ * auVar20._0_4_) * fVar33 +
           (fVar32 * auVar20._0_4_ * fVar40 + fVar28 * auVar20._4_4_ * auVar31._0_4_) * fVar35) *
           fVar34;
  fStack_78 = param_2[2] +
              (auVar20._4_4_ * fVar71 * fVar29 +
               (auVar31._0_4_ * 0.0 * fVar69 + fVar45 * auVar20._0_4_) * fVar33 +
              (auVar20._0_4_ * 0.0 * fVar46 + fVar45 * auVar31._0_4_) * fVar35) * fVar34;
  fStack_74 = param_2[3] +
              (fVar72 * 0.0 * fVar29 +
               (auVar31._0_4_ * 0.0 * fVar70 + fVar44 * auVar20._0_4_) * fVar33 +
              (auVar20._0_4_ * 0.0 * fVar48 + fVar44 * auVar31._0_4_) * fVar35) * fVar34;
  fVar45 = 90.0;
  if (*(float *)(param_1 + 0x1a8) <= 0.0) {
    fVar45 = -90.0;
  }
  fVar45 = (fVar26 / fVar38) * fVar45;
  fVar38 = fVar45 * fVar14;
  auVar41._0_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar41._4_4_ = (int)(fVar38 + (float)(-(uint)(0.0 <= fVar38) & 0x80000000 ^ 0xbf000000));
  auVar41._8_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar41._12_4_ =
       (int)(fVar14 * 0.0 + (float)(-(uint)(0.0 <= fVar14 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar19 = NEON_scvtf(auVar41,4);
  fVar14 = 0.0 - auVar19._0_4_ * fVar49;
  fVar45 = fVar45 - auVar19._4_4_ * fVar49;
  fVar38 = 0.0 - auVar19._8_4_ * fVar49;
  fVar44 = 0.0 - auVar19._12_4_ * fVar49;
  uVar17 = -(uint)(fVar15 < fVar14);
  uVar23 = -(uint)(fVar15 < fVar45);
  uVar24 = -(uint)(fVar15 < fVar38);
  uVar25 = -(uint)(fVar15 < fVar44);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar26 - fVar14)) & uVar17);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar26 - fVar45)) & uVar23);
  fVar38 = (float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)(fVar26 - fVar38)) & uVar24);
  fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)(fVar26 - fVar44)) & uVar25);
  uVar50 = -(uint)(fVar14 < fVar16);
  uVar54 = -(uint)(fVar45 < fVar16);
  uVar56 = -(uint)(fVar38 < fVar16);
  uVar58 = -(uint)(fVar44 < fVar16);
  auVar42[0] = (byte)uVar50 | (byte)uVar17;
  auVar42[1] = (byte)(uVar50 >> 8) | (byte)(uVar17 >> 8);
  auVar42[2] = (byte)(uVar50 >> 0x10) | (byte)(uVar17 >> 0x10);
  auVar42[3] = (byte)(uVar50 >> 0x18) | (byte)(uVar17 >> 0x18);
  auVar42[4] = (byte)uVar54 | (byte)uVar23;
  auVar42[5] = (byte)(uVar54 >> 8) | (byte)(uVar23 >> 8);
  auVar42[6] = (byte)(uVar54 >> 0x10) | (byte)(uVar23 >> 0x10);
  auVar42[7] = (byte)(uVar54 >> 0x18) | (byte)(uVar23 >> 0x18);
  auVar42[8] = (byte)uVar56 | (byte)uVar24;
  auVar42[9] = (byte)(uVar56 >> 8) | (byte)(uVar24 >> 8);
  auVar42[10] = (byte)(uVar56 >> 0x10) | (byte)(uVar24 >> 0x10);
  auVar42[0xb] = (byte)(uVar56 >> 0x18) | (byte)(uVar24 >> 0x18);
  auVar42[0xc] = (byte)uVar58 | (byte)uVar25;
  auVar42[0xd] = (byte)(uVar58 >> 8) | (byte)(uVar25 >> 8);
  auVar42[0xe] = (byte)(uVar58 >> 0x10) | (byte)(uVar25 >> 0x10);
  auVar42[0xf] = (byte)(uVar58 >> 0x18) | (byte)(uVar25 >> 0x18);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar27 - fVar14)) & uVar50);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar27 - fVar45)) & uVar54);
  fVar38 = (float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)(fVar27 - fVar38)) & uVar56);
  fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)(fVar27 - fVar44)) & uVar58);
  auVar30 = auVar30 ^ (auVar30 ^ auVar52) & auVar42;
  fVar15 = fVar14 * fVar14;
  fVar16 = fVar45 * fVar45;
  fVar26 = fVar38 * fVar38;
  fVar27 = fVar44 * fVar44;
  auVar53._0_4_ =
       fVar14 * (fVar51 + fVar15 * (fVar61 + fVar15 * (fVar4 + fVar15 * (fVar60 + fVar15 * (fVar22 -
                                                                                           fVar15 * 
                                                  fVar59)))));
  auVar53._4_4_ =
       fVar45 * (fVar55 + fVar16 * (fVar61 + fVar16 * (fVar4 + fVar16 * (fVar60 + fVar16 * (fVar22 -
                                                                                           fVar16 * 
                                                  fVar59)))));
  auVar53._8_4_ =
       fVar38 * (fVar57 + fVar26 * (fVar61 + fVar26 * (fVar4 + fVar26 * (fVar60 + fVar26 * (fVar22 -
                                                                                           fVar26 * 
                                                  fVar59)))));
  auVar53._12_4_ =
       fVar44 * (fVar37 + fVar27 * (fVar61 + fVar27 * (fVar4 + fVar27 * (fVar60 + fVar27 * (fVar22 -
                                                                                           fVar27 * 
                                                  fVar59)))));
  auVar19 = NEON_ext(auVar53,auVar53,8,1);
  auVar43._0_4_ =
       auVar30._0_4_ *
       (fVar51 + fVar15 * (fVar64 + fVar15 * (fVar39 + fVar15 * (fVar63 + fVar15 * (fVar13 - fVar15 
                                                  * fVar62)))));
  auVar43._4_4_ =
       auVar30._4_4_ *
       (fVar55 + fVar16 * (fVar64 + fVar16 * (fVar39 + fVar16 * (fVar63 + fVar16 * (fVar13 - fVar16 
                                                  * fVar62)))));
  auVar43._8_4_ =
       auVar30._8_4_ *
       (fVar57 + fVar26 * (fVar64 + fVar26 * (fVar39 + fVar26 * (fVar63 + fVar26 * (fVar13 - fVar26 
                                                  * fVar62)))));
  auVar43._12_4_ =
       auVar30._12_4_ *
       (fVar37 + fVar27 * (fVar64 + fVar27 * (fVar39 + fVar27 * (fVar63 + fVar27 * (fVar13 - fVar27 
                                                  * fVar62)))));
  auVar66 = NEON_ext(auVar43,auVar43,8,1);
  fVar45 = auVar66._0_4_ * auVar53._4_4_;
  fVar65 = auVar43._4_4_ * fVar65;
  fVar67 = fVar67 * 0.0;
  local_80 = (ulong)(uint)fVar36;
  fVar22 = *(float *)(param_1 + 0x180);
  fVar4 = *(float *)(param_1 + 0x184);
  fVar13 = *(float *)(param_1 + 0x188);
  fVar39 = auVar21._0_4_ - fVar36;
  fVar14 = auVar21._8_4_ - fStack_78;
  fVar15 = auVar21._12_4_ - fStack_74;
  fVar39 = fVar39 * fVar39;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  auVar30._4_4_ = 0;
  auVar30._0_4_ = fVar39;
  auVar30._8_4_ = fVar14;
  auVar30._12_4_ = fVar15;
  auVar52._4_4_ = 0;
  auVar52._0_4_ = fVar39;
  auVar52._8_4_ = fVar14;
  auVar52._12_4_ = fVar15;
  auVar30 = NEON_ext(auVar30,auVar52,8,1);
  fVar39 = *(float *)(param_1 + 0x164) * SQRT(auVar30._0_4_ + fVar39 + auVar30._4_4_ + 0.0);
  fStack_88 = ((float)*(undefined8 *)(param_1 + 0x1d8) + fStack_78) * 0.5 +
              (auVar53._4_4_ * fVar71 * fVar22 +
               (auVar43._0_4_ * 0.0 * fVar69 + fVar65 * auVar53._0_4_) * fVar4 +
              (auVar53._0_4_ * 0.0 * fVar46 + fVar65 * auVar43._0_4_) * fVar13) * fVar39;
  fStack_84 = ((float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) + fStack_74) * 0.5 +
              (fVar72 * 0.0 * fVar22 +
               (auVar43._0_4_ * 0.0 * fVar70 + fVar67 * auVar53._0_4_) * fVar4 +
              (auVar53._0_4_ * 0.0 * fVar48 + fVar67 * auVar43._0_4_) * fVar13) * fVar39;
  local_90 = (ulong)(uint)(((float)*(undefined8 *)(param_1 + 0x1d0) + fVar36) * 0.5 +
                          (auVar66._0_4_ * auVar43._4_4_ * fVar22 +
                           (auVar19._0_4_ * auVar43._0_4_ * fVar68 + fVar45 * auVar53._0_4_) * fVar4
                          + (auVar19._0_4_ * auVar53._0_4_ * fVar40 + fVar45 * auVar43._0_4_) *
                            fVar13) * fVar39);
  uVar18 = FUN_01086000(param_1 + 0x1d0,&local_90,&local_90,&local_80);
  local_70 = CONCAT44((auVar21._4_4_ +
                      fVar47 + (fVar32 * auVar31._4_4_ * fVar29 +
                                (fVar28 * auVar31._0_4_ * (float)uVar5 +
                                fVar32 * auVar20._4_4_ * auVar20._0_4_) * fVar33 +
                               (fVar28 * auVar20._0_4_ * (float)uVar6 +
                               fVar32 * auVar20._4_4_ * auVar31._0_4_) * fVar35) * fVar34) * 0.5,
                      uVar18);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_68 = extraout_var;
  FUN_00ac3fa4(&local_a8,*(long *)(param_1 + 0x58) + 0x160);
  FUN_00be5694(&local_98,&local_a8);
  puVar7 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a8 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar7;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  if (local_98 != (long *)0x0) {
    auVar21 = FUN_01a8afd4(local_98,&local_70);
    uStack_68 = auVar21._8_8_;
    local_70 = auVar21._0_8_;
    if (local_98 != (long *)0x0) {
      lVar12 = local_98[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  auVar21._8_8_ = uStack_68;
  auVar21._0_8_ = local_70;
  return auVar21;
}


