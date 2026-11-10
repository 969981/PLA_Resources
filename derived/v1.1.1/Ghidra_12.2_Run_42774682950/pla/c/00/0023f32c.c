/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023f32c; name: FUN_0023f32c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023f32c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long param_6,undefined8 *param_7,
                 float *param_8,float *param_9,int param_10)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
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
  float fVar59;
  float fVar60;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ushort local_88;
  ushort local_86;
  
  fVar20 = param_3._12_4_;
  fVar50 = param_3._8_4_;
  fVar21 = param_3._4_4_;
  bVar2 = *(byte *)(param_9 + 4);
  bVar3 = *(byte *)(param_5 + 0x49);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      plVar7 = *(long **)(*(long *)(param_5 + 0x18) + (long)param_10 * 0x10 + 8);
      if (plVar7 == (long *)0x0) {
        fVar19 = 0.0;
        auVar18 = ZEXT816(0);
        fVar50 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
      }
      else {
        (**(code **)(*plVar7 + 0x20))(&local_88);
        fVar19 = (float)NEON_ucvtf((uint)local_88);
        param_1 = ZEXT216(local_86);
        auVar18._4_12_ = param_2._4_12_;
        auVar18._0_4_ = (float)NEON_ucvtf((uint)local_86);
      }
    }
    else {
      fVar19 = *param_8;
      fVar21 = 0.0;
      fVar50 = 0.0;
      fVar20 = 0.0;
      auVar18 = ZEXT416((uint)param_8[1]);
    }
  }
  else {
    fVar19 = *(float *)(*(long *)(param_6 + 0xc0) + 0x28);
    fVar21 = 0.0;
    fVar50 = 0.0;
    fVar20 = 0.0;
    auVar18 = ZEXT416(*(uint *)(*(long *)(param_6 + 0xc0) + 0x2c));
  }
  uVar12 = (ulong)(*(uint *)(param_5 + 0x10) << 4) & 0x30;
  uVar11 = (uint)*(byte *)(*(long *)(param_5 + 0x18) +
                           uVar12 + ((ulong)(*(uint *)(param_5 + 0x10) >> 2) & 3) * 0x14 +
                           (long)param_10 * 0x10 + 1);
  if (3 < uVar11 - 3) goto joined_r0x0023f514;
  fVar56 = (float)param_7[1];
  fVar53 = (float)((ulong)param_7[1] >> 0x20);
  fVar49 = (float)*param_7;
  fVar52 = (float)((ulong)*param_7 >> 0x20);
  fVar21 = *(float *)(param_7 + 2);
  fVar50 = *(float *)((long)param_7 + 0x14);
  fVar20 = *(float *)(param_7 + 3);
  fVar43 = *(float *)((long)param_7 + 0x1c);
  lVar9 = *(long *)(param_5 + 0x18) + uVar12;
  fVar36 = fVar19 * 0.5;
  fVar48 = auVar18._0_4_;
  fVar22 = fVar48 * 0.5;
  switch(uVar11) {
  case 3:
    fVar49 = 1.0 / (-fVar22 - fVar22);
    fVar53 = 1.0 / (fVar36 + fVar36);
    fVar56 = 0.5 / param_9[3];
    fVar15 = (fVar49 + fVar49) * fVar56;
    fVar21 = *(float *)(param_6 + 0x80);
    fVar50 = *(float *)(param_6 + 0x84);
    fVar20 = *(float *)(param_6 + 0x88);
    fVar43 = *(float *)(param_6 + 0x8c);
    fVar55 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar58 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar16 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar52 = 0.5 / param_9[2];
    fVar29 = (fVar53 + fVar53) * fVar52;
    param_1._12_4_ = _UNK_0388a13c;
    param_1._8_4_ = _UNK_0388a138;
    param_1._4_4_ = _UNK_0388a134;
    param_1._0_4_ = _DAT_0388a130;
    fVar59 = (float)*(undefined8 *)(param_6 + 0xa0);
    fVar23 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
    fVar24 = (float)*(undefined8 *)(param_6 + 0xa8);
    fVar28 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
    param_4._0_4_ = fVar21 * 0.0 + fVar13 * 0.0 + fVar59 * 0.0 + _DAT_0388a130;
    param_4._4_4_ = fVar50 * 0.0 + fVar16 * 0.0 + fVar23 * 0.0 + _UNK_0388a134;
    param_4._8_4_ = fVar20 * 0.0 + fVar55 * 0.0 + fVar24 * 0.0 + _UNK_0388a138;
    param_4._12_4_ = fVar43 * 0.0 + fVar58 * 0.0 + fVar28 * 0.0 + _UNK_0388a13c;
    auVar18._0_4_ = fVar21 * fVar29 + fVar13 * 0.0 + fVar59 * 0.0 + 0.0;
    auVar18._4_4_ = fVar50 * fVar29 + fVar16 * 0.0 + fVar23 * 0.0 + 0.0;
    auVar18._8_4_ = fVar20 * fVar29 + fVar55 * 0.0 + fVar24 * 0.0 + 0.0;
    auVar18._12_4_ =
         ((0.5 - (*param_9 / param_9[2]) / fVar19) - (fVar36 - fVar36) * fVar53 * fVar52) +
         fVar43 * fVar29 + fVar58 * 0.0 + fVar28 * 0.0;
    fVar19 = fVar21 * 0.0 + fVar13 * fVar15 + fVar59 * 0.0 + 0.0;
    fVar21 = fVar50 * 0.0 + fVar16 * fVar15 + fVar23 * 0.0 + 0.0;
    fVar50 = fVar20 * 0.0 + fVar55 * fVar15 + fVar24 * 0.0 + 0.0;
    fVar20 = (((param_9[1] / param_9[3]) / fVar48 + 0.5) - (fVar22 - fVar22) * fVar49 * fVar56) +
             fVar43 * 0.0 + fVar58 * fVar15 + fVar28 * 0.0;
    goto joined_r0x0023f514;
  case 4:
    fVar58 = param_9[2];
    fVar16 = param_9[3];
    fVar13 = 0.5 / fVar16;
    fVar55 = 0.5 / fVar58;
    if ((bVar2 >> 2 & 1) == 0) {
      fVar21 = 1.0 / (fVar36 + fVar36);
      fVar20 = 1.0 / (-fVar22 - fVar22);
      fVar19 = (0.5 - ((fVar53 + *param_9) / fVar58) / fVar19) - (fVar36 - fVar36) * fVar21 * fVar55
      ;
      fVar50 = (fVar21 + fVar21) * fVar55;
      fVar55 = (fVar20 + fVar20) * fVar13;
      fVar20 = (((fVar43 + param_9[1]) / fVar16) / fVar48 + 0.5) -
               (fVar22 - fVar22) * fVar20 * fVar13;
      fVar36 = 0.0;
      fVar15 = 0.0;
      fVar53 = 0.0;
      fVar58 = 0.0;
      fVar43 = _DAT_0388a130;
      fVar49 = _UNK_0388a134;
      fVar52 = _UNK_0388a138;
      fVar56 = _UNK_0388a13c;
    }
    else {
      fVar28 = 1.0 / (fVar36 + fVar36);
      fVar31 = (fVar28 + fVar28) * fVar55;
      fVar29 = 1.0 / (-fVar22 - fVar22);
      fVar35 = (fVar29 + fVar29) * fVar13;
      fVar15 = *(float *)(param_7 + 4);
      fVar59 = *(float *)((long)param_7 + 0x24);
      fVar23 = *(float *)(param_7 + 5);
      fVar24 = *(float *)((long)param_7 + 0x2c);
      fVar30 = (((fVar56 * fVar21 * fVar59 + fVar49 * fVar50 * fVar23 + fVar52 * fVar20 * fVar15) -
                fVar50 * fVar15 * fVar56) - fVar52 * fVar21 * fVar23) - fVar49 * fVar59 * fVar20;
      if (fVar30 == 0.0) {
        fVar30 = 0.0;
      }
      else {
        fVar30 = 1.0 / fVar30;
      }
      fVar37 = (fVar52 * fVar20 - fVar56 * fVar50) * fVar30;
      fVar32 = (fVar50 * fVar23 - fVar20 * fVar59) * fVar30;
      fVar60 = (fVar56 * fVar59 - fVar52 * fVar23) * fVar30;
      fVar34 = (fVar56 * fVar21 - fVar49 * fVar20) * fVar30;
      fVar33 = (fVar49 * fVar23 - fVar56 * fVar15) * fVar30;
      fVar20 = (fVar20 * fVar15 - fVar21 * fVar23) * fVar30;
      fVar38 = (-(fVar53 * fVar32) - fVar60 * fVar43) - fVar37 * fVar24;
      fVar23 = (fVar21 * fVar59 - fVar50 * fVar15) * fVar30;
      fVar42 = (fVar52 * fVar15 - fVar49 * fVar59) * fVar30;
      fVar30 = (fVar49 * fVar50 - fVar52 * fVar21) * fVar30;
      fVar59 = (-(fVar53 * fVar20) - fVar33 * fVar43) - fVar34 * fVar24;
      fVar21 = (-(fVar53 * fVar23) - fVar42 * fVar43) - fVar30 * fVar24;
      fVar50 = fVar32 * fVar31 + fVar20 * 0.0 + fVar23 * 0.0 + 0.0;
      fVar53 = fVar60 * fVar31 + fVar33 * 0.0 + fVar42 * 0.0 + 0.0;
      fVar15 = fVar37 * fVar31 + fVar34 * 0.0 + fVar30 * 0.0 + 0.0;
      fVar19 = ((0.5 - (*param_9 / fVar58) / fVar19) - (fVar36 - fVar36) * fVar28 * fVar55) +
               fVar38 * fVar31 + fVar59 * 0.0 + fVar21 * 0.0;
      fVar43 = fVar32 * 0.0 + fVar20 * 0.0 + fVar23 * 0.0 + _DAT_0388a130;
      fVar49 = fVar60 * 0.0 + fVar33 * 0.0 + fVar42 * 0.0 + _UNK_0388a134;
      fVar52 = fVar37 * 0.0 + fVar34 * 0.0 + fVar30 * 0.0 + _UNK_0388a138;
      fVar56 = fVar38 * 0.0 + fVar59 * 0.0 + fVar21 * 0.0 + _UNK_0388a13c;
      fVar36 = fVar32 * 0.0 + fVar20 * fVar35 + fVar23 * 0.0 + 0.0;
      fVar55 = fVar60 * 0.0 + fVar33 * fVar35 + fVar42 * 0.0 + 0.0;
      fVar58 = fVar37 * 0.0 + fVar34 * fVar35 + fVar30 * 0.0 + 0.0;
      fVar20 = (((param_9[1] / fVar16) / fVar48 + 0.5) - (fVar22 - fVar22) * fVar29 * fVar13) +
               fVar38 * 0.0 + fVar59 * fVar35 + fVar21 * 0.0;
    }
    fVar24 = (float)*(undefined8 *)(param_6 + 0x88);
    fVar28 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
    fVar59 = (float)*(undefined8 *)(param_6 + 0x80);
    fVar23 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
    fVar48 = *(float *)(param_6 + 0xa0);
    fVar22 = *(float *)(param_6 + 0xa4);
    fVar13 = *(float *)(param_6 + 0xa8);
    fVar16 = *(float *)(param_6 + 0xac);
    fVar29 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar30 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar31 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar35 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    auVar18._0_4_ = fVar59 * fVar50 + fVar29 * fVar53 + fVar48 * fVar15 + 0.0;
    auVar18._4_4_ = fVar23 * fVar50 + fVar30 * fVar53 + fVar22 * fVar15 + 0.0;
    auVar18._8_4_ = fVar24 * fVar50 + fVar31 * fVar53 + fVar13 * fVar15 + 0.0;
    auVar18._12_4_ = fVar19 + fVar28 * fVar50 + fVar35 * fVar53 + fVar16 * fVar15;
    fVar19 = fVar59 * fVar36 + fVar29 * fVar55 + fVar48 * fVar58 + 0.0;
    fVar21 = fVar23 * fVar36 + fVar30 * fVar55 + fVar22 * fVar58 + 0.0;
    fVar50 = fVar24 * fVar36 + fVar31 * fVar55 + fVar13 * fVar58 + 0.0;
    fVar20 = fVar20 + fVar28 * fVar36 + fVar35 * fVar55 + fVar16 * fVar58;
    param_4._0_4_ = fVar59 * fVar43 + fVar29 * fVar49 + fVar48 * fVar52 + 0.0;
    param_4._4_4_ = fVar23 * fVar43 + fVar30 * fVar49 + fVar22 * fVar52 + 0.0;
    param_4._8_4_ = fVar24 * fVar43 + fVar31 * fVar49 + fVar13 * fVar52 + 0.0;
    param_4._12_4_ = fVar56 + fVar28 * fVar43 + fVar35 * fVar49 + fVar16 * fVar52;
    param_1._12_4_ = _UNK_0388a13c;
    param_1._8_4_ = _UNK_0388a138;
    param_1._4_4_ = _UNK_0388a134;
    param_1._0_4_ = _DAT_0388a130;
    goto joined_r0x0023f514;
  case 5:
    if ((bVar3 >> 6 & 1) == 0) {
      fVar21 = *(float *)(param_6 + 0x108);
      fVar50 = *(float *)(param_6 + 0x10c);
    }
    else {
      fVar50 = (float)*(int *)(param_6 + 0xe4);
      fVar21 = (float)*(int *)(param_6 + 0xe0);
    }
    fVar20 = ((fVar21 / fVar19) * 0.5) / param_9[2];
    fVar21 = ((fVar50 / fVar48) * -0.5) / param_9[3];
    auVar46._4_4_ = fVar21;
    auVar46._0_4_ = fVar20;
    auVar46._8_4_ = 0x3f800000;
    auVar46._12_4_ = 0;
    auVar18 = NEON_ext(ZEXT816(0),auVar46,4,1);
    auVar25._4_4_ = 0;
    auVar25._0_4_ = fVar20;
    auVar25._8_4_ = fVar21;
    auVar25._12_4_ = 0;
    auVar44 = NEON_ext(auVar18,ZEXT816(0),0xc,1);
    auVar18 = NEON_ext(auVar25,auVar25,0xc,1);
    auVar26 = NEON_ext(auVar18,ZEXT816(0),8,1);
    auVar45._0_12_ = auVar44._0_12_;
    auVar45._12_4_ = 0.5 - (*param_9 / param_9[2]) / fVar19;
    auVar17._0_12_ = auVar26._0_12_;
    auVar17._12_4_ = (param_9[1] / param_9[3]) / fVar48 + 0.5;
    auVar4._4_4_ = fVar21;
    auVar4._0_4_ = fVar20;
    auVar4._8_4_ = 0x3f800000;
    auVar4._12_4_ = 0;
    auVar18 = NEON_ext(auVar4,ZEXT816(0),8,1);
    auVar18 = NEON_ext(auVar18,auVar18,8,1);
    auVar14 = auVar18._0_12_;
    uStack_b8 = auVar17._8_8_;
    local_c0 = auVar26._0_8_;
    uStack_a8 = auVar45._8_8_;
    uStack_b0 = auVar44._0_8_;
    break;
  case 6:
    if ((bVar3 >> 6 & 1) == 0) {
      fVar21 = *(float *)(param_6 + 0x108);
      fVar50 = *(float *)(param_6 + 0x10c);
    }
    else {
      fVar50 = (float)*(int *)(param_6 + 0xe4);
      fVar21 = (float)*(int *)(param_6 + 0xe0);
    }
    fVar20 = ((fVar21 / fVar19) * 0.5) / param_9[2];
    fVar21 = ((fVar50 / fVar48) * -0.5) / param_9[3];
    auVar26._4_4_ = fVar21;
    auVar26._0_4_ = fVar20;
    auVar26._8_4_ = 0x3f800000;
    auVar26._12_4_ = 0;
    auVar18 = NEON_ext(ZEXT816(0),auVar26,4,1);
    auVar46 = NEON_ext(auVar18,ZEXT816(0),0xc,1);
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar20;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = 0;
    auVar18 = NEON_ext(auVar5,auVar6,0xc,1);
    auVar26 = NEON_ext(auVar18,ZEXT816(0),8,1);
    auVar47._0_12_ = auVar46._0_12_;
    auVar47._12_4_ = 0.5 - ((fVar53 + *param_9) / param_9[2]) / fVar19;
    auVar27._0_12_ = auVar26._0_12_;
    auVar27._12_4_ = ((fVar43 + param_9[1]) / param_9[3]) / fVar48 + 0.5;
    auVar44._4_4_ = fVar21;
    auVar44._0_4_ = fVar20;
    auVar44._8_4_ = 0x3f800000;
    auVar44._12_4_ = 0;
    auVar18 = NEON_ext(auVar44,ZEXT816(0),8,1);
    auVar18 = NEON_ext(auVar18,auVar18,8,1);
    auVar14 = auVar18._0_12_;
    uStack_b8 = auVar27._8_8_;
    local_c0 = auVar26._0_8_;
    uStack_a8 = auVar47._8_8_;
    uStack_b0 = auVar46._0_8_;
  }
  fVar21 = auVar14._8_4_;
  FUN_0024bbbc(&local_88);
  lVar8 = lVar9 + (long)param_10 * 0x14;
  fVar50 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar12 = (ulong)(*(float *)(lVar8 + 8) * (fVar50 / *(float *)PTR_FloatDegree180_04372ce0));
  fVar13 = *(float *)(lVar8 + 4);
  fVar51 = *(float *)(lVar9 + (long)param_10 * 0x14);
  pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar12 >> 0x18 & 0xff) * 0x10);
  fVar50 = (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08;
  fVar16 = *pfVar1 + pfVar1[2] * fVar50;
  fVar31 = *(float *)(lVar8 + 0x10);
  fVar23 = pfVar1[1] + pfVar1[3] * fVar50;
  fVar37 = *(float *)(lVar8 + 0xc) * fVar16;
  fVar57 = *(float *)(lVar8 + 0xc) * fVar23;
  fVar16 = fVar31 * fVar16;
  fVar54 = -(fVar31 * fVar23);
  FUN_0024bc24(&local_88);
  fVar50 = *(float *)(param_6 + 0x80);
  fVar20 = *(float *)(param_6 + 0x84);
  fVar19 = *(float *)(param_6 + 0x88);
  fVar43 = *(float *)(param_6 + 0x8c);
  fVar48 = *(float *)(param_6 + 0x90);
  fVar22 = *(float *)(param_6 + 0x94);
  fVar49 = *(float *)(param_6 + 0x98);
  fVar52 = *(float *)(param_6 + 0x9c);
  fVar15 = (float)*(undefined8 *)(param_6 + 0xa8);
  fVar59 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
  fVar55 = (float)*(undefined8 *)(param_6 + 0xa0);
  fVar58 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
  fVar56 = *(float *)(param_6 + 0x10);
  fVar53 = *(float *)(param_6 + 0x14);
  fVar36 = *(float *)(param_6 + 0x18);
  fVar38 = (float)*(undefined8 *)(param_6 + 0x28);
  fVar35 = (float)*(undefined8 *)(param_6 + 0x20);
  fVar42 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20);
  fVar24 = fVar50 * fVar56 + fVar48 * fVar53 + fVar55 * fVar36 + 0.0;
  fVar28 = fVar20 * fVar56 + fVar22 * fVar53 + fVar58 * fVar36 + 0.0;
  fVar29 = fVar19 * fVar56 + fVar49 * fVar53 + fVar15 * fVar36 + 0.0;
  fVar30 = *(float *)(param_6 + 0x1c) + fVar43 * fVar56 + fVar52 * fVar53 + fVar59 * fVar36;
  fVar56 = *(float *)(param_6 + 0x40);
  fVar53 = *(float *)(param_6 + 0x44);
  fVar36 = *(float *)(param_6 + 0x48);
  fVar32 = fVar50 * fVar35 + fVar48 * fVar42 + fVar55 * fVar38 + 0.0;
  fVar33 = fVar20 * fVar35 + fVar22 * fVar42 + fVar58 * fVar38 + 0.0;
  fVar34 = fVar19 * fVar35 + fVar49 * fVar42 + fVar15 * fVar38 + 0.0;
  fVar35 = (float)((ulong)*(undefined8 *)(param_6 + 0x28) >> 0x20) +
           fVar43 * fVar35 + fVar52 * fVar42 + fVar59 * fVar38;
  fVar42 = (float)*(undefined8 *)(param_6 + 0x30);
  fVar60 = (float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20);
  fVar40 = (float)*(undefined8 *)(param_6 + 0x38);
  fVar38 = fVar50 * fVar42 + fVar48 * fVar60 + fVar55 * fVar40 + 0.0;
  fVar39 = fVar20 * fVar42 + fVar22 * fVar60 + fVar58 * fVar40 + 0.0;
  fVar41 = fVar19 * fVar42 + fVar49 * fVar60 + fVar15 * fVar40 + 0.0;
  fVar42 = (float)((ulong)*(undefined8 *)(param_6 + 0x38) >> 0x20) +
           fVar43 * fVar42 + fVar52 * fVar60 + fVar59 * fVar40;
  param_1._0_4_ = fVar50 * fVar56 + fVar48 * fVar53 + fVar55 * fVar36 + 0.0;
  param_1._4_4_ = fVar20 * fVar56 + fVar22 * fVar53 + fVar58 * fVar36 + 0.0;
  param_1._8_4_ = fVar19 * fVar56 + fVar49 * fVar53 + fVar15 * fVar36 + 0.0;
  param_1._12_4_ = *(float *)(param_6 + 0x4c) + fVar43 * fVar56 + fVar52 * fVar53 + fVar59 * fVar36;
  fVar56 = (float)uStack_b8;
  fVar36 = (float)((ulong)uStack_b8 >> 0x20);
  fVar50 = (float)local_c0;
  fVar19 = (float)((ulong)local_c0 >> 0x20);
  fVar55 = (float)uStack_b0;
  fVar58 = (float)((ulong)uStack_b0 >> 0x20);
  fVar15 = (float)uStack_a8;
  fVar59 = (float)((ulong)uStack_a8 >> 0x20);
  fVar60 = auVar14._0_4_;
  fVar40 = auVar14._4_4_;
  fVar43 = fVar55 * fVar37 + fVar50 * fVar54 + fVar60 * 0.0 + 0.0;
  fVar48 = fVar58 * fVar37 + fVar19 * fVar54 + fVar40 * 0.0 + 0.0;
  fVar22 = fVar15 * fVar37 + fVar56 * fVar54 + fVar21 * 0.0 + 0.0;
  fVar49 = fVar31 * fVar23 * 0.5 + ((fVar51 + 0.5) - fVar37 * 0.5) +
           fVar59 * fVar37 + fVar36 * fVar54 + 0.0;
  fVar20 = fVar55 * fVar57 + fVar50 * fVar16 + fVar60 * 0.0 + 0.0;
  fVar52 = fVar58 * fVar57 + fVar19 * fVar16 + fVar40 * 0.0 + 0.0;
  fVar53 = fVar15 * fVar57 + fVar56 * fVar16 + fVar21 * 0.0 + 0.0;
  fVar13 = (1.0 - ((fVar16 * 0.5 - ((fVar13 + 0.5) - fVar57 * 0.5)) + 1.0)) +
           fVar59 * fVar57 + fVar36 * fVar16 + 0.0;
  fVar16 = fVar55 * 0.0 + fVar50 * 0.0 + fVar60 * 0.0 + 0.0;
  fVar55 = fVar58 * 0.0 + fVar19 * 0.0 + fVar40 * 0.0 + 0.0;
  fVar56 = fVar15 * 0.0 + fVar56 * 0.0 + fVar21 * 0.0 + 0.0;
  fVar36 = fVar59 * 0.0 + fVar36 * 0.0 + 0.0 + 0.0;
  fVar19 = fVar24 * fVar20 + fVar32 * fVar52 + fVar38 * fVar53 + param_1._0_4_ * fVar13;
  fVar21 = fVar28 * fVar20 + fVar33 * fVar52 + fVar39 * fVar53 + param_1._4_4_ * fVar13;
  fVar50 = fVar29 * fVar20 + fVar34 * fVar52 + fVar41 * fVar53 + param_1._8_4_ * fVar13;
  fVar20 = fVar30 * fVar20 + fVar35 * fVar52 + fVar42 * fVar53 + param_1._12_4_ * fVar13;
  auVar18._0_4_ = fVar24 * fVar43 + fVar32 * fVar48 + fVar38 * fVar22 + param_1._0_4_ * fVar49;
  auVar18._4_4_ = fVar28 * fVar43 + fVar33 * fVar48 + fVar39 * fVar22 + param_1._4_4_ * fVar49;
  auVar18._8_4_ = fVar29 * fVar43 + fVar34 * fVar48 + fVar41 * fVar22 + param_1._8_4_ * fVar49;
  auVar18._12_4_ = fVar30 * fVar43 + fVar35 * fVar48 + fVar42 * fVar22 + param_1._12_4_ * fVar49;
  param_4._0_4_ = fVar24 * fVar16 + fVar32 * fVar55 + fVar38 * fVar56 + param_1._0_4_ * fVar36;
  param_4._4_4_ = fVar28 * fVar16 + fVar33 * fVar55 + fVar39 * fVar56 + param_1._4_4_ * fVar36;
  param_4._8_4_ = fVar29 * fVar16 + fVar34 * fVar55 + fVar41 * fVar56 + param_1._8_4_ * fVar36;
  param_4._12_4_ = fVar30 * fVar16 + fVar35 * fVar55 + fVar42 * fVar56 + param_1._12_4_ * fVar36;
joined_r0x0023f514:
  if (param_10 == 2) {
    lVar9 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar9 != 0) {
      lVar9 = lVar9 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar10 = (undefined8 *)(lVar9 + 0x160);
  }
  else if (param_10 == 1) {
    lVar9 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar9 != 0) {
      lVar9 = lVar9 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar10 = (undefined8 *)(lVar9 + 0x120);
  }
  else {
    if (param_10 != 0) {
      return;
    }
    lVar9 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar9 != 0) {
      lVar9 = lVar9 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar10 = (undefined8 *)(lVar9 + 0xe0);
  }
  puVar10[1] = auVar18._8_8_;
  *puVar10 = auVar18._0_8_;
  puVar10[3] = CONCAT44(fVar20,fVar50);
  puVar10[2] = CONCAT44(fVar21,fVar19);
  puVar10[5] = param_4._8_8_;
  puVar10[4] = param_4._0_8_;
  puVar10[7] = param_1._8_8_;
  puVar10[6] = param_1._0_8_;
  return;
}


