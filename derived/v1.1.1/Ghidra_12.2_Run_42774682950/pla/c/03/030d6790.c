/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d6790; name: FUN_030d6790
 */


void FUN_030d6790(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
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
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  fVar21 = (float)param_3[8];
  fVar25 = (float)((ulong)uVar3 >> 0x20);
  fVar23 = (float)((ulong)param_3[8] >> 0x20);
  uVar6 = param_4[1];
  uVar5 = *param_4;
  uVar8 = param_4[3];
  uVar7 = param_4[2];
  fVar19 = (float)param_3[6];
  fVar24 = (float)((ulong)uVar1 >> 0x20);
  fVar20 = (float)((ulong)param_3[6] >> 0x20);
  fVar29 = (float)param_4[6];
  fVar27 = (float)((ulong)uVar5 >> 0x20);
  fVar33 = (float)((ulong)param_4[6] >> 0x20);
  fVar35 = (float)param_4[8];
  fVar31 = (float)((ulong)uVar7 >> 0x20);
  fVar30 = (float)((ulong)param_4[8] >> 0x20);
  fVar9 = (float)param_2[2];
  fVar10 = (float)((ulong)param_2[2] >> 0x20);
  fVar11 = (float)param_2[3];
  fVar15 = (float)*param_2;
  fVar16 = (float)((ulong)*param_2 >> 0x20);
  fVar17 = (float)param_2[1];
  fVar12 = (float)param_2[4];
  fVar13 = (float)((ulong)param_2[4] >> 0x20);
  fVar14 = (float)param_2[5];
  fVar22 = *(float *)(param_2 + 7);
  fVar26 = *(float *)((long)param_2 + 0x3c);
  fVar28 = fVar22 * (float)*(undefined8 *)(param_1 + 0xc0);
  fVar18 = (float)((ulong)param_2[1] >> 0x20);
  fVar19 = (fVar15 * (((float)uVar1 - fVar19) - ((float)uVar5 - fVar29)) +
           ((float)uVar3 - fVar21) * fVar9 + ((float)uVar7 - fVar35) * fVar12) * fVar26 +
           (fVar15 * (fVar19 - fVar29) + fVar21 * fVar9 + fVar35 * fVar12) * fVar28;
  fVar20 = (fVar16 * ((fVar24 - fVar20) - (fVar27 - fVar33)) +
           (fVar25 - fVar23) * fVar10 + (fVar31 - fVar30) * fVar13) * fVar26 +
           (fVar16 * (fVar20 - fVar33) + fVar23 * fVar10 + fVar30 * fVar13) * fVar28;
  fVar21 = (fVar17 * (((float)uVar2 - (float)param_3[7]) - ((float)uVar6 - (float)param_4[7])) +
           ((float)uVar4 - (float)param_3[9]) * fVar11 + ((float)uVar8 - (float)param_4[9]) * fVar14
           ) * fVar26 +
           (fVar17 * ((float)param_3[7] - (float)param_4[7]) +
           (float)param_3[9] * fVar11 + (float)param_4[9] * fVar14) * fVar28;
  fVar23 = fVar22 * fVar18 - (fVar19 + fVar20 + fVar21);
  fVar22 = fVar22 * fVar18 - (fVar19 + fVar20 + fVar21);
  fVar21 = *param_5;
  fVar19 = (float)((ulong)param_2[3] >> 0x20);
  fVar26 = (fVar23 - *(float *)(param_2 + 6)) * fVar19;
  fVar33 = (fVar22 - *(float *)(param_2 + 6)) * fVar19;
  fVar29 = -fVar21;
  fVar20 = (float)((ulong)param_2[5] >> 0x20);
  if (fVar29 < fVar26) {
    uVar34 = param_3[5];
    uVar32 = param_3[4];
    uVar37 = param_4[5];
    uVar36 = param_4[4];
    fVar21 = fVar21 + fVar26;
    *param_5 = fVar21;
    fVar28 = fVar33 * (float)((ulong)uVar34 >> 0x20);
    fVar35 = fVar33 * (float)((ulong)uVar37 >> 0x20);
    uVar1 = CONCAT44(fVar24 + fVar16 * fVar28,(float)uVar1 + fVar15 * fVar28);
    uVar2 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar18 * fVar28,(float)uVar2 + fVar17 * fVar28)
    ;
    uVar5 = CONCAT44(fVar27 - fVar16 * fVar35,(float)uVar5 - fVar15 * fVar35);
    uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar18 * fVar35,(float)uVar6 - fVar17 * fVar35)
    ;
    uVar3 = CONCAT44(fVar25 + fVar10 * fVar33 * (float)((ulong)uVar32 >> 0x20),
                     (float)uVar3 + fVar9 * fVar26 * (float)uVar32);
    uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar19 * fVar28,
                     (float)uVar4 + fVar11 * fVar26 * (float)uVar34);
    uVar7 = CONCAT44(fVar31 + fVar13 * fVar33 * (float)((ulong)uVar36 >> 0x20),
                     (float)uVar7 + fVar12 * fVar26 * (float)uVar36);
    uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar20 * fVar35,
                     (float)uVar8 + fVar14 * fVar26 * (float)uVar37);
    param_3[1] = uVar2;
    *param_3 = uVar1;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
    param_4[1] = uVar6;
    *param_4 = uVar5;
    param_4[3] = uVar8;
    param_4[2] = uVar7;
  }
  fVar24 = fVar19 * (fVar23 - *(float *)((long)param_2 + 0x34));
  fVar25 = fVar19 * (fVar22 - *(float *)((long)param_2 + 0x34));
  if (fVar24 < fVar29) {
    fVar31 = fVar25 * (float)((ulong)param_3[5] >> 0x20);
    uVar34 = param_4[5];
    uVar32 = param_4[4];
    fVar27 = fVar25 * (float)((ulong)uVar34 >> 0x20);
    param_3[1] = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar18 * fVar31,
                          (float)uVar2 + fVar17 * fVar31);
    *param_3 = CONCAT44((float)((ulong)uVar1 >> 0x20) + fVar16 * fVar31,
                        (float)uVar1 + fVar15 * fVar31);
    param_3[3] = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar19 * fVar31,
                          (float)uVar4 + fVar11 * fVar24 * (float)param_3[5]);
    param_3[2] = CONCAT44((float)((ulong)uVar3 >> 0x20) +
                          fVar10 * fVar25 * (float)((ulong)param_3[4] >> 0x20),
                          (float)uVar3 + fVar9 * fVar24 * (float)param_3[4]);
    param_4[1] = CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar18 * fVar27,
                          (float)uVar6 - fVar17 * fVar27);
    *param_4 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar16 * fVar27,
                        (float)uVar5 - fVar15 * fVar27);
    param_4[3] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar20 * fVar27,
                          (float)uVar8 + fVar14 * fVar24 * (float)uVar34);
    param_4[2] = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                          fVar13 * fVar25 * (float)((ulong)uVar32 >> 0x20),
                          (float)uVar7 + fVar12 * fVar24 * (float)uVar32);
    *param_5 = fVar21 + fVar24;
  }
  return;
}


