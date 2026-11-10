/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e89994; name: FUN_01e89994
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e89994(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  int iVar50;
  int iVar51;
  undefined8 uVar52;
  ulong uVar53;
  long lVar54;
  long *plVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined8 uVar74;
  float fVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar78;
  float fVar82;
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  float local_190;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  undefined1 auStack_140 [48];
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_68;
  
  fVar64 = param_2._4_4_;
  fVar62 = param_2._0_4_;
  uVar52 = FUN_0108c538(*(undefined8 *)(param_3 + 0x208),1);
  uVar57 = FUN_01ea2c70(param_3,uVar52);
  *(undefined4 *)(param_3 + 0x654) = uVar57;
  uVar52 = FUN_0108c538(*(undefined8 *)(param_3 + 0x208),2);
  uVar57 = FUN_01ea2c70(param_3,uVar52);
  *(undefined4 *)(param_3 + 0x658) = uVar57;
  uVar52 = FUN_0108c538(*(undefined8 *)(param_3 + 0x208),3);
  fVar58 = (float)FUN_01ea2c70(param_3,uVar52);
  fVar59 = (float)FUN_01e8a110(*(float *)(param_3 + 0x658) - *(float *)(param_3 + 0x654));
  fVar59 = fVar59 + *(float *)(param_3 + 0x654);
  if (1.1920929e-07 < fVar58) {
    fVar58 = fVar58 * (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
  }
  else {
    fVar58 = 6.2831855;
  }
  *(float *)(param_3 + 0x68c) = fVar58;
  fVar60 = (float)FUN_01e8a110();
  fVar58 = (float)((ulong)DAT_0388a7e8 >> 0x20);
  fVar56 = (float)DAT_0388a7e8 + fVar58;
  fVar58 = (float)DAT_0388a7e8 + fVar58;
  uVar70 = SUB41(fVar58,0);
  uVar71 = (undefined1)((uint)fVar58 >> 8);
  uVar72 = (undefined1)((uint)fVar58 >> 0x10);
  uVar73 = (undefined1)((uint)fVar58 >> 0x18);
  fVar63 = (float)_DAT_03888d10 * fVar59;
  fVar65 = (float)((ulong)_DAT_03888d10 >> 0x20) * fVar59;
  fVar67 = (float)_UNK_03888d18 * fVar59;
  fVar59 = (float)((ulong)_UNK_03888d18 >> 0x20) * fVar59;
  auVar75[4] = uVar70;
  auVar75._0_4_ = fVar56;
  auVar75[5] = uVar71;
  auVar75[6] = uVar72;
  auVar75[7] = uVar73;
  auVar75[8] = SUB41(fVar56,0);
  auVar75[9] = (char)((uint)fVar56 >> 8);
  auVar75[10] = (char)((uint)fVar56 >> 0x10);
  auVar75[0xb] = (char)((uint)fVar56 >> 0x18);
  auVar75[0xc] = uVar70;
  auVar75[0xd] = uVar71;
  auVar75[0xe] = uVar72;
  auVar75[0xf] = uVar73;
  auVar75 = NEON_frsqrte(auVar75,4);
  auVar80._0_4_ = auVar75._0_4_ * fVar56;
  auVar80._4_4_ = auVar75._4_4_ * fVar58;
  auVar80._8_4_ = auVar75._8_4_ * fVar56;
  uVar7 = (undefined2)(CONCAT15(uVar71,CONCAT14(uVar70,fVar56)) >> 0x20);
  auVar80._12_4_ = auVar75._12_4_ * (float)CONCAT13(uVar73,CONCAT12(uVar72,uVar7));
  auVar80 = NEON_frsqrts(auVar75,auVar80,4);
  auVar76._0_4_ = auVar75._0_4_ * auVar80._0_4_;
  auVar76._4_4_ = auVar75._4_4_ * auVar80._4_4_;
  auVar76._8_4_ = auVar75._8_4_ * auVar80._8_4_;
  auVar76._12_4_ = auVar75._12_4_ * auVar80._12_4_;
  fVar60 = (fVar60 - *(float *)(param_3 + 0x68c) * 0.5) * 0.5;
  auVar81._0_4_ = fVar56 * auVar76._0_4_;
  auVar81._4_4_ = fVar58 * auVar76._4_4_;
  auVar81._8_4_ = fVar56 * auVar76._8_4_;
  auVar81._12_4_ = (float)CONCAT13(uVar73,CONCAT12(uVar72,uVar7)) * auVar76._12_4_;
  auVar75 = NEON_frsqrts(auVar76,auVar81,4);
  iVar51 = -(uint)(fVar56 == 0.0);
  iVar50 = -(uint)(fVar58 == 0.0);
  iVar8 = -(uint)(fVar56 == 0.0);
  fVar58 = auVar76._0_4_ * auVar75._0_4_ * (float)DAT_0388a140;
  fVar56 = auVar76._4_4_ * auVar75._4_4_ * (float)((ulong)DAT_0388a140 >> 0x20);
  fVar77 = auVar76._8_4_ * auVar75._8_4_ * (float)DAT_0388a148;
  fVar121 = 0.5;
  if (fVar60 < 0.0) {
    fVar121 = -0.5;
  }
  fVar60 = fVar60 - *(float *)PTR_Float2Pi_04372d30 *
                    (float)(int)(fVar121 + fVar60 * *(float *)PTR_Float1Divided2Pi_04372d20);
  if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar60) {
    fVar121 = *(float *)PTR_FloatPi_04372cf0;
  }
  else {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar60) {
      uVar70 = 0x3f;
      goto LAB_01e89b20;
    }
    fVar121 = -*(float *)PTR_FloatPi_04372cf0;
  }
  fVar60 = fVar121 - fVar60;
  uVar70 = 0xbf;
LAB_01e89b20:
  fVar121 = fVar60 * fVar60;
  fVar60 = fVar60 * (fVar121 * (fVar121 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                          fVar121 * (fVar121 * (*(float *)(
                                                  PTR_SinCoefficients_04372d28 + 4) -
                                                  *(float *)PTR_SinCoefficients_04372d28 * fVar121)
                                                  - *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                               *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar122 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                            CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                     CONCAT11((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar51 >> 8)
                                              ,SUB41(fVar58,0) & ~(byte)iVar51))) * fVar60;
  fVar123 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar50 >> 8)
                                              ,SUB41(fVar56,0) & ~(byte)iVar50))) * fVar60;
  fVar60 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar77,0) & ~(byte)iVar8))) * fVar60;
  auVar4._4_4_ = fVar65;
  auVar4._0_4_ = fVar63;
  auVar4._8_4_ = fVar67;
  auVar4._12_4_ = fVar59;
  uVar78 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
  fVar58 = (float)CONCAT13(uVar70,0x800000) *
           (fVar121 * (fVar121 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                 fVar121 * (fVar121 * (*(float *)(PTR_CosCoefficients_04372d40 + 4)
                                                      - fVar121 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                           *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                      *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  fVar127 = (float)((ulong)_UNK_03889ac8 >> 0x20);
  fVar125 = (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar56 = fVar122 * (float)_DAT_03889ac0;
  fVar121 = fVar123 * fVar125;
  uVar70 = SUB41(fVar121,0);
  uVar71 = (undefined1)((uint)fVar121 >> 8);
  uVar72 = (undefined1)((uint)fVar121 >> 0x10);
  uVar73 = (undefined1)((uint)fVar121 >> 0x18);
  fVar128 = fVar60 * (float)_UNK_03889ac8;
  uVar90 = SUB41(fVar128,0);
  uVar91 = (undefined1)((uint)fVar128 >> 8);
  uVar93 = (undefined1)((uint)fVar128 >> 0x10);
  uVar95 = (undefined1)((uint)fVar128 >> 0x18);
  fVar17 = fVar58 * fVar127;
  uVar97 = SUB41(fVar17,0);
  uVar99 = (undefined1)((uint)fVar17 >> 8);
  uVar101 = (undefined1)((uint)fVar17 >> 0x10);
  uVar103 = (undefined1)((uint)fVar17 >> 0x18);
  auVar5._4_4_ = fVar65;
  auVar5._0_4_ = fVar63;
  auVar5._8_4_ = fVar67;
  auVar5._12_4_ = fVar59;
  uVar61 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
  fVar82 = (float)((ulong)uVar78 >> 0x20);
  auVar9[4] = uVar70;
  auVar9._0_4_ = fVar56;
  auVar9[5] = uVar71;
  auVar9[6] = uVar72;
  auVar9[7] = uVar73;
  auVar9[8] = uVar90;
  auVar9[9] = uVar91;
  auVar9[10] = uVar93;
  auVar9[0xb] = uVar95;
  auVar9[0xc] = uVar97;
  auVar9[0xd] = uVar99;
  auVar9[0xe] = uVar101;
  auVar9[0xf] = uVar103;
  uVar79 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a580);
  auVar10[4] = uVar70;
  auVar10._0_4_ = fVar56;
  auVar10[5] = uVar71;
  auVar10[6] = uVar72;
  auVar10[7] = uVar73;
  auVar10[8] = uVar90;
  auVar10[9] = uVar91;
  auVar10[10] = uVar93;
  auVar10[0xb] = uVar95;
  auVar10[0xc] = uVar97;
  auVar10[0xd] = uVar99;
  auVar10[0xe] = uVar101;
  auVar10[0xf] = uVar103;
  uVar41 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a6c8);
  auVar11[4] = uVar70;
  auVar11._0_4_ = fVar56;
  auVar11[5] = uVar71;
  auVar11[6] = uVar72;
  auVar11[7] = uVar73;
  auVar11[8] = uVar90;
  auVar11[9] = uVar91;
  auVar11[10] = uVar93;
  auVar11[0xb] = uVar95;
  auVar11[0xc] = uVar97;
  auVar11[0xd] = uVar99;
  auVar11[0xe] = uVar101;
  auVar11[0xf] = uVar103;
  uVar74 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
  auVar12[4] = uVar70;
  auVar12._0_4_ = fVar56;
  auVar12[5] = uVar71;
  auVar12[6] = uVar72;
  auVar12[7] = uVar73;
  auVar12[8] = uVar90;
  auVar12[9] = uVar91;
  auVar12[10] = uVar93;
  auVar12[0xb] = uVar95;
  auVar12[0xc] = uVar97;
  auVar12[0xd] = uVar99;
  auVar12[0xe] = uVar101;
  auVar12[0xf] = uVar103;
  uVar129 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
  auVar13[4] = uVar70;
  auVar13._0_4_ = fVar56;
  auVar13[5] = uVar71;
  auVar13[6] = uVar72;
  auVar13[7] = uVar73;
  auVar13[8] = uVar90;
  auVar13[9] = uVar91;
  auVar13[10] = uVar93;
  auVar13[0xb] = uVar95;
  auVar13[0xc] = uVar97;
  auVar13[0xd] = uVar99;
  auVar13[0xe] = uVar101;
  auVar13[0xf] = uVar103;
  uVar45 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a790);
  fVar21 = (float)((ulong)uVar61 >> 0x20);
  auVar14[4] = uVar70;
  auVar14._0_4_ = fVar56;
  auVar14[5] = uVar71;
  auVar14[6] = uVar72;
  auVar14[7] = uVar73;
  auVar14[8] = SUB41(fVar56,0);
  auVar14[9] = (char)((uint)fVar56 >> 8);
  auVar14[10] = (char)((uint)fVar56 >> 0x10);
  auVar14[0xb] = (char)((uint)fVar56 >> 0x18);
  auVar14[0xc] = uVar70;
  auVar14[0xd] = uVar71;
  auVar14[0xe] = uVar72;
  auVar14[0xf] = uVar73;
  uVar52 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a648);
  fVar77 = fVar63 * (float)uVar52;
  fVar16 = fVar65 * (float)((ulong)uVar52 >> 0x20);
  auVar6._4_4_ = fVar65;
  auVar6._0_4_ = fVar63;
  auVar6._8_4_ = fVar67;
  auVar6._12_4_ = fVar59;
  uVar52 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
  fVar59 = (float)((ulong)uVar52 >> 0x20);
  fVar68 = (float)_UNK_03889ad8;
  fVar69 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar67 = (float)_DAT_03889ad0;
  fVar66 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar124 = fVar62 * (float)_DAT_03889ac0;
  fVar125 = fVar64 * fVar125;
  fVar126 = param_2._8_4_ * (float)_UNK_03889ac8;
  fVar127 = param_2._12_4_ * fVar127;
  auVar22._4_4_ = fVar123;
  auVar22._0_4_ = fVar122;
  auVar22._8_4_ = fVar60;
  auVar22._12_4_ = fVar58;
  uVar15 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
  fVar63 = ((float)uVar78 * fVar56 + fVar67 * fVar63 * (float)uVar79 +
           fVar67 * (float)uVar52 * (float)uVar74) - (float)uVar61 * (float)uVar129;
  fVar121 = (fVar82 * fVar121 + fVar66 * fVar65 * (float)((ulong)uVar79 >> 0x20) +
            fVar66 * fVar59 * (float)((ulong)uVar74 >> 0x20)) -
            fVar21 * (float)((ulong)uVar129 >> 0x20);
  fVar128 = ((float)uVar78 * fVar128 + fVar68 * (float)uVar61 * (float)uVar41 + fVar68 * fVar77) -
            (float)uVar52 * (float)uVar45;
  fVar77 = (fVar82 * fVar17 + fVar69 * fVar21 * (float)((ulong)uVar41 >> 0x20) +
           fVar69 * (float)(CONCAT17((char)((uint)fVar16 >> 0x18),
                                     CONCAT16((char)((uint)fVar16 >> 0x10),
                                              CONCAT15((char)((uint)fVar16 >> 8),
                                                       CONCAT14(SUB41(fVar16,0),fVar77)))) >> 0x20))
           - fVar59 * (float)((ulong)uVar45 >> 0x20);
  fVar59 = (float)((ulong)uVar15 >> 0x20);
  auVar23._4_4_ = fVar123;
  auVar23._0_4_ = fVar122;
  auVar23._8_4_ = fVar60;
  auVar23._12_4_ = fVar58;
  uVar52 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
  auVar35._4_4_ = fVar121;
  auVar35._0_4_ = fVar63;
  auVar35._8_4_ = fVar128;
  auVar35._12_4_ = fVar77;
  uVar45 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a580);
  auVar36._4_4_ = fVar121;
  auVar36._0_4_ = fVar63;
  auVar36._8_4_ = fVar128;
  auVar36._12_4_ = fVar77;
  uVar79 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a6c8);
  fVar56 = (float)((ulong)uVar52 >> 0x20);
  auVar42._4_4_ = fVar121;
  auVar42._0_4_ = fVar63;
  auVar42._8_4_ = fVar63;
  auVar42._12_4_ = fVar121;
  uVar129 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a648);
  auVar37._4_4_ = fVar121;
  auVar37._0_4_ = fVar63;
  auVar37._8_4_ = fVar128;
  auVar37._12_4_ = fVar77;
  uVar130 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a680);
  auVar30._4_4_ = fVar125;
  auVar30._0_4_ = fVar124;
  auVar30._8_4_ = fVar126;
  auVar30._12_4_ = fVar127;
  uVar78 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6c8);
  auVar24._4_4_ = fVar123;
  auVar24._0_4_ = fVar122;
  auVar24._8_4_ = fVar60;
  auVar24._12_4_ = fVar58;
  uVar61 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
  fVar65 = (float)((ulong)uVar61 >> 0x20);
  auVar38._4_4_ = fVar121;
  auVar38._0_4_ = fVar63;
  auVar38._8_4_ = fVar128;
  auVar38._12_4_ = fVar77;
  uVar131 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a880);
  auVar39._4_4_ = fVar121;
  auVar39._0_4_ = fVar63;
  auVar39._8_4_ = fVar128;
  auVar39._12_4_ = fVar77;
  uVar41 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a790);
  auVar31._4_4_ = fVar125;
  auVar31._0_4_ = fVar124;
  auVar31._8_4_ = fVar126;
  auVar31._12_4_ = fVar127;
  uVar43 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a680);
  auVar32._4_4_ = fVar125;
  auVar32._0_4_ = fVar124;
  auVar32._8_4_ = fVar126;
  auVar32._12_4_ = fVar127;
  uVar74 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a580);
  fVar58 = ((float)uVar15 * fVar63 + fVar67 * fVar122 * (float)uVar45 +
           fVar67 * (float)uVar61 * (float)uVar130) - (float)uVar52 * (float)uVar131;
  fVar60 = (fVar59 * fVar121 + fVar66 * fVar123 * (float)((ulong)uVar45 >> 0x20) +
           fVar66 * fVar65 * (float)((ulong)uVar130 >> 0x20)) -
           fVar56 * (float)((ulong)uVar131 >> 0x20);
  fVar63 = ((float)uVar15 * fVar128 + fVar68 * (float)uVar52 * (float)uVar79 +
           fVar68 * fVar122 * (float)uVar129) - (float)uVar61 * (float)uVar41;
  fVar59 = (fVar59 * fVar77 + fVar69 * fVar56 * (float)((ulong)uVar79 >> 0x20) +
           fVar69 * fVar123 * (float)((ulong)uVar129 >> 0x20)) -
           fVar65 * (float)((ulong)uVar41 >> 0x20);
  bVar92 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar94 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar96 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar98 = (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar100 = (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar102 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar104 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  bVar83 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar84 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar85 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar86 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar87 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar88 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar89 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  auVar44._4_4_ = fVar125;
  auVar44._0_4_ = fVar124;
  auVar44._8_4_ = fVar124;
  auVar44._12_4_ = fVar125;
  uVar129 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a648);
  bVar105 = SUB41(fVar58,0) & (byte)_DAT_038897c0;
  bVar106 = (byte)((uint)fVar58 >> 8) & bVar83;
  bVar107 = (byte)((uint)fVar58 >> 0x10) & bVar84;
  bVar108 = (byte)((uint)fVar58 >> 0x18) & bVar85;
  bVar109 = SUB41(fVar60,0) & bVar86;
  bVar110 = (byte)((uint)fVar60 >> 8) & bVar87;
  bVar111 = (byte)((uint)fVar60 >> 0x10) & bVar88;
  bVar112 = (byte)((uint)fVar60 >> 0x18) & bVar89;
  bVar113 = SUB41(fVar63,0) & (byte)_UNK_038897c8;
  bVar114 = (byte)((uint)fVar63 >> 8) & bVar92;
  bVar115 = (byte)((uint)fVar63 >> 0x10) & bVar94;
  bVar116 = (byte)((uint)fVar63 >> 0x18) & bVar96;
  bVar117 = SUB41(fVar59,0) & bVar98;
  bVar118 = (byte)((uint)fVar59 >> 8) & bVar100;
  bVar119 = (byte)((uint)fVar59 >> 0x10) & bVar102;
  bVar120 = (byte)((uint)fVar59 >> 0x18) & bVar104;
  auVar18[1] = bVar106;
  auVar18[0] = bVar105;
  auVar18[2] = bVar107;
  auVar18[3] = bVar108;
  auVar18[4] = bVar109;
  auVar18[5] = bVar110;
  auVar18[6] = bVar111;
  auVar18[7] = bVar112;
  auVar18[8] = bVar113;
  auVar18[9] = bVar114;
  auVar18[10] = bVar115;
  auVar18[0xb] = bVar116;
  auVar18[0xc] = bVar117;
  auVar18[0xd] = bVar118;
  auVar18[0xe] = bVar119;
  auVar18[0xf] = bVar120;
  uVar15 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a580);
  fVar56 = (float)((ulong)uVar15 >> 0x20);
  auVar19[1] = bVar106;
  auVar19[0] = bVar105;
  auVar19[2] = bVar107;
  auVar19[3] = bVar108;
  auVar19[4] = bVar109;
  auVar19[5] = bVar110;
  auVar19[6] = bVar111;
  auVar19[7] = bVar112;
  auVar19[8] = bVar113;
  auVar19[9] = bVar114;
  auVar19[10] = bVar115;
  auVar19[0xb] = bVar116;
  auVar19[0xc] = bVar117;
  auVar19[0xd] = bVar118;
  auVar19[0xe] = bVar119;
  auVar19[0xf] = bVar120;
  uVar131 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
  auVar20[1] = bVar106;
  auVar20[0] = bVar105;
  auVar20[2] = bVar107;
  auVar20[3] = bVar108;
  auVar20[4] = bVar109;
  auVar20[5] = bVar110;
  auVar20[6] = bVar111;
  auVar20[7] = bVar112;
  auVar20[8] = bVar113;
  auVar20[9] = bVar114;
  auVar20[10] = bVar115;
  auVar20[0xb] = bVar116;
  auVar20[0xc] = bVar117;
  auVar20[0xd] = bVar118;
  auVar20[0xe] = bVar119;
  auVar20[0xf] = bVar120;
  uVar52 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
  fVar65 = (float)((ulong)uVar131 >> 0x20);
  fVar59 = (float)((ulong)uVar52 >> 0x20);
  auVar33._4_4_ = fVar125;
  auVar33._0_4_ = fVar124;
  auVar33._8_4_ = fVar126;
  auVar33._12_4_ = fVar127;
  uVar79 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
  auVar34._4_4_ = fVar125;
  auVar34._0_4_ = fVar124;
  auVar34._8_4_ = fVar126;
  auVar34._12_4_ = fVar127;
  uVar61 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a790);
  uVar41 = a64_TBL(ZEXT816(0),param_2,DAT_0388a680);
  fVar77 = (float)((ulong)uVar41 >> 0x20);
  uVar45 = a64_TBL(ZEXT816(0),param_2,DAT_0388a580);
  fVar121 = (float)((ulong)uVar45 >> 0x20);
  fVar58 = (fVar124 * (float)uVar15 +
            fVar67 * (float)CONCAT13(bVar108,CONCAT12(bVar107,CONCAT11(bVar106,bVar105))) *
                     (float)uVar74 + fVar67 * (float)uVar52 * (float)uVar43) -
           (float)uVar131 * (float)uVar79;
  fVar60 = (fVar125 * fVar56 +
            fVar66 * (float)CONCAT13(bVar112,CONCAT12(bVar111,CONCAT11(bVar110,bVar109))) *
                     (float)((ulong)uVar74 >> 0x20) +
           fVar66 * fVar59 * (float)((ulong)uVar43 >> 0x20)) -
           fVar65 * (float)((ulong)uVar79 >> 0x20);
  fVar63 = (fVar126 * (float)uVar15 + fVar68 * (float)uVar131 * (float)uVar78 +
           fVar68 * (float)CONCAT13(bVar108,CONCAT12(bVar107,CONCAT11(bVar106,bVar105))) *
                    (float)uVar129) - (float)uVar52 * (float)uVar61;
  fVar65 = (fVar127 * fVar56 + fVar69 * fVar65 * (float)((ulong)uVar78 >> 0x20) +
           fVar69 * (float)CONCAT13(bVar112,CONCAT12(bVar111,CONCAT11(bVar110,bVar109))) *
                    (float)((ulong)uVar129 >> 0x20)) - fVar59 * (float)((ulong)uVar61 >> 0x20);
  auVar25._4_4_ = fVar60;
  auVar25._0_4_ = fVar58;
  auVar25._8_4_ = fVar63;
  auVar25._12_4_ = fVar65;
  uVar61 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a580);
  auVar26._4_4_ = fVar60;
  auVar26._0_4_ = fVar58;
  auVar26._8_4_ = fVar63;
  auVar26._12_4_ = fVar65;
  uVar129 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a6c8);
  auVar27._4_4_ = fVar60;
  auVar27._0_4_ = fVar58;
  auVar27._8_4_ = fVar63;
  auVar27._12_4_ = fVar65;
  uVar74 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
  auVar28._4_4_ = fVar60;
  auVar28._0_4_ = fVar58;
  auVar28._8_4_ = fVar63;
  auVar28._12_4_ = fVar65;
  uVar15 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a880);
  uVar79 = a64_TBL(ZEXT816(0),param_2,DAT_0388a880);
  fVar56 = (float)((ulong)uVar79 >> 0x20);
  auVar40._4_4_ = fVar60;
  auVar40._0_4_ = fVar58;
  auVar40._8_4_ = fVar58;
  auVar40._12_4_ = fVar60;
  uVar78 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a648);
  auVar29._4_4_ = fVar60;
  auVar29._0_4_ = fVar58;
  auVar29._8_4_ = fVar63;
  auVar29._12_4_ = fVar65;
  uVar52 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a790);
  fVar59 = ((float)uVar45 * fVar58 + fVar67 * fVar62 * (float)uVar61 +
           fVar67 * (float)uVar79 * (float)uVar74) - (float)uVar41 * (float)uVar15;
  fVar58 = (fVar121 * fVar60 + fVar66 * fVar64 * (float)((ulong)uVar61 >> 0x20) +
           fVar66 * fVar56 * (float)((ulong)uVar74 >> 0x20)) -
           fVar77 * (float)((ulong)uVar15 >> 0x20);
  fVar62 = ((float)uVar45 * fVar63 + fVar68 * (float)uVar41 * (float)uVar129 +
           fVar68 * fVar62 * (float)uVar78) - (float)uVar79 * (float)uVar52;
  fVar64 = (fVar121 * fVar65 + fVar69 * fVar77 * (float)((ulong)uVar129 >> 0x20) +
           fVar69 * fVar64 * (float)((ulong)uVar78 >> 0x20)) -
           fVar56 * (float)((ulong)uVar52 >> 0x20);
  fVar59 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & bVar85,
                           CONCAT12((byte)((uint)fVar59 >> 0x10) & bVar84,
                                    CONCAT11((byte)((uint)fVar59 >> 8) & bVar83,
                                             SUB41(fVar59,0) & (byte)_DAT_038897c0)));
  fVar62 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & bVar96,
                           CONCAT12((byte)((uint)fVar62 >> 0x10) & bVar94,
                                    CONCAT11((byte)((uint)fVar62 >> 8) & bVar92,
                                             SUB41(fVar62,0) & (byte)_UNK_038897c8)));
  *(ulong *)(param_3 + 0x6a8) =
       CONCAT44(param_1._12_4_ +
                (float)(CONCAT17((byte)((uint)fVar64 >> 0x18) & bVar104,
                                 CONCAT16((byte)((uint)fVar64 >> 0x10) & bVar102,
                                          CONCAT15((byte)((uint)fVar64 >> 8) & bVar100,
                                                   CONCAT14(SUB41(fVar64,0) & bVar98,fVar62)))) >>
                       0x20),param_1._8_4_ + fVar62);
  *(ulong *)(param_3 + 0x6a0) =
       CONCAT44(param_1._4_4_ +
                (float)(CONCAT17((byte)((uint)fVar58 >> 0x18) & bVar89,
                                 CONCAT16((byte)((uint)fVar58 >> 0x10) & bVar88,
                                          CONCAT15((byte)((uint)fVar58 >> 8) & bVar87,
                                                   CONCAT14(SUB41(fVar58,0) & bVar86,fVar59)))) >>
                       0x20),param_1._0_4_ + fVar59);
  puVar49 = PTR_DAT_0437a668;
  puVar48 = PTR_DAT_0437a660;
  puVar47 = PTR_DAT_043794d8;
  puVar46 = PTR_DAT_043794d0;
  local_e0 = 0x7f7fffee;
  local_110[0] = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_c8 = 0xffffffff;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d0 = 0xffffff;
  local_c4 = 0xf;
  local_c0 = 0xffff;
  local_bc = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0xffffffff;
  local_b8 = 0;
  uStack_b0 = 0xffffffffffffffff;
  local_d8 = 0xffffffffffffffff;
  local_a8 = 0xffffff;
  local_9c = 0xf;
  local_98 = 0xffff;
  local_94 = 0;
  lVar54 = *(long *)(param_3 + 0x210);
  if ((lVar54 != 0) && (*(int *)(lVar54 + 0xc) != 0)) {
    piVar1 = (int *)(lVar54 + 0xc);
    iVar51 = *(int *)(lVar54 + 0xc);
    do {
      plVar55 = *(long **)(lVar54 + 0x10);
      if (((*puVar49 & 1) == 0) && (iVar50 = __cxa_guard_acquire(puVar49), iVar50 != 0)) {
        if (((*puVar46 & 1) == 0) && (iVar50 = __cxa_guard_acquire(puVar46), iVar50 != 0)) {
          uVar52 = FUN_0087f8f0();
          *(undefined8 *)puVar47 = uVar52;
          __cxa_guard_release(puVar46);
        }
        *(undefined **)puVar48 = puVar47;
        __cxa_guard_release(puVar49);
      }
      while( true ) {
        if (plVar55 == (long *)0x0) goto LAB_01e89df8;
        if (plVar55 == (long *)puVar48) break;
        plVar55 = (long *)*plVar55;
      }
      iVar50 = *piVar1;
      if (iVar50 == iVar51) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar51 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar54 = *(long *)(lVar54 + 0x18);
          if (lVar54 != 0) {
            uVar57 = FUN_01e4311c();
            local_160 = 0xd65830cac3e925da;
            pcStack_158 = "field_obstruction_waza";
            local_150 = 0x16;
            local_148 = (long *)0x0;
            local_180 = 0x37624cde0f68d876;
            pcStack_178 = "fix_terrain_raycast_y";
            local_170 = 0x15;
            local_168 = (long *)0x0;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar51 = __cxa_guard_acquire(PTR_DAT_04379660), iVar51 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            uVar52 = *(undefined8 *)PTR_DAT_04379668;
            *(undefined8 *)PTR_DAT_04379670 = uVar52;
            FUN_00d7d9e4(&local_68,uVar52,&local_160);
            if (local_68 == (long *)0x0) {
              local_190 = 0.0;
            }
            else {
              local_190 = (float)FUN_00d7905c(local_68,&local_180);
              if (local_68 != (long *)0x0) {
                plVar55 = local_68 + 10;
                do {
                  iVar51 = (int)*plVar55 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar55,0x10);
                  if (bVar3) {
                    *(int *)plVar55 = iVar51;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar51 == 0) {
                  (**(code **)(*local_68 + 0x10))();
                }
              }
            }
            plVar55 = (long *)(lVar54 + -0x50);
            if (local_168 != (long *)0x0) {
              (**(code **)(*local_168 + 0x20))();
            }
            if (local_148 != (long *)0x0) {
              (**(code **)(*local_148 + 0x20))();
            }
            fVar59 = (float)*(undefined8 *)(param_3 + 0x6a0);
            fVar58 = (float)((ulong)*(undefined8 *)(param_3 + 0x6a0) >> 0x20);
            local_160 = CONCAT44((float)((ulong)DAT_0388a140 >> 0x20) * local_190 + fVar58,
                                 (float)DAT_0388a140 * local_190 + fVar59);
            fVar62 = (float)*(undefined8 *)(param_3 + 0x6a8);
            fVar64 = (float)((ulong)*(undefined8 *)(param_3 + 0x6a8) >> 0x20);
            pcStack_158 = (char *)CONCAT44((float)((ulong)DAT_0388a148 >> 0x20) * local_190 + fVar64
                                           ,(float)DAT_0388a148 * local_190 + fVar62);
            local_180 = CONCAT44((float)((ulong)_DAT_03889fd0 >> 0x20) * local_190 + fVar58,
                                 (float)_DAT_03889fd0 * local_190 + fVar59);
            pcStack_178 = (char *)CONCAT44((float)((ulong)_UNK_03889fd8 >> 0x20) * local_190 +
                                           fVar64,(float)_UNK_03889fd8 * local_190 + fVar62);
            uVar53 = FUN_01e434f4(plVar55,&local_160,&local_180,uVar57,auStack_140);
            if ((uVar53 & 1) != 0) {
              uVar57 = *(undefined4 *)((ulong)auStack_140 | 4);
              *(undefined8 *)(param_3 + 0x6a8) = *(undefined8 *)(param_3 + 0x6a8);
              *(ulong *)(param_3 + 0x6a0) = CONCAT44(uVar57,(int)*(undefined8 *)(param_3 + 0x6a0));
            }
            lVar54 = *(long *)(lVar54 + 8);
            piVar1 = (int *)(lVar54 + 0xc);
            do {
              iVar51 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar51 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar51 + -1 == 0) {
              *(undefined8 *)(lVar54 + 0x18) = 0;
              (**(code **)(*plVar55 + 0x20))(plVar55);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar51 = iVar50;
    } while (iVar50 != 0);
  }
LAB_01e89df8:
  FUN_032c7b9c(local_110);
  return;
}


