/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1e1c4; name: FUN_02e1e1c4
 */


void FUN_02e1e1c4(uint *param_1,float *param_2,uint param_3,float *param_4)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar46;
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 in_q17 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar66;
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  
  fVar21 = (float)param_1[0x18];
  fVar25 = (float)param_1[0x19];
  fVar22 = (float)param_1[0x1b];
  fVar23 = (float)param_1[0x1e];
  fVar29 = -(float)param_1[0x1a];
  fVar30 = -(float)param_1[0x1d];
  fVar24 = (float)param_1[0x21];
  fVar26 = (float)param_1[0x1c];
  fVar32 = -(float)param_1[0x20];
  fVar31 = -(float)param_1[0x23];
  uVar15 = *param_1;
  fVar27 = (float)param_1[0x1f];
  fVar28 = (float)param_1[0x22];
  uVar14 = param_1[4];
  uVar16 = param_1[6];
  uVar17 = param_1[10];
  uVar19 = param_1[0xc];
  uVar18 = param_1[0x10];
  uVar20 = param_1[0x12];
  uVar13 = param_1[0x16];
  do {
    while( true ) {
      uVar1 = param_3;
      if (uVar15 - uVar14 <= param_3) {
        uVar1 = uVar15 - uVar14;
      }
      if (uVar16 - uVar17 <= uVar1) {
        uVar1 = uVar16 - uVar17;
      }
      if (uVar19 - uVar18 <= uVar1) {
        uVar1 = uVar19 - uVar18;
      }
      if (uVar20 - uVar13 <= uVar1) {
        uVar1 = uVar20 - uVar13;
      }
      if (uVar1 >> 2 != 0) {
        uVar15 = 1;
        pfVar11 = param_2;
        pfVar12 = param_4;
        while( true ) {
          param_4 = pfVar12 + 4;
          param_2 = pfVar11 + 4;
          auVar64 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar14 * 4);
          pauVar2 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)uVar17 * 4);
          fVar47 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
          pfVar3 = (float *)(*(long *)(param_1 + 0xe) + (ulong)uVar18 * 4);
          fVar33 = auVar64._0_4_;
          auVar59._4_12_ = in_q17._4_12_;
          auVar59._0_4_ = fVar33;
          auVar61._12_4_ = in_q17._12_4_;
          auVar61._0_8_ = auVar59._0_8_;
          auVar61._8_4_ = auVar64._8_4_;
          fVar46 = SUB124(*pauVar2,0);
          auVar60._8_8_ = auVar61._8_8_;
          auVar60._4_4_ = fVar46;
          auVar60._0_4_ = fVar33;
          auVar62._0_12_ = auVar60._0_12_;
          auVar62._12_4_ = SUB124(*pauVar2,8);
          fVar34 = auVar64._4_4_;
          auVar35._4_12_ = auVar64._4_12_;
          auVar35._0_4_ = fVar34;
          auVar37._0_8_ = auVar35._0_8_;
          auVar37._8_4_ = auVar64._12_4_;
          auVar37._12_4_ = auVar64._12_4_;
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._4_4_ = fVar47;
          auVar36._0_4_ = fVar34;
          auVar38._0_12_ = auVar36._0_12_;
          auVar38._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
          uVar70 = *(undefined8 *)(pfVar12 + 2);
          uVar69 = *(undefined8 *)pfVar12;
          pfVar4 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar13 * 4);
          auVar64._4_4_ = *pfVar4;
          auVar64._0_4_ = *pfVar3;
          auVar64._8_4_ = pfVar3[2];
          auVar64._12_4_ = pfVar4[2];
          auVar64 = NEON_ext(auVar64,auVar62,8,1);
          auVar65 = NEON_ext(auVar62,auVar64,8,1);
          auVar10._4_4_ = pfVar4[1];
          auVar10._0_4_ = pfVar3[1];
          auVar10._8_4_ = pfVar3[3];
          auVar10._12_4_ = pfVar4[3];
          auVar64 = NEON_ext(auVar10,auVar38,8,1);
          auVar64 = NEON_ext(auVar38,auVar64,8,1);
          fVar48 = fVar21 * fVar29 + fVar25 * fVar33;
          fVar49 = fVar22 * fVar30 + fVar26 * fVar46;
          fVar21 = fVar23 * fVar32 + fVar27 * *pfVar3;
          fVar22 = fVar24 * fVar31 + fVar28 * *pfVar4;
          auVar39._0_4_ = fVar34 * fVar25 + fVar29 * fVar48;
          auVar39._4_4_ = fVar47 * fVar26 + fVar30 * fVar49;
          auVar39._8_4_ = pfVar3[1] * fVar27 + fVar32 * fVar21;
          auVar39._12_4_ = pfVar4[1] * fVar28 + fVar31 * fVar22;
          auVar54._0_4_ = auVar65._0_4_ * fVar25 + fVar29 * auVar39._0_4_;
          auVar54._4_4_ = auVar65._4_4_ * fVar26 + fVar30 * auVar39._4_4_;
          auVar54._8_4_ = auVar65._8_4_ * fVar27 + fVar32 * auVar39._8_4_;
          auVar54._12_4_ = auVar65._12_4_ * fVar28 + fVar31 * auVar39._12_4_;
          auVar52._12_4_ = auVar64._12_4_;
          auVar50._4_12_ = auVar64._4_12_;
          auVar50._0_4_ = fVar48;
          auVar52._0_8_ = auVar50._0_8_;
          auVar52._8_4_ = fVar21;
          auVar51._8_8_ = auVar52._8_8_;
          auVar51._4_4_ = auVar39._0_4_;
          auVar51._0_4_ = fVar48;
          auVar53._0_12_ = auVar51._0_12_;
          auVar53._12_4_ = auVar39._8_4_;
          auVar40._4_12_ = auVar39._4_12_;
          auVar40._0_4_ = fVar49;
          auVar42._0_8_ = auVar40._0_8_;
          auVar42._8_4_ = fVar22;
          auVar42._12_4_ = auVar39._12_4_;
          auVar41._8_8_ = auVar42._8_8_;
          auVar41._4_4_ = auVar39._4_4_;
          auVar41._0_4_ = fVar49;
          auVar43._0_12_ = auVar41._0_12_;
          auVar43._12_4_ = auVar39._12_4_;
          fVar21 = auVar64._0_4_ * fVar25 + fVar29 * auVar54._0_4_;
          fVar22 = auVar64._4_4_ * fVar26 + fVar30 * auVar54._4_4_;
          fVar23 = auVar64._8_4_ * fVar27 + fVar32 * auVar54._8_4_;
          fVar24 = auVar52._12_4_ * fVar28 + fVar31 * auVar54._12_4_;
          auVar55._4_12_ = auVar54._4_12_;
          auVar55._0_4_ = auVar54._4_4_;
          auVar57._0_8_ = auVar55._0_8_;
          auVar57._8_4_ = auVar54._12_4_;
          auVar57._12_4_ = auVar54._12_4_;
          auVar56._8_8_ = auVar57._8_8_;
          auVar56._4_4_ = fVar22;
          auVar56._0_4_ = auVar54._4_4_;
          auVar58._0_12_ = auVar56._0_12_;
          auVar58._12_4_ = fVar24;
          auVar65._4_4_ = fVar21;
          auVar65._0_4_ = auVar54._0_4_;
          auVar65._8_4_ = auVar54._8_4_;
          auVar65._12_4_ = fVar23;
          auVar64 = NEON_ext(auVar65,auVar53,8,1);
          in_q17 = NEON_ext(auVar53,auVar64,8,1);
          auVar64 = NEON_ext(auVar58,auVar43,8,1);
          auVar64 = NEON_ext(auVar43,auVar64,8,1);
          fVar63 = in_q17._0_4_ + fVar48;
          fVar66 = in_q17._4_4_ + auVar39._0_4_;
          fVar67 = in_q17._8_4_ + auVar54._0_4_;
          fVar68 = in_q17._12_4_ + fVar21;
          fVar33 = auVar64._0_4_;
          fVar34 = auVar64._4_4_;
          fVar46 = auVar64._8_4_;
          fVar47 = auVar64._12_4_;
          pfVar12[2] = (((float)uVar70 - auVar54._4_4_) - fVar46) + fVar67;
          pfVar12[3] = (((float)((ulong)uVar70 >> 0x20) - fVar22) - fVar47) + fVar68;
          *pfVar12 = (((float)uVar69 - fVar49) - fVar33) + fVar63;
          pfVar12[1] = (((float)((ulong)uVar69 >> 0x20) - auVar39._4_4_) - fVar34) + fVar66;
          fVar63 = (float)*(undefined8 *)pfVar11 + (fVar33 + fVar49 + fVar63) * -0.5;
          fVar66 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) +
                   (fVar34 + auVar39._4_4_ + fVar66) * -0.5;
          fVar67 = (float)*(undefined8 *)(pfVar11 + 2) + (fVar46 + auVar54._4_4_ + fVar67) * -0.5;
          fVar68 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) +
                   (fVar47 + fVar22 + fVar68) * -0.5;
          puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
          puVar5[1] = CONCAT44(fVar68 + fVar22,fVar67 + auVar54._4_4_);
          *puVar5 = CONCAT44(fVar66 + auVar39._4_4_,fVar63 + fVar49);
          param_1[4] = param_1[4] + 4;
          pfVar11 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
          pfVar11[2] = fVar67 + in_q17._8_4_;
          pfVar11[3] = fVar68 + in_q17._12_4_;
          *pfVar11 = fVar63 + in_q17._0_4_;
          pfVar11[1] = fVar66 + in_q17._4_4_;
          param_1[10] = param_1[10] + 4;
          pfVar11 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
          pfVar11[2] = fVar67 + fVar46;
          pfVar11[3] = fVar68 + fVar47;
          *pfVar11 = fVar63 + fVar33;
          pfVar11[1] = fVar66 + fVar34;
          param_1[0x10] = param_1[0x10] + 4;
          pfVar11 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
          pfVar11[2] = fVar67 + auVar54._0_4_;
          pfVar11[3] = fVar68 + fVar21;
          *pfVar11 = fVar63 + fVar48;
          pfVar11[1] = fVar66 + auVar39._0_4_;
          uVar13 = param_1[0x16] + 4;
          param_1[0x16] = uVar13;
          if (uVar1 >> 2 <= uVar15) break;
          uVar14 = param_1[4];
          uVar15 = uVar15 + 1;
          uVar17 = param_1[10];
          uVar18 = param_1[0x10];
          pfVar11 = param_2;
          pfVar12 = param_4;
        }
      }
      if ((uVar1 & 0xfffffffc) < uVar1) {
        uVar15 = uVar1 & 0xfffffffc | 1;
        fVar21 = fVar21 * fVar29 +
                 fVar25 * *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        fVar22 = fVar22 * fVar30 +
                 fVar26 * *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        fVar23 = fVar23 * fVar32 +
                 fVar27 * *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        fVar24 = fVar24 * fVar31 +
                 fVar28 * *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar13 * 4);
        auVar6._4_4_ = fVar22;
        auVar6._0_4_ = fVar21;
        auVar6._8_4_ = fVar23;
        auVar6._12_4_ = fVar24;
        auVar7._4_4_ = fVar22;
        auVar7._0_4_ = fVar21;
        auVar7._8_4_ = fVar23;
        auVar7._12_4_ = fVar24;
        auVar64 = NEON_ext(auVar6,auVar7,8,1);
        fVar33 = auVar64._0_4_ + fVar21;
        fVar46 = auVar64._4_4_ + fVar22;
        fVar34 = (fVar33 + fVar46) * -0.5;
        *param_4 = (*param_4 - fVar46) + fVar33;
        fVar33 = *param_2;
        auVar44._0_4_ = fVar34 + fVar21;
        auVar44._4_4_ = fVar34 + fVar22;
        auVar44._8_4_ = fVar34 + fVar23;
        auVar44._12_4_ = fVar34 + fVar24;
        auVar64 = NEON_ext(auVar44,auVar44,4,1);
        *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar64._0_4_ + fVar33;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar64._4_4_ + fVar33;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar64._8_4_ + fVar33;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar64._12_4_ + fVar33;
        uVar13 = param_1[0x16] + 1;
        param_1[0x16] = uVar13;
        while( true ) {
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (uVar1 <= uVar15) break;
          uVar15 = uVar15 + 1;
          fVar21 = fVar21 * fVar29 +
                   fVar25 * *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
          fVar22 = fVar22 * fVar30 +
                   fVar26 * *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
          fVar23 = fVar23 * fVar32 +
                   fVar27 * *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
          fVar24 = fVar24 * fVar31 +
                   fVar28 * *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar13 * 4);
          auVar8._4_4_ = fVar22;
          auVar8._0_4_ = fVar21;
          auVar8._8_4_ = fVar23;
          auVar8._12_4_ = fVar24;
          auVar9._4_4_ = fVar22;
          auVar9._0_4_ = fVar21;
          auVar9._8_4_ = fVar23;
          auVar9._12_4_ = fVar24;
          auVar64 = NEON_ext(auVar8,auVar9,8,1);
          fVar33 = auVar64._0_4_ + fVar21;
          fVar46 = auVar64._4_4_ + fVar22;
          fVar34 = (fVar33 + fVar46) * -0.5;
          *param_4 = (*param_4 - fVar46) + fVar33;
          fVar33 = *param_2;
          auVar45._0_4_ = fVar34 + fVar21;
          auVar45._4_4_ = fVar34 + fVar22;
          auVar45._8_4_ = fVar34 + fVar23;
          auVar45._12_4_ = fVar34 + fVar24;
          auVar64 = NEON_ext(auVar45,auVar45,4,1);
          *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar64._0_4_ + fVar33;
          param_1[4] = param_1[4] + 1;
          *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar64._4_4_ + fVar33;
          param_1[10] = param_1[10] + 1;
          *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar64._8_4_ + fVar33;
          param_1[0x10] = param_1[0x10] + 1;
          *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar64._12_4_ + fVar33
          ;
          uVar13 = param_1[0x16] + 1;
          param_1[0x16] = uVar13;
        }
      }
      uVar14 = param_1[4];
      uVar15 = *param_1;
      if (uVar14 == uVar15) {
        uVar14 = 0;
        param_1[4] = 0;
      }
      uVar17 = param_1[10];
      uVar16 = param_1[6];
      if (uVar17 == uVar16) {
        uVar17 = 0;
        param_1[10] = 0;
      }
      uVar18 = param_1[0x10];
      uVar19 = param_1[0xc];
      if (uVar18 == uVar19) {
        uVar18 = 0;
        param_1[0x10] = 0;
      }
      uVar20 = param_1[0x12];
      if (uVar13 != uVar20) break;
      uVar13 = 0;
      param_1[0x16] = 0;
      param_3 = param_3 - uVar1;
      if (param_3 == 0) goto LAB_02e1e678;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
LAB_02e1e678:
  param_1[0x18] = (uint)fVar21;
  param_1[0x1b] = (uint)fVar22;
  param_1[0x1e] = (uint)fVar23;
  param_1[0x21] = (uint)fVar24;
  return;
}


