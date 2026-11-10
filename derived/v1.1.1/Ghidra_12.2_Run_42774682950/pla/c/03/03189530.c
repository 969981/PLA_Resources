/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03189530; name: FUN_03189530
 */


undefined8
FUN_03189530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

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
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  
  fVar5 = (float)*param_3;
  fVar8 = (float)*param_2 - fVar5;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar9 = (float)((ulong)*param_2 >> 0x20) - fVar6;
  fVar7 = (float)param_3[1];
  fVar10 = (float)param_2[1] - fVar7;
  fVar2 = (float)*param_4 - fVar5;
  fVar3 = (float)((ulong)*param_4 >> 0x20) - fVar6;
  fVar4 = (float)param_4[1] - fVar7;
  fVar1 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
  fVar11 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar15 = fVar1 * fVar11;
  fVar17 = (fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) *
           (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  uVar16 = CONCAT44(fVar17,fVar15);
  fVar13 = fVar8 * fVar2 + fVar9 * fVar3 + fVar10 * fVar4;
  fVar14 = fVar8 * fVar2 + fVar9 * fVar3 + fVar10 * fVar4;
  fVar15 = fVar15 - fVar13 * fVar13;
  uVar12 = CONCAT44(fVar17 - fVar14 * fVar14,fVar15);
  if (fVar15 != 0.0) {
    uVar18 = NEON_frecpe(uVar16,4);
    uVar19 = NEON_frecps(uVar16,uVar18,4);
    fVar14 = (float)uVar18 * (float)uVar19;
    uVar16 = NEON_frecps(uVar16,CONCAT44((float)((ulong)uVar18 >> 0x20) *
                                         (float)((ulong)uVar19 >> 0x20),fVar14),4);
    if (1.0 - fVar15 * fVar14 * (float)uVar16 < 0.99800104) {
      fVar5 = fVar5 - (float)*param_1;
      fVar6 = fVar6 - (float)((ulong)*param_1 >> 0x20);
      fVar7 = fVar7 - (float)param_1[1];
      uVar18 = NEON_frecpe(uVar12,4);
      fVar10 = fVar8 * fVar5 + fVar9 * fVar6 + fVar10 * fVar7;
      uVar16 = NEON_frecps(uVar12,uVar18,4);
      fVar8 = (float)uVar18 * (float)uVar16;
      fVar9 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
      fVar2 = fVar2 * fVar5 + fVar3 * fVar6 + fVar4 * fVar7;
      fVar3 = fVar13 * fVar2 - fVar11 * fVar10;
      uVar12 = NEON_frecps(uVar12,CONCAT44(fVar9,fVar8),4);
      fVar1 = fVar13 * fVar10 - fVar1 * fVar2;
      fVar8 = fVar8 * (float)uVar12;
      fVar9 = fVar9 * (float)((ulong)uVar12 >> 0x20);
      param_5[1] = CONCAT44(fVar9 * fVar1,fVar8 * fVar1);
      *param_5 = CONCAT44(fVar9 * ((fVar15 - fVar3) - fVar1),fVar8 * fVar3);
      return 1;
    }
  }
  return 0;
}


