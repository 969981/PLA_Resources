/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d9d50; name: FUN_030d9d50
 */


void FUN_030d9d50(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar16 = param_5[1];
  uVar12 = param_5[3];
  uVar30 = NEON_scvtf(CONCAT44(*param_2 + 1,*param_2 + 1),4);
  uVar4 = param_4[1];
  uVar8 = param_4[3];
  fVar13 = (float)*param_5;
  fVar33 = (float)param_5[6];
  fVar14 = (float)((ulong)*param_5 >> 0x20);
  fVar34 = (float)((ulong)param_5[6] >> 0x20);
  fVar15 = (float)uVar16;
  fVar9 = (float)param_5[2];
  fVar38 = (float)param_5[8];
  fVar10 = (float)((ulong)param_5[2] >> 0x20);
  fVar41 = (float)((ulong)param_5[8] >> 0x20);
  fVar11 = (float)uVar12;
  fVar5 = (float)param_4[2];
  fVar31 = (float)param_4[8];
  fVar6 = (float)((ulong)param_4[2] >> 0x20);
  fVar32 = (float)((ulong)param_4[8] >> 0x20);
  fVar7 = (float)uVar8;
  fVar1 = (float)*param_4;
  fVar20 = (float)param_4[6];
  fVar2 = (float)((ulong)*param_4 >> 0x20);
  fVar29 = (float)((ulong)param_4[6] >> 0x20);
  fVar3 = (float)uVar4;
  fVar17 = (float)param_3[2];
  fVar18 = (float)((ulong)param_3[2] >> 0x20);
  fVar19 = (float)param_3[3];
  uVar24 = param_3[5];
  fVar25 = (float)*param_3;
  fVar26 = (float)((ulong)*param_3 >> 0x20);
  fVar27 = (float)param_3[1];
  fVar21 = (float)param_3[4];
  fVar22 = (float)((ulong)param_3[4] >> 0x20);
  fVar23 = (float)uVar24;
  fVar36 = *(float *)((long)param_3 + 0x3c);
  fVar39 = fVar36 * (float)*(undefined8 *)(param_1 + 0xc0);
  fVar28 = (float)((ulong)param_3[1] >> 0x20);
  fVar40 = *(float *)(param_3 + 8);
  fVar31 = (fVar25 * ((fVar1 - fVar20) - (fVar13 - fVar33)) +
           (fVar5 - fVar31) * fVar17 + (fVar9 - fVar38) * fVar21) * fVar40 +
           (fVar25 * (fVar20 - fVar33) + fVar31 * fVar17 + fVar38 * fVar21) * fVar39;
  fVar33 = (fVar26 * ((fVar2 - fVar29) - (fVar14 - fVar34)) +
           (fVar6 - fVar32) * fVar18 + (fVar10 - fVar41) * fVar22) * fVar40 +
           (fVar26 * (fVar29 - fVar34) + fVar32 * fVar18 + fVar41 * fVar22) * fVar39;
  fVar34 = (fVar27 * ((fVar3 - (float)param_4[7]) - (fVar15 - (float)param_5[7])) +
           (fVar7 - (float)param_4[9]) * fVar19 + (fVar11 - (float)param_5[9]) * fVar23) * fVar40 +
           (fVar27 * ((float)param_4[7] - (float)param_5[7]) +
           (float)param_4[9] * fVar19 + (float)param_5[9] * fVar23) * fVar39;
  fVar32 = *(float *)(param_3 + 6);
  fVar20 = (float)((ulong)param_3[3] >> 0x20);
  fVar29 = ((fVar28 + (float)uVar30 * *(float *)(param_3 + 7)) * fVar36 - (fVar31 + fVar33 + fVar34)
           ) * fVar20;
  uVar30 = CONCAT44(((fVar28 + (float)((ulong)uVar30 >> 0x20) * *(float *)(param_3 + 7)) * fVar36 -
                    (fVar31 + fVar33 + fVar34)) * fVar20,fVar29);
  if ((fVar32 < fVar29) || (fVar32 = *(float *)((long)param_3 + 0x34), fVar29 < fVar32)) {
    uVar35 = NEON_frecpe(uVar30,4);
    uVar37 = NEON_frecps(uVar30,uVar35,4);
    fVar29 = (float)uVar35 * (float)uVar37;
    uVar35 = NEON_frecps(uVar30,CONCAT44((float)((ulong)uVar35 >> 0x20) *
                                         (float)((ulong)uVar37 >> 0x20),fVar29),4);
    uVar30 = CONCAT44(fVar32,fVar32);
    param_6[1] = fVar32 * fVar29 * (float)uVar35;
  }
  else {
    param_6[1] = 1.0;
  }
  fVar29 = (float)uVar30;
  fVar31 = (float)((ulong)uVar30 >> 0x20);
  fVar33 = fVar31 * (float)((ulong)param_4[5] >> 0x20);
  uVar35 = param_5[5];
  uVar30 = param_5[4];
  fVar32 = fVar31 * (float)((ulong)uVar35 >> 0x20);
  param_4[1] = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar28 * fVar33,fVar3 + fVar27 * fVar33);
  *param_4 = CONCAT44(fVar2 + fVar26 * fVar33,fVar1 + fVar25 * fVar33);
  param_4[3] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar20 * fVar33,
                        fVar7 + fVar19 * fVar29 * (float)param_4[5]);
  param_4[2] = CONCAT44(fVar6 + fVar18 * fVar31 * (float)((ulong)param_4[4] >> 0x20),
                        fVar5 + fVar17 * fVar29 * (float)param_4[4]);
  fVar1 = *param_6;
  param_5[1] = CONCAT44((float)((ulong)uVar16 >> 0x20) - fVar28 * fVar32,fVar15 - fVar27 * fVar32);
  *param_5 = CONCAT44(fVar14 - fVar26 * fVar32,fVar13 - fVar25 * fVar32);
  param_5[3] = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar24 >> 0x20) * fVar32,
                        fVar11 + fVar23 * fVar29 * (float)uVar35);
  param_5[2] = CONCAT44(fVar10 + fVar22 * fVar31 * (float)((ulong)uVar30 >> 0x20),
                        fVar9 + fVar21 * fVar29 * (float)uVar30);
  *param_6 = fVar29 + fVar1;
  return;
}


