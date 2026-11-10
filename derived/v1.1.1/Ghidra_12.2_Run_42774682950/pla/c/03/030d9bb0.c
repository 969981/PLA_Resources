/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d9bb0; name: FUN_030d9bb0
 */


void FUN_030d9bb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

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
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
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
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  fVar32 = *param_4;
  uVar10 = param_3[1];
  uVar14 = param_3[3];
  fVar1 = (float)*param_2;
  fVar7 = (float)*param_3;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar8 = (float)((ulong)*param_3 >> 0x20);
  fVar3 = (float)param_2[1];
  fVar9 = (float)uVar10;
  fVar4 = (float)param_2[2];
  fVar19 = (float)param_1[2];
  fVar5 = (float)((ulong)param_2[2] >> 0x20);
  fVar20 = (float)((ulong)param_1[2] >> 0x20);
  fVar6 = (float)param_2[3];
  fVar21 = (float)param_1[3];
  fVar11 = (float)param_3[2];
  fVar23 = (float)param_1[4];
  fVar12 = (float)((ulong)param_3[2] >> 0x20);
  fVar24 = (float)((ulong)param_1[4] >> 0x20);
  fVar13 = (float)uVar14;
  fVar25 = (float)param_1[5];
  fVar28 = (float)*param_1;
  fVar29 = (float)((ulong)*param_1 >> 0x20);
  fVar30 = (float)param_1[1];
  fVar15 = fVar4 * fVar19 + fVar11 * fVar23 + (fVar1 - fVar7) * fVar28;
  fVar17 = fVar5 * fVar20 + fVar12 * fVar24 + (fVar2 - fVar8) * fVar29;
  fVar18 = fVar6 * fVar21 + fVar13 * fVar25 + (fVar3 - fVar9) * fVar30;
  fVar26 = (float)((ulong)param_1[5] >> 0x20);
  fVar31 = (float)((ulong)param_1[1] >> 0x20);
  uVar34 = param_3[5];
  uVar33 = param_3[4];
  fVar22 = (float)((ulong)param_1[3] >> 0x20);
  uVar16 = NEON_fmax(CONCAT44(-fVar26 - fVar32,-fVar26 - fVar32),
                     CONCAT44((fVar31 - (fVar15 + fVar17 + fVar18)) * fVar22,
                              (fVar31 - (fVar15 + fVar17 + fVar18)) * fVar22),4);
  uVar16 = NEON_fmin(CONCAT44(fVar26 - fVar32,fVar26 - fVar32),uVar16,4);
  fVar15 = (float)uVar16;
  fVar17 = (float)((ulong)uVar16 >> 0x20);
  fVar27 = fVar17 * (float)((ulong)param_2[5] >> 0x20);
  fVar18 = fVar17 * (float)((ulong)uVar34 >> 0x20);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + fVar31 * fVar27,fVar3 + fVar30 * fVar27
                       );
  *param_2 = CONCAT44(fVar2 + fVar29 * fVar27,fVar1 + fVar28 * fVar27);
  param_2[3] = CONCAT44((float)((ulong)param_2[3] >> 0x20) + fVar22 * fVar27,
                        fVar6 + fVar21 * fVar15 * (float)param_2[5]);
  param_2[2] = CONCAT44(fVar5 + fVar20 * fVar17 * (float)((ulong)param_2[4] >> 0x20),
                        fVar4 + fVar19 * fVar15 * (float)param_2[4]);
  param_3[1] = CONCAT44((float)((ulong)uVar10 >> 0x20) - fVar31 * fVar18,fVar9 - fVar30 * fVar18);
  *param_3 = CONCAT44(fVar8 - fVar29 * fVar18,fVar7 - fVar28 * fVar18);
  param_3[3] = CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar26 * fVar18,
                        fVar13 + fVar25 * fVar15 * (float)uVar34);
  param_3[2] = CONCAT44(fVar12 + fVar24 * fVar17 * (float)((ulong)uVar33 >> 0x20),
                        fVar11 + fVar23 * fVar15 * (float)uVar33);
  *param_4 = fVar32 + fVar15;
  return;
}


