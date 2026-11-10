/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d9c60; name: FUN_030d9c60
 */


void FUN_030d9c60(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar8 = (float)param_3[2];
  fVar3 = (float)param_3[8];
  fVar9 = (float)((ulong)param_3[2] >> 0x20);
  fVar4 = (float)((ulong)param_3[8] >> 0x20);
  fVar10 = (float)param_3[3];
  fVar1 = (float)param_3[6];
  fVar5 = (float)*param_3;
  fVar2 = (float)((ulong)param_3[6] >> 0x20);
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar7 = (float)param_3[1];
  fVar11 = (float)param_4[6];
  fVar13 = (float)((ulong)param_4[6] >> 0x20);
  fVar33 = (float)*param_2;
  fVar34 = (float)((ulong)*param_2 >> 0x20);
  fVar35 = (float)param_2[1];
  uVar21 = param_4[1];
  uVar25 = param_4[3];
  fVar18 = (float)*param_4;
  fVar19 = (float)((ulong)*param_4 >> 0x20);
  fVar20 = (float)uVar21;
  uVar32 = param_2[5];
  fVar26 = *(float *)(param_2 + 6);
  fVar36 = *(float *)((long)param_2 + 0x34);
  fVar37 = fVar26 * (float)*(undefined8 *)(param_1 + 0xc0);
  fVar22 = (float)param_4[2];
  fVar27 = (float)param_4[8];
  fVar23 = (float)((ulong)param_4[2] >> 0x20);
  fVar28 = (float)((ulong)param_4[8] >> 0x20);
  fVar24 = (float)uVar25;
  fVar12 = (float)param_2[2];
  fVar14 = (float)((ulong)param_2[2] >> 0x20);
  fVar15 = (float)param_2[3];
  fVar29 = (float)param_2[4];
  fVar30 = (float)((ulong)param_2[4] >> 0x20);
  fVar31 = (float)uVar32;
  uVar17 = param_4[5];
  uVar16 = param_4[4];
  fVar1 = (fVar33 * ((fVar5 - fVar1) - (fVar18 - fVar11)) +
          (fVar8 - fVar3) * fVar12 + (fVar22 - fVar27) * fVar29) * fVar36 +
          (fVar33 * (fVar1 - fVar11) + fVar3 * fVar12 + fVar27 * fVar29) * fVar37;
  fVar3 = (fVar34 * ((fVar6 - fVar2) - (fVar19 - fVar13)) +
          (fVar9 - fVar4) * fVar14 + (fVar23 - fVar28) * fVar30) * fVar36 +
          (fVar34 * (fVar2 - fVar13) + fVar4 * fVar14 + fVar28 * fVar30) * fVar37;
  fVar4 = (fVar35 * ((fVar7 - (float)param_3[7]) - (fVar20 - (float)param_4[7])) +
          (fVar10 - (float)param_3[9]) * fVar15 + (fVar24 - (float)param_4[9]) * fVar31) * fVar36 +
          (fVar35 * ((float)param_3[7] - (float)param_4[7]) +
          (float)param_3[9] * fVar15 + (float)param_4[9] * fVar31) * fVar37;
  fVar13 = (float)((ulong)param_2[1] >> 0x20);
  fVar11 = (float)((ulong)param_2[3] >> 0x20);
  fVar2 = (fVar26 * fVar13 - (fVar1 + fVar3 + fVar4)) * fVar11;
  fVar1 = (fVar26 * fVar13 - (fVar1 + fVar3 + fVar4)) * fVar11;
  fVar3 = (float)((ulong)param_3[5] >> 0x20) * fVar1;
  fVar4 = (float)((ulong)uVar17 >> 0x20) * fVar1;
  param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + fVar13 * fVar3,fVar7 + fVar35 * fVar3);
  *param_3 = CONCAT44(fVar6 + fVar34 * fVar3,fVar5 + fVar33 * fVar3);
  param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) + fVar11 * fVar3,
                        fVar10 + fVar15 * (float)param_3[5] * fVar2);
  param_3[2] = CONCAT44(fVar9 + fVar14 * (float)((ulong)param_3[4] >> 0x20) * fVar1,
                        fVar8 + fVar12 * (float)param_3[4] * fVar2);
  fVar3 = *param_5;
  param_4[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) - fVar13 * fVar4,fVar20 - fVar35 * fVar4);
  *param_4 = CONCAT44(fVar19 - fVar34 * fVar4,fVar18 - fVar33 * fVar4);
  param_4[3] = CONCAT44((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar32 >> 0x20) * fVar4,
                        fVar24 + fVar31 * (float)uVar17 * fVar2);
  param_4[2] = CONCAT44(fVar23 + fVar30 * (float)((ulong)uVar16 >> 0x20) * fVar1,
                        fVar22 + fVar29 * (float)uVar16 * fVar2);
  *param_5 = fVar3 + fVar2;
  return;
}


