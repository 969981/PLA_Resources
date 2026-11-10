/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032603b8; name: FUN_032603b8
 */


undefined8
FUN_032603b8(long *param_1,undefined1 (*param_2) [12],undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ushort *puVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined8 uVar33;
  
  puVar2 = (ushort *)param_1[1];
  if ((ushort *)*param_1 == puVar2) {
    uVar15 = 0;
    uVar17 = NEON_fmov(0x3f800000,4);
  }
  else {
    fVar14 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    uVar5 = *(undefined8 *)*param_2;
    fVar13 = (float)((ulong)uVar5 >> 0x20);
    auVar16._12_4_ = fVar14;
    auVar16._0_12_ = *param_2;
    auVar4._12_4_ = fVar14;
    auVar4._0_12_ = *param_2;
    auVar16 = NEON_ext(auVar16,auVar4,8,1);
    uVar17 = NEON_fmov(0x3f800000,4);
    puVar3 = (undefined8 *)(param_1[2] + (ulong)puVar2[-4] * 0x10);
    uVar20 = puVar3[1];
    uVar19 = *puVar3;
    uVar18 = NEON_ext(uVar5,auVar16._0_8_,4,1);
    fVar10 = (float)*param_3;
    fVar11 = (float)((ulong)*param_3 >> 0x20);
    fVar12 = (float)param_3[1];
    uVar15 = 0;
    puVar8 = puVar2 + -4;
    puVar9 = (ushort *)*param_1;
    do {
      fVar24 = (float)uVar20;
      fVar32 = (float)((ulong)uVar20 >> 0x20);
      fVar21 = (float)uVar19;
      fVar23 = (float)((ulong)uVar19 >> 0x20);
      puVar3 = (undefined8 *)(param_1[2] + (ulong)*puVar9 * 0x10);
      uVar20 = puVar3[1];
      uVar19 = *puVar3;
      auVar26._0_4_ = (float)uVar19 - fVar21;
      fVar22 = (float)((ulong)uVar19 >> 0x20);
      auVar26._4_4_ = fVar22 - fVar23;
      auVar26._8_4_ = (float)uVar20 - fVar24;
      fVar25 = (float)((ulong)uVar20 >> 0x20);
      auVar26._12_4_ = fVar25 - fVar32;
      auVar16 = NEON_ext(auVar26,auVar26,4,1);
      auVar27._0_4_ = (float)uVar5 * auVar16._0_4_ - (float)uVar18 * auVar26._0_4_;
      auVar27._4_4_ = fVar13 * auVar16._4_4_ - (float)((ulong)uVar18 >> 0x20) * auVar26._4_4_;
      auVar27._8_4_ =
           (float)*(undefined8 *)(*param_2 + 8) * auVar26._0_4_ - (float)uVar5 * auVar26._8_4_;
      auVar27._12_4_ = fVar14 * auVar26._4_4_ - fVar13 * auVar26._12_4_;
      auVar16 = NEON_ext(auVar27,auVar27,4,1);
      fVar28 = auVar16._0_4_;
      fVar21 = (fVar21 + (float)uVar19) * fVar28;
      fVar31 = auVar16._4_4_;
      fVar22 = (fVar23 + fVar22) * fVar31;
      fVar23 = (fVar24 + (float)uVar20) * auVar27._0_4_;
      fVar25 = (fVar32 + fVar25) * auVar27._4_4_;
      auVar6._4_4_ = fVar22;
      auVar6._0_4_ = fVar21;
      auVar6._8_4_ = fVar23;
      auVar6._12_4_ = fVar25;
      auVar7._4_4_ = fVar22;
      auVar7._0_4_ = fVar21;
      auVar7._8_4_ = fVar23;
      auVar7._12_4_ = fVar25;
      auVar16 = NEON_ext(auVar6,auVar7,8,1);
      fVar25 = (fVar21 + fVar22 + auVar16._0_4_) * -0.5;
      fVar22 = ((float)*param_4 - fVar10) * fVar28;
      fVar23 = ((float)((ulong)*param_4 >> 0x20) - fVar11) * fVar31;
      fVar24 = ((float)param_4[1] - fVar12) * auVar27._0_4_;
      auVar30._0_4_ = fVar10 * fVar28;
      auVar30._4_4_ = fVar11 * fVar31;
      auVar30._8_4_ = fVar12 * auVar27._0_4_;
      auVar30._12_4_ = (float)((ulong)param_3[1] >> 0x20) * fVar25;
      fVar21 = fVar22 + fVar23 + fVar24;
      fVar24 = fVar22 + fVar23 + fVar24;
      auVar16 = NEON_ext(auVar30,auVar30,8,1);
      fVar25 = auVar16._0_4_ + fVar25;
      fVar22 = auVar30._0_4_ + auVar30._4_4_ + fVar25;
      if (fVar21 == 0.0) {
        if (fVar22 == 0.0) {
          if (((char)puVar8[1] == '\x02') && (*(int *)(puVar8 + 2) <= (int)param_1[3])) {
            return 0;
          }
        }
        else if (fVar22 < 0.0) {
          return 0;
        }
      }
      else {
        uVar29 = NEON_frecpe(CONCAT44(fVar24,fVar21),4);
        uVar33 = NEON_frecps(CONCAT44(fVar24,fVar21),uVar29,4);
        fVar23 = (float)uVar29 * (float)uVar33;
        fVar32 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
        uVar29 = NEON_frecps(CONCAT44(fVar24,fVar21),CONCAT44(fVar32,fVar23),4);
        fVar22 = -(fVar22 * fVar23 * (float)uVar29);
        uVar29 = CONCAT44(-((auVar30._0_4_ + auVar30._4_4_ + fVar25) *
                           fVar32 * (float)((ulong)uVar29 >> 0x20)),fVar22);
        if (fVar21 < 0.0) {
          if (fVar22 <= (float)uVar15) {
            return 0;
          }
          uVar17 = NEON_fmin(uVar17,uVar29,4);
        }
        else {
          if ((float)uVar17 <= fVar22) {
            return 0;
          }
          uVar15 = NEON_fmax(uVar15,uVar29,4);
        }
      }
      puVar1 = puVar9 + 4;
      puVar8 = puVar9;
      puVar9 = puVar1;
    } while (puVar2 != puVar1);
  }
  *param_6 = uVar15;
  *param_7 = uVar17;
  if ((float)uVar17 - (float)uVar15 < (float)*param_5) {
    return 0;
  }
  return 1;
}


