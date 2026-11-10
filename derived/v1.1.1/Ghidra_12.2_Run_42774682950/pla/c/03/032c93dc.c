/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c93dc; name: FUN_032c93dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_032c93dc(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  
  uVar10 = DAT_0388a148;
  uVar9 = DAT_0388a140;
  uVar8 = _UNK_03889a88;
  uVar7 = _DAT_03889a80;
  uVar6 = _UNK_03888d18;
  uVar15 = _DAT_03888d10;
  uVar13 = param_2[5];
  uVar16 = param_2[3];
  uStack_98 = uVar13;
  uStack_a8 = uVar16;
  uStack_b8 = param_2[1];
  local_c0 = *param_2;
  uVar14 = param_2[2];
  uVar17 = param_2[4];
  local_b0 = uVar14;
  local_a0 = uVar17;
  param_3[1] = _UNK_03889a88;
  *param_3 = uVar7;
  param_3[3] = uVar10;
  param_3[2] = uVar9;
  param_3[5] = uVar6;
  param_3[4] = uVar15;
  fVar27 = (float)param_2[1];
  fVar29 = (float)((ulong)param_2[1] >> 0x20);
  fVar24 = (float)*param_2;
  fVar25 = (float)((ulong)*param_2 >> 0x20);
  fVar34 = (float)param_2[3];
  fVar36 = (float)((ulong)param_2[3] >> 0x20);
  fVar30 = (float)param_2[2];
  fVar32 = (float)((ulong)param_2[2] >> 0x20);
  fVar30 = fVar30 * fVar30;
  fVar32 = fVar32 * fVar32;
  fVar34 = fVar34 * fVar34;
  fVar36 = fVar36 * fVar36;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  fVar29 = fVar29 * fVar29;
  auVar38._4_4_ = fVar25;
  auVar38._0_4_ = fVar24;
  auVar38._8_4_ = fVar27;
  auVar38._12_4_ = fVar29;
  auVar39._4_4_ = fVar25;
  auVar39._0_4_ = fVar24;
  auVar39._8_4_ = fVar27;
  auVar39._12_4_ = fVar29;
  auVar38 = NEON_ext(auVar38,auVar39,8,1);
  auVar40._4_4_ = fVar32;
  auVar40._0_4_ = fVar30;
  auVar40._8_4_ = fVar34;
  auVar40._12_4_ = fVar36;
  auVar3._4_4_ = fVar32;
  auVar3._0_4_ = fVar30;
  auVar3._8_4_ = fVar34;
  auVar3._12_4_ = fVar36;
  auVar39 = NEON_ext(auVar40,auVar3,8,1);
  fVar34 = (float)param_2[5];
  fVar36 = (float)((ulong)param_2[5] >> 0x20);
  fVar27 = (float)param_2[4];
  fVar29 = (float)((ulong)param_2[4] >> 0x20);
  fVar27 = fVar27 * fVar27;
  fVar29 = fVar29 * fVar29;
  fVar34 = fVar34 * fVar34;
  fVar36 = fVar36 * fVar36;
  auVar4._4_4_ = fVar29;
  auVar4._0_4_ = fVar27;
  auVar4._8_4_ = fVar34;
  auVar4._12_4_ = fVar36;
  auVar5._4_4_ = fVar29;
  auVar5._0_4_ = fVar27;
  auVar5._8_4_ = fVar34;
  auVar5._12_4_ = fVar36;
  auVar40 = NEON_ext(auVar4,auVar5,8,1);
  fVar27 = param_1 * param_1 *
           (fVar24 + fVar25 + auVar38._0_4_ + fVar30 + fVar32 + auVar39._0_4_ +
           fVar27 + fVar29 + auVar40._0_4_);
  fVar25 = (float)((ulong)uVar17 >> 0x20);
  fVar24 = fVar25 * fVar25 + (float)uVar17 * (float)uVar17 + (float)uVar14 * (float)uVar14;
  fVar24 = fVar24 + fVar24;
  if ((0 < param_5) && (fVar27 < fVar24)) {
    iVar19 = 1;
    do {
      fVar34 = (float)uVar14;
      fVar29 = ABS(fVar34);
      fVar32 = (float)uVar17;
      fVar30 = ABS(fVar32);
      uVar21 = 2;
      fVar24 = fVar30;
      if (fVar30 <= fVar29) {
        fVar24 = fVar29;
      }
      uVar20 = 2;
      if (fVar30 <= fVar29) {
        uVar20 = 1;
      }
      uVar23 = (ulong)uVar20;
      if (fVar24 < ABS(fVar25)) {
        lVar22 = 1;
        uVar20 = 2;
        if (fVar25 == 0.0) goto LAB_032c9768;
LAB_032c9534:
        puVar1 = &local_c0 + uVar21 * 2;
        pfVar18 = (float *)((ulong)puVar1 | 0xc);
        if (uVar20 == 1) {
          pfVar18 = (float *)((ulong)puVar1 | 4);
        }
        pfVar2 = (float *)((ulong)puVar1 | 8);
        if (uVar20 != 2) {
          pfVar2 = pfVar18;
        }
        pfVar18 = (float *)((ulong)(&local_c0 + lVar22 * 2) | 4);
        if ((int)lVar22 == 0) {
          pfVar18 = (float *)(&local_c0 + lVar22 * 2);
        }
        fVar29 = (*pfVar2 - *pfVar18) / (fVar25 + fVar25);
        fVar25 = fVar29 * fVar29 + 1.0;
        fVar24 = SQRT(fVar25);
        local_b0 = uVar14;
        uStack_a8 = uVar16;
        local_a0 = uVar17;
        uStack_98 = uVar13;
        if (NAN(fVar24)) {
          fVar24 = sqrtf(fVar25);
        }
        fVar25 = -fVar24;
        if (0.0 <= fVar29) {
          fVar25 = fVar24;
        }
        fVar25 = 1.0 / (fVar29 + fVar25);
        fVar29 = fVar25 * fVar25 + 1.0;
        fVar24 = SQRT(fVar29);
        if (NAN(fVar24)) {
          fVar24 = sqrtf(fVar29);
        }
        fVar24 = 1.0 / fVar24;
        fVar25 = fVar24 * fVar25;
      }
      else {
        fVar25 = *(float *)(&local_c0 + uVar23 * 2);
        lVar22 = 0;
        uVar21 = uVar23;
        if (fVar25 != 0.0) goto LAB_032c9534;
LAB_032c9768:
        fVar24 = 1.0;
        fVar25 = 0.0;
      }
      local_f0 = uVar7;
      uStack_e8 = uVar8;
      local_e0 = uVar9;
      uStack_d8 = uVar10;
      local_d0 = uVar15;
      if ((int)lVar22 == 0) {
        *(float *)(&local_f0 + lVar22 * 2) = fVar24;
        pfVar18 = (float *)(&local_f0 + uVar21 * 2);
      }
      else {
        *(float *)((long)&local_f0 + lVar22 * 0x10 + 4) = fVar24;
        pfVar18 = (float *)((ulong)(&local_f0 + uVar21 * 2) | 4);
      }
      fVar29 = -fVar25;
      uStack_c8 = uVar6;
      *pfVar18 = fVar25;
      if (uVar20 == 0) {
        *(float *)(&local_f0 + lVar22 * 2) = fVar29;
        pfVar18 = (float *)(&local_f0 + uVar21 * 2);
      }
      else if (uVar20 == 1) {
        *(float *)((long)&local_f0 + lVar22 * 0x10 + 4) = fVar29;
        pfVar18 = (float *)((ulong)(&local_f0 + uVar21 * 2) | 4);
      }
      else if (uVar20 == 2) {
        *(float *)(&uStack_e8 + lVar22 * 2) = fVar29;
        pfVar18 = (float *)((ulong)(&local_f0 + uVar21 * 2) | 8);
      }
      else {
        *(float *)((long)&uStack_e8 + lVar22 * 0x10 + 4) = fVar29;
        pfVar18 = (float *)((ulong)(&local_f0 + uVar21 * 2) | 0xc);
      }
      *pfVar18 = fVar24;
      uVar12 = uStack_d8;
      uVar11 = local_e0;
      local_120 = uVar7;
      uStack_118 = uVar8;
      local_110 = uVar9;
      uStack_108 = uVar10;
      local_100 = uVar15;
      uStack_f8 = uVar6;
      if ((int)lVar22 == 0) {
        *(float *)(&local_120 + lVar22 * 2) = fVar24;
        *(float *)(&local_120 + uVar21 * 2) = fVar29;
        if (uVar20 == 0) goto LAB_032c963c;
LAB_032c97c4:
        if (uVar20 == 1) {
          *(float *)((long)&local_120 + lVar22 * 0x10 + 4) = fVar25;
          pfVar18 = (float *)((ulong)(&local_120 + uVar21 * 2) | 4);
        }
        else if (uVar20 == 2) {
          *(float *)(&uStack_118 + lVar22 * 2) = fVar25;
          pfVar18 = (float *)((ulong)(&local_120 + uVar21 * 2) | 8);
        }
        else {
          *(float *)((long)&uStack_118 + lVar22 * 0x10 + 4) = fVar25;
          pfVar18 = (float *)((ulong)(&local_120 + uVar21 * 2) | 0xc);
        }
      }
      else {
        *(float *)((long)&local_120 + lVar22 * 0x10 + 4) = fVar24;
        *(float *)((ulong)(&local_120 + uVar21 * 2) | 4) = fVar29;
        if (uVar20 != 0) goto LAB_032c97c4;
LAB_032c963c:
        *(float *)(&local_120 + lVar22 * 2) = fVar25;
        pfVar18 = (float *)(&local_120 + uVar21 * 2);
      }
      fVar28 = (float)uStack_e8;
      fVar36 = (float)local_f0;
      fVar26 = (float)((ulong)local_f0 >> 0x20);
      fVar45 = (float)((ulong)local_e0 >> 0x20);
      fVar43 = (float)((ulong)uVar14 >> 0x20);
      fVar47 = (float)uVar16;
      *pfVar18 = fVar24;
      fVar24 = (float)local_c0;
      fVar25 = (float)((ulong)local_c0 >> 0x20);
      fVar44 = (float)uVar11;
      fVar51 = (float)local_d0;
      fVar52 = (float)((ulong)local_d0 >> 0x20);
      fVar29 = (float)((ulong)uVar17 >> 0x20);
      fVar30 = (float)uVar13;
      fVar46 = (float)uVar12;
      fVar53 = (float)uStack_c8;
      fVar31 = fVar32 * fVar28 + fVar24 * fVar36 + fVar34 * fVar26;
      fVar33 = fVar29 * fVar28 + fVar25 * fVar36 + fVar43 * fVar26;
      fVar35 = fVar30 * fVar28 + (float)uStack_b8 * fVar36 + fVar47 * fVar26;
      fVar37 = fVar32 * fVar46 + fVar24 * fVar44 + fVar34 * fVar45;
      fVar41 = fVar29 * fVar46 + fVar25 * fVar44 + fVar43 * fVar45;
      fVar42 = fVar30 * fVar46 + (float)uStack_b8 * fVar44 + fVar47 * fVar45;
      fVar24 = fVar32 * fVar53 + fVar24 * fVar51 + fVar34 * fVar52;
      fVar29 = fVar29 * fVar53 + fVar25 * fVar51 + fVar43 * fVar52;
      fVar30 = fVar30 * fVar53 + (float)uStack_b8 * fVar51 + fVar47 * fVar52;
      fVar47 = (float)local_110;
      fVar48 = (float)((ulong)local_110 >> 0x20);
      fVar49 = (float)uStack_108;
      fVar50 = (float)((ulong)uStack_108 >> 0x20);
      fVar25 = (float)local_120;
      fVar32 = (float)((ulong)local_120 >> 0x20);
      fVar34 = (float)uStack_118;
      fVar43 = (float)((ulong)uStack_118 >> 0x20);
      fVar57 = (float)local_100;
      fVar54 = (float)((ulong)local_100 >> 0x20);
      fVar55 = (float)uStack_f8;
      fVar56 = (float)((ulong)uStack_f8 >> 0x20);
      local_c0 = CONCAT44(fVar54 * fVar35 + fVar32 * fVar31 + fVar48 * fVar33,
                          fVar57 * fVar35 + fVar25 * fVar31 + fVar47 * fVar33);
      fVar58 = fVar57 * fVar42 + fVar25 * fVar37 + fVar47 * fVar41;
      uVar14 = CONCAT44(fVar54 * fVar42 + fVar32 * fVar37 + fVar48 * fVar41,fVar58);
      uVar16 = CONCAT44(fVar56 * fVar42 + fVar43 * fVar37 + fVar50 * fVar41,
                        fVar55 * fVar42 + fVar34 * fVar37 + fVar49 * fVar41);
      fVar57 = fVar57 * fVar30 + fVar25 * fVar24 + fVar47 * fVar29;
      fVar25 = fVar54 * fVar30 + fVar32 * fVar24 + fVar48 * fVar29;
      uVar17 = CONCAT44(fVar25,fVar57);
      uVar13 = CONCAT44(fVar56 * fVar30 + fVar43 * fVar24 + fVar50 * fVar29,
                        fVar55 * fVar30 + fVar34 * fVar24 + fVar49 * fVar29);
      uStack_b8 = CONCAT44(fVar56 * fVar35 + fVar43 * fVar31 + fVar50 * fVar33,
                           fVar55 * fVar35 + fVar34 * fVar31 + fVar49 * fVar33);
      uStack_a8 = uVar16;
      local_b0 = uVar14;
      uStack_98 = uVar13;
      local_a0 = uVar17;
      fVar35 = (float)param_3[1];
      fVar37 = (float)((ulong)param_3[1] >> 0x20);
      fVar31 = (float)*param_3;
      fVar33 = (float)((ulong)*param_3 >> 0x20);
      fVar29 = *(float *)(param_3 + 2);
      fVar30 = *(float *)((long)param_3 + 0x14);
      fVar32 = *(float *)(param_3 + 3);
      fVar34 = *(float *)((long)param_3 + 0x1c);
      fVar41 = (float)param_3[4];
      fVar42 = (float)((ulong)param_3[4] >> 0x20);
      fVar43 = (float)param_3[5];
      fVar47 = (float)((ulong)param_3[5] >> 0x20);
      param_3[1] = CONCAT44(fVar47 * fVar28 + fVar37 * fVar36 + fVar34 * fVar26,
                            fVar43 * fVar28 + fVar35 * fVar36 + fVar32 * fVar26);
      *param_3 = CONCAT44(fVar42 * fVar28 + fVar33 * fVar36 + fVar30 * fVar26,
                          fVar41 * fVar28 + fVar31 * fVar36 + fVar29 * fVar26);
      param_3[3] = CONCAT44(fVar47 * fVar46 + fVar37 * fVar44 + fVar34 * fVar45,
                            fVar43 * fVar46 + fVar35 * fVar44 + fVar32 * fVar45);
      param_3[2] = CONCAT44(fVar42 * fVar46 + fVar33 * fVar44 + fVar30 * fVar45,
                            fVar41 * fVar46 + fVar31 * fVar44 + fVar29 * fVar45);
      fVar24 = fVar25 * fVar25 + fVar57 * fVar57 + fVar58 * fVar58;
      param_3[5] = CONCAT44(fVar47 * fVar53 + fVar37 * fVar51 + fVar34 * fVar52,
                            fVar43 * fVar53 + fVar35 * fVar51 + fVar32 * fVar52);
      param_3[4] = CONCAT44(fVar42 * fVar53 + fVar33 * fVar51 + fVar30 * fVar52,
                            fVar41 * fVar53 + fVar31 * fVar51 + fVar29 * fVar52);
      fVar24 = fVar24 + fVar24;
    } while ((iVar19 < param_5) && (iVar19 = iVar19 + 1, fVar27 < fVar24));
  }
  param_4[1] = CONCAT44((int)uVar13,(int)uVar13);
  *param_4 = CONCAT44((int)((ulong)uVar14 >> 0x20),(int)local_c0);
  uVar15 = 0x80040200;
  if (fVar24 <= fVar27) {
    uVar15 = 0;
  }
  return uVar15;
}


