/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb0b0; name: FUN_032bb0b0
 */


undefined8
FUN_032bb0b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar13 = param_2[1];
  uVar12 = *param_2;
  uVar6 = param_3[1];
  uVar4 = *param_3;
  fVar8 = (float)((ulong)uVar12 >> 0x20);
  fVar1 = (float)uVar4 - (float)uVar12;
  fVar2 = (float)((ulong)uVar4 >> 0x20) - fVar8;
  fVar3 = (float)uVar6 - (float)uVar13;
  fVar7 = ((float)*param_1 - (float)uVar12) * fVar1;
  fVar9 = ((float)((ulong)*param_1 >> 0x20) - fVar8) * fVar2;
  fVar10 = ((float)param_1[1] - (float)uVar13) * fVar3;
  fVar8 = fVar7 + fVar9 + fVar10;
  if (fVar8 <= 0.0) {
    *param_4 = 0;
    param_4[3] = uVar13;
    param_4[2] = uVar12;
    return 8;
  }
  fVar11 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  uVar12 = CONCAT44(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3,fVar11);
  if (fVar8 < fVar11) {
    uVar4 = NEON_frecpe(uVar12,4);
    uVar14 = NEON_frecps(uVar12,uVar4,4);
    fVar11 = (float)uVar4 * (float)uVar14;
    fVar5 = (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar14 >> 0x20);
    uVar4 = NEON_frecps(uVar12,CONCAT44(fVar5,fVar11),4);
    fVar8 = fVar8 * fVar11 * (float)uVar4;
    fVar7 = (fVar7 + fVar9 + fVar10) * fVar5 * (float)((ulong)uVar4 >> 0x20);
    *param_4 = CONCAT44(fVar7,fVar8);
    uVar4 = *param_2;
    param_4[3] = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                          ((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar13 >> 0x20)) * fVar7,
                          (float)param_2[1] + fVar3 * fVar8);
    param_4[2] = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar2 * fVar7,(float)uVar4 + fVar1 * fVar8
                         );
    return 0;
  }
  *param_4 = 0x3f8000003f800000;
  param_4[3] = uVar6;
  param_4[2] = uVar4;
  return 4;
}


