/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1eb00; name: FUN_02e1eb00
 */


void FUN_02e1eb00(uint *param_1,float *param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  undefined1 (*pauVar4) [12];
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 in_q4 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  undefined1 auVar52 [16];
  float fVar56;
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar56 = (float)param_1[0x18];
  fVar60 = (float)param_1[0x19];
  fVar59 = (float)param_1[0x1b];
  auVar58._8_4_ = (float)param_1[0x1e];
  fVar64 = -(float)param_1[0x1a];
  fVar20 = -(float)param_1[0x1d];
  auVar58._12_4_ = (float)param_1[0x21];
  fVar61 = (float)param_1[0x1c];
  fVar27 = -(float)param_1[0x20];
  fVar21 = -(float)param_1[0x23];
  uVar15 = *param_1;
  fVar62 = (float)param_1[0x1f];
  fVar63 = (float)param_1[0x22];
  uVar12 = param_1[4];
  uVar16 = param_1[6];
  uVar13 = param_1[10];
  uVar17 = param_1[0xc];
  uVar14 = param_1[0x10];
  uVar18 = param_1[0x12];
  uVar10 = param_1[0x16];
  do {
    uVar1 = param_3;
    if (uVar15 - uVar12 <= param_3) {
      uVar1 = uVar15 - uVar12;
    }
    if (uVar16 - uVar13 <= uVar1) {
      uVar1 = uVar16 - uVar13;
    }
    if (uVar17 - uVar14 <= uVar1) {
      uVar1 = uVar17 - uVar14;
    }
    if (uVar18 - uVar10 <= uVar1) {
      uVar1 = uVar18 - uVar10;
    }
    if (uVar1 >> 2 != 0) {
      uVar15 = 1;
      pfVar11 = param_2;
      while( true ) {
        param_2 = pfVar11 + 4;
        pauVar2 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)uVar12 * 4);
        uVar25 = (undefined4)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        fVar26 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        auVar57 = *(undefined1 (*) [16])(*(long *)(param_1 + 8) + (ulong)uVar13 * 4);
        pfVar3 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar10 * 4);
        pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 0xe) + (ulong)uVar14 * 4);
        fVar22 = SUB124(*pauVar2,0);
        auVar46._4_12_ = in_q4._4_12_;
        auVar46._0_4_ = fVar22;
        auVar48._12_4_ = in_q4._12_4_;
        auVar48._0_8_ = auVar46._0_8_;
        auVar48._8_4_ = SUB124(*pauVar2,8);
        auVar47._8_8_ = auVar48._8_8_;
        auVar47._4_4_ = auVar57._0_4_;
        auVar47._0_4_ = fVar22;
        auVar49._0_12_ = auVar47._0_12_;
        auVar49._12_4_ = auVar57._8_4_;
        fVar24 = auVar57._4_4_;
        uVar19 = auVar57._12_4_;
        fVar23 = SUB124(*pauVar4,0);
        auVar28._4_12_ = auVar57._4_12_;
        auVar28._0_4_ = fVar23;
        auVar30._0_8_ = auVar28._0_8_;
        auVar30._8_4_ = SUB124(*pauVar4,8);
        auVar30._12_4_ = uVar19;
        auVar29._8_8_ = auVar30._8_8_;
        auVar29._4_4_ = *pfVar3;
        auVar29._0_4_ = fVar23;
        auVar31._0_12_ = auVar29._0_12_;
        auVar31._12_4_ = pfVar3[2];
        auVar51 = NEON_ext(auVar31,auVar49,8,1);
        auVar41 = NEON_ext(auVar49,auVar51,8,1);
        auVar51._4_4_ = fVar24;
        auVar51._0_4_ = fVar26;
        auVar51._8_4_ = uVar25;
        auVar51._12_4_ = uVar19;
        auVar8._4_4_ = pfVar3[1];
        auVar8._0_4_ = SUB124(*pauVar4,4);
        auVar8._8_4_ = (int)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
        auVar8._12_4_ = pfVar3[3];
        auVar51 = NEON_ext(auVar8,auVar51,8,1);
        auVar52._4_4_ = fVar24;
        auVar52._0_4_ = fVar26;
        auVar52._8_4_ = uVar25;
        auVar52._12_4_ = uVar19;
        auVar51 = NEON_ext(auVar52,auVar51,8,1);
        auVar44._12_4_ = auVar41._12_4_;
        fVar50 = fVar56 * fVar64 + fVar60 * fVar22;
        fVar53 = fVar59 * fVar20 + fVar61 * auVar57._0_4_;
        fVar54 = auVar58._8_4_ * fVar27 + fVar62 * fVar23;
        fVar55 = auVar58._12_4_ * fVar21 + fVar63 * *pfVar3;
        fVar22 = fVar26 * fVar60 + fVar64 * fVar50;
        fVar23 = fVar24 * fVar61 + fVar20 * fVar53;
        fVar24 = SUB124(*pauVar4,4) * fVar62 + fVar27 * fVar54;
        fVar26 = pfVar3[1] * fVar63 + fVar21 * fVar55;
        auVar34._12_4_ = auVar51._12_4_;
        fVar37 = auVar41._0_4_ * fVar60 + fVar64 * fVar22;
        fVar38 = auVar41._4_4_ * fVar61 + fVar20 * fVar23;
        fVar39 = auVar41._8_4_ * fVar62 + fVar27 * fVar24;
        fVar40 = auVar44._12_4_ * fVar63 + fVar21 * fVar26;
        fVar56 = auVar51._0_4_ * fVar60 + fVar64 * fVar37;
        fVar59 = auVar51._4_4_ * fVar61 + fVar20 * fVar38;
        auVar58._8_4_ = auVar51._8_4_ * fVar62 + fVar27 * fVar39;
        auVar58._12_4_ = auVar34._12_4_ * fVar63 + fVar21 * fVar40;
        auVar32._4_12_ = auVar51._4_12_;
        auVar32._0_4_ = fVar50;
        auVar34._0_8_ = auVar32._0_8_;
        auVar34._8_4_ = fVar54;
        auVar33._8_8_ = auVar34._8_8_;
        auVar33._0_8_ = CONCAT44(fVar22,fVar50);
        auVar35._0_12_ = auVar33._0_12_;
        auVar35._12_4_ = fVar24;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ = fVar37;
        auVar44._0_8_ = auVar42._0_8_;
        auVar44._8_4_ = fVar39;
        auVar43._8_8_ = auVar44._8_8_;
        auVar43._0_8_ = CONCAT44(fVar56,fVar37);
        auVar45._0_12_ = auVar43._0_12_;
        auVar45._12_4_ = auVar58._8_4_;
        auVar57._4_4_ = fVar23;
        auVar57._0_4_ = fVar53;
        auVar57._8_4_ = fVar55;
        auVar57._12_4_ = fVar26;
        auVar9._4_4_ = fVar59;
        auVar9._0_4_ = fVar38;
        auVar9._8_4_ = fVar40;
        auVar9._12_4_ = auVar58._12_4_;
        auVar52 = NEON_ext(auVar9,auVar57,8,1);
        auVar51 = NEON_ext(auVar45,auVar35,8,1);
        auVar57 = NEON_ext(auVar35,auVar51,8,1);
        auVar41._4_4_ = fVar23;
        auVar41._0_4_ = fVar53;
        auVar41._8_4_ = fVar55;
        auVar41._12_4_ = fVar26;
        auVar51 = NEON_ext(auVar41,auVar52,8,1);
        uStack_78 = auVar57._8_8_;
        local_80 = auVar57._0_8_;
        uStack_88 = auVar51._8_8_;
        local_90 = auVar51._0_8_;
        uStack_68 = CONCAT44(fVar59,fVar38);
        local_70 = CONCAT44(fVar23,fVar53);
        local_60 = auVar33._0_8_;
        uStack_58 = auVar43._0_8_;
        FUN_02e1f064(param_4,&local_60,&local_70,&local_80,&local_90);
        in_q4._8_8_ = auVar43._0_8_;
        in_q4._0_8_ = auVar33._0_8_;
        fStack_b0 = auVar57._0_4_;
        fStack_ac = auVar57._4_4_;
        fStack_a8 = auVar57._8_4_;
        fStack_a4 = auVar57._12_4_;
        fStack_d0 = auVar51._0_4_;
        fStack_cc = auVar51._4_4_;
        fStack_c8 = auVar51._8_4_;
        fStack_c4 = auVar51._12_4_;
        fVar24 = (float)*(undefined8 *)pfVar11 + (fVar53 + fVar50 + fStack_b0 + fStack_d0) * -0.5;
        fVar26 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) +
                 (fVar23 + fVar22 + fStack_ac + fStack_cc) * -0.5;
        fVar39 = (float)*(undefined8 *)(pfVar11 + 2) +
                 (fVar38 + fVar37 + fStack_a8 + fStack_c8) * -0.5;
        fVar40 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) +
                 (fVar59 + fVar56 + fStack_a4 + fStack_c4) * -0.5;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        puVar5[1] = CONCAT44(fVar40 + fVar59,fVar39 + fVar38);
        *puVar5 = CONCAT44(fVar26 + fVar23,fVar24 + fVar53);
        auVar36._0_8_ = CONCAT44(fVar26 + fStack_ac,fVar24 + fStack_b0);
        auVar36._8_4_ = fVar39 + fStack_a8;
        auVar36._12_4_ = fVar40 + fStack_a4;
        param_1[4] = param_1[4] + 4;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        puVar5[1] = auVar36._8_8_;
        *puVar5 = auVar36._0_8_;
        param_1[10] = param_1[10] + 4;
        pfVar11 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar11[2] = fVar39 + fStack_c8;
        pfVar11[3] = fVar40 + fStack_c4;
        *pfVar11 = fVar24 + fStack_d0;
        pfVar11[1] = fVar26 + fStack_cc;
        param_1[0x10] = param_1[0x10] + 4;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        puVar5[1] = CONCAT44(fVar40 + fVar56,fVar39 + fVar37);
        *puVar5 = CONCAT44(fVar26 + fVar22,fVar24 + fVar50);
        uVar10 = param_1[0x16] + 4;
        param_1[0x16] = uVar10;
        if (uVar1 >> 2 <= uVar15) break;
        uVar15 = uVar15 + 1;
        uVar12 = param_1[4];
        uVar13 = param_1[10];
        uVar14 = param_1[0x10];
        pfVar11 = param_2;
      }
    }
    uVar15 = uVar1 & 0xfffffffc;
    while (uVar15 < uVar1) {
      fVar56 = fVar56 * fVar64 + fVar60 * *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4)
      ;
      fVar59 = fVar59 * fVar20 +
               fVar61 * *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
      auVar58._0_8_ = CONCAT44(fVar59,fVar56);
      auVar58._8_4_ =
           auVar58._8_4_ * fVar27 +
           fVar62 * *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
      auVar58._12_4_ =
           auVar58._12_4_ * fVar21 +
           fVar63 * *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar10 * 4);
      uStack_58 = auVar58._8_8_;
      local_60 = auVar58._0_8_;
      FUN_02e1f004(param_4,&local_60,&local_70,&local_80);
      pfVar11 = *(float **)(param_4 + 0x10);
      uVar15 = uVar15 + 1;
      *(float **)(param_4 + 0x10) = pfVar11 + 1;
      *pfVar11 = ((float)local_80 - local_80._4_4_) + *pfVar11;
      fVar22 = (local_70._4_4_ + (float)local_70) * -0.5;
      auVar6._4_4_ = fVar22 + fVar59;
      auVar6._0_4_ = fVar22 + fVar56;
      auVar6._8_4_ = fVar22 + auVar58._8_4_;
      auVar6._12_4_ = fVar22 + auVar58._12_4_;
      auVar7._4_4_ = fVar22 + fVar59;
      auVar7._0_4_ = fVar22 + fVar56;
      auVar7._8_4_ = fVar22 + auVar58._8_4_;
      auVar7._12_4_ = fVar22 + auVar58._12_4_;
      auVar51 = NEON_ext(auVar6,auVar7,4,1);
      fVar22 = *param_2;
      param_2 = param_2 + 1;
      *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar51._0_4_ + fVar22;
      param_1[4] = param_1[4] + 1;
      *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar51._4_4_ + fVar22;
      param_1[10] = param_1[10] + 1;
      *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar51._8_4_ + fVar22;
      param_1[0x10] = param_1[0x10] + 1;
      *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar51._12_4_ + fVar22;
      uVar10 = param_1[0x16] + 1;
      param_1[0x16] = uVar10;
    }
    uVar12 = param_1[4];
    uVar15 = *param_1;
    if (uVar12 == uVar15) {
      uVar12 = 0;
      param_1[4] = 0;
    }
    uVar13 = param_1[10];
    uVar16 = param_1[6];
    if (uVar13 == uVar16) {
      uVar13 = 0;
      param_1[10] = 0;
    }
    uVar14 = param_1[0x10];
    uVar17 = param_1[0xc];
    if (uVar14 == uVar17) {
      uVar14 = 0;
      param_1[0x10] = 0;
    }
    uVar18 = param_1[0x12];
    if (uVar10 == uVar18) {
      uVar10 = 0;
      param_1[0x16] = 0;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  param_1[0x18] = (uint)fVar56;
  param_1[0x1b] = (uint)fVar59;
  param_1[0x1e] = (uint)auVar58._8_4_;
  param_1[0x21] = (uint)auVar58._12_4_;
  return;
}


