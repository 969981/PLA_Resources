/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c9878; name: FUN_032c9878
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032c9878(undefined8 *param_1,float *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float *pfVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uVar12 = DAT_0388a148;
  uVar11 = DAT_0388a140;
  uVar10 = _UNK_03889a88;
  uVar9 = _DAT_03889a80;
  uVar8 = _UNK_03888d18;
  uVar7 = _DAT_03888d10;
  local_b0 = param_1[4];
  uVar14 = local_b0;
  uStack_a8 = param_1[5];
  local_b8 = param_1[3];
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  local_c0 = param_1[2];
  uVar13 = local_c0;
  *(undefined8 *)(param_2 + 2) = _UNK_03889a88;
  *(undefined8 *)param_2 = uVar9;
  *(undefined8 *)(param_2 + 6) = uVar12;
  *(undefined8 *)(param_2 + 4) = uVar11;
  *(undefined8 *)(param_2 + 10) = uVar8;
  *(undefined8 *)(param_2 + 8) = uVar7;
  if (0 < param_4) {
    fVar21 = (float)param_1[1];
    fVar22 = (float)((ulong)param_1[1] >> 0x20);
    fVar17 = (float)*param_1;
    fVar20 = (float)((ulong)*param_1 >> 0x20);
    fVar28 = (float)param_1[3];
    fVar30 = (float)((ulong)param_1[3] >> 0x20);
    fVar23 = (float)param_1[2];
    fVar25 = (float)((ulong)param_1[2] >> 0x20);
    fVar23 = fVar23 * fVar23;
    fVar25 = fVar25 * fVar25;
    fVar28 = fVar28 * fVar28;
    fVar30 = fVar30 * fVar30;
    fVar17 = fVar17 * fVar17;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    auVar32._4_4_ = fVar20;
    auVar32._0_4_ = fVar17;
    auVar32._8_4_ = fVar21;
    auVar32._12_4_ = fVar22;
    auVar33._4_4_ = fVar20;
    auVar33._0_4_ = fVar17;
    auVar33._8_4_ = fVar21;
    auVar33._12_4_ = fVar22;
    auVar32 = NEON_ext(auVar32,auVar33,8,1);
    auVar34._4_4_ = fVar25;
    auVar34._0_4_ = fVar23;
    auVar34._8_4_ = fVar28;
    auVar34._12_4_ = fVar30;
    auVar4._4_4_ = fVar25;
    auVar4._0_4_ = fVar23;
    auVar4._8_4_ = fVar28;
    auVar4._12_4_ = fVar30;
    auVar33 = NEON_ext(auVar34,auVar4,8,1);
    fVar21 = (float)param_1[5];
    fVar22 = (float)((ulong)param_1[5] >> 0x20);
    fVar30 = (float)param_1[4];
    fVar26 = (float)((ulong)param_1[4] >> 0x20);
    fVar30 = fVar30 * fVar30;
    fVar26 = fVar26 * fVar26;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar30;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = fVar22;
    auVar6._4_4_ = fVar26;
    auVar6._0_4_ = fVar30;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = fVar22;
    auVar34 = NEON_ext(auVar5,auVar6,8,1);
    local_b0._4_4_ = (float)((ulong)local_b0 >> 0x20);
    fVar22 = (float)local_c0;
    fVar28 = (float)local_b0;
    fVar21 = local_b0._4_4_;
    local_c0 = uVar13;
    local_b0 = uVar14;
    do {
      fVar22 = ABS(fVar22);
      fVar28 = ABS(fVar28);
      fVar21 = ABS(fVar21);
      fVar19 = fVar28;
      if (fVar28 <= fVar22) {
        fVar19 = fVar22;
      }
      fVar18 = fVar21;
      if (fVar21 <= fVar19) {
        fVar18 = fVar19;
      }
      if (fVar18 * fVar18 <
          (fVar17 + fVar20 + auVar32._0_4_ + fVar23 + fVar25 + auVar33._0_4_ +
          fVar30 + fVar26 + auVar34._0_4_) * 1.4210855e-14) break;
      lVar1 = 1;
      if (fVar22 < fVar28 || fVar19 < fVar21) {
        lVar1 = 2;
      }
      pfVar15 = (float *)(&local_d0 + lVar1 * 2);
      pfVar2 = (float *)((ulong)pfVar15 | 8);
      if (fVar28 <= fVar22 && fVar21 <= fVar19) {
        pfVar2 = (float *)((ulong)pfVar15 | 4);
      }
      uVar16 = (ulong)(fVar19 < fVar21);
      pfVar3 = (float *)((ulong)pfVar15 | 4);
      if (fVar21 <= fVar19) {
        pfVar3 = pfVar15;
      }
      pfVar15 = (float *)((ulong)(&local_d0 + uVar16 * 2) | 4);
      if (fVar21 <= fVar19) {
        pfVar15 = (float *)(&local_d0 + uVar16 * 2);
      }
      fVar45 = (*pfVar2 - *pfVar15) / (*pfVar3 + *pfVar3);
      fVar24 = fVar45 * fVar45 + 1.0;
      fVar18 = SQRT(fVar24);
      if (NAN(fVar18)) {
        fVar18 = sqrtf(fVar24);
      }
      fVar24 = -fVar18;
      if (0.0 <= fVar45) {
        fVar24 = fVar18;
      }
      fVar45 = 1.0 / (fVar45 + fVar24);
      fVar24 = fVar45 * fVar45 + 1.0;
      fVar18 = SQRT(fVar24);
      if (NAN(fVar18)) {
        fVar18 = sqrtf(fVar24);
      }
      fVar18 = 1.0 / fVar18;
      fVar45 = fVar18 * fVar45;
      fVar24 = -fVar45;
      local_130 = uVar9;
      uStack_128 = uVar10;
      uStack_120 = uVar11;
      uStack_118 = uVar12;
      local_110 = uVar7;
      uStack_108 = uVar8;
      local_100 = uVar9;
      uStack_f8 = uVar10;
      uStack_f0 = uVar11;
      uStack_e8 = uVar12;
      local_e0 = uVar7;
      uStack_d8 = uVar8;
      if (fVar19 < fVar21) {
        *(float *)((long)&local_100 + uVar16 * 0x10 + 4) = fVar18;
        *(float *)((long)&local_100 + lVar1 * 0x10 + 4) = fVar45;
LAB_032c9b0c:
        *(float *)(&uStack_f8 + uVar16 * 2) = fVar24;
        *(float *)(&uStack_f8 + lVar1 * 2) = fVar18;
        if (fVar19 < fVar21) {
          *(float *)((long)&local_130 + uVar16 * 0x10 + 4) = fVar18;
          *(float *)((long)&local_130 + lVar1 * 0x10 + 4) = fVar24;
        }
        else {
          *(float *)(&local_130 + uVar16 * 2) = fVar18;
          *(float *)(&local_130 + lVar1 * 2) = fVar24;
        }
        *(float *)(&uStack_128 + uVar16 * 2) = fVar45;
        pfVar15 = (float *)((ulong)(&local_130 + lVar1 * 2) | 8);
      }
      else {
        *(float *)(&local_100 + uVar16 * 2) = fVar18;
        *(float *)(&local_100 + lVar1 * 2) = fVar45;
        if (fVar22 < fVar28 || fVar19 < fVar21) goto LAB_032c9b0c;
        *(float *)((long)&local_100 + uVar16 * 0x10 + 4) = fVar24;
        *(float *)((long)&local_100 + lVar1 * 0x10 + 4) = fVar18;
        *(float *)(&local_130 + uVar16 * 2) = fVar18;
        *(float *)((long)&local_130 + uVar16 * 0x10 + 4) = fVar45;
        *(float *)(&local_130 + lVar1 * 2) = fVar24;
        pfVar15 = (float *)((ulong)(&local_130 + lVar1 * 2) | 4);
      }
      fVar21 = (float)local_d0;
      fVar22 = (float)((ulong)local_d0 >> 0x20);
      *pfVar15 = fVar18;
      param_4 = param_4 + -1;
      fVar46 = (float)uStack_f0;
      fVar28 = (float)local_c0;
      fVar39 = (float)((ulong)local_c0 >> 0x20);
      fVar40 = (float)local_b8;
      fVar47 = (float)((ulong)uStack_f0 >> 0x20);
      fVar53 = (float)local_e0;
      fVar54 = (float)((ulong)local_e0 >> 0x20);
      fVar38 = (float)local_b0;
      fVar41 = (float)((ulong)local_b0 >> 0x20);
      fVar42 = (float)uStack_a8;
      fVar48 = (float)uStack_e8;
      fVar55 = (float)uStack_d8;
      fVar19 = fVar38 * fVar55 + fVar21 * fVar53 + fVar28 * fVar54;
      fVar18 = fVar41 * fVar55 + fVar22 * fVar53 + fVar39 * fVar54;
      fVar24 = fVar42 * fVar55 + (float)uStack_c8 * fVar53 + fVar40 * fVar54;
      fVar29 = (float)uStack_128;
      fVar31 = (float)((ulong)uStack_128 >> 0x20);
      fVar45 = (float)local_130;
      fVar27 = (float)((ulong)local_130 >> 0x20);
      fVar35 = fVar38 * (float)uStack_f8 + fVar21 * (float)local_100 + fVar28 * local_100._4_4_;
      fVar36 = fVar41 * (float)uStack_f8 + fVar22 * (float)local_100 + fVar39 * local_100._4_4_;
      fVar37 = fVar42 * (float)uStack_f8 +
               (float)uStack_c8 * (float)local_100 + fVar40 * local_100._4_4_;
      fVar38 = fVar38 * fVar48 + fVar21 * fVar46 + fVar28 * fVar47;
      fVar39 = fVar41 * fVar48 + fVar22 * fVar46 + fVar39 * fVar47;
      fVar40 = fVar42 * fVar48 + (float)uStack_c8 * fVar46 + fVar40 * fVar47;
      fVar41 = (float)uStack_120;
      fVar42 = (float)((ulong)uStack_120 >> 0x20);
      fVar43 = (float)uStack_118;
      fVar44 = (float)((ulong)uStack_118 >> 0x20);
      fVar49 = (float)local_110;
      fVar50 = (float)((ulong)local_110 >> 0x20);
      fVar51 = (float)uStack_108;
      fVar52 = (float)((ulong)uStack_108 >> 0x20);
      fVar22 = fVar49 * fVar40 + fVar45 * fVar38 + fVar41 * fVar39;
      fVar28 = fVar49 * fVar24 + fVar45 * fVar19 + fVar41 * fVar18;
      fVar21 = fVar50 * fVar24 + fVar27 * fVar19 + fVar42 * fVar18;
      uStack_c8 = CONCAT44(fVar52 * fVar37 + fVar31 * fVar35 + fVar44 * fVar36,
                           fVar51 * fVar37 + fVar29 * fVar35 + fVar43 * fVar36);
      local_d0 = CONCAT44(fVar50 * fVar37 + fVar27 * fVar35 + fVar42 * fVar36,
                          fVar49 * fVar37 + fVar45 * fVar35 + fVar41 * fVar36);
      local_b8 = CONCAT44(fVar52 * fVar40 + fVar31 * fVar38 + fVar44 * fVar39,
                          fVar51 * fVar40 + fVar29 * fVar38 + fVar43 * fVar39);
      local_c0 = CONCAT44(fVar50 * fVar40 + fVar27 * fVar38 + fVar42 * fVar39,fVar22);
      uStack_a8 = CONCAT44(fVar52 * fVar24 + fVar31 * fVar19 + fVar44 * fVar18,
                           fVar51 * fVar24 + fVar29 * fVar19 + fVar43 * fVar18);
      local_b0 = CONCAT44(fVar21,fVar28);
      fVar27 = (float)*(undefined8 *)(param_2 + 4);
      fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar31 = (float)*(undefined8 *)(param_2 + 6);
      fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      fVar19 = (float)*(undefined8 *)param_2;
      fVar18 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_2 + 2);
      fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_2 + 8);
      fVar37 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar38 = (float)*(undefined8 *)(param_2 + 10);
      fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      param_2[2] = fVar38 * (float)uStack_f8 + fVar24 * (float)local_100 + fVar31 * local_100._4_4_;
      param_2[3] = fVar39 * (float)uStack_f8 + fVar45 * (float)local_100 + fVar35 * local_100._4_4_;
      *param_2 = fVar36 * (float)uStack_f8 + fVar19 * (float)local_100 + fVar27 * local_100._4_4_;
      param_2[1] = fVar37 * (float)uStack_f8 + fVar18 * (float)local_100 + fVar29 * local_100._4_4_;
      *(ulong *)(param_2 + 6) =
           CONCAT44(fVar39 * fVar48 + fVar45 * fVar46 + fVar35 * fVar47,
                    fVar38 * fVar48 + fVar24 * fVar46 + fVar31 * fVar47);
      *(ulong *)(param_2 + 4) =
           CONCAT44(fVar37 * fVar48 + fVar18 * fVar46 + fVar29 * fVar47,
                    fVar36 * fVar48 + fVar19 * fVar46 + fVar27 * fVar47);
      *(ulong *)(param_2 + 10) =
           CONCAT44(fVar39 * fVar55 + fVar45 * fVar53 + fVar35 * fVar54,
                    fVar38 * fVar55 + fVar24 * fVar53 + fVar31 * fVar54);
      *(ulong *)(param_2 + 8) =
           CONCAT44(fVar37 * fVar55 + fVar18 * fVar53 + fVar29 * fVar54,
                    fVar36 * fVar55 + fVar19 * fVar53 + fVar27 * fVar54);
    } while (param_4 != 0);
  }
  param_3[1] = CONCAT44((int)uStack_a8,(int)uStack_a8);
  *param_3 = CONCAT44(local_c0._4_4_,(undefined4)local_d0);
  return;
}


