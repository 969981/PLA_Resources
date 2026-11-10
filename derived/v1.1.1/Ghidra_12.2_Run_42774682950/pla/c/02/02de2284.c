/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de2284; name: FUN_02de2284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02de2284(undefined1 param_1 [16],float param_2,long param_3,int param_4,
            undefined1 (*param_5) [16],undefined1 (*param_6) [16],uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  float fVar42;
  undefined1 auVar41 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  int iVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  int iVar68;
  undefined1 auVar63 [16];
  int iVar67;
  int iVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  int iVar73;
  undefined8 uVar74;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar75 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [4];
  
  if ((-1 < param_4) &&
     (lVar3 = *(long *)(param_3 + 0x110),
     param_4 < (int)((ulong)(*(long *)(param_3 + 0x118) - lVar3) >> 4) * -0x5cc0ed73)) {
    lVar14 = (long)param_4;
    if (param_2 <= 0.0) {
      bVar12 = false;
    }
    else {
      fVar70 = *(float *)PTR_FloatPi_04372cf0;
      fStack_98 = param_1._8_4_;
      fStack_94 = param_1._12_4_;
      local_a0 = param_1._0_4_;
      fStack_9c = param_1._4_4_;
      fVar71 = fVar70 / *(float *)PTR_FloatDegree180_04372ce0;
      auVar23._0_4_ = local_a0 * *(float *)*param_5;
      auVar23._4_4_ = fStack_9c * *(float *)(*param_5 + 4);
      auVar23._8_4_ = fStack_98 * *(float *)(*param_5 + 8);
      auVar23._12_4_ = fStack_94 * *(float *)(*param_5 + 0xc);
      auVar22 = NEON_ext(auVar23,auVar23,8,1);
      local_90[3] = auVar22._0_4_ + auVar23._0_4_ + auVar22._4_4_ + auVar23._4_4_;
      pfVar1 = local_90 + 3;
      if (local_90[3] <= -1.0) {
        pfVar1 = local_90 + 2;
      }
      local_90[1] = 1.0;
      local_90[2] = -1.0;
      pfVar2 = local_90 + 1;
      if (*pfVar1 <= 1.0) {
        pfVar2 = pfVar1;
      }
      local_90[3] = *pfVar2;
      fVar16 = acosf(local_90[3]);
      if ((fVar16 <= fVar71 * param_2) || (fVar16 <= 0.0)) {
        bVar12 = false;
        *(undefined4 *)(lVar3 + lVar14 * 0x450 + 0x350) = 0;
      }
      else {
        lVar13 = lVar3 + lVar14 * 0x450;
        fVar17 = *(float *)(lVar13 + 0x358);
        fVar18 = *(float *)(lVar13 + 0x35c);
        auVar22._0_4_ = -(local_a0 * *(float *)*param_5);
        auVar22._4_4_ = -(fStack_9c * *(float *)(*param_5 + 4));
        auVar22._8_4_ = -(fStack_98 * *(float *)(*param_5 + 8));
        auVar22._12_4_ = -(fStack_94 * *(float *)(*param_5 + 0xc));
        auVar23 = NEON_ext(auVar22,auVar22,8,1);
        local_90[2] = auVar23._0_4_ + auVar22._0_4_ + auVar23._4_4_ + auVar22._4_4_;
        pfVar1 = local_90 + 2;
        if (local_90[2] <= -1.0) {
          pfVar1 = local_90 + 1;
        }
        local_90[0] = 1.0;
        local_90[1] = -1.0;
        pfVar2 = local_90;
        if (*pfVar1 <= 1.0) {
          pfVar2 = pfVar1;
        }
        local_90[2] = *pfVar2;
        fVar19 = acosf(local_90[2]);
        bVar12 = fVar19 < fVar71 * fVar18;
        if (!bVar12) {
          *(undefined4 *)(lVar3 + lVar14 * 0x450 + 0x350) = 0;
        }
        bVar12 = bVar12 && fVar19 < fVar71 * fVar17;
        uVar62 = a64_TBL(ZEXT816(0),*param_5,DAT_0388a680);
        uVar40 = a64_TBL(ZEXT816(0),param_1,DAT_0388a880);
        uVar43 = a64_TBL(ZEXT816(0),param_1,DAT_0388a6f0);
        uVar31 = a64_TBL(ZEXT816(0),*param_5,DAT_0388a6f0);
        uVar74 = a64_TBL(ZEXT816(0),*param_5,DAT_0388a6d8);
        uVar60 = a64_TBL(ZEXT816(0),param_1,DAT_0388a6d8);
        fVar39 = (float)uVar40;
        fVar42 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = a64_TBL(ZEXT816(0),param_1,DAT_0388a680);
        uVar61 = a64_TBL(ZEXT816(0),*param_5,DAT_0388a880);
        fVar72 = (float)uVar40;
        fVar76 = (float)((ulong)uVar40 >> 0x20);
        fVar17 = fVar39 * (float)uVar62 - fVar72 * (float)uVar61;
        fVar18 = fVar42 * (float)((ulong)uVar62 >> 0x20) - fVar76 * (float)((ulong)uVar61 >> 0x20);
        fVar19 = (float)uVar43 * (float)uVar74 - (float)uVar60 * (float)uVar31;
        fVar59 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar74 >> 0x20) -
                 (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
        auVar32._0_4_ = fVar17 * fVar17;
        auVar32._4_4_ = fVar18 * fVar18;
        auVar32._8_4_ = fVar19 * fVar19;
        auVar32._12_4_ = fVar59 * fVar59;
        auVar23 = NEON_ext(auVar32,auVar32,8,1);
        fVar29 = auVar23._0_4_ + auVar32._0_4_;
        fVar34 = auVar23._4_4_ + auVar32._4_4_;
        fVar15 = fVar29 + fVar34;
        fVar29 = fVar29 + fVar34;
        iVar73 = -(uint)(fVar15 == 0.0);
        auVar63._8_8_ = CONCAT44(fVar29,fVar15);
        auVar63._0_8_ = CONCAT44(fVar29,fVar15);
        auVar23 = NEON_frsqrte(auVar63,4);
        auVar85._0_4_ = auVar23._0_4_ * fVar15;
        auVar85._4_4_ = auVar23._4_4_ * fVar29;
        auVar85._8_4_ = auVar23._8_4_ * fVar15;
        auVar85._12_4_ = auVar23._12_4_ * fVar29;
        auVar22 = NEON_frsqrts(auVar23,auVar85,4);
        auVar80._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar80._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar80._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar80._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        auVar86._0_4_ = fVar15 * auVar80._0_4_;
        auVar86._4_4_ = fVar29 * auVar80._4_4_;
        auVar86._8_4_ = fVar15 * auVar80._8_4_;
        auVar86._12_4_ = fVar29 * auVar80._12_4_;
        iVar58 = -(uint)(fVar15 == 0.0);
        iVar67 = -(uint)(fVar29 == 0.0);
        iVar68 = -(uint)(fVar15 == 0.0);
        iVar69 = -(uint)(fVar29 == 0.0);
        auVar23 = NEON_frsqrts(auVar80,auVar86,4);
        fVar17 = fVar17 * auVar80._0_4_ * auVar23._0_4_;
        fVar18 = fVar18 * auVar80._4_4_ * auVar23._4_4_;
        fVar19 = fVar19 * auVar80._8_4_ * auVar23._8_4_;
        fVar59 = fVar59 * auVar80._12_4_ * auVar23._12_4_;
        auVar64._0_4_ =
             CONCAT13(~(byte)((uint)iVar73 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar73 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar73 >> 8),~(byte)iVar73)));
        auVar64._4_4_ = auVar64._0_4_;
        auVar64._8_4_ = auVar64._0_4_;
        auVar64._12_4_ = auVar64._0_4_;
        auVar4[1] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar4[0] = SUB41(fVar17,0) & ~(byte)iVar58;
        auVar4[2] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar4[3] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        auVar4[4] = SUB41(fVar18,0) & ~(byte)iVar67;
        auVar4[5] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar67 >> 8);
        auVar4[6] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
        auVar4[7] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
        auVar4[8] = SUB41(fVar19,0) & ~(byte)iVar68;
        auVar4[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar68 >> 8);
        auVar4[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
        auVar4[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
        auVar4[0xc] = SUB41(fVar59,0) & ~(byte)iVar69;
        auVar4[0xd] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar69 >> 8);
        auVar4[0xe] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
        auVar4[0xf] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
        auVar23 = *param_6 ^ (*param_6 ^ auVar4) & auVar64;
        fVar15 = auVar23._0_4_;
        fVar17 = fVar15 * fVar15;
        fVar29 = auVar23._4_4_;
        fVar18 = fVar29 * fVar29;
        uVar46 = (undefined1)((uint)fVar18 >> 8);
        uVar47 = (undefined1)((uint)fVar18 >> 0x10);
        uVar48 = (undefined1)((uint)fVar18 >> 0x18);
        fVar34 = auVar23._8_4_;
        fVar19 = fVar34 * fVar34;
        uVar49 = (undefined1)((uint)fVar19 >> 8);
        uVar50 = (undefined1)((uint)fVar19 >> 0x10);
        uVar52 = (undefined1)((uint)fVar19 >> 0x18);
        fVar59 = auVar23._12_4_ * auVar23._12_4_;
        uVar51 = (undefined1)((uint)fVar59 >> 8);
        uVar53 = (undefined1)((uint)fVar59 >> 0x10);
        uVar56 = (undefined1)((uint)fVar59 >> 0x18);
        auVar5[4] = SUB41(fVar18,0);
        auVar5._0_4_ = fVar17;
        auVar5[5] = uVar46;
        auVar5[6] = uVar47;
        auVar5[7] = uVar48;
        auVar5[8] = SUB41(fVar19,0);
        auVar5[9] = uVar49;
        auVar5[10] = uVar50;
        auVar5[0xb] = uVar52;
        auVar5[0xc] = SUB41(fVar59,0);
        auVar5[0xd] = uVar51;
        auVar5[0xe] = uVar53;
        auVar5[0xf] = uVar56;
        auVar6[4] = SUB41(fVar18,0);
        auVar6._0_4_ = fVar17;
        auVar6[5] = uVar46;
        auVar6[6] = uVar47;
        auVar6[7] = uVar48;
        auVar6[8] = SUB41(fVar19,0);
        auVar6[9] = uVar49;
        auVar6[10] = uVar50;
        auVar6[0xb] = uVar52;
        auVar6[0xc] = SUB41(fVar59,0);
        auVar6[0xd] = uVar51;
        auVar6[0xe] = uVar53;
        auVar6[0xf] = uVar56;
        auVar23 = NEON_ext(auVar5,auVar6,8,1);
        fVar17 = auVar23._0_4_ + fVar17;
        fVar18 = auVar23._4_4_ + fVar18;
        fVar19 = fVar17 + fVar18;
        fVar17 = fVar17 + fVar18;
        uVar46 = SUB41(fVar17,0);
        uVar47 = (undefined1)((uint)fVar17 >> 8);
        uVar48 = (undefined1)((uint)fVar17 >> 0x10);
        uVar49 = (undefined1)((uint)fVar17 >> 0x18);
        auVar7[4] = uVar46;
        auVar7._0_4_ = fVar19;
        auVar7[5] = uVar47;
        auVar7[6] = uVar48;
        auVar7[7] = uVar49;
        auVar7[8] = SUB41(fVar19,0);
        auVar7[9] = (char)((uint)fVar19 >> 8);
        auVar7[10] = (char)((uint)fVar19 >> 0x10);
        auVar7[0xb] = (char)((uint)fVar19 >> 0x18);
        auVar7[0xc] = uVar46;
        auVar7[0xd] = uVar47;
        auVar7[0xe] = uVar48;
        auVar7[0xf] = uVar49;
        auVar23 = NEON_frsqrte(auVar7,4);
        auVar81._0_4_ = auVar23._0_4_ * fVar19;
        auVar81._4_4_ = auVar23._4_4_ * fVar17;
        auVar81._8_4_ = auVar23._8_4_ * fVar19;
        uVar11 = (undefined2)(CONCAT15(uVar47,CONCAT14(uVar46,fVar19)) >> 0x20);
        auVar81._12_4_ = auVar23._12_4_ * (float)CONCAT13(uVar49,CONCAT12(uVar48,uVar11));
        auVar22 = NEON_frsqrts(auVar23,auVar81,4);
        auVar75._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar75._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar75._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar75._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        auVar82._0_4_ = fVar19 * auVar75._0_4_;
        auVar82._4_4_ = fVar17 * auVar75._4_4_;
        auVar82._8_4_ = fVar19 * auVar75._8_4_;
        auVar82._12_4_ = (float)CONCAT13(uVar49,CONCAT12(uVar48,uVar11)) * auVar75._12_4_;
        iVar58 = -(uint)(fVar19 == 0.0);
        iVar67 = -(uint)(fVar17 == 0.0);
        iVar68 = -(uint)(fVar19 == 0.0);
        auVar23 = NEON_frsqrts(auVar75,auVar82,4);
        fVar15 = fVar15 * auVar75._0_4_ * auVar23._0_4_;
        fVar29 = fVar29 * auVar75._4_4_ * auVar23._4_4_;
        fVar34 = fVar34 * auVar75._8_4_ * auVar23._8_4_;
        fVar16 = (fVar16 - fVar71 * param_2) * 0.5;
        fVar71 = 0.5;
        if (fVar16 < 0.0) {
          fVar71 = -0.5;
        }
        fVar16 = fVar16 - *(float *)PTR_Float2Pi_04372d30 *
                          (float)(int)(fVar71 + fVar16 * *(float *)PTR_Float1Divided2Pi_04372d20);
        fVar17 = 1.0;
        fVar71 = fVar16;
        if (fVar16 < -*(float *)PTR_FloatPiDivided2_04372d38) {
          fVar17 = -1.0;
          fVar71 = -fVar70 - fVar16;
        }
        if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar16) {
          fVar17 = -1.0;
          fVar71 = fVar70 - fVar16;
        }
        fVar18 = fVar71 * fVar71;
        fVar71 = fVar71 * (fVar18 * (fVar18 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                              fVar18 * (fVar18 * (*(float *)(
                                                  PTR_SinCoefficients_04372d28 + 4) -
                                                  *(float *)PTR_SinCoefficients_04372d28 * fVar18) -
                                                  *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                                    *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
        fVar70 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                                 CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                          ~(byte)((uint)iVar58 >> 0x10),
                                          CONCAT11((byte)((uint)fVar15 >> 8) &
                                                   ~(byte)((uint)iVar58 >> 8),
                                                   SUB41(fVar15,0) & ~(byte)iVar58))) * fVar71;
        fVar16 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                                 CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                          ~(byte)((uint)iVar67 >> 0x10),
                                          CONCAT11((byte)((uint)fVar29 >> 8) &
                                                   ~(byte)((uint)iVar67 >> 8),
                                                   SUB41(fVar29,0) & ~(byte)iVar67))) * fVar71;
        uVar46 = SUB41(fVar16,0);
        uVar47 = (undefined1)((uint)fVar16 >> 8);
        uVar48 = (undefined1)((uint)fVar16 >> 0x10);
        uVar49 = (undefined1)((uint)fVar16 >> 0x18);
        fVar71 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                 CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                          ~(byte)((uint)iVar68 >> 0x10),
                                          CONCAT11((byte)((uint)fVar34 >> 8) &
                                                   ~(byte)((uint)iVar68 >> 8),
                                                   SUB41(fVar34,0) & ~(byte)iVar68))) * fVar71;
        uVar50 = SUB41(fVar71,0);
        uVar52 = (undefined1)((uint)fVar71 >> 8);
        uVar51 = (undefined1)((uint)fVar71 >> 0x10);
        uVar53 = (undefined1)((uint)fVar71 >> 0x18);
        fVar17 = fVar17 * (fVar18 * (fVar18 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                              fVar18 * (fVar18 * (*(float *)(
                                                  PTR_CosCoefficients_04372d40 + 4) -
                                                  fVar18 * *(float *)PTR_CosCoefficients_04372d40) -
                                                  *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                                    *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
        uVar56 = SUB41(fVar17,0);
        uVar54 = (undefined1)((uint)fVar17 >> 8);
        uVar55 = (undefined1)((uint)fVar17 >> 0x10);
        uVar57 = (undefined1)((uint)fVar17 >> 0x18);
        fVar18 = fVar70 * (float)_DAT_03889ac0;
        fVar19 = fVar16 * (float)((ulong)_DAT_03889ac0 >> 0x20);
        auVar83._0_8_ = CONCAT44(fVar19,fVar18);
        auVar83._8_4_ = fVar71 * (float)_UNK_03889ac8;
        auVar83._12_4_ = fVar17 * (float)((ulong)_UNK_03889ac8 >> 0x20);
        uVar62 = a64_TBL(ZEXT816(0),param_1,DAT_0388a580);
        uVar31 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a580);
        uVar60 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a6c8);
        fVar71 = (float)((ulong)uVar62 >> 0x20);
        uVar61 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a680);
        uVar88 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a790);
        fVar34 = (float)_DAT_03889ad0;
        fVar77 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar78 = (float)_UNK_03889ad8;
        fVar79 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        uVar74 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a880);
        auVar8[4] = uVar46;
        auVar8._0_4_ = fVar70;
        auVar8[5] = uVar47;
        auVar8[6] = uVar48;
        auVar8[7] = uVar49;
        auVar8[8] = uVar50;
        auVar8[9] = uVar52;
        auVar8[10] = uVar51;
        auVar8[0xb] = uVar53;
        auVar8[0xc] = uVar56;
        auVar8[0xd] = uVar54;
        auVar8[0xe] = uVar55;
        auVar8[0xf] = uVar57;
        uVar40 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
        auVar84._8_8_ = auVar83._0_8_;
        auVar84._0_8_ = auVar83._0_8_;
        uVar43 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a648);
        fVar59 = ((float)uVar62 * fVar18 + fVar34 * local_a0 * (float)uVar31 +
                 fVar34 * fVar39 * (float)uVar61) - fVar72 * (float)uVar74;
        fVar15 = (fVar71 * fVar19 + fVar77 * fStack_9c * (float)((ulong)uVar31 >> 0x20) +
                 fVar77 * fVar42 * (float)((ulong)uVar61 >> 0x20)) -
                 fVar76 * (float)((ulong)uVar74 >> 0x20);
        auVar65._0_8_ = CONCAT44(fVar15,fVar59);
        auVar65._8_4_ =
             ((float)uVar62 * auVar83._8_4_ + fVar78 * fVar72 * (float)uVar60 +
             fVar78 * local_a0 * (float)uVar43) - fVar39 * (float)uVar88;
        auVar65._12_4_ =
             (fVar71 * auVar83._12_4_ + fVar79 * fVar76 * (float)((ulong)uVar60 >> 0x20) +
             fVar79 * fStack_9c * (float)((ulong)uVar43 >> 0x20)) -
             fVar42 * (float)((ulong)uVar88 >> 0x20);
        auVar9[4] = uVar46;
        auVar9._0_4_ = fVar70;
        auVar9[5] = uVar47;
        auVar9[6] = uVar48;
        auVar9[7] = uVar49;
        auVar9[8] = uVar50;
        auVar9[9] = uVar52;
        auVar9[10] = uVar51;
        auVar9[0xb] = uVar53;
        auVar9[0xc] = uVar56;
        auVar9[0xd] = uVar54;
        auVar9[0xe] = uVar55;
        auVar9[0xf] = uVar57;
        uVar43 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
        uVar61 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a580);
        uVar74 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a6c8);
        uVar87 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a790);
        fVar29 = (float)((ulong)uVar43 >> 0x20);
        fVar19 = (float)((ulong)uVar40 >> 0x20);
        uVar31 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a680);
        uVar88 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a880);
        auVar66._8_8_ = auVar65._0_8_;
        auVar66._0_8_ = auVar65._0_8_;
        auVar10[4] = uVar46;
        auVar10._0_4_ = fVar70;
        auVar10[5] = uVar47;
        auVar10[6] = uVar48;
        auVar10[7] = uVar49;
        auVar10[8] = uVar50;
        auVar10[9] = uVar52;
        auVar10[10] = uVar51;
        auVar10[0xb] = uVar53;
        auVar10[0xc] = uVar56;
        auVar10[0xd] = uVar54;
        auVar10[0xe] = uVar55;
        auVar10[0xf] = uVar57;
        uVar62 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
        fVar18 = (float)((ulong)uVar62 >> 0x20);
        uVar60 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a648);
        fVar71 = fVar70 * (float)uVar60;
        fVar17 = fVar16 * (float)((ulong)uVar60 >> 0x20);
        fVar70 = ((float)uVar40 * fVar59 + fVar34 * fVar70 * (float)uVar61 +
                 fVar34 * (float)uVar62 * (float)uVar31) - (float)uVar43 * (float)uVar88;
        fVar59 = (fVar19 * fVar15 + fVar77 * fVar16 * (float)((ulong)uVar61 >> 0x20) +
                 fVar77 * fVar18 * (float)((ulong)uVar31 >> 0x20)) -
                 fVar29 * (float)((ulong)uVar88 >> 0x20);
        fVar15 = ((float)uVar40 * auVar65._8_4_ + fVar78 * (float)uVar43 * (float)uVar74 +
                 fVar78 * fVar71) - (float)uVar62 * (float)uVar87;
        fVar71 = (fVar19 * auVar65._12_4_ + fVar79 * fVar29 * (float)((ulong)uVar74 >> 0x20) +
                 fVar79 * (float)(CONCAT17((char)((uint)fVar17 >> 0x18),
                                           CONCAT16((char)((uint)fVar17 >> 0x10),
                                                    CONCAT15((char)((uint)fVar17 >> 8),
                                                             CONCAT14(SUB41(fVar17,0),fVar71)))) >>
                                 0x20)) - fVar18 * (float)((ulong)uVar87 >> 0x20);
        fVar16 = (float)CONCAT13((byte)((uint)fVar70 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18)
                                 ,CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                           CONCAT11((byte)((uint)fVar70 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 8),
                                                    SUB41(fVar70,0) & (byte)_DAT_038897c0)));
        auVar21._0_8_ =
             CONCAT17((byte)((uint)fVar59 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar59 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar59 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar59,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),fVar16))));
        auVar21[8] = SUB41(fVar15,0) & (byte)_UNK_038897c8;
        auVar21[9] = (byte)((uint)fVar15 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
        auVar21[10] = (byte)((uint)fVar15 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
        auVar21[0xb] = (byte)((uint)fVar15 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
        auVar24[0xc] = SUB41(fVar71,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
        auVar24._0_12_ = auVar21;
        auVar24[0xd] = (byte)((uint)fVar71 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
        auVar24[0xe] = (byte)((uint)fVar71 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
        auVar24[0xf] = (byte)((uint)fVar71 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
        auVar35._0_4_ = fVar16 * fVar16;
        fVar17 = (float)((ulong)auVar21._0_8_ >> 0x20);
        auVar35._4_4_ = fVar17 * fVar17;
        fVar18 = auVar21._8_4_;
        auVar35._8_4_ = fVar18 * fVar18;
        fVar19 = auVar24._12_4_;
        auVar35._12_4_ = fVar19 * fVar19;
        auVar23 = NEON_ext(auVar35,auVar35,8,1);
        fVar71 = auVar23._0_4_ + auVar35._0_4_;
        fVar59 = auVar23._4_4_ + auVar35._4_4_;
        fVar70 = fVar71 + fVar59;
        fVar71 = fVar71 + fVar59;
        iVar58 = -(uint)(fVar70 == 0.0);
        uVar30 = CONCAT13(~(byte)((uint)iVar58 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar58 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar58 >> 8),~(byte)iVar58)));
        auVar36._8_8_ = CONCAT44(fVar71,fVar70);
        auVar36._0_8_ = CONCAT44(fVar71,fVar70);
        auVar20._4_4_ = uVar30;
        auVar20._0_4_ = uVar30;
        auVar20._8_4_ = uVar30;
        auVar20._12_4_ = uVar30;
        auVar23 = NEON_frsqrte(auVar36,4);
        auVar44._0_4_ = auVar23._0_4_ * fVar70;
        auVar44._4_4_ = auVar23._4_4_ * fVar71;
        auVar44._8_4_ = auVar23._8_4_ * fVar70;
        auVar44._12_4_ = auVar23._12_4_ * fVar71;
        auVar22 = NEON_frsqrts(auVar23,auVar44,4);
        auVar41._0_4_ = auVar23._0_4_ * auVar22._0_4_;
        auVar41._4_4_ = auVar23._4_4_ * auVar22._4_4_;
        auVar41._8_4_ = auVar23._8_4_ * auVar22._8_4_;
        auVar41._12_4_ = auVar23._12_4_ * auVar22._12_4_;
        auVar45._0_4_ = fVar70 * auVar41._0_4_;
        auVar45._4_4_ = fVar71 * auVar41._4_4_;
        auVar45._8_4_ = fVar70 * auVar41._8_4_;
        auVar45._12_4_ = fVar71 * auVar41._12_4_;
        iVar58 = -(uint)(fVar70 == 0.0);
        iVar67 = -(uint)(fVar71 == 0.0);
        iVar68 = -(uint)(fVar70 == 0.0);
        iVar69 = -(uint)(fVar71 == 0.0);
        auVar23 = NEON_frsqrts(auVar41,auVar45,4);
        fVar16 = auVar41._0_4_ * auVar23._0_4_ * fVar16;
        fVar17 = auVar41._4_4_ * auVar23._4_4_ * fVar17;
        fVar18 = auVar41._8_4_ * auVar23._8_4_ * fVar18;
        fVar19 = auVar41._12_4_ * auVar23._12_4_ * fVar19;
        auVar25[0] = SUB41(fVar16,0) & ~(byte)iVar58;
        auVar25[1] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar25[2] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar25[3] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        auVar25[4] = SUB41(fVar17,0) & ~(byte)iVar67;
        auVar25[5] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar67 >> 8);
        auVar25[6] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
        auVar25[7] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
        auVar25[8] = SUB41(fVar18,0) & ~(byte)iVar68;
        auVar25[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar68 >> 8);
        auVar25[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
        auVar25[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
        auVar25[0xc] = SUB41(fVar19,0) & ~(byte)iVar69;
        auVar25[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar69 >> 8);
        auVar25[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
        auVar25[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
        param_1 = *param_5 ^ (*param_5 ^ auVar25) & auVar20;
      }
    }
    if (*(float *)(lVar3 + lVar14 * 0x450 + 0x350) == 0.0) {
      auVar26._0_4_ = param_1._0_4_ * *(float *)*param_6;
      auVar26._4_4_ = param_1._4_4_ * *(float *)(*param_6 + 4);
      auVar26._8_4_ = param_1._8_4_ * *(float *)(*param_6 + 8);
      auVar26._12_4_ = param_1._12_4_ * *(float *)(*param_6 + 0xc);
      auVar23 = NEON_ext(auVar26,auVar26,8,1);
      fVar70 = auVar23._0_4_ + auVar26._0_4_ + auVar23._4_4_ + auVar26._4_4_;
      fVar16 = param_1._0_4_ - *(float *)*param_6 * fVar70;
      fVar17 = param_1._4_4_ - *(float *)(*param_6 + 4) * fVar70;
      fVar18 = param_1._8_4_ - *(float *)(*param_6 + 8) * fVar70;
      fVar19 = param_1._12_4_ - *(float *)(*param_6 + 0xc) * fVar70;
      lVar13 = lVar3 + lVar14 * 0x450;
      auVar27._0_4_ = fVar16 * fVar16;
      auVar27._4_4_ = fVar17 * fVar17;
      auVar27._8_4_ = fVar18 * fVar18;
      auVar27._12_4_ = fVar19 * fVar19;
      auVar23 = NEON_ext(auVar27,auVar27,8,1);
      fVar71 = auVar23._0_4_ + auVar27._0_4_;
      fVar59 = auVar23._4_4_ + auVar27._4_4_;
      fVar70 = fVar71 + fVar59;
      fVar71 = fVar71 + fVar59;
      auVar28._8_8_ = CONCAT44(fVar71,fVar70);
      auVar28._0_8_ = CONCAT44(fVar71,fVar70);
      auVar23 = NEON_frsqrte(auVar28,4);
      auVar37._0_4_ = auVar23._0_4_ * fVar70;
      auVar37._4_4_ = auVar23._4_4_ * fVar71;
      auVar37._8_4_ = auVar23._8_4_ * fVar70;
      auVar37._12_4_ = auVar23._12_4_ * fVar71;
      auVar22 = NEON_frsqrts(auVar23,auVar37,4);
      auVar33._0_4_ = auVar23._0_4_ * auVar22._0_4_;
      auVar33._4_4_ = auVar23._4_4_ * auVar22._4_4_;
      auVar33._8_4_ = auVar23._8_4_ * auVar22._8_4_;
      auVar33._12_4_ = auVar23._12_4_ * auVar22._12_4_;
      auVar38._0_4_ = fVar70 * auVar33._0_4_;
      auVar38._4_4_ = fVar71 * auVar33._4_4_;
      auVar38._8_4_ = fVar70 * auVar33._8_4_;
      auVar38._12_4_ = fVar71 * auVar33._12_4_;
      iVar58 = -(uint)(fVar70 == 0.0);
      iVar67 = -(uint)(fVar71 == 0.0);
      iVar68 = -(uint)(fVar70 == 0.0);
      iVar69 = -(uint)(fVar71 == 0.0);
      auVar23 = NEON_frsqrts(auVar33,auVar38,4);
      fVar16 = fVar16 * auVar33._0_4_ * auVar23._0_4_;
      fVar17 = fVar17 * auVar33._4_4_ * auVar23._4_4_;
      fVar18 = fVar18 * auVar33._8_4_ * auVar23._8_4_;
      fVar19 = fVar19 * auVar33._12_4_ * auVar23._12_4_;
      param_1._0_8_ =
           CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                    CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                             CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                      CONCAT14(SUB41(fVar17,0) & ~(byte)iVar67,
                                               CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                        ~(byte)((uint)iVar58 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                                 ~(byte)((uint)iVar58 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar16 >> 8)
                                                                          & ~(byte)((uint)iVar58 >>
                                                                                   8),
                                                                          SUB41(fVar16,0) &
                                                                          ~(byte)iVar58)))))));
      param_1[8] = SUB41(fVar18,0) & ~(byte)iVar68;
      param_1[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar68 >> 8);
      param_1[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
      param_1[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
      param_1[0xc] = SUB41(fVar19,0) & ~(byte)iVar69;
      param_1[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar69 >> 8);
      param_1[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
      param_1[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
      if ((param_7 & 1) == 0) {
        *(long *)(lVar13 + 0x378) = param_1._8_8_;
        *(undefined8 *)(lVar13 + 0x370) = param_1._0_8_;
      }
      else {
        *(long *)(lVar13 + 0x368) = param_1._8_8_;
        *(undefined8 *)(lVar13 + 0x360) = param_1._0_8_;
      }
    }
    else {
      lVar13 = lVar3 + lVar14 * 0x450;
      if ((param_7 & 1) == 0) {
        param_1 = *(undefined1 (*) [16])(lVar13 + 0x370);
      }
      else {
        param_1 = *(undefined1 (*) [16])(lVar13 + 0x360);
      }
    }
    if ((bVar12) && (*(int *)(param_3 + 0x94) == 1)) {
      *(undefined1 *)(lVar3 + lVar14 * 0x450 + 0x354) = 1;
    }
  }
  return param_1;
}


