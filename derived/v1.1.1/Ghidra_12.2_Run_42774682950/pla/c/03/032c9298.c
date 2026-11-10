/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c9298; name: FUN_032c9298
 */


void FUN_032c9298(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar17 = (float)param_3[5];
  fVar18 = (float)param_2[4];
  fVar19 = (float)((ulong)param_2[4] >> 0x20);
  fVar20 = (float)param_2[5];
  fVar21 = (float)((ulong)param_2[5] >> 0x20);
  fVar6 = (float)param_3[3];
  fVar11 = (float)param_2[2];
  fVar12 = (float)((ulong)param_2[2] >> 0x20);
  fVar13 = (float)param_2[3];
  fVar14 = (float)((ulong)param_2[3] >> 0x20);
  fVar3 = (float)param_3[1];
  fVar7 = (float)*param_2;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  fVar9 = (float)param_2[1];
  fVar10 = (float)((ulong)param_2[1] >> 0x20);
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  fVar1 = (float)*param_3;
  fVar5 = (float)((ulong)param_3[2] >> 0x20);
  fVar4 = (float)param_3[2];
  fVar16 = (float)((ulong)param_3[4] >> 0x20);
  fVar15 = (float)param_3[4];
  param_1[3] = CONCAT44(fVar21 * fVar16 + fVar10 * fVar2 + fVar14 * fVar5,
                        fVar20 * fVar16 + fVar9 * fVar2 + fVar13 * fVar5);
  param_1[2] = CONCAT44(fVar19 * fVar16 + fVar8 * fVar2 + fVar12 * fVar5,
                        fVar18 * fVar16 + fVar7 * fVar2 + fVar11 * fVar5);
  param_1[5] = CONCAT44(fVar21 * fVar17 + fVar10 * fVar3 + fVar14 * fVar6,
                        fVar20 * fVar17 + fVar9 * fVar3 + fVar13 * fVar6);
  param_1[4] = CONCAT44(fVar19 * fVar17 + fVar8 * fVar3 + fVar12 * fVar6,
                        fVar18 * fVar17 + fVar7 * fVar3 + fVar11 * fVar6);
  param_1[1] = CONCAT44(fVar21 * fVar15 + fVar10 * fVar1 + fVar14 * fVar4,
                        fVar20 * fVar15 + fVar9 * fVar1 + fVar13 * fVar4);
  *param_1 = CONCAT44(fVar19 * fVar15 + fVar8 * fVar1 + fVar12 * fVar4,
                      fVar18 * fVar15 + fVar7 * fVar1 + fVar11 * fVar4);
  return;
}


