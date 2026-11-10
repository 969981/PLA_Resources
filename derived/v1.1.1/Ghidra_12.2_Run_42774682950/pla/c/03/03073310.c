/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03073310; name: FUN_03073310
 */


void FUN_03073310(float param_1,long param_2,undefined1 (*param_3) [12],undefined8 param_4,
                 ulong param_5,undefined8 *param_6,undefined8 param_7,float *param_8,
                 undefined8 *param_9)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  undefined1 auVar40 [16];
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char local_114 [4];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  *param_9 = 0;
  if (-1e-05 <= param_1) {
    return;
  }
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar9;
    lVar10 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar10 != 0) {
    FUN_032d5af0(lVar10,"TtPenetration",0xd);
  }
  FUN_030727f0(param_3,param_4,param_7,param_6,&local_120,local_114);
  uVar2 = NEON_fmov(0xbf800000,4);
  fVar18 = (float)local_120 + (float)uVar2;
  if (local_114[0] != '\0') {
    *param_9 = CONCAT44((float)((ulong)local_120 >> 0x20) + (float)((ulong)uVar2 >> 0x20),fVar18);
  }
  if ((float)local_120 != 0.0) goto LAB_030733e8;
  puVar8 = *(undefined8 **)param_3[0x40];
  if ((param_5 & 1) == 0) {
    local_d0 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20),
                        -(float)*(undefined8 *)(param_2 + 0x20));
    FUN_03018628(puVar8,*(undefined8 *)(param_3[0x40] + 8),&local_d0,&local_170);
    if (((byte)param_3[0x66][8] >> 1 & 1) != 0) goto LAB_0307346c;
LAB_0307355c:
    fVar27 = (float)uStack_168;
    uVar22 = (undefined4)((ulong)uStack_168 >> 0x20);
    fVar25 = (float)local_170;
    fVar26 = (float)((ulong)local_170 >> 0x20);
    auVar34._8_8_ = uStack_158;
    auVar34._0_8_ = local_160;
    uStack_b8 = uStack_158;
    local_c0 = local_160;
    fVar21 = (float)uStack_128;
    fVar18 = (float)local_130;
    fVar20 = (float)((ulong)local_130 >> 0x20);
    fVar31 = (float)uStack_148;
    uVar29 = (undefined4)((ulong)uStack_148 >> 0x20);
    fVar28 = (float)local_150;
    fVar30 = (float)((ulong)local_150 >> 0x20);
    fVar24 = (float)uStack_138;
    fVar19 = (float)local_140;
    fVar23 = (float)((ulong)local_140 >> 0x20);
    uStack_a8 = uStack_148;
    local_b0 = local_150;
    uStack_98 = uStack_138;
    local_a0 = local_140;
    uStack_88 = uStack_128;
    local_90 = local_130;
  }
  else {
    uStack_168 = puVar8[1];
    local_170 = *puVar8;
    uStack_158 = puVar8[3];
    local_160 = puVar8[2];
    uStack_148 = puVar8[5];
    local_150 = puVar8[4];
    uStack_138 = puVar8[7];
    local_140 = puVar8[6];
    uStack_128 = puVar8[9];
    local_130 = puVar8[8];
    if (((byte)param_3[0x66][8] >> 1 & 1) == 0) goto LAB_0307355c;
LAB_0307346c:
    uVar22 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    fVar21 = (float)*(undefined8 *)*param_3;
    fVar19 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    pauVar1 = (undefined1 (*) [12])(param_3[1] + 4);
    uVar29 = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
    fVar24 = (float)*(undefined8 *)*pauVar1;
    fVar26 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar36._12_4_ = uVar29;
    auVar36._0_12_ = *pauVar1;
    auVar42._12_4_ = uVar29;
    auVar42._0_12_ = *pauVar1;
    auVar36 = NEON_ext(auVar36,auVar42,8,1);
    pauVar1 = (undefined1 (*) [12])(param_3[2] + 8);
    uVar29 = (undefined4)((ulong)*(undefined8 *)(param_3[3] + 4) >> 0x20);
    fVar30 = (float)*(undefined8 *)*pauVar1;
    fVar11 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar33._12_4_ = uVar22;
    auVar33._0_12_ = *param_3;
    auVar40._12_4_ = uVar22;
    auVar40._0_12_ = *param_3;
    auVar33 = NEON_ext(auVar33,auVar40,8,1);
    fVar18 = auVar33._0_4_;
    fVar20 = auVar36._0_4_;
    auVar45._12_4_ = uVar29;
    auVar45._0_12_ = *pauVar1;
    auVar3._12_4_ = uVar29;
    auVar3._0_12_ = *pauVar1;
    auVar33 = NEON_ext(auVar45,auVar3,8,1);
    fVar23 = auVar33._4_4_;
    fVar13 = (float)uStack_158;
    fVar31 = (float)local_160;
    fVar12 = (float)((ulong)local_160 >> 0x20);
    fVar28 = (float)uStack_148;
    fVar25 = (float)local_150;
    fVar27 = (float)((ulong)local_150 >> 0x20);
    fVar14 = auVar33._0_4_;
    uStack_f8 = CONCAT44(fVar23 * fVar13 + fVar11 * fVar31 + fVar23 * fVar12,
                         fVar14 * fVar13 + fVar30 * fVar31 + fVar11 * fVar12);
    local_100 = CONCAT44(fVar20 * fVar13 + fVar24 * fVar31 + fVar26 * fVar12,
                         fVar18 * fVar13 + fVar21 * fVar31 + fVar19 * fVar12);
    uStack_e8 = CONCAT44(fVar23 * fVar28 + fVar11 * fVar25 + fVar23 * fVar27,
                         fVar14 * fVar28 + fVar30 * fVar25 + fVar11 * fVar27);
    uStack_f0 = CONCAT44(fVar20 * fVar28 + fVar24 * fVar25 + fVar26 * fVar27,
                         fVar18 * fVar28 + fVar21 * fVar25 + fVar19 * fVar27);
    fVar28 = (float)uStack_168;
    fVar25 = (float)local_170;
    fVar27 = (float)((ulong)local_170 >> 0x20);
    uStack_108 = CONCAT44(fVar23 * fVar28 + fVar11 * fVar25 + fVar23 * fVar27,
                          fVar14 * fVar28 + fVar30 * fVar25 + fVar11 * fVar27);
    local_110 = CONCAT44(fVar20 * fVar28 + fVar24 * fVar25 + fVar26 * fVar27,
                         fVar18 * fVar28 + fVar21 * fVar25 + fVar19 * fVar27);
    auVar33 = *(undefined1 (*) [16])(param_3[5] + 4);
    fVar25 = ((float)local_140 - (float)*(undefined8 *)param_3[4]) +
             ((float)local_130 - auVar33._0_4_);
    fVar27 = ((float)((ulong)local_140 >> 0x20) - (float)((ulong)*(undefined8 *)param_3[4] >> 0x20))
             + ((float)((ulong)local_130 >> 0x20) - auVar33._4_4_);
    fVar28 = ((float)uStack_138 - (float)*(undefined8 *)(param_3[4] + 8)) +
             ((float)uStack_128 - auVar33._8_4_);
    uStack_d8 = CONCAT44(fVar23 * fVar28 + fVar11 * fVar25 + fVar23 * fVar27,
                         fVar14 * fVar28 + fVar30 * fVar25 + fVar11 * fVar27);
    local_e0 = CONCAT44(fVar20 * fVar28 + fVar24 * fVar25 + fVar26 * fVar27,
                        fVar18 * fVar28 + fVar21 * fVar25 + fVar19 * fVar27);
    FUN_032c9f24(&local_d0,&local_170,&local_110);
    fVar24 = (float)uStack_98;
    fVar19 = (float)local_a0;
    fVar23 = (float)((ulong)local_a0 >> 0x20);
    fVar21 = (float)uStack_88;
    fVar18 = (float)local_90;
    fVar20 = (float)((ulong)local_90 >> 0x20);
    fVar27 = (float)uStack_c8;
    uVar22 = (undefined4)((ulong)uStack_c8 >> 0x20);
    fVar25 = (float)local_d0;
    fVar26 = (float)((ulong)local_d0 >> 0x20);
    auVar34._8_8_ = uStack_b8;
    auVar34._0_8_ = local_c0;
    fVar31 = (float)uStack_a8;
    uVar29 = (undefined4)((ulong)uStack_a8 >> 0x20);
    fVar28 = (float)local_b0;
    fVar30 = (float)((ulong)local_b0 >> 0x20);
  }
  auVar33 = *(undefined1 (*) [16])(param_3[0x14a] + 8);
  auVar42 = NEON_ext(auVar33,auVar33,8,1);
  auVar40 = *(undefined1 (*) [16])(param_3 + 0x14c);
  auVar36 = *(undefined1 (*) [16])(param_3[0x14d] + 4);
  auVar45 = NEON_ext(auVar40,auVar40,8,1);
  fVar11 = auVar42._0_4_;
  fVar14 = auVar45._0_4_;
  auVar42 = NEON_ext(auVar36,auVar36,8,1);
  fVar41 = auVar36._4_4_;
  fVar12 = auVar33._0_4_;
  fVar15 = auVar40._0_4_;
  fVar13 = auVar33._4_4_;
  fVar17 = auVar40._4_4_;
  fVar46 = auVar36._0_4_;
  fVar43 = auVar42._0_4_;
  fVar44 = auVar42._4_4_;
  fVar32 = auVar34._0_4_;
  fVar35 = auVar34._4_4_;
  fVar16 = auVar34._8_4_;
  uStack_f8 = CONCAT44(fVar44 * fVar16 + fVar41 * fVar32 + fVar44 * fVar35,
                       fVar43 * fVar16 + fVar46 * fVar32 + fVar41 * fVar35);
  local_100 = CONCAT44(fVar14 * fVar16 + fVar15 * fVar32 + fVar17 * fVar35,
                       fVar11 * fVar16 + fVar12 * fVar32 + fVar13 * fVar35);
  uStack_e8 = CONCAT44(fVar44 * fVar31 + fVar41 * fVar28 + fVar44 * fVar30,
                       fVar43 * fVar31 + fVar46 * fVar28 + fVar41 * fVar30);
  uStack_f0 = CONCAT44(fVar14 * fVar31 + fVar15 * fVar28 + fVar17 * fVar30,
                       fVar11 * fVar31 + fVar12 * fVar28 + fVar13 * fVar30);
  uStack_108 = CONCAT44(fVar44 * fVar27 + fVar41 * fVar25 + fVar44 * fVar26,
                        fVar43 * fVar27 + fVar46 * fVar25 + fVar41 * fVar26);
  local_110 = CONCAT44(fVar14 * fVar27 + fVar15 * fVar25 + fVar17 * fVar26,
                       fVar11 * fVar27 + fVar12 * fVar25 + fVar13 * fVar26);
  fVar37 = (fVar19 - *(float *)(param_3[0x14e] + 8)) + (fVar18 - *(float *)param_3[0x150]);
  fVar38 = (fVar23 - *(float *)param_3[0x14f]) + (fVar20 - *(float *)(param_3[0x150] + 4));
  fVar39 = (fVar24 - *(float *)(param_3[0x14f] + 4)) + (fVar21 - *(float *)(param_3[0x150] + 8));
  auVar40 = NEON_ext(auVar34,auVar34,8,1);
  auVar4._4_4_ = fVar26;
  auVar4._0_4_ = fVar25;
  auVar4._8_4_ = fVar27;
  auVar4._12_4_ = uVar22;
  auVar5._4_4_ = fVar26;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar27;
  auVar5._12_4_ = uVar22;
  auVar33 = NEON_ext(auVar4,auVar5,8,1);
  fVar27 = auVar33._0_4_;
  fVar16 = auVar40._0_4_;
  auVar6._4_4_ = fVar30;
  auVar6._0_4_ = fVar28;
  auVar6._8_4_ = fVar31;
  auVar6._12_4_ = uVar29;
  auVar7._4_4_ = fVar30;
  auVar7._0_4_ = fVar28;
  auVar7._8_4_ = fVar31;
  auVar7._12_4_ = uVar29;
  auVar40 = NEON_ext(auVar6,auVar7,8,1);
  uStack_d8 = CONCAT44(fVar44 * fVar39 + fVar41 * fVar37 + fVar44 * fVar38,
                       fVar43 * fVar39 + fVar46 * fVar37 + fVar41 * fVar38);
  local_e0 = CONCAT44(fVar14 * fVar39 + fVar15 * fVar37 + fVar17 * fVar38,
                      fVar11 * fVar39 + fVar12 * fVar37 + fVar13 * fVar38);
  fVar31 = auVar40._4_4_;
  fVar13 = (float)*(undefined8 *)(param_3[0x4c] + 8);
  fVar11 = (float)*(undefined8 *)param_3[0x4c];
  fVar12 = (float)((ulong)*(undefined8 *)param_3[0x4c] >> 0x20);
  auVar33 = *(undefined1 (*) [16])(param_3[0x4d] + 4);
  fVar14 = auVar40._0_4_;
  uStack_188 = CONCAT44(fVar31 * fVar13 + fVar30 * fVar11 + fVar31 * fVar12,
                        fVar14 * fVar13 + fVar28 * fVar11 + fVar30 * fVar12);
  local_190 = CONCAT44(fVar16 * fVar13 + fVar32 * fVar11 + fVar35 * fVar12,
                       fVar27 * fVar13 + fVar25 * fVar11 + fVar26 * fVar12);
  fVar13 = (float)*(undefined8 *)(param_3[0x4b] + 4);
  fVar11 = (float)*(undefined8 *)(param_3[0x4a] + 8);
  fVar12 = (float)((ulong)*(undefined8 *)(param_3[0x4a] + 8) >> 0x20);
  uStack_198 = CONCAT44(fVar31 * fVar13 + fVar30 * fVar11 + fVar31 * fVar12,
                        fVar14 * fVar13 + fVar28 * fVar11 + fVar30 * fVar12);
  local_1a0 = CONCAT44(fVar16 * fVar13 + fVar32 * fVar11 + fVar35 * fVar12,
                       fVar27 * fVar13 + fVar25 * fVar11 + fVar26 * fVar12);
  fVar13 = (float)*(undefined8 *)param_3[0x4a];
  fVar11 = (float)*(undefined8 *)(param_3[0x49] + 4);
  fVar12 = (float)((ulong)*(undefined8 *)(param_3[0x49] + 4) >> 0x20);
  uStack_1a8 = CONCAT44(fVar31 * fVar13 + fVar30 * fVar11 + fVar31 * fVar12,
                        fVar14 * fVar13 + fVar28 * fVar11 + fVar30 * fVar12);
  local_1b0 = CONCAT44(fVar16 * fVar13 + fVar32 * fVar11 + fVar35 * fVar12,
                       fVar27 * fVar13 + fVar25 * fVar11 + fVar26 * fVar12);
  fVar18 = (auVar33._0_4_ - fVar19) + ((float)*(undefined8 *)(param_3[0x4e] + 8) - fVar18);
  fVar20 = (auVar33._4_4_ - fVar23) +
           ((float)((ulong)*(undefined8 *)(param_3[0x4e] + 8) >> 0x20) - fVar20);
  fVar21 = (auVar33._8_4_ - fVar24) + ((float)*(undefined8 *)(param_3[0x4f] + 4) - fVar21);
  uStack_178 = CONCAT44(fVar31 * fVar21 + fVar30 * fVar18 + fVar31 * fVar20,
                        fVar14 * fVar21 + fVar28 * fVar18 + fVar30 * fVar20);
  local_180 = CONCAT44(fVar16 * fVar21 + fVar32 * fVar18 + fVar35 * fVar20,
                       fVar27 * fVar21 + fVar25 * fVar18 + fVar26 * fVar20);
  lVar9 = 0;
  if ((*(ushort *)(*(long *)param_3[0x48] + 0x1a) & 1) != 0) {
    lVar9 = *(long *)param_3[0x48];
  }
  local_d0 = *param_6;
  uStack_c8 = CONCAT44(*(undefined4 *)(param_6 + 1),*(undefined4 *)(param_6 + 1));
  fVar18 = (float)FUN_03073190(&local_110,&local_1b0,param_3[0x24d] + 4,lVar9,&local_d0,param_7);
  if (0.0 < fVar18) {
    uVar2 = NEON_fmov(0xc0400000,4);
    fVar18 = fVar18 + (float)uVar2;
  }
  else {
    uVar2 = NEON_fmov(0xc0800000,4);
    fVar18 = param_1 + (float)uVar2;
  }
LAB_030733e8:
  *param_8 = fVar18 + -1e-05;
  if (lVar10 != 0) {
    FUN_032d5b34(lVar10,&DAT_0390f40e);
  }
  return;
}


