/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1e698; name: FUN_02e1e698
 */


void FUN_02e1e698(uint *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  
  auVar17._0_4_ = (float)param_1[0x18];
  fVar18 = (float)param_1[0x19];
  auVar17._4_4_ = (float)param_1[0x1b];
  auVar17._8_4_ = (float)param_1[0x1e];
  fVar22 = -(float)param_1[0x1a];
  fVar23 = -(float)param_1[0x1d];
  auVar17._12_4_ = (float)param_1[0x21];
  fVar19 = (float)param_1[0x1c];
  fVar25 = -(float)param_1[0x20];
  fVar24 = -(float)param_1[0x23];
  uVar5 = *param_1;
  fVar20 = (float)param_1[0x1f];
  fVar21 = (float)param_1[0x22];
  uVar11 = param_1[4];
  uVar7 = param_1[6];
  uVar12 = param_1[10];
  uVar9 = param_1[0xc];
  uVar13 = param_1[0x10];
  uVar10 = param_1[0x12];
  uVar4 = param_1[0x16];
  do {
    uVar1 = param_5;
    if (uVar5 - uVar11 <= param_5) {
      uVar1 = uVar5 - uVar11;
    }
    if (uVar7 - uVar12 <= uVar1) {
      uVar1 = uVar7 - uVar12;
    }
    if (uVar9 - uVar13 <= uVar1) {
      uVar1 = uVar9 - uVar13;
    }
    if (uVar10 - uVar4 <= uVar1) {
      uVar1 = uVar10 - uVar4;
    }
    if (uVar1 >> 2 != 0) {
      uVar5 = 1;
      pfVar6 = param_4;
      pfVar8 = param_3;
      pfVar3 = param_2;
      while( true ) {
        param_2 = pfVar3 + 4;
        auVar29 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar11 * 4);
        auVar30 = *(undefined1 (*) [16])(*(long *)(param_1 + 8) + (ulong)uVar12 * 4);
        fVar64 = auVar29._0_4_;
        fVar16 = auVar30._0_4_;
        auVar56 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xe) + (ulong)uVar13 * 4);
        pfVar2 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar4 * 4);
        fVar14 = auVar29._4_4_;
        auVar26._4_12_ = auVar29._4_12_;
        auVar26._0_4_ = fVar14;
        auVar57._0_8_ = auVar26._0_8_;
        auVar57._8_4_ = auVar29._12_4_;
        auVar57._12_4_ = auVar29._12_4_;
        auVar27._8_8_ = auVar57._8_8_;
        auVar27._4_4_ = auVar30._4_4_;
        auVar27._0_4_ = fVar14;
        auVar28._0_12_ = auVar27._0_12_;
        auVar28._12_4_ = auVar30._12_4_;
        param_3 = pfVar8 + 4;
        uVar70 = *(undefined8 *)(pfVar8 + 2);
        uVar67 = *(undefined8 *)pfVar8;
        fVar65 = auVar56._0_4_;
        auVar35._4_12_ = auVar30._4_12_;
        auVar35._0_4_ = fVar65;
        auVar37._0_8_ = auVar35._0_8_;
        auVar37._8_4_ = auVar56._8_4_;
        auVar37._12_4_ = auVar30._12_4_;
        auVar36._8_8_ = auVar37._8_8_;
        auVar36._4_4_ = *pfVar2;
        auVar36._0_4_ = fVar65;
        auVar38._0_12_ = auVar36._0_12_;
        auVar38._12_4_ = pfVar2[2];
        fVar15 = auVar56._4_4_;
        auVar44._4_12_ = auVar56._4_12_;
        auVar44._0_4_ = fVar15;
        auVar46._0_8_ = auVar44._0_8_;
        auVar46._8_4_ = auVar56._12_4_;
        auVar46._12_4_ = auVar56._12_4_;
        auVar45._8_8_ = auVar46._8_8_;
        auVar45._4_4_ = pfVar2[1];
        auVar45._0_4_ = fVar15;
        auVar47._0_12_ = auVar45._0_12_;
        auVar47._12_4_ = pfVar2[3];
        auVar56._4_4_ = fVar16;
        auVar56._0_4_ = fVar64;
        auVar56._8_4_ = auVar29._8_4_;
        auVar56._12_4_ = auVar30._8_4_;
        auVar56 = NEON_ext(auVar38,auVar56,8,1);
        auVar48._4_4_ = fVar16;
        auVar48._0_4_ = fVar64;
        auVar48._8_4_ = auVar29._8_4_;
        auVar48._12_4_ = auVar30._8_4_;
        auVar57 = NEON_ext(auVar48,auVar56,8,1);
        auVar48 = NEON_ext(auVar47,auVar28,8,1);
        auVar56 = NEON_ext(auVar28,auVar48,8,1);
        fVar62 = auVar17._0_4_ * fVar22 + fVar18 * fVar64;
        fVar63 = auVar17._4_4_ * fVar23 + fVar19 * fVar16;
        fVar64 = auVar17._8_4_ * fVar25 + fVar20 * fVar65;
        fVar65 = auVar17._12_4_ * fVar24 + fVar21 * *pfVar2;
        auVar29._0_4_ = fVar14 * fVar18 + fVar22 * fVar62;
        auVar29._4_4_ = auVar30._4_4_ * fVar19 + fVar23 * fVar63;
        auVar29._8_4_ = fVar15 * fVar20 + fVar25 * fVar64;
        auVar29._12_4_ = pfVar2[1] * fVar21 + fVar24 * fVar65;
        auVar60._12_4_ = auVar57._12_4_;
        auVar39._0_4_ = auVar57._0_4_ * fVar18 + fVar22 * auVar29._0_4_;
        auVar39._4_4_ = auVar57._4_4_ * fVar19 + fVar23 * auVar29._4_4_;
        auVar39._8_4_ = auVar57._8_4_ * fVar20 + fVar25 * auVar29._8_4_;
        auVar39._12_4_ = auVar60._12_4_ * fVar21 + fVar24 * auVar29._12_4_;
        auVar17._0_4_ = auVar56._0_4_ * fVar18 + fVar22 * auVar39._0_4_;
        auVar17._4_4_ = auVar56._4_4_ * fVar19 + fVar23 * auVar39._4_4_;
        auVar17._8_4_ = auVar56._8_4_ * fVar20 + fVar25 * auVar39._8_4_;
        auVar17._12_4_ = auVar56._12_4_ * fVar21 + fVar24 * auVar39._12_4_;
        auVar49._4_12_ = auVar48._4_12_;
        auVar49._0_4_ = fVar62;
        auVar51._12_4_ = auVar48._12_4_;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = fVar64;
        auVar50._8_8_ = auVar51._8_8_;
        auVar50._4_4_ = auVar29._0_4_;
        auVar50._0_4_ = fVar62;
        auVar52._0_12_ = auVar50._0_12_;
        auVar52._12_4_ = auVar29._8_4_;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = fVar63;
        auVar32._0_8_ = auVar30._0_8_;
        auVar32._8_4_ = fVar65;
        auVar32._12_4_ = auVar29._12_4_;
        auVar31._8_8_ = auVar32._8_8_;
        auVar31._4_4_ = auVar29._4_4_;
        auVar31._0_4_ = fVar63;
        auVar33._0_12_ = auVar31._0_12_;
        auVar33._12_4_ = auVar29._12_4_;
        auVar58._4_12_ = auVar57._4_12_;
        auVar58._0_4_ = auVar39._0_4_;
        auVar60._0_8_ = auVar58._0_8_;
        auVar60._8_4_ = auVar39._8_4_;
        auVar59._8_8_ = auVar60._8_8_;
        auVar59._4_4_ = auVar17._0_4_;
        auVar59._0_4_ = auVar39._0_4_;
        auVar61._0_12_ = auVar59._0_12_;
        auVar61._12_4_ = auVar17._8_4_;
        auVar40._4_12_ = auVar39._4_12_;
        auVar40._0_4_ = auVar39._4_4_;
        auVar42._0_8_ = auVar40._0_8_;
        auVar42._8_4_ = auVar39._12_4_;
        auVar42._12_4_ = auVar39._12_4_;
        auVar41._8_8_ = auVar42._8_8_;
        auVar41._4_4_ = auVar17._4_4_;
        auVar41._0_4_ = auVar39._4_4_;
        auVar43._0_12_ = auVar41._0_12_;
        auVar43._12_4_ = auVar17._12_4_;
        auVar56 = NEON_ext(auVar61,auVar52,8,1);
        auVar48 = NEON_ext(auVar52,auVar56,8,1);
        auVar56 = NEON_ext(auVar43,auVar33,8,1);
        fVar16 = auVar48._0_4_;
        fVar53 = auVar48._4_4_;
        fVar54 = auVar48._8_4_;
        fVar55 = auVar48._12_4_;
        auVar56 = NEON_ext(auVar33,auVar56,8,1);
        fVar64 = auVar56._0_4_;
        fVar65 = auVar56._4_4_;
        fVar14 = auVar56._8_4_;
        fVar15 = auVar56._12_4_;
        pfVar8[2] = ((auVar39._0_4_ + (float)uVar70 + fVar54) - auVar39._4_4_) - fVar14;
        pfVar8[3] = ((auVar17._0_4_ + (float)((ulong)uVar70 >> 0x20) + fVar55) - auVar17._4_4_) -
                    fVar15;
        *pfVar8 = ((fVar62 + (float)uVar67 + fVar16) - fVar63) - fVar64;
        pfVar8[1] = ((auVar29._0_4_ + (float)((ulong)uVar67 >> 0x20) + fVar53) - auVar29._4_4_) -
                    fVar65;
        param_4 = pfVar6 + 4;
        pfVar6[2] = ((pfVar6[2] - fVar54) - fVar14) + auVar39._4_4_ + auVar39._0_4_;
        pfVar6[3] = ((pfVar6[3] - fVar55) - fVar15) + auVar17._4_4_ + auVar17._0_4_;
        *pfVar6 = ((*pfVar6 - fVar16) - fVar64) + fVar63 + fVar62;
        pfVar6[1] = ((pfVar6[1] - fVar53) - fVar65) + auVar29._4_4_ + auVar29._0_4_;
        fVar66 = (float)*(undefined8 *)pfVar3 + (fVar64 + fVar16 + fVar63 + fVar62) * -0.5;
        fVar68 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) +
                 (fVar65 + fVar53 + auVar29._4_4_ + auVar29._0_4_) * -0.5;
        fVar69 = (float)*(undefined8 *)(pfVar3 + 2) +
                 (fVar14 + fVar54 + auVar39._4_4_ + auVar39._0_4_) * -0.5;
        fVar71 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) +
                 (fVar15 + fVar55 + auVar17._4_4_ + auVar17._0_4_) * -0.5;
        pfVar6 = (float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        pfVar6[2] = fVar69 + auVar39._4_4_;
        pfVar6[3] = fVar71 + auVar17._4_4_;
        *pfVar6 = fVar66 + fVar63;
        pfVar6[1] = fVar68 + auVar29._4_4_;
        param_1[4] = param_1[4] + 4;
        pfVar6 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        pfVar6[2] = fVar69 + fVar54;
        pfVar6[3] = fVar71 + fVar55;
        *pfVar6 = fVar66 + fVar16;
        pfVar6[1] = fVar68 + fVar53;
        param_1[10] = param_1[10] + 4;
        pfVar6 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar6[2] = fVar69 + fVar14;
        pfVar6[3] = fVar71 + fVar15;
        *pfVar6 = fVar66 + fVar64;
        pfVar6[1] = fVar68 + fVar65;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar6 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        pfVar6[2] = fVar69 + auVar39._0_4_;
        pfVar6[3] = fVar71 + auVar17._0_4_;
        *pfVar6 = fVar66 + fVar62;
        pfVar6[1] = fVar68 + auVar29._0_4_;
        uVar4 = param_1[0x16] + 4;
        param_1[0x16] = uVar4;
        if (uVar1 >> 2 <= uVar5) break;
        uVar11 = param_1[4];
        uVar5 = uVar5 + 1;
        uVar12 = param_1[10];
        uVar13 = param_1[0x10];
        pfVar6 = param_4;
        pfVar8 = param_3;
        pfVar3 = param_2;
      }
    }
    uVar5 = uVar1 & 0xfffffffc;
    while( true ) {
      fVar64 = auVar17._4_4_;
      fVar65 = auVar17._8_4_;
      fVar14 = auVar17._12_4_;
      if (uVar1 <= uVar5) break;
      uVar5 = uVar5 + 1;
      auVar17._0_4_ =
           auVar17._0_4_ * fVar22 +
           fVar18 * *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
      auVar17._4_4_ =
           fVar64 * fVar23 + fVar19 * *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
      auVar17._8_4_ =
           fVar65 * fVar25 +
           fVar20 * *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
      auVar17._12_4_ =
           fVar14 * fVar24 + fVar21 * *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar4 * 4);
      auVar56 = NEON_ext(auVar17,auVar17,8,1);
      fVar64 = auVar56._0_4_ + auVar17._0_4_;
      fVar65 = auVar56._4_4_ + auVar17._4_4_;
      *param_3 = (*param_3 - fVar65) + fVar64;
      *param_4 = (auVar17._0_4_ - auVar56._0_4_) + *param_4 + (auVar17._4_4_ - auVar56._4_4_);
      fVar65 = (fVar64 + fVar65) * -0.5;
      fVar64 = *param_2;
      param_2 = param_2 + 1;
      auVar34._0_4_ = fVar65 + auVar17._0_4_;
      auVar34._4_4_ = fVar65 + auVar17._4_4_;
      auVar34._8_4_ = fVar65 + auVar17._8_4_;
      auVar34._12_4_ = fVar65 + auVar17._12_4_;
      auVar56 = NEON_ext(auVar34,auVar34,4,1);
      *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar56._0_4_ + fVar64;
      param_1[4] = param_1[4] + 1;
      *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar56._4_4_ + fVar64;
      param_1[10] = param_1[10] + 1;
      *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar56._8_4_ + fVar64;
      param_1[0x10] = param_1[0x10] + 1;
      *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar56._12_4_ + fVar64;
      uVar4 = param_1[0x16] + 1;
      param_1[0x16] = uVar4;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
    uVar11 = param_1[4];
    uVar5 = *param_1;
    if (uVar11 == uVar5) {
      uVar11 = 0;
      param_1[4] = 0;
    }
    uVar12 = param_1[10];
    uVar7 = param_1[6];
    if (uVar12 == uVar7) {
      uVar12 = 0;
      param_1[10] = 0;
    }
    uVar13 = param_1[0x10];
    uVar9 = param_1[0xc];
    if (uVar13 == uVar9) {
      uVar13 = 0;
      param_1[0x10] = 0;
    }
    uVar10 = param_1[0x12];
    if (uVar4 == uVar10) {
      uVar4 = 0;
      param_1[0x16] = 0;
    }
    param_5 = param_5 - uVar1;
  } while (param_5 != 0);
  param_1[0x18] = (uint)auVar17._0_4_;
  param_1[0x1b] = (uint)fVar64;
  param_1[0x1e] = (uint)fVar65;
  param_1[0x21] = (uint)fVar14;
  return;
}


