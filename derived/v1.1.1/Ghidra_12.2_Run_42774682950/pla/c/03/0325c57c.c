/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325c57c; name: FUN_0325c57c
 */


void FUN_0325c57c(float param_1,float param_2,long *param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  float *pfVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  int iVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  int iVar68;
  float fVar69;
  float fVar70;
  int iVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar71 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar85;
  undefined8 uVar84;
  
  lVar13 = tpidr_el0;
  lVar15 = *(long *)(lVar13 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar15;
    lVar23 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar23 = *(long *)(lVar15 + 0x10);
  }
  if (lVar23 != 0) {
    FUN_032d5af0(lVar23,"TtexpandByRad2",0xe);
    lVar15 = *(long *)(lVar13 + 0x38d490);
  }
  iVar1 = (int)param_3[1];
  uVar2 = *(uint *)((long)param_3 + 0xc);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar15;
  }
  lVar15 = *(long *)(lVar15 + 8);
  uVar24 = (ulong)(int)(iVar1 * 0x10 + 0x7fU & 0xffffff80);
  if (uVar24 <= *(ulong *)(lVar15 + 0x10)) {
    pfVar14 = *(float **)(lVar15 + 0x18);
    if ((long)pfVar14 + uVar24 <= *(ulong *)(lVar15 + 0x20)) {
      *(ulong *)(lVar15 + 0x18) = (long)pfVar14 + uVar24;
      goto joined_r0x0325cad8;
    }
  }
  pfVar14 = (float *)FUN_032ce670(lVar15,uVar24);
joined_r0x0325cad8:
  if (0 < iVar1) {
    puVar16 = (undefined8 *)*param_3;
    pfVar20 = pfVar14;
    iVar18 = iVar1;
    do {
      iVar18 = iVar18 + -1;
      fVar59 = *(float *)(puVar16 + 1);
      fVar78 = *(float *)((long)puVar16 + 0xc);
      *(undefined8 *)pfVar20 = *puVar16;
      pfVar20[2] = fVar59;
      pfVar20[3] = fVar78;
      puVar16 = puVar16 + 2;
      pfVar20 = pfVar20 + 4;
    } while (iVar18 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if ((int)(iVar1 - 1U) < 1) {
    uVar17 = 0;
  }
  else {
    fVar64 = (float)*(undefined8 *)(*param_4 + 8);
    fVar69 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    uVar79 = *(undefined8 *)*param_4;
    pfVar20 = pfVar14 + (long)(int)(iVar1 - 2U) * 4;
    fVar70 = *pfVar20;
    fVar74 = pfVar20[1];
    fVar75 = pfVar20[2];
    fVar77 = pfVar20[3];
    uVar21 = (ulong)(iVar1 - 2U);
    fVar38 = *pfVar14;
    fVar60 = pfVar14[1];
    fVar62 = pfVar14[2];
    fVar63 = pfVar14[3];
    fVar59 = fVar38 - fVar70;
    fVar57 = fVar60 - fVar74;
    uVar25 = SUB41(fVar57,0);
    uVar27 = (undefined1)((uint)fVar57 >> 8);
    uVar29 = (undefined1)((uint)fVar57 >> 0x10);
    uVar31 = (undefined1)((uint)fVar57 >> 0x18);
    fVar56 = fVar62 - fVar75;
    fVar58 = fVar63 - fVar77;
    auVar67._12_4_ = fVar69;
    auVar67._0_12_ = *(undefined1 (*) [12])*param_4;
    auVar71._12_4_ = fVar69;
    auVar71._0_12_ = *(undefined1 (*) [12])*param_4;
    auVar67 = NEON_ext(auVar67,auVar71,8,1);
    uVar66 = NEON_ext(uVar79,auVar67._0_8_,4,1);
    auVar5[4] = uVar25;
    auVar5._0_4_ = fVar59;
    auVar5[5] = uVar27;
    auVar5[6] = uVar29;
    auVar5[7] = uVar31;
    auVar5._8_4_ = fVar56;
    auVar5._12_4_ = fVar58;
    auVar6[4] = uVar25;
    auVar6._0_4_ = fVar59;
    auVar6[5] = uVar27;
    auVar6[6] = uVar29;
    auVar6[7] = uVar31;
    auVar6._8_4_ = fVar56;
    auVar6._12_4_ = fVar58;
    auVar67 = NEON_ext(auVar5,auVar6,4,1);
    uVar17 = 0;
    uVar19 = 0;
    fVar73 = (float)((ulong)uVar66 >> 0x20);
    fVar82 = (float)uVar79;
    fVar76 = (float)((ulong)uVar79 >> 0x20);
    iVar18 = (uVar2 & 0x3fffffff) - iVar1;
    fVar78 = fVar59 * (float)uVar66 - fVar82 * auVar67._0_4_;
    fVar57 = fVar57 * fVar73 - fVar76 * auVar67._4_4_;
    uVar26 = SUB41(fVar57,0);
    uVar28 = (undefined1)((uint)fVar57 >> 8);
    uVar30 = (undefined1)((uint)fVar57 >> 0x10);
    uVar32 = (undefined1)((uint)fVar57 >> 0x18);
    fVar57 = fVar56 * fVar82 - fVar64 * fVar59;
    fVar59 = fVar58 * fVar76 -
             fVar69 * (float)(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59
                                                                                      )))) >> 0x20);
    auVar7[4] = uVar26;
    auVar7._0_4_ = fVar78;
    auVar7[5] = uVar28;
    auVar7[6] = uVar30;
    auVar7[7] = uVar32;
    auVar7._8_4_ = fVar57;
    auVar7._12_4_ = fVar59;
    auVar8[4] = uVar26;
    auVar8._0_4_ = fVar78;
    auVar8[5] = uVar28;
    auVar8[6] = uVar30;
    auVar8[7] = uVar32;
    auVar8._8_4_ = fVar57;
    auVar8._12_4_ = fVar59;
    auVar67 = NEON_ext(auVar7,auVar8,4,1);
    fVar56 = auVar67._0_4_;
    fVar33 = auVar67._4_4_;
    fVar59 = fVar56 * fVar56 + fVar33 * fVar33 + fVar78 * fVar78;
    fVar58 = fVar56 * fVar56 + fVar33 * fVar33 + fVar78 * fVar78;
    uVar25 = SUB41(fVar58,0);
    uVar27 = (undefined1)((uint)fVar58 >> 8);
    uVar29 = (undefined1)((uint)fVar58 >> 0x10);
    uVar31 = (undefined1)((uint)fVar58 >> 0x18);
    uVar79 = NEON_frsqrte(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59))))
                          ,4);
    fVar57 = (float)uVar79;
    fVar80 = (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59))))
                          ,CONCAT44(fVar80 * fVar80,fVar57 * fVar57),4);
    fVar57 = fVar57 * (float)uVar79;
    fVar80 = fVar80 * (float)((ulong)uVar79 >> 0x20);
    iVar68 = -(uint)(fVar59 <= 0.0);
    iVar72 = -(uint)(fVar58 <= 0.0);
    uVar79 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59))))
                          ,CONCAT44(fVar80 * fVar80,fVar57 * fVar57),4);
    fVar57 = (float)uVar79 * fVar57;
    fVar80 = (float)((ulong)uVar79 >> 0x20) * fVar80;
    bVar40 = SUB41(fVar57,0) & ~(byte)iVar68;
    bVar42 = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar68 >> 8);
    bVar44 = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
    bVar46 = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
    bVar48 = SUB41(fVar80,0) & ~(byte)iVar72;
    bVar50 = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar72 >> 8);
    bVar52 = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    bVar54 = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    fVar59 = (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
    fVar56 = fVar56 * (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
    uVar41 = SUB41(fVar56,0);
    uVar43 = (undefined1)((uint)fVar56 >> 8);
    uVar45 = (undefined1)((uint)fVar56 >> 0x10);
    uVar47 = (undefined1)((uint)fVar56 >> 0x18);
    fVar33 = fVar33 * (float)CONCAT13(bVar54,CONCAT12(bVar52,CONCAT11(bVar50,bVar48)));
    uVar49 = SUB41(fVar33,0);
    uVar51 = (undefined1)((uint)fVar33 >> 8);
    uVar53 = (undefined1)((uint)fVar33 >> 0x10);
    uVar55 = (undefined1)((uint)fVar33 >> 0x18);
    fVar80 = fVar78 * fVar59;
    auVar61._0_4_ = fVar38 * fVar56;
    auVar61._4_4_ = fVar60 * fVar33;
    auVar61._8_4_ = fVar62 * fVar80;
    auVar61._12_4_ =
         fVar63 * (float)(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar78))))
                         >> 0x20) *
                  (float)(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,fVar59))))
                         >> 0x20);
    auVar34._0_4_ = pfVar14[4] - fVar38;
    auVar34._4_4_ = pfVar14[5] - fVar60;
    auVar34._8_4_ = pfVar14[6] - fVar62;
    auVar34._12_4_ = pfVar14[7] - fVar63;
    auVar67 = NEON_ext(auVar34,auVar34,4,1);
    fVar78 = (float)uVar66 * auVar34._0_4_ - fVar82 * auVar67._0_4_;
    fVar59 = fVar73 * auVar34._4_4_ - fVar76 * auVar67._4_4_;
    uVar25 = SUB41(fVar59,0);
    uVar27 = (undefined1)((uint)fVar59 >> 8);
    uVar29 = (undefined1)((uint)fVar59 >> 0x10);
    uVar31 = (undefined1)((uint)fVar59 >> 0x18);
    fVar59 = fVar82 * auVar34._8_4_ - fVar64 * auVar34._0_4_;
    fVar57 = fVar76 * auVar34._12_4_ - fVar69 * auVar34._4_4_;
    auVar3[4] = uVar25;
    auVar3._0_4_ = fVar78;
    auVar3[5] = uVar27;
    auVar3[6] = uVar29;
    auVar3[7] = uVar31;
    auVar3._8_4_ = fVar59;
    auVar3._12_4_ = fVar57;
    auVar4[4] = uVar25;
    auVar4._0_4_ = fVar78;
    auVar4[5] = uVar27;
    auVar4[6] = uVar29;
    auVar4[7] = uVar31;
    auVar4._8_4_ = fVar59;
    auVar4._12_4_ = fVar57;
    auVar67 = NEON_ext(auVar3,auVar4,4,1);
    fVar33 = auVar67._0_4_;
    fVar38 = auVar67._4_4_;
    fVar59 = fVar33 * fVar33 + fVar38 * fVar38 + fVar78 * fVar78;
    fVar56 = fVar33 * fVar33 + fVar38 * fVar38 + fVar78 * fVar78;
    uVar26 = SUB41(fVar56,0);
    uVar28 = (undefined1)((uint)fVar56 >> 8);
    uVar30 = (undefined1)((uint)fVar56 >> 0x10);
    uVar32 = (undefined1)((uint)fVar56 >> 0x18);
    uVar79 = NEON_frsqrte(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar59))))
                          ,4);
    fVar57 = (float)uVar79;
    fVar58 = (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar59))))
                          ,CONCAT44(fVar58 * fVar58,fVar57 * fVar57),4);
    fVar57 = fVar57 * (float)uVar79;
    fVar58 = fVar58 * (float)((ulong)uVar79 >> 0x20);
    iVar68 = -(uint)(fVar59 <= 0.0);
    iVar72 = -(uint)(fVar56 <= 0.0);
    uVar79 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar59))))
                          ,CONCAT44(fVar58 * fVar58,fVar57 * fVar57),4);
    fVar57 = (float)uVar79 * fVar57;
    fVar58 = (float)((ulong)uVar79 >> 0x20) * fVar58;
    bVar40 = SUB41(fVar57,0) & ~(byte)iVar68;
    bVar42 = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar68 >> 8);
    bVar44 = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
    bVar46 = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
    bVar48 = SUB41(fVar58,0) & ~(byte)iVar72;
    bVar50 = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar72 >> 8);
    bVar52 = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    bVar54 = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    fVar59 = (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
    auVar35._0_4_ = fVar33 * (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
    auVar35._4_4_ = fVar38 * (float)CONCAT13(bVar54,CONCAT12(bVar52,CONCAT11(bVar50,bVar48)));
    auVar35._8_4_ = fVar78 * fVar59;
    auVar39._0_4_ = pfVar14[4] * auVar35._0_4_;
    auVar39._4_4_ = pfVar14[5] * auVar35._4_4_;
    auVar39._8_4_ = pfVar14[6] * auVar35._8_4_;
    auVar39._12_4_ =
         pfVar14[7] *
         (float)(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar78)))) >> 0x20)
         * (float)(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,fVar59)))) >>
                  0x20);
    auVar67 = NEON_ext(auVar39,auVar39,8,1);
    auVar35._12_4_ = -(auVar67._0_4_ + auVar39._0_4_ + auVar39._4_4_) - param_1;
    auVar67 = NEON_ext(auVar61,auVar61,8,1);
    fVar59 = -(auVar67._0_4_ + auVar61._0_4_ + auVar61._4_4_) - param_1;
    do {
      fVar76 = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) + auVar35._0_4_;
      fVar81 = (float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49))) + auVar35._4_4_;
      fVar33 = auVar35._8_4_;
      fVar82 = fVar80 + fVar33;
      fVar38 = auVar35._12_4_;
      fVar69 = param_1 * (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
      fVar73 = param_1 * (float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)));
      fVar83 = fVar82 * fVar82 + fVar76 * fVar76 + fVar81 * fVar81;
      fVar85 = fVar82 * fVar82 + fVar76 * fVar76 + fVar81 * fVar81;
      uVar79 = CONCAT44(fVar85,fVar83);
      pfVar20 = pfVar14 + uVar19 * 4;
      fVar78 = *pfVar20;
      fVar57 = pfVar20[1];
      fVar56 = pfVar20[2];
      fVar58 = pfVar20[3];
      fVar60 = fVar69 + fVar70;
      fVar62 = fVar73 + fVar74;
      fVar63 = param_1 * fVar80 + fVar75;
      fVar64 = param_1 * fVar59 + fVar77;
      iVar68 = (int)uVar17;
      if (fVar83 <= 2.842171e-14) {
        fVar70 = fVar78 - fVar70;
        fVar74 = fVar57 - fVar74;
        fVar75 = fVar56 - fVar75;
        fVar82 = fVar75 * fVar75 + fVar70 * fVar70 + fVar74 * fVar74;
        fVar81 = fVar75 * fVar75 + fVar70 * fVar70 + fVar74 * fVar74;
        uVar79 = CONCAT44(fVar81,fVar82);
        uVar66 = NEON_frsqrte(uVar79,4);
        fVar76 = (float)uVar66;
        fVar83 = (float)((ulong)uVar66 >> 0x20);
        uVar66 = NEON_frsqrts(uVar79,CONCAT44(fVar83 * fVar83,fVar76 * fVar76),4);
        fVar76 = fVar76 * (float)uVar66;
        fVar83 = fVar83 * (float)((ulong)uVar66 >> 0x20);
        iVar72 = -(uint)(fVar82 <= 0.0);
        iVar65 = -(uint)(fVar81 <= 0.0);
        uVar79 = NEON_frsqrts(uVar79,CONCAT44(fVar83 * fVar83,fVar76 * fVar76),4);
        fVar76 = (float)uVar79 * fVar76;
        fVar83 = (float)((ulong)uVar79 >> 0x20) * fVar83;
        fVar82 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                                 CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                          ~(byte)((uint)iVar72 >> 0x10),
                                          CONCAT11((byte)((uint)fVar76 >> 8) &
                                                   ~(byte)((uint)iVar72 >> 8),
                                                   SUB41(fVar76,0) & ~(byte)iVar72)));
        fVar76 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                  CONCAT16((byte)((uint)fVar83 >> 0x10) &
                                           ~(byte)((uint)iVar65 >> 0x10),
                                           CONCAT15((byte)((uint)fVar83 >> 8) &
                                                    ~(byte)((uint)iVar65 >> 8),
                                                    CONCAT14(SUB41(fVar83,0) & ~(byte)iVar65,fVar82)
                                                   ))) >> 0x20);
        fVar78 = fVar78 + param_1 * fVar70 * fVar82;
        fVar57 = fVar57 + param_1 * fVar74 * fVar76;
        fVar56 = fVar56 + param_1 * fVar75 * fVar82;
        fVar58 = fVar58 + param_1 * (fVar58 - fVar77) * fVar76;
        fVar69 = fVar69 + fVar78;
        fVar73 = fVar73 + fVar57;
        fVar70 = param_1 * fVar80 + fVar56;
        fVar74 = param_1 * fVar59 + fVar58;
        fVar78 = param_1 * auVar35._0_4_ + fVar78;
        fVar57 = param_1 * auVar35._4_4_ + fVar57;
        fVar56 = param_1 * fVar33 + fVar56;
        fVar58 = param_1 * fVar38 + fVar58;
LAB_0325c9c8:
        uVar22 = -(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4;
        uVar17 = (ulong)(iVar68 + 2U);
        pfVar20 = (float *)(*param_3 + uVar22);
        pfVar20[2] = fVar70;
        pfVar20[3] = fVar74;
        *pfVar20 = fVar69;
        pfVar20[1] = fVar73;
        lVar15 = uVar22 + *param_3;
        iVar18 = iVar18 + -1;
        *(float *)(lVar15 + 0x18) = fVar56;
        *(float *)(lVar15 + 0x1c) = fVar58;
        *(float *)(lVar15 + 0x10) = fVar78;
        *(float *)(lVar15 + 0x14) = fVar57;
        *(uint *)(param_3 + 1) = iVar68 + 2U;
        if (uVar19 != uVar21) goto LAB_0325c7bc;
LAB_0325c9f4:
        uVar19 = uVar21 + 1;
        auVar37 = auVar35;
        fVar33 = fVar80;
        fVar38 = fVar59;
        fVar70 = fVar60;
        fVar74 = fVar62;
        fVar75 = fVar63;
        fVar77 = fVar64;
      }
      else {
        uVar66 = NEON_frsqrte(uVar79,4);
        fVar70 = (float)uVar66;
        fVar74 = (float)((ulong)uVar66 >> 0x20);
        uVar66 = NEON_frsqrts(uVar79,CONCAT44(fVar74 * fVar74,fVar70 * fVar70),4);
        fVar70 = fVar70 * (float)uVar66;
        fVar74 = fVar74 * (float)((ulong)uVar66 >> 0x20);
        iVar72 = -(uint)(fVar83 <= 0.0);
        iVar65 = -(uint)(fVar85 <= 0.0);
        uVar79 = NEON_frsqrts(uVar79,CONCAT44(fVar74 * fVar74,fVar70 * fVar70),4);
        fVar70 = (float)uVar79 * fVar70;
        fVar74 = (float)((ulong)uVar79 >> 0x20) * fVar74;
        fVar70 = (float)CONCAT13((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                                 CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                          ~(byte)((uint)iVar72 >> 0x10),
                                          CONCAT11((byte)((uint)fVar70 >> 8) &
                                                   ~(byte)((uint)iVar72 >> 8),
                                                   SUB41(fVar70,0) & ~(byte)iVar72)));
        fVar76 = fVar76 * fVar70;
        fVar75 = (float)(CONCAT17((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                  CONCAT16((byte)((uint)fVar74 >> 0x10) &
                                           ~(byte)((uint)iVar65 >> 0x10),
                                           CONCAT15((byte)((uint)fVar74 >> 8) &
                                                    ~(byte)((uint)iVar65 >> 8),
                                                    CONCAT14(SUB41(fVar74,0) & ~(byte)iVar65,fVar70)
                                                   ))) >> 0x20);
        fVar81 = fVar81 * fVar75;
        fVar82 = fVar82 * fVar70;
        fVar75 = (fVar59 + fVar38) * fVar75;
        fVar70 = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) * fVar76;
        fVar74 = (float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49))) * fVar81;
        fVar77 = fVar70 + fVar74 + fVar80 * fVar82;
        uVar66 = CONCAT44(fVar70 + fVar74 + fVar80 * fVar82,fVar77);
        uVar79 = NEON_frecpe(uVar66,4);
        uVar84 = NEON_frecps(uVar66,uVar79,4);
        fVar70 = (float)uVar79 * (float)uVar84;
        fVar74 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar84 >> 0x20);
        uVar79 = NEON_frecps(uVar66,CONCAT44(fVar74,fVar70),4);
        fVar70 = param_1 * fVar70 * (float)uVar79;
        fVar74 = param_1 * fVar74 * (float)((ulong)uVar79 >> 0x20);
        fVar69 = fVar78 + fVar76 * fVar70;
        fVar73 = fVar57 + fVar81 * fVar74;
        fVar70 = fVar56 + fVar82 * fVar70;
        fVar74 = fVar58 + fVar75 * fVar74;
        if ((0 < iVar18) && (fVar77 < param_2)) {
          fVar78 = fVar78 + param_1 * fVar76;
          fVar57 = fVar57 + param_1 * fVar81;
          fVar56 = fVar56 + param_1 * fVar82;
          fVar58 = fVar58 + param_1 * fVar75;
          fVar75 = fVar76 * (fVar78 - fVar60);
          fVar83 = fVar81 * (fVar57 - fVar62);
          fVar85 = fVar82 * (fVar56 - fVar63);
          fVar76 = fVar76 * (fVar69 - fVar78);
          fVar81 = fVar81 * (fVar73 - fVar57);
          fVar82 = fVar82 * (fVar70 - fVar56);
          fVar77 = fVar82 + fVar76 + fVar81;
          fVar82 = fVar82 + fVar76 + fVar81;
          uVar79 = CONCAT44(fVar85 + fVar75 + fVar83 + fVar82,fVar85 + fVar75 + fVar83 + fVar77);
          uVar66 = NEON_frecpe(uVar79,4);
          uVar84 = NEON_frecps(uVar79,uVar66,4);
          fVar75 = (float)uVar66 * (float)uVar84;
          fVar76 = (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar84 >> 0x20);
          uVar79 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar75),4);
          fVar77 = fVar77 * fVar75 * (float)uVar79;
          fVar82 = fVar82 * fVar76 * (float)((ulong)uVar79 >> 0x20);
          fVar69 = fVar69 + (fVar60 - fVar69) * fVar77;
          fVar73 = fVar73 + (fVar62 - fVar73) * fVar82;
          fVar70 = fVar70 + (fVar63 - fVar70) * fVar77;
          fVar74 = fVar74 + (fVar64 - fVar74) * fVar82;
          fVar78 = fVar78 + (fVar78 - fVar69);
          fVar57 = fVar57 + (fVar57 - fVar73);
          fVar56 = fVar56 + (fVar56 - fVar70);
          fVar58 = fVar58 + (fVar58 - fVar74);
          goto LAB_0325c9c8;
        }
        pfVar20 = (float *)(*param_3 + (long)iVar68 * 0x10);
        pfVar20[2] = fVar70;
        pfVar20[3] = fVar74;
        *pfVar20 = fVar69;
        pfVar20[1] = fVar73;
        uVar17 = (ulong)(iVar68 + 1U);
        *(uint *)(param_3 + 1) = iVar68 + 1U;
        if (uVar19 == uVar21) goto LAB_0325c9f4;
LAB_0325c7bc:
        pfVar20 = pfVar14 + uVar19 * 4;
        uVar19 = uVar19 + 1;
        uVar66 = *(undefined8 *)(pfVar14 + uVar19 * 4 + 2);
        uVar79 = *(undefined8 *)(pfVar14 + uVar19 * 4);
        auVar67 = *param_4;
        auVar71 = NEON_ext(auVar67,auVar67,8,1);
        fVar59 = pfVar20[8] - (float)uVar79;
        fVar57 = pfVar20[9] - (float)((ulong)uVar79 >> 0x20);
        uVar25 = SUB41(fVar57,0);
        uVar27 = (undefined1)((uint)fVar57 >> 8);
        uVar29 = (undefined1)((uint)fVar57 >> 0x10);
        uVar31 = (undefined1)((uint)fVar57 >> 0x18);
        fVar56 = pfVar20[10] - (float)uVar66;
        fVar58 = pfVar20[0xb] - (float)((ulong)uVar66 >> 0x20);
        uVar79 = NEON_ext(auVar67._0_8_,auVar71._0_8_,4,1);
        auVar9[4] = uVar25;
        auVar9._0_4_ = fVar59;
        auVar9[5] = uVar27;
        auVar9[6] = uVar29;
        auVar9[7] = uVar31;
        auVar9._8_4_ = fVar56;
        auVar9._12_4_ = fVar58;
        auVar10[4] = uVar25;
        auVar10._0_4_ = fVar59;
        auVar10[5] = uVar27;
        auVar10[6] = uVar29;
        auVar10[7] = uVar31;
        auVar10._8_4_ = fVar56;
        auVar10._12_4_ = fVar58;
        auVar71 = NEON_ext(auVar9,auVar10,4,1);
        fVar78 = fVar59 * (float)uVar79 - auVar67._0_4_ * auVar71._0_4_;
        fVar57 = fVar57 * (float)((ulong)uVar79 >> 0x20) - auVar67._4_4_ * auVar71._4_4_;
        uVar26 = SUB41(fVar57,0);
        uVar28 = (undefined1)((uint)fVar57 >> 8);
        uVar30 = (undefined1)((uint)fVar57 >> 0x10);
        uVar32 = (undefined1)((uint)fVar57 >> 0x18);
        fVar57 = fVar56 * auVar67._0_4_ - auVar67._8_4_ * fVar59;
        fVar59 = fVar58 * auVar67._4_4_ -
                 auVar67._12_4_ *
                 (float)(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59))))
                        >> 0x20);
        auVar11[4] = uVar26;
        auVar11._0_4_ = fVar78;
        auVar11[5] = uVar28;
        auVar11[6] = uVar30;
        auVar11[7] = uVar32;
        auVar11._8_4_ = fVar57;
        auVar11._12_4_ = fVar59;
        auVar12[4] = uVar26;
        auVar12._0_4_ = fVar78;
        auVar12[5] = uVar28;
        auVar12[6] = uVar30;
        auVar12[7] = uVar32;
        auVar12._8_4_ = fVar57;
        auVar12._12_4_ = fVar59;
        auVar67 = NEON_ext(auVar11,auVar12,4,1);
        fVar80 = auVar67._0_4_;
        fVar70 = auVar67._4_4_;
        fVar59 = fVar80 * fVar80 + fVar70 * fVar70 + fVar78 * fVar78;
        fVar56 = fVar80 * fVar80 + fVar70 * fVar70 + fVar78 * fVar78;
        uVar25 = SUB41(fVar56,0);
        uVar27 = (undefined1)((uint)fVar56 >> 8);
        uVar29 = (undefined1)((uint)fVar56 >> 0x10);
        uVar31 = (undefined1)((uint)fVar56 >> 0x18);
        uVar79 = NEON_frsqrte(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59
                                                                                      )))),4);
        fVar57 = (float)uVar79;
        fVar58 = (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59
                                                                                      )))),
                              CONCAT44(fVar58 * fVar58,fVar57 * fVar57),4);
        fVar57 = fVar57 * (float)uVar79;
        fVar58 = fVar58 * (float)((ulong)uVar79 >> 0x20);
        iVar68 = -(uint)(fVar59 <= 0.0);
        iVar72 = -(uint)(fVar56 <= 0.0);
        uVar79 = NEON_frsqrts(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar59
                                                                                      )))),
                              CONCAT44(fVar58 * fVar58,fVar57 * fVar57),4);
        fVar57 = (float)uVar79 * fVar57;
        fVar58 = (float)((ulong)uVar79 >> 0x20) * fVar58;
        bVar40 = SUB41(fVar57,0) & ~(byte)iVar68;
        bVar42 = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar68 >> 8);
        bVar44 = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
        bVar46 = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
        bVar48 = SUB41(fVar58,0) & ~(byte)iVar72;
        bVar50 = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar72 >> 8);
        bVar52 = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
        bVar54 = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
        fVar59 = (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
        auVar37._0_4_ = fVar80 * (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
        auVar37._4_4_ = fVar70 * (float)CONCAT13(bVar54,CONCAT12(bVar52,CONCAT11(bVar50,bVar48)));
        auVar37._8_4_ = fVar78 * fVar59;
        uVar41 = auVar35[0];
        uVar43 = auVar35[1];
        uVar45 = auVar35[2];
        uVar47 = auVar35[3];
        uVar49 = auVar35[4];
        uVar51 = auVar35[5];
        uVar53 = auVar35[6];
        uVar55 = auVar35[7];
        auVar36._0_4_ = pfVar20[8] * auVar37._0_4_;
        auVar36._4_4_ = pfVar20[9] * auVar37._4_4_;
        auVar36._8_4_ = pfVar20[10] * auVar37._8_4_;
        auVar36._12_4_ =
             pfVar20[0xb] *
             (float)(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar78)))) >>
                    0x20) *
             (float)(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,fVar59)))) >>
                    0x20);
        fVar70 = *pfVar20;
        fVar74 = pfVar20[1];
        fVar75 = pfVar20[2];
        fVar77 = pfVar20[3];
        auVar67 = NEON_ext(auVar36,auVar36,8,1);
        auVar37._12_4_ = -(auVar36._0_4_ + auVar36._4_4_ + auVar67._0_4_) - param_1;
      }
      auVar35 = auVar37;
      fVar80 = fVar33;
      fVar59 = fVar38;
    } while (uVar19 != iVar1 - 1U);
  }
  puVar16 = (undefined8 *)*param_3;
  uVar79 = *puVar16;
  (puVar16 + (long)(int)uVar17 * 2)[1] = puVar16[1];
  puVar16[(long)(int)uVar17 * 2] = uVar79;
  *(int *)(param_3 + 1) = (int)uVar17 + 1;
  lVar15 = *(long *)(lVar13 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar15;
  }
  lVar13 = *(long *)(lVar15 + 8);
  if (((*(ulong *)(lVar13 + 0x10) < uVar24) || (*(long *)(lVar13 + 0x18) != (long)pfVar14 + uVar24))
     || (*(float **)(lVar13 + 0x28) == pfVar14)) {
    FUN_032cedf0(lVar13,pfVar14,uVar24);
  }
  else {
    *(float **)(lVar13 + 0x18) = pfVar14;
  }
  if (lVar23 != 0) {
    FUN_032d5b34(lVar23,&DAT_0390f40e);
  }
  return;
}


