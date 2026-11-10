/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026467c; name: FUN_0026467c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026467c(long *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  unkbyte9 Var5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  float fVar34;
  uint uVar35;
  uint uVar37;
  uint uVar38;
  undefined1 auVar36 [16];
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  float fVar50;
  ulong uVar51;
  undefined1 auVar52 [12];
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar53 [16];
  float fVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [12];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  undefined1 auVar77 [12];
  undefined1 auVar78 [16];
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [12];
  float fVar116;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined8 uVar117;
  undefined8 uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  float fVar129;
  float fVar130;
  undefined1 auVar127 [12];
  undefined1 auVar128 [16];
  byte bVar131;
  int iVar132;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar140;
  byte bVar141;
  undefined8 uVar133;
  int iVar139;
  byte bVar142;
  byte bVar143;
  int iVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  undefined1 auVar134 [16];
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  undefined8 uVar154;
  float fVar162;
  float fVar163;
  undefined1 in_q29 [16];
  undefined1 auVar159 [16];
  undefined1 auVar158 [16];
  undefined1 auVar157 [16];
  undefined1 auVar156 [16];
  undefined8 uVar155;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  float fVar164;
  undefined8 uVar165;
  undefined8 uVar166;
  float fVar171;
  float fVar172;
  undefined1 auVar170 [16];
  undefined1 auVar169 [16];
  undefined1 auVar168 [16];
  undefined1 auVar167 [16];
  float fVar173;
  undefined8 uVar174;
  undefined8 uVar175;
  float fVar176;
  float fVar177;
  
  lVar6 = *param_1;
  lVar7 = *(long *)(lVar6 + 0x78);
  fVar11 = (float)*(undefined8 *)(lVar7 + 0xd8);
  fVar9 = (float)*(undefined8 *)(lVar7 + 0xd0);
  fVar34 = ((-((float)*param_2 * *(float *)(param_2 + 6)) -
            (float)((ulong)*param_2 >> 0x20) * *(float *)((long)param_2 + 0x34)) -
           (float)param_2[1] * *(float *)(param_2 + 7)) - fVar9;
  fVar12 = ((-((float)param_2[4] * *(float *)(param_2 + 6)) -
            (float)((ulong)param_2[4] >> 0x20) * *(float *)((long)param_2 + 0x34)) -
           (float)param_2[5] * *(float *)(param_2 + 7)) - fVar11;
  bVar92 = 0;
  bVar93 = 0;
  bVar94 = 0x80;
  bVar95 = 0x3f;
  if ((fVar34 == 0.0) && (fVar45 = 0.0, fVar12 == 0.0)) goto LAB_00264a6c;
  fVar44 = -fVar34;
  if (0.0 <= fVar12) {
    if (0.0 < fVar34) {
      if (fVar34 <= fVar12) {
        fVar34 = fVar34 / fVar12;
        fVar12 = fVar34 * fVar34;
        fVar45 = -(fVar34 * (fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
        goto LAB_00264a6c;
      }
      fVar44 = fVar12 / fVar34;
      fVar12 = fVar44 * fVar44;
      fVar47 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
      fVar34 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
               fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                  fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8)
                                                     + fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                           *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
      fVar45 = *(float *)PTR_FloatPiDivided2_04372d38;
LAB_002649ec:
      fVar45 = fVar44 * (fVar12 * (fVar12 * fVar34 - fVar47) + 1.0) - fVar45;
      goto LAB_00264a6c;
    }
    if (fVar44 <= fVar12) {
      fVar44 = fVar44 / fVar12;
      fVar12 = fVar44 * fVar44;
      fVar45 = fVar44 * (fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar12 * (fVar12 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      goto LAB_00264a6c;
    }
    fVar34 = fVar12 / fVar44;
    fVar12 = fVar34 * fVar34;
    fVar47 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
    fVar44 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
             fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                   fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
    fVar45 = *(float *)PTR_FloatPiDivided2_04372d38;
  }
  else if (0.0 < fVar34) {
    if (fVar12 <= fVar44) {
      fVar44 = fVar44 / fVar12;
      fVar12 = fVar44 * fVar44;
      fVar47 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
      fVar34 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
               fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                  fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8)
                                                     + fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                           *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
      fVar45 = *(float *)PTR_FloatPi_04372cf0;
      goto LAB_002649ec;
    }
    fVar34 = fVar12 / fVar44;
    fVar12 = fVar34 * fVar34;
    fVar47 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
    fVar44 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
             fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                   fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
    fVar45 = -*(float *)PTR_FloatPiDivided2_04372d38;
  }
  else {
    if (fVar34 < fVar12) {
      fVar12 = fVar12 / fVar34;
      fVar34 = fVar12 * fVar12;
      fVar45 = *(float *)PTR_FloatPiDivided2_04372d38 +
               fVar12 * (fVar34 * (fVar34 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar34 * (fVar34 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar34 * (fVar34 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar34 * (fVar34 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      goto LAB_00264a6c;
    }
    fVar34 = fVar34 / fVar12;
    fVar12 = fVar34 * fVar34;
    fVar47 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
    fVar44 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
             fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                fVar12 * (fVar12 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                   fVar12 * (fVar12 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
    fVar45 = *(float *)PTR_FloatPi_04372cf0;
  }
  fVar45 = fVar45 - fVar34 * (fVar12 * (fVar12 * fVar44 - fVar47) + 1.0);
LAB_00264a6c:
  fVar12 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar34 = -fVar45 * fVar12;
  fVar57 = *(float *)PTR_FloatPi_04372cf0;
  fVar48 = *(float *)PTR_Float2Pi_04372d30;
  auVar121._0_4_ =
       (int)(fVar12 * 0.0 + (float)(-(uint)(0.0 <= fVar12 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar121._4_4_ = (int)(fVar34 + (float)(-(uint)(0.0 <= fVar34) & 0x80000000 ^ 0xbf000000));
  auVar121._8_4_ =
       (int)(fVar12 * 0.0 + (float)(-(uint)(0.0 <= fVar12 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar121._12_4_ =
       (int)(fVar12 * 0.0 + (float)(-(uint)(0.0 <= fVar12 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar36 = NEON_scvtf(auVar121,4);
  fVar44 = 0.0 - auVar36._0_4_ * fVar48;
  fVar45 = -fVar45 - auVar36._4_4_ * fVar48;
  fVar47 = 0.0 - auVar36._8_4_ * fVar48;
  fVar48 = 0.0 - auVar36._12_4_ * fVar48;
  fVar12 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar34 = -fVar12;
  uVar49 = -(uint)(fVar12 < fVar44);
  uVar54 = -(uint)(fVar12 < fVar45);
  uVar55 = -(uint)(fVar12 < fVar47);
  uVar56 = -(uint)(fVar12 < fVar48);
  fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)(fVar57 - fVar44)) & uVar49);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar57 - fVar45)) & uVar54);
  fVar47 = (float)((uint)fVar47 ^ ((uint)fVar47 ^ (uint)(fVar57 - fVar47)) & uVar55);
  fVar48 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)(fVar57 - fVar48)) & uVar56);
  fVar57 = -fVar57;
  uVar35 = -(uint)(fVar44 < fVar34);
  uVar37 = -(uint)(fVar45 < fVar34);
  uVar38 = -(uint)(fVar47 < fVar34);
  uVar39 = -(uint)(fVar48 < fVar34);
  auVar61[0] = (byte)uVar35 | (byte)uVar49;
  auVar61[1] = (byte)(uVar35 >> 8) | (byte)(uVar49 >> 8);
  auVar61[2] = (byte)(uVar35 >> 0x10) | (byte)(uVar49 >> 0x10);
  auVar61[3] = (byte)(uVar35 >> 0x18) | (byte)(uVar49 >> 0x18);
  auVar61[4] = (byte)uVar37 | (byte)uVar54;
  auVar61[5] = (byte)(uVar37 >> 8) | (byte)(uVar54 >> 8);
  auVar61[6] = (byte)(uVar37 >> 0x10) | (byte)(uVar54 >> 0x10);
  auVar61[7] = (byte)(uVar37 >> 0x18) | (byte)(uVar54 >> 0x18);
  auVar61[8] = (byte)uVar38 | (byte)uVar55;
  auVar61[9] = (byte)(uVar38 >> 8) | (byte)(uVar55 >> 8);
  auVar61[10] = (byte)(uVar38 >> 0x10) | (byte)(uVar55 >> 0x10);
  auVar61[0xb] = (byte)(uVar38 >> 0x18) | (byte)(uVar55 >> 0x18);
  auVar61[0xc] = (byte)uVar39 | (byte)uVar56;
  auVar61[0xd] = (byte)(uVar39 >> 8) | (byte)(uVar56 >> 8);
  auVar61[0xe] = (byte)(uVar39 >> 0x10) | (byte)(uVar56 >> 0x10);
  auVar61[0xf] = (byte)(uVar39 >> 0x18) | (byte)(uVar56 >> 0x18);
  fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)(fVar57 - fVar44)) & uVar35);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)(fVar57 - fVar45)) & uVar37);
  fVar47 = (float)((uint)fVar47 ^ ((uint)fVar47 ^ (uint)(fVar57 - fVar47)) & uVar38);
  fVar48 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)(fVar57 - fVar48)) & uVar39);
  auVar60 = NEON_fmov(0x3f800000,4);
  auVar36 = NEON_fmov(0xbf800000,4);
  auVar36 = auVar60 ^ (auVar60 ^ auVar36) & auVar61;
  fVar12 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar74 = *(float *)PTR_SinCoefficients_04372d28;
  fVar57 = fVar44 * fVar44;
  fVar71 = fVar45 * fVar45;
  fVar72 = fVar47 * fVar47;
  fVar73 = fVar48 * fVar48;
  fVar75 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar34 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  auVar121 = *(undefined1 (*) [16])(lVar7 + 0xc0);
  fVar76 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  auVar119._0_4_ =
       fVar44 * (auVar60._0_4_ +
                fVar57 * (fVar76 + fVar57 * (fVar34 + fVar57 * (fVar75 + fVar57 * (fVar12 - fVar57 *
                                                                                            fVar74))
                                            )));
  auVar119._4_4_ =
       fVar45 * (auVar60._4_4_ +
                fVar71 * (fVar76 + fVar71 * (fVar34 + fVar71 * (fVar75 + fVar71 * (fVar12 - fVar71 *
                                                                                            fVar74))
                                            )));
  auVar119._8_4_ =
       fVar47 * (auVar60._8_4_ +
                fVar72 * (fVar76 + fVar72 * (fVar34 + fVar72 * (fVar75 + fVar72 * (fVar12 - fVar72 *
                                                                                            fVar74))
                                            )));
  auVar119._12_4_ =
       fVar48 * (auVar60._12_4_ +
                fVar73 * (fVar76 + fVar73 * (fVar34 + fVar73 * (fVar75 + fVar73 * (fVar12 - fVar73 *
                                                                                            fVar74))
                                            )));
  fVar12 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar48 = *(float *)PTR_CosCoefficients_04372d40;
  fVar74 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar34 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar75 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  fVar45 = auVar36._0_4_ *
           (auVar60._0_4_ +
           fVar57 * (fVar75 + fVar57 * (fVar34 + fVar57 * (fVar74 + fVar57 * (fVar12 - fVar57 * 
                                                  fVar48)))));
  fVar44 = auVar36._4_4_ *
           (auVar60._4_4_ +
           fVar71 * (fVar75 + fVar71 * (fVar34 + fVar71 * (fVar74 + fVar71 * (fVar12 - fVar71 * 
                                                  fVar48)))));
  uVar80 = (undefined1)((uint)fVar44 >> 8);
  uVar82 = (undefined1)((uint)fVar44 >> 0x10);
  uVar84 = (undefined1)((uint)fVar44 >> 0x18);
  fVar47 = auVar36._8_4_ *
           (auVar60._8_4_ +
           fVar72 * (fVar75 + fVar72 * (fVar34 + fVar72 * (fVar74 + fVar72 * (fVar12 - fVar72 * 
                                                  fVar48)))));
  uVar86 = (undefined1)((uint)fVar47 >> 8);
  uVar18 = (undefined1)((uint)fVar47 >> 0x10);
  uVar20 = (undefined1)((uint)fVar47 >> 0x18);
  fVar12 = auVar36._12_4_ *
           (auVar60._12_4_ +
           fVar73 * (fVar75 + fVar73 * (fVar34 + fVar73 * (fVar74 + fVar73 * (fVar12 - fVar73 * 
                                                  fVar48)))));
  uVar22 = (undefined1)((uint)fVar12 >> 8);
  uVar25 = (undefined1)((uint)fVar12 >> 0x10);
  uVar27 = (undefined1)((uint)fVar12 >> 0x18);
  auVar61 = NEON_ext(auVar119,auVar119,8,1);
  auVar36[4] = SUB41(fVar44,0);
  auVar36._0_4_ = fVar45;
  auVar36[5] = uVar80;
  auVar36[6] = uVar82;
  auVar36[7] = uVar84;
  auVar36[8] = SUB41(fVar47,0);
  auVar36[9] = uVar86;
  auVar36[10] = uVar18;
  auVar36[0xb] = uVar20;
  auVar36[0xc] = SUB41(fVar12,0);
  auVar36[0xd] = uVar22;
  auVar36[0xe] = uVar25;
  auVar36[0xf] = uVar27;
  auVar60[4] = SUB41(fVar44,0);
  auVar60._0_4_ = fVar45;
  auVar60[5] = uVar80;
  auVar60[6] = uVar82;
  auVar60[7] = uVar84;
  auVar60[8] = SUB41(fVar47,0);
  auVar60[9] = uVar86;
  auVar60[10] = uVar18;
  auVar60[0xb] = uVar20;
  auVar60[0xc] = SUB41(fVar12,0);
  auVar60[0xd] = uVar22;
  auVar60[0xe] = uVar25;
  auVar60[0xf] = uVar27;
  auVar36 = NEON_ext(auVar36,auVar60,8,1);
  fVar47 = auVar36._0_4_;
  fVar48 = auVar61._0_4_;
  fVar57 = fVar47 * fVar44;
  fVar71 = fVar48 * fVar44;
  fVar44 = fVar44 * (float)DAT_0388a618;
  fVar73 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
  auVar36 = *(undefined1 (*) [16])(lVar7 + 0x80);
  auVar61 = *(undefined1 (*) [16])(lVar7 + 0x60);
  auVar60 = *(undefined1 (*) [16])(lVar7 + 0x70);
  fVar72 = auVar119._4_4_ * (float)DAT_0388a870;
  fVar74 = (float)((ulong)DAT_0388a870 >> 0x20) * 0.0;
  uVar118 = *(undefined8 *)(lVar7 + 0xa0);
  Var5 = *(unkbyte9 *)(lVar7 + 0xa0);
  auVar160 = *(undefined1 (*) [16])(lVar7 + 0xb0);
  fVar34 = (float)uVar118;
  fVar12 = 1.0;
  fVar75 = auVar61._0_4_;
  if (fVar34 != 0.0) {
    fVar12 = fVar75 / fVar34;
  }
  fVar10 = auVar160._4_4_;
  fVar76 = 1.0;
  if (fVar10 != 0.0) {
    fVar76 = auVar60._4_4_ / fVar10;
  }
  fVar40 = fVar48 * auVar119._0_4_ * (float)_DAT_03889d50 + fVar47 * auVar119._4_4_ * fVar45;
  fVar41 = fVar47 * auVar119._0_4_ * (float)((ulong)_DAT_03889d50 >> 0x20) +
           fVar48 * auVar119._4_4_ * fVar45;
  fVar42 = auVar119._0_4_ * 0.0 * (float)_UNK_03889d58 + fVar44 * fVar45;
  fVar43 = auVar119._0_4_ * 0.0 * (float)((ulong)_UNK_03889d58 >> 0x20) + fVar73 * fVar45;
  uVar80 = auVar121[8];
  uVar82 = auVar121[9];
  uVar84 = auVar121[10];
  uVar86 = auVar121[0xb];
  fVar46 = fVar48 * fVar45 * (float)_DAT_03889200 + fVar47 * auVar119._4_4_ * auVar119._0_4_;
  fVar47 = fVar47 * fVar45 * (float)((ulong)_DAT_03889200 >> 0x20) +
           fVar48 * auVar119._4_4_ * auVar119._0_4_;
  fVar44 = fVar45 * 0.0 * (float)_UNK_03889208 + fVar44 * auVar119._0_4_;
  fVar48 = fVar45 * 0.0 * (float)((ulong)_UNK_03889208 >> 0x20) + fVar73 * auVar119._0_4_;
  fVar45 = auVar36._8_4_;
  if (auVar121._8_4_ != 0.0) {
    fVar73 = fVar45 / auVar121._8_4_;
    bVar92 = SUB41(fVar73,0);
    bVar93 = (byte)((uint)fVar73 >> 8);
    bVar94 = (byte)((uint)fVar73 >> 0x10);
    bVar95 = (byte)((uint)fVar73 >> 0x18);
  }
  bVar81 = SUB41(fVar12,0);
  bVar83 = (byte)((uint)fVar12 >> 8);
  bVar85 = (byte)((uint)fVar12 >> 0x10);
  bVar87 = (byte)((uint)fVar12 >> 0x18);
  bVar88 = SUB41(fVar76,0);
  bVar89 = (byte)((uint)fVar76 >> 8);
  bVar90 = (byte)((uint)fVar76 >> 0x10);
  bVar91 = (byte)((uint)fVar76 >> 0x18);
  uVar155 = a64_TBL(ZEXT816(0),auVar160,DAT_0388a880);
  uVar96 = a64_TBL(ZEXT816(0),auVar160,DAT_0388a6f0);
  uVar133 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a6f0);
  uVar124 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a6d8);
  uVar117 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a680);
  fVar73 = (float)((ulong)uVar118 >> 0x20);
  fVar79 = (float)*(undefined8 *)(lVar7 + 0xa8);
  fVar76 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x20);
  uVar125 = a64_TBL(ZEXT816(0),auVar160,DAT_0388a6d8);
  uVar118 = a64_TBL(ZEXT816(0),auVar160,DAT_0388a680);
  uVar126 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a880);
  fVar12 = fVar34 * (float)uVar155 * (float)uVar117 - fVar34 * (float)uVar118 * (float)uVar126;
  fVar34 = fVar73 * (float)((ulong)uVar155 >> 0x20) * (float)((ulong)uVar117 >> 0x20) -
           fVar73 * (float)((ulong)uVar118 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
  uVar18 = (undefined1)((uint)fVar34 >> 8);
  uVar20 = (undefined1)((uint)fVar34 >> 0x10);
  uVar22 = (undefined1)((uint)fVar34 >> 0x18);
  fVar73 = fVar79 * (float)uVar96 * (float)uVar124 - fVar79 * (float)uVar125 * (float)uVar133;
  uVar25 = (undefined1)((uint)fVar73 >> 8);
  uVar27 = (undefined1)((uint)fVar73 >> 0x10);
  uVar29 = (undefined1)((uint)fVar73 >> 0x18);
  fVar76 = fVar76 * (float)((ulong)uVar96 >> 0x20) * (float)((ulong)uVar124 >> 0x20) -
           fVar76 * (float)((ulong)uVar125 >> 0x20) * (float)((ulong)uVar133 >> 0x20);
  uVar31 = (undefined1)((uint)fVar76 >> 8);
  uVar32 = (undefined1)((uint)fVar76 >> 0x10);
  uVar33 = (undefined1)((uint)fVar76 >> 0x18);
  auVar134[4] = SUB41(fVar34,0);
  auVar134._0_4_ = fVar12;
  auVar134[5] = uVar18;
  auVar134[6] = uVar20;
  auVar134[7] = uVar22;
  auVar134[8] = SUB41(fVar73,0);
  auVar134[9] = uVar25;
  auVar134[10] = uVar27;
  auVar134[0xb] = uVar29;
  auVar134[0xc] = SUB41(fVar76,0);
  auVar134[0xd] = uVar31;
  auVar134[0xe] = uVar32;
  auVar134[0xf] = uVar33;
  auVar1[4] = SUB41(fVar34,0);
  auVar1._0_4_ = fVar12;
  auVar1[5] = uVar18;
  auVar1[6] = uVar20;
  auVar1[7] = uVar22;
  auVar1[8] = SUB41(fVar73,0);
  auVar1[9] = uVar25;
  auVar1[10] = uVar27;
  auVar1[0xb] = uVar29;
  auVar1[0xc] = SUB41(fVar76,0);
  auVar1[0xd] = uVar31;
  auVar1[0xe] = uVar32;
  auVar1[0xf] = uVar33;
  auVar119 = NEON_ext(auVar134,auVar1,8,1);
  fVar12 = fVar12 + fVar34 + auVar119._0_4_ + auVar119._4_4_;
  auVar120._4_4_ = fVar12;
  auVar120._0_4_ = fVar12;
  auVar120._8_4_ = fVar12;
  auVar120._12_4_ = fVar12;
  auVar119 = NEON_frecpe(auVar120,4);
  bVar13 = bVar81 & (byte)_DAT_038892b0;
  bVar14 = bVar83 & (byte)((ulong)_DAT_038892b0 >> 8);
  bVar15 = bVar85 & (byte)((ulong)_DAT_038892b0 >> 0x10);
  bVar16 = bVar87 & (byte)((ulong)_DAT_038892b0 >> 0x18);
  bVar17 = bVar88 & (byte)((ulong)_DAT_038892b0 >> 0x20);
  bVar19 = bVar89 & (byte)((ulong)_DAT_038892b0 >> 0x28);
  bVar21 = bVar90 & (byte)((ulong)_DAT_038892b0 >> 0x30);
  bVar23 = bVar91 & (byte)((ulong)_DAT_038892b0 >> 0x38);
  bVar24 = bVar92 & (byte)_UNK_038892b8;
  bVar26 = bVar93 & (byte)((ulong)_UNK_038892b8 >> 8);
  bVar28 = bVar94 & (byte)((ulong)_UNK_038892b8 >> 0x10);
  bVar30 = bVar95 & (byte)((ulong)_UNK_038892b8 >> 0x18);
  auVar134 = NEON_frecps(auVar119,auVar120,4);
  auVar128._0_4_ = auVar119._0_4_ * auVar134._0_4_;
  auVar128._4_4_ = auVar119._4_4_ * auVar134._4_4_;
  auVar128._8_4_ = auVar119._8_4_ * auVar134._8_4_;
  auVar128._12_4_ = auVar119._12_4_ * auVar134._12_4_;
  auVar119 = NEON_frecps(auVar128,auVar120,4);
  fVar123 = auVar128._0_4_ * auVar119._0_4_;
  fVar129 = auVar128._4_4_ * auVar119._4_4_;
  fVar130 = auVar128._8_4_ * auVar119._8_4_;
  uVar8 = (undefined4)Var5;
  auVar53._4_12_ = auVar160._4_12_;
  auVar53._0_4_ = auVar160._8_4_;
  uVar51 = auVar53._0_8_ & 0xffffffff;
  auVar156._4_12_ = in_q29._4_12_;
  auVar156._0_4_ = uVar8;
  auVar158._12_4_ = in_q29._12_4_;
  auVar158._0_8_ = auVar156._0_8_;
  auVar158._8_4_ = auVar121._0_4_;
  auVar157._8_8_ = auVar158._8_8_;
  auVar157._4_4_ = auVar160._0_4_;
  auVar157._0_4_ = uVar8;
  auVar159._0_12_ = auVar157._0_12_;
  auVar159._12_4_ = 0;
  auVar114._4_4_ = fVar10;
  auVar114._0_4_ = (int)((unkuint9)Var5 >> 0x20);
  auVar114._8_4_ = auVar121._4_4_;
  auVar114._12_4_ = 0;
  uVar18 = (undefined1)uVar51;
  uVar20 = (undefined1)(uVar51 >> 8);
  uVar22 = (undefined1)(uVar51 >> 0x10);
  uVar25 = (undefined1)(uVar51 >> 0x18);
  fVar50 = (float)CONCAT13(bVar87 & (byte)((ulong)_DAT_03889f50 >> 0x18),
                           CONCAT12(bVar85 & (byte)((ulong)_DAT_03889f50 >> 0x10),
                                    CONCAT11(bVar83 & (byte)((ulong)_DAT_03889f50 >> 8),
                                             bVar81 & (byte)_DAT_03889f50)));
  auVar52._0_8_ =
       CONCAT17(bVar91 & (byte)((ulong)_DAT_03889f50 >> 0x38),
                CONCAT16(bVar90 & (byte)((ulong)_DAT_03889f50 >> 0x30),
                         CONCAT15(bVar89 & (byte)((ulong)_DAT_03889f50 >> 0x28),
                                  CONCAT14(bVar88 & (byte)((ulong)_DAT_03889f50 >> 0x20),fVar50))));
  auVar52[8] = bVar92 & (byte)_UNK_03889f58;
  auVar52[9] = bVar93 & (byte)((ulong)_UNK_03889f58 >> 8);
  auVar52[10] = bVar94 & (byte)((ulong)_UNK_03889f58 >> 0x10);
  auVar52[0xb] = bVar95 & (byte)((ulong)_UNK_03889f58 >> 0x18);
  uVar124 = a64_TBL(ZEXT816(0),auVar114,DAT_0388a880);
  uVar125 = a64_TBL(ZEXT816(0),auVar114,DAT_0388a6f0);
  auVar160[4] = uVar18;
  auVar160._0_4_ = fVar79;
  auVar160[5] = uVar20;
  auVar160[6] = uVar22;
  auVar160[7] = uVar25;
  auVar160[8] = uVar80;
  auVar160[9] = uVar82;
  auVar160[10] = uVar84;
  auVar160[0xb] = uVar86;
  auVar160._12_4_ = 0;
  uVar126 = a64_TBL(ZEXT816(0),auVar160,DAT_0388a680);
  auVar2[4] = uVar18;
  auVar2._0_4_ = fVar79;
  auVar2[5] = uVar20;
  auVar2[6] = uVar22;
  auVar2[7] = uVar25;
  auVar2[8] = uVar80;
  auVar2[9] = uVar82;
  auVar2[10] = uVar84;
  auVar2[0xb] = uVar86;
  auVar2._12_4_ = 0;
  uVar165 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a6d8);
  auVar3[4] = uVar18;
  auVar3._0_4_ = fVar79;
  auVar3[5] = uVar20;
  auVar3[6] = uVar22;
  auVar3[7] = uVar25;
  auVar3[8] = uVar80;
  auVar3[9] = uVar82;
  auVar3[10] = uVar84;
  auVar3[0xb] = uVar86;
  auVar3._12_4_ = 0;
  uVar174 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a880);
  auVar4[4] = uVar18;
  auVar4._0_4_ = fVar79;
  auVar4[5] = uVar20;
  auVar4[6] = uVar22;
  auVar4[7] = uVar25;
  auVar4[8] = uVar80;
  auVar4[9] = uVar82;
  auVar4[10] = uVar84;
  auVar4[0xb] = uVar86;
  auVar4._12_4_ = 0;
  uVar118 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a6f0);
  uVar96 = a64_TBL(ZEXT816(0),auVar114,DAT_0388a680);
  uVar155 = a64_TBL(ZEXT816(0),auVar114,DAT_0388a6d8);
  fVar151 = (float)((ulong)uVar124 >> 0x20);
  fVar79 = (float)((ulong)uVar126 >> 0x20);
  uVar117 = a64_TBL(ZEXT816(0),auVar159,DAT_0388a680);
  fVar10 = (float)((ulong)uVar96 >> 0x20);
  fVar150 = (float)((ulong)uVar174 >> 0x20);
  fVar34 = fVar123 * ((float)uVar124 * (float)uVar126 - (float)uVar174 * (float)uVar96);
  fVar73 = fVar129 * (fVar151 * fVar79 - fVar150 * fVar10);
  fVar76 = fVar130 * ((float)uVar125 * (float)uVar165 - (float)uVar118 * (float)uVar155);
  uVar166 = a64_TBL(ZEXT816(0),auVar159,DAT_0388a6d8);
  fVar149 = (float)((ulong)uVar117 >> 0x20);
  uVar175 = a64_TBL(ZEXT816(0),auVar159,DAT_0388a880);
  uVar133 = a64_TBL(ZEXT816(0),auVar159,DAT_0388a6f0);
  bVar81 = bVar81 & (byte)_DAT_03889d60;
  bVar83 = bVar83 & (byte)((ulong)_DAT_03889d60 >> 8);
  bVar85 = bVar85 & (byte)((ulong)_DAT_03889d60 >> 0x10);
  bVar87 = bVar87 & (byte)((ulong)_DAT_03889d60 >> 0x18);
  bVar88 = bVar88 & (byte)((ulong)_DAT_03889d60 >> 0x20);
  bVar89 = bVar89 & (byte)((ulong)_DAT_03889d60 >> 0x28);
  bVar90 = bVar90 & (byte)((ulong)_DAT_03889d60 >> 0x30);
  bVar91 = bVar91 & (byte)((ulong)_DAT_03889d60 >> 0x38);
  bVar92 = bVar92 & (byte)_UNK_03889d68;
  bVar93 = bVar93 & (byte)((ulong)_UNK_03889d68 >> 8);
  bVar94 = bVar94 & (byte)((ulong)_UNK_03889d68 >> 0x10);
  bVar95 = bVar95 & (byte)((ulong)_UNK_03889d68 >> 0x18);
  uVar154 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a6f0);
  fVar111 = (float)((ulong)uVar175 >> 0x20);
  fVar148 = fVar123 * ((float)uVar174 * (float)uVar117 - (float)uVar175 * (float)uVar126);
  fVar150 = fVar129 * (fVar150 * fVar149 - fVar111 * fVar79);
  fVar152 = fVar130 * ((float)uVar118 * (float)uVar166 - (float)uVar133 * (float)uVar165);
  uVar165 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a6f0);
  iVar132 = -(uint)(fVar12 == 0.0);
  iVar139 = -(uint)(fVar12 == 0.0);
  iVar144 = -(uint)(fVar12 == 0.0);
  uVar118 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a880);
  uVar126 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a680);
  fVar12 = auVar61._4_4_;
  fVar79 = auVar61._8_4_;
  auVar65._12_4_ = auVar61._12_4_;
  fVar123 = fVar123 * ((float)uVar96 * (float)uVar175 - (float)uVar124 * (float)uVar117);
  fVar129 = fVar129 * (fVar10 * fVar111 - fVar151 * fVar149);
  fVar130 = fVar130 * ((float)uVar155 * (float)uVar133 - (float)uVar125 * (float)uVar166);
  uVar96 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a6d8);
  bVar131 = ~(byte)iVar132;
  bVar135 = ~(byte)((uint)iVar132 >> 8);
  bVar136 = ~(byte)((uint)iVar132 >> 0x10);
  bVar137 = ~(byte)((uint)iVar132 >> 0x18);
  bVar138 = ~(byte)iVar139;
  bVar140 = ~(byte)((uint)iVar139 >> 8);
  bVar141 = ~(byte)((uint)iVar139 >> 0x10);
  bVar142 = ~(byte)((uint)iVar139 >> 0x18);
  bVar143 = ~(byte)iVar144;
  bVar145 = ~(byte)((uint)iVar144 >> 8);
  bVar146 = ~(byte)((uint)iVar144 >> 0x10);
  bVar147 = ~(byte)((uint)iVar144 >> 0x18);
  uVar117 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a6d8);
  uVar155 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a680);
  uVar124 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a880);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar7 + 0xd0) >> 0x20);
  fVar173 = (-(fVar34 * fVar9) - fVar148 * fVar10) - fVar123 * fVar11;
  fVar176 = (-(fVar73 * fVar9) - fVar150 * fVar10) - fVar129 * fVar11;
  fVar177 = (-(fVar76 * fVar9) - fVar152 * fVar10) - fVar130 * fVar11;
  auVar115._0_4_ =
       fVar75 * (float)uVar118 * (float)uVar126 - fVar75 * (float)uVar155 * (float)uVar124;
  auVar115._4_4_ =
       fVar12 * (float)((ulong)uVar118 >> 0x20) * (float)((ulong)uVar126 >> 0x20) -
       fVar12 * (float)((ulong)uVar155 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
  auVar115._8_4_ =
       fVar79 * (float)uVar154 * (float)uVar96 - fVar79 * (float)uVar117 * (float)uVar165;
  auVar115._12_4_ =
       auVar65._12_4_ * (float)((ulong)uVar154 >> 0x20) * (float)((ulong)uVar96 >> 0x20) -
       auVar65._12_4_ * (float)((ulong)uVar117 >> 0x20) * (float)((ulong)uVar165 >> 0x20);
  auVar121 = NEON_ext(auVar115,auVar115,8,1);
  fVar111 = auVar115._0_4_ + auVar115._4_4_ + auVar121._0_4_ + auVar121._4_4_;
  auVar122._4_4_ = fVar111;
  auVar122._0_4_ = fVar111;
  auVar122._8_4_ = fVar111;
  auVar122._12_4_ = fVar111;
  auVar121 = NEON_frecpe(auVar122,4);
  auVar160 = NEON_frecps(auVar121,auVar122,4);
  auVar161._0_4_ = auVar121._0_4_ * auVar160._0_4_;
  auVar161._4_4_ = auVar121._4_4_ * auVar160._4_4_;
  auVar161._8_4_ = auVar121._8_4_ * auVar160._8_4_;
  auVar161._12_4_ = auVar121._12_4_ * auVar160._12_4_;
  fVar98 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & bVar137,
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & bVar136,
                                    CONCAT11((byte)((uint)fVar34 >> 8) & bVar135,
                                             SUB41(fVar34,0) & bVar131)));
  auVar113._0_8_ =
       CONCAT17((byte)((uint)fVar73 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar73 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar73 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar73,0) & bVar138,fVar98))));
  auVar113[8] = SUB41(fVar76,0) & bVar143;
  auVar113[9] = (byte)((uint)fVar76 >> 8) & bVar145;
  auVar113[10] = (byte)((uint)fVar76 >> 0x10) & bVar146;
  auVar113[0xb] = (byte)((uint)fVar76 >> 0x18) & bVar147;
  auVar121 = NEON_frecps(auVar161,auVar122,4);
  bVar99 = SUB41(fVar148,0) & bVar131;
  bVar100 = (byte)((uint)fVar148 >> 8) & bVar135;
  bVar101 = (byte)((uint)fVar148 >> 0x10) & bVar136;
  bVar102 = (byte)((uint)fVar148 >> 0x18) & bVar137;
  bVar103 = SUB41(fVar150,0) & bVar138;
  bVar104 = (byte)((uint)fVar150 >> 8) & bVar140;
  bVar105 = (byte)((uint)fVar150 >> 0x10) & bVar141;
  bVar106 = (byte)((uint)fVar150 >> 0x18) & bVar142;
  bVar107 = SUB41(fVar152,0) & bVar143;
  bVar108 = (byte)((uint)fVar152 >> 8) & bVar145;
  bVar109 = (byte)((uint)fVar152 >> 0x10) & bVar146;
  bVar110 = (byte)((uint)fVar152 >> 0x18) & bVar147;
  fVar149 = auVar161._0_4_ * auVar121._0_4_;
  fVar151 = auVar161._4_4_ * auVar121._4_4_;
  fVar148 = auVar161._8_4_ * auVar121._8_4_;
  auVar169._12_4_ = auVar121._12_4_;
  auVar63._4_12_ = auVar61._4_12_;
  auVar63._0_4_ = fVar79;
  auVar65._0_8_ = auVar63._0_8_;
  auVar65._8_4_ = auVar65._12_4_;
  auVar64._8_8_ = auVar65._8_8_;
  auVar64._4_4_ = fVar45;
  auVar64._0_4_ = fVar79;
  auVar66._0_12_ = auVar64._0_12_;
  auVar66._12_4_ = auVar36._12_4_;
  auVar167._4_12_ = auVar121._4_12_;
  auVar167._0_4_ = fVar75;
  auVar169._0_8_ = auVar167._0_8_;
  auVar169._8_4_ = auVar36._0_4_;
  auVar168._8_8_ = auVar169._8_8_;
  auVar168._4_4_ = auVar60._0_4_;
  auVar168._0_4_ = fVar75;
  auVar170._0_12_ = auVar168._0_12_;
  auVar170._12_4_ = 0;
  auVar78._4_4_ = auVar60._4_4_;
  auVar78._0_4_ = fVar12;
  auVar78._8_4_ = auVar36._4_4_;
  auVar78._12_4_ = 0;
  auVar67._4_12_ = auVar66._4_12_;
  auVar67._0_4_ = fVar79;
  auVar69._0_8_ = auVar67._0_8_;
  auVar69._8_4_ = fVar45;
  auVar69._12_4_ = auVar36._12_4_;
  auVar68._8_8_ = auVar69._8_8_;
  auVar68._4_4_ = auVar60._8_4_;
  auVar68._0_4_ = fVar79;
  auVar70._0_12_ = auVar68._0_12_;
  auVar70._12_4_ = 0;
  fVar73 = (float)CONCAT13((byte)((uint)fVar123 >> 0x18) & bVar137,
                           CONCAT12((byte)((uint)fVar123 >> 0x10) & bVar136,
                                    CONCAT11((byte)((uint)fVar123 >> 8) & bVar135,
                                             SUB41(fVar123,0) & bVar131)));
  auVar58._0_8_ =
       CONCAT17((byte)((uint)fVar129 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar129 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar129 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar129,0) & bVar138,fVar73))));
  auVar58[8] = SUB41(fVar130,0) & bVar143;
  auVar58[9] = (byte)((uint)fVar130 >> 8) & bVar145;
  auVar58[10] = (byte)((uint)fVar130 >> 0x10) & bVar146;
  auVar58[0xb] = (byte)((uint)fVar130 >> 0x18) & bVar147;
  uVar174 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a880);
  uVar165 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6f0);
  uVar118 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a680);
  uVar166 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a6d8);
  uVar155 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a880);
  uVar96 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a6f0);
  uVar125 = a64_TBL(ZEXT816(0),auVar170,DAT_0388a880);
  uVar117 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a680);
  uVar124 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6d8);
  uVar133 = a64_TBL(ZEXT816(0),auVar170,DAT_0388a680);
  uVar154 = a64_TBL(ZEXT816(0),auVar170,DAT_0388a6d8);
  uVar126 = a64_TBL(ZEXT816(0),auVar170,DAT_0388a6f0);
  fVar75 = (float)CONCAT13((byte)((uint)fVar173 >> 0x18) & bVar137,
                           CONCAT12((byte)((uint)fVar173 >> 0x10) & bVar136,
                                    CONCAT11((byte)((uint)fVar173 >> 8) & bVar135,
                                             SUB41(fVar173,0) & bVar131)));
  auVar127._0_8_ =
       CONCAT17((byte)((uint)fVar176 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar176 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar176 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar176,0) & bVar138,fVar75))));
  auVar127[8] = SUB41(fVar177,0) & bVar143;
  auVar127[9] = (byte)((uint)fVar177 >> 8) & bVar145;
  auVar127[10] = (byte)((uint)fVar177 >> 0x10) & bVar146;
  auVar127[0xb] = (byte)((uint)fVar177 >> 0x18) & bVar147;
  fVar12 = (float)((ulong)uVar118 >> 0x20);
  fVar176 = (float)((ulong)uVar174 >> 0x20);
  fVar34 = (float)((ulong)uVar155 >> 0x20);
  fVar45 = (float)((ulong)uVar117 >> 0x20);
  fVar150 = (float)((ulong)uVar133 >> 0x20);
  fVar123 = (float)((ulong)uVar125 >> 0x20);
  fVar76 = fVar149 * ((float)uVar174 * (float)uVar118 - (float)uVar155 * (float)uVar117);
  fVar129 = fVar151 * (fVar176 * fVar12 - fVar34 * fVar45);
  fVar79 = fVar148 * ((float)uVar165 * (float)uVar166 - (float)uVar96 * (float)uVar124);
  fVar130 = fVar149 * ((float)uVar155 * (float)uVar133 - (float)uVar125 * (float)uVar118);
  fVar152 = fVar151 * (fVar34 * fVar150 - fVar123 * fVar12);
  fVar173 = fVar148 * ((float)uVar96 * (float)uVar154 - (float)uVar126 * (float)uVar166);
  fVar149 = fVar149 * ((float)uVar117 * (float)uVar125 - (float)uVar174 * (float)uVar133);
  fVar151 = fVar151 * (fVar45 * fVar123 - fVar176 * fVar150);
  fVar148 = fVar148 * ((float)uVar124 * (float)uVar126 - (float)uVar165 * (float)uVar154);
  fVar123 = (float)*(undefined8 *)(lVar7 + 0x90);
  iVar132 = -(uint)(fVar111 == 0.0);
  iVar139 = -(uint)(fVar111 == 0.0);
  iVar144 = -(uint)(fVar111 == 0.0);
  fVar150 = (float)((ulong)*(undefined8 *)(lVar7 + 0x90) >> 0x20);
  fVar12 = *(float *)(lVar6 + 0x3a0);
  fVar34 = *(float *)(lVar6 + 0x3a4);
  fVar45 = *(float *)(lVar6 + 0x3a8);
  fVar112 = (float)((ulong)auVar113._0_8_ >> 0x20);
  fVar116 = auVar113._8_4_;
  fVar111 = (float)*(undefined8 *)(lVar7 + 0x98);
  fVar176 = (-(fVar76 * fVar123) - fVar130 * fVar150) - fVar149 * fVar111;
  fVar177 = (-(fVar129 * fVar123) - fVar152 * fVar150) - fVar151 * fVar111;
  fVar97 = (-(fVar79 * fVar123) - fVar173 * fVar150) - fVar148 * fVar111;
  bVar131 = ~(byte)iVar132;
  bVar135 = ~(byte)((uint)iVar132 >> 8);
  bVar136 = ~(byte)((uint)iVar132 >> 0x10);
  bVar137 = ~(byte)((uint)iVar132 >> 0x18);
  bVar138 = ~(byte)iVar139;
  bVar140 = ~(byte)((uint)iVar139 >> 8);
  bVar141 = ~(byte)((uint)iVar139 >> 0x10);
  bVar142 = ~(byte)((uint)iVar139 >> 0x18);
  bVar143 = ~(byte)iVar144;
  bVar145 = ~(byte)((uint)iVar144 >> 8);
  bVar146 = ~(byte)((uint)iVar144 >> 0x10);
  bVar147 = ~(byte)((uint)iVar144 >> 0x18);
  fVar150 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & bVar137,
                            CONCAT12((byte)((uint)fVar76 >> 0x10) & bVar136,
                                     CONCAT11((byte)((uint)fVar76 >> 8) & bVar135,
                                              SUB41(fVar76,0) & bVar131)));
  fVar111 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & bVar147,
                            CONCAT12((byte)((uint)fVar79 >> 0x10) & bVar146,
                                     CONCAT11((byte)((uint)fVar79 >> 8) & bVar145,
                                              SUB41(fVar79,0) & bVar143)));
  fVar123 = (float)CONCAT13((byte)((uint)fVar130 >> 0x18) & bVar137,
                            CONCAT12((byte)((uint)fVar130 >> 0x10) & bVar136,
                                     CONCAT11((byte)((uint)fVar130 >> 8) & bVar135,
                                              SUB41(fVar130,0) & bVar131)));
  auVar77._0_8_ =
       CONCAT17((byte)((uint)fVar152 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar152 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar152 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar152,0) & bVar138,fVar123))));
  auVar77[8] = SUB41(fVar173,0) & bVar143;
  auVar77[9] = (byte)((uint)fVar173 >> 8) & bVar145;
  auVar77[10] = (byte)((uint)fVar173 >> 0x10) & bVar146;
  auVar77[0xb] = (byte)((uint)fVar173 >> 0x18) & bVar147;
  fVar76 = (float)((ulong)auVar58._0_8_ >> 0x20);
  fVar79 = auVar58._8_4_;
  fVar164 = fVar98 * fVar12 +
            (float)CONCAT13(bVar102,CONCAT12(bVar101,CONCAT11(bVar100,bVar99))) * fVar34 +
            fVar73 * fVar45;
  fVar171 = fVar112 * fVar12 +
            (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar34 +
            fVar76 * fVar45;
  fVar172 = fVar116 * fVar12 +
            (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) * fVar34 +
            fVar79 * fVar45;
  fVar149 = (float)CONCAT13((byte)((uint)fVar149 >> 0x18) & bVar137,
                            CONCAT12((byte)((uint)fVar149 >> 0x10) & bVar136,
                                     CONCAT11((byte)((uint)fVar149 >> 8) & bVar135,
                                              SUB41(fVar149,0) & bVar131)));
  auVar62._0_8_ =
       CONCAT17((byte)((uint)fVar151 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar151 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar151 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar151,0) & bVar138,fVar149))));
  auVar62[8] = SUB41(fVar148,0) & bVar143;
  auVar62[9] = (byte)((uint)fVar148 >> 8) & bVar145;
  auVar62[10] = (byte)((uint)fVar148 >> 0x10) & bVar146;
  auVar62[0xb] = (byte)((uint)fVar148 >> 0x18) & bVar147;
  fVar12 = *(float *)(lVar6 + 0x390);
  fVar34 = *(float *)(lVar6 + 0x394);
  fVar45 = *(float *)(lVar6 + 0x398);
  fVar151 = (float)*(undefined8 *)(lVar6 + 0x380);
  fVar148 = (float)((ulong)*(undefined8 *)(lVar6 + 0x380) >> 0x20);
  fVar130 = (float)*(undefined8 *)(lVar6 + 0x388);
  fVar153 = fVar98 * fVar151 +
            (float)CONCAT13(bVar102,CONCAT12(bVar101,CONCAT11(bVar100,bVar99))) * fVar148 +
            fVar73 * fVar130;
  fVar162 = fVar112 * fVar151 +
            (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar148 +
            fVar76 * fVar130;
  fVar163 = fVar116 * fVar151 +
            (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) * fVar148 +
            fVar79 * fVar130;
  fVar152 = (float)*(undefined8 *)(lVar6 + 0x3b0);
  fVar173 = (float)((ulong)*(undefined8 *)(lVar6 + 0x3b0) >> 0x20);
  fVar151 = fVar98 * fVar12 +
            (float)CONCAT13(bVar102,CONCAT12(bVar101,CONCAT11(bVar100,bVar99))) * fVar34 +
            fVar73 * fVar45;
  fVar148 = fVar112 * fVar12 +
            (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar34 +
            fVar76 * fVar45;
  fVar130 = fVar116 * fVar12 +
            (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) * fVar34 +
            fVar79 * fVar45;
  fVar12 = (float)*(undefined8 *)(lVar6 + 0x3b8);
  fVar75 = fVar98 * fVar152 +
           (float)CONCAT13(bVar102,CONCAT12(bVar101,CONCAT11(bVar100,bVar99))) * fVar173 +
           fVar73 * fVar12 + fVar75;
  fVar45 = fVar112 * fVar152 +
           (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar173 +
           fVar76 * fVar12 + (float)((ulong)auVar127._0_8_ >> 0x20);
  fVar76 = fVar116 * fVar152 +
           (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) * fVar173 +
           fVar79 * fVar12 + auVar127._8_4_;
  fVar12 = fVar71 * fVar153 + fVar47 * fVar162 + fVar41 * fVar163;
  fVar34 = fVar74 * fVar153 + fVar48 * fVar162 + fVar43 * fVar163;
  fVar73 = (float)((ulong)*(undefined8 *)(lVar7 + 0xd8) >> 0x20);
  *(ulong *)(lVar6 + 0x388) =
       CONCAT17((char)((uint)fVar34 >> 0x18),
                CONCAT16((char)((uint)fVar34 >> 0x10),
                         CONCAT15((char)((uint)fVar34 >> 8),
                                  CONCAT14(SUB41(fVar34,0),
                                           fVar72 * fVar153 + fVar44 * fVar162 + fVar42 * fVar163)))
               );
  *(ulong *)(lVar6 + 0x380) =
       CONCAT17((char)((uint)fVar12 >> 0x18),
                CONCAT16((char)((uint)fVar12 >> 0x10),
                         CONCAT15((char)((uint)fVar12 >> 8),
                                  CONCAT14(SUB41(fVar12,0),
                                           fVar57 * fVar153 + fVar46 * fVar162 + fVar40 * fVar163)))
               );
  *(float *)(lVar6 + 0x398) = fVar72 * fVar151 + fVar44 * fVar148 + fVar42 * fVar130;
  *(float *)(lVar6 + 0x39c) = fVar74 * fVar151 + fVar48 * fVar148 + fVar43 * fVar130;
  *(float *)(lVar6 + 0x390) = fVar57 * fVar151 + fVar46 * fVar148 + fVar40 * fVar130;
  *(float *)(lVar6 + 0x394) = fVar71 * fVar151 + fVar47 * fVar148 + fVar41 * fVar130;
  *(float *)(lVar6 + 0x3a8) = fVar72 * fVar164 + fVar44 * fVar171 + fVar42 * fVar172;
  *(float *)(lVar6 + 0x3ac) = fVar74 * fVar164 + fVar48 * fVar171 + fVar43 * fVar172;
  *(float *)(lVar6 + 0x3a0) = fVar57 * fVar164 + fVar46 * fVar171 + fVar40 * fVar172;
  *(float *)(lVar6 + 0x3a4) = fVar71 * fVar164 + fVar47 * fVar171 + fVar41 * fVar172;
  *(float *)(lVar6 + 0x3b8) = fVar11 + fVar72 * fVar75 + fVar44 * fVar45 + fVar42 * fVar76;
  *(float *)(lVar6 + 0x3bc) = fVar73 + fVar74 * fVar75 + fVar48 * fVar45 + fVar43 * fVar76;
  *(float *)(lVar6 + 0x3b0) = fVar9 + fVar57 * fVar75 + fVar46 * fVar45 + fVar40 * fVar76;
  *(float *)(lVar6 + 0x3b4) = fVar10 + fVar71 * fVar75 + fVar47 * fVar45 + fVar41 * fVar76;
  lVar6 = *param_1;
  fVar79 = (float)CONCAT13((byte)((uint)fVar176 >> 0x18) & bVar137,
                           CONCAT12((byte)((uint)fVar176 >> 0x10) & bVar136,
                                    CONCAT11((byte)((uint)fVar176 >> 8) & bVar135,
                                             SUB41(fVar176,0) & bVar131)));
  auVar59._0_8_ =
       CONCAT17((byte)((uint)fVar177 >> 0x18) & bVar142,
                CONCAT16((byte)((uint)fVar177 >> 0x10) & bVar141,
                         CONCAT15((byte)((uint)fVar177 >> 8) & bVar140,
                                  CONCAT14(SUB41(fVar177,0) & bVar138,fVar79))));
  auVar59[8] = SUB41(fVar97,0) & bVar143;
  auVar59[9] = (byte)((uint)fVar97 >> 8) & bVar145;
  auVar59[10] = (byte)((uint)fVar97 >> 0x10) & bVar146;
  auVar59[0xb] = (byte)((uint)fVar97 >> 0x18) & bVar147;
  fVar12 = (float)*(undefined8 *)(lVar6 + 0x340);
  fVar152 = (float)(CONCAT17((byte)((uint)fVar129 >> 0x18) & bVar142,
                             CONCAT16((byte)((uint)fVar129 >> 0x10) & bVar141,
                                      CONCAT15((byte)((uint)fVar129 >> 8) & bVar140,
                                               CONCAT14(SUB41(fVar129,0) & bVar138,fVar150)))) >>
                   0x20);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar6 + 0x340) >> 0x20);
  fVar129 = (float)((ulong)auVar77._0_8_ >> 0x20);
  fVar130 = auVar77._8_4_;
  fVar97 = (float)*(undefined8 *)(lVar6 + 0x360);
  fVar98 = (float)((ulong)*(undefined8 *)(lVar6 + 0x360) >> 0x20);
  fVar45 = (float)*(undefined8 *)(lVar6 + 0x348);
  fVar151 = (float)((ulong)auVar62._0_8_ >> 0x20);
  fVar148 = auVar62._8_4_;
  fVar112 = fVar150 * fVar12 + fVar123 * fVar34 + fVar149 * fVar45;
  fVar116 = fVar152 * fVar12 + fVar129 * fVar34 + fVar151 * fVar45;
  fVar153 = fVar111 * fVar12 + fVar130 * fVar34 + fVar148 * fVar45;
  fVar75 = (float)*(undefined8 *)(lVar6 + 0x350);
  fVar12 = (float)*(undefined8 *)(lVar6 + 0x370);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar6 + 0x370) >> 0x20);
  fVar76 = (float)((ulong)*(undefined8 *)(lVar6 + 0x350) >> 0x20);
  fVar45 = (float)*(undefined8 *)(lVar6 + 0x378);
  fVar177 = (float)*(undefined8 *)(lVar6 + 0x358);
  fVar173 = fVar150 * fVar75 + fVar123 * fVar76 + fVar149 * fVar177;
  fVar176 = fVar152 * fVar75 + fVar129 * fVar76 + fVar151 * fVar177;
  fVar177 = fVar111 * fVar75 + fVar130 * fVar76 + fVar148 * fVar177;
  fVar75 = (float)*(undefined8 *)(lVar6 + 0x368);
  fVar162 = fVar150 * fVar97 + fVar123 * fVar98 + fVar149 * fVar75;
  fVar163 = fVar152 * fVar97 + fVar129 * fVar98 + fVar151 * fVar75;
  fVar97 = fVar111 * fVar97 + fVar130 * fVar98 + fVar148 * fVar75;
  fVar75 = (float)((ulong)auVar52._0_8_ >> 0x20);
  fVar76 = auVar52._8_4_;
  fVar79 = fVar150 * fVar12 + fVar123 * fVar34 + fVar149 * fVar45 + fVar79;
  fVar149 = fVar152 * fVar12 + fVar129 * fVar34 + fVar151 * fVar45 +
            (float)((ulong)auVar59._0_8_ >> 0x20);
  fVar12 = fVar111 * fVar12 + fVar130 * fVar34 + fVar148 * fVar45 + auVar59._8_4_;
  fVar151 = (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))) * fVar112 +
            fVar50 * fVar116 +
            (float)CONCAT13(bVar87,CONCAT12(bVar85,CONCAT11(bVar83,bVar81))) * fVar153;
  fVar148 = (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar17))) * fVar112 +
            fVar75 * fVar116 +
            (float)CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) * fVar153;
  fVar123 = (float)CONCAT13(bVar30,CONCAT12(bVar28,CONCAT11(bVar26,bVar24))) * fVar112 +
            fVar76 * fVar116 +
            (float)CONCAT13(bVar95,CONCAT12(bVar94,CONCAT11(bVar93,bVar92))) * fVar153;
  fVar129 = (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))) * fVar173 +
            fVar50 * fVar176 +
            (float)CONCAT13(bVar87,CONCAT12(bVar85,CONCAT11(bVar83,bVar81))) * fVar177;
  fVar130 = (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar17))) * fVar173 +
            fVar75 * fVar176 +
            (float)CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) * fVar177;
  fVar150 = (float)CONCAT13(bVar30,CONCAT12(bVar28,CONCAT11(bVar26,bVar24))) * fVar173 +
            fVar76 * fVar176 +
            (float)CONCAT13(bVar95,CONCAT12(bVar94,CONCAT11(bVar93,bVar92))) * fVar177;
  fVar152 = (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))) * fVar162 +
            fVar50 * fVar163 +
            (float)CONCAT13(bVar87,CONCAT12(bVar85,CONCAT11(bVar83,bVar81))) * fVar97;
  fVar111 = (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar17))) * fVar162 +
            fVar75 * fVar163 +
            (float)CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) * fVar97;
  fVar173 = (float)CONCAT13(bVar30,CONCAT12(bVar28,CONCAT11(bVar26,bVar24))) * fVar162 +
            fVar76 * fVar163 +
            (float)CONCAT13(bVar95,CONCAT12(bVar94,CONCAT11(bVar93,bVar92))) * fVar97;
  fVar45 = (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))) * fVar79 +
           fVar50 * fVar149 +
           (float)CONCAT13(bVar87,CONCAT12(bVar85,CONCAT11(bVar83,bVar81))) * fVar12 + 0.0;
  fVar75 = (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar17))) * fVar79 +
           fVar75 * fVar149 +
           (float)CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) * fVar12 + 0.0;
  fVar76 = (float)CONCAT13(bVar30,CONCAT12(bVar28,CONCAT11(bVar26,bVar24))) * fVar79 +
           fVar76 * fVar149 +
           (float)CONCAT13(bVar95,CONCAT12(bVar94,CONCAT11(bVar93,bVar92))) * fVar12 + 0.0;
  fVar12 = fVar71 * fVar151 + fVar47 * fVar148 + fVar41 * fVar123;
  fVar34 = fVar74 * fVar151 + fVar48 * fVar148 + fVar43 * fVar123;
  *(ulong *)(lVar6 + 0x348) =
       CONCAT17((char)((uint)fVar34 >> 0x18),
                CONCAT16((char)((uint)fVar34 >> 0x10),
                         CONCAT15((char)((uint)fVar34 >> 8),
                                  CONCAT14(SUB41(fVar34,0),
                                           fVar72 * fVar151 + fVar44 * fVar148 + fVar42 * fVar123)))
               );
  *(ulong *)(lVar6 + 0x340) =
       CONCAT17((char)((uint)fVar12 >> 0x18),
                CONCAT16((char)((uint)fVar12 >> 0x10),
                         CONCAT15((char)((uint)fVar12 >> 8),
                                  CONCAT14(SUB41(fVar12,0),
                                           fVar57 * fVar151 + fVar46 * fVar148 + fVar40 * fVar123)))
               );
  *(float *)(lVar6 + 0x358) = fVar72 * fVar129 + fVar44 * fVar130 + fVar42 * fVar150;
  *(float *)(lVar6 + 0x35c) = fVar74 * fVar129 + fVar48 * fVar130 + fVar43 * fVar150;
  *(float *)(lVar6 + 0x350) = fVar57 * fVar129 + fVar46 * fVar130 + fVar40 * fVar150;
  *(float *)(lVar6 + 0x354) = fVar71 * fVar129 + fVar47 * fVar130 + fVar41 * fVar150;
  *(float *)(lVar6 + 0x368) = fVar72 * fVar152 + fVar44 * fVar111 + fVar42 * fVar173;
  *(float *)(lVar6 + 0x36c) = fVar74 * fVar152 + fVar48 * fVar111 + fVar43 * fVar173;
  *(float *)(lVar6 + 0x360) = fVar57 * fVar152 + fVar46 * fVar111 + fVar40 * fVar173;
  *(float *)(lVar6 + 0x364) = fVar71 * fVar152 + fVar47 * fVar111 + fVar41 * fVar173;
  *(ulong *)(lVar6 + 0x378) =
       CONCAT44(fVar73 + fVar74 * fVar45 + fVar48 * fVar75 + fVar43 * fVar76,
                fVar11 + fVar72 * fVar45 + fVar44 * fVar75 + fVar42 * fVar76);
  *(ulong *)(lVar6 + 0x370) =
       CONCAT44(fVar10 + fVar71 * fVar45 + fVar47 * fVar75 + fVar41 * fVar76,
                fVar9 + fVar57 * fVar45 + fVar46 * fVar75 + fVar40 * fVar76);
  return;
}


