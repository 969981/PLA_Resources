/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e180; name: FUN_0333e180
 */


void FUN_0333e180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 uVar2;
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
  float fVar22;
  float fVar23;
  
  uVar2 = *param_2;
  fVar1 = (float)uVar2;
  fVar8 = (float)param_2[2];
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar5 = (float)((ulong)param_2[2] >> 0x20);
  fVar4 = (float)param_2[1];
  fVar6 = (float)param_2[3];
  if (fVar4 <= fVar6 && (fVar1 <= fVar8 && fVar3 <= fVar5)) {
    fVar9 = (fVar1 + fVar8) * 0.5;
    fVar10 = (fVar3 + fVar5) * 0.5;
    fVar11 = (fVar4 + fVar6) * 0.5;
    fVar1 = (fVar8 - fVar1) * 0.5;
    fVar3 = (fVar5 - fVar3) * 0.5;
    fVar4 = (fVar6 - fVar4) * 0.5;
    fVar8 = (float)param_1[4];
    fVar5 = (float)((ulong)param_1[4] >> 0x20);
    fVar6 = (float)param_1[5];
    fVar7 = (float)((ulong)param_1[5] >> 0x20);
    fVar14 = (float)*param_3;
    fVar15 = (float)((ulong)*param_3 >> 0x20);
    fVar16 = (float)*param_1;
    fVar17 = (float)((ulong)*param_1 >> 0x20);
    fVar18 = (float)param_1[1];
    fVar19 = (float)((ulong)param_1[1] >> 0x20);
    fVar20 = (float)param_1[2];
    fVar21 = (float)((ulong)param_1[2] >> 0x20);
    fVar22 = (float)param_1[3];
    fVar23 = (float)((ulong)param_1[3] >> 0x20);
    fVar12 = ABS(fVar16 * fVar1) + ABS(fVar20 * fVar3) + ABS(fVar8 * fVar4) + fVar14;
    fVar13 = ABS(fVar17 * fVar1) + ABS(fVar21 * fVar3) + ABS(fVar5 * fVar4) + fVar15;
    fVar14 = ABS(fVar18 * fVar1) + ABS(fVar22 * fVar3) + ABS(fVar6 * fVar4) + fVar14;
    fVar15 = ABS(fVar19 * fVar1) + ABS(fVar23 * fVar3) + ABS(fVar7 * fVar4) + fVar15;
    fVar1 = (float)param_1[6] + fVar8 * fVar11 + fVar16 * fVar9 + fVar20 * fVar10;
    fVar3 = (float)((ulong)param_1[6] >> 0x20) + fVar5 * fVar11 + fVar17 * fVar9 + fVar21 * fVar10;
    fVar4 = (float)param_1[7] + fVar6 * fVar11 + fVar18 * fVar9 + fVar22 * fVar10;
    fVar8 = (float)((ulong)param_1[7] >> 0x20) + fVar7 * fVar11 + fVar19 * fVar9 + fVar23 * fVar10;
    param_4[1] = CONCAT44(fVar8 - fVar15,fVar4 - fVar14);
    *param_4 = CONCAT44(fVar3 - fVar13,fVar1 - fVar12);
    param_4[3] = CONCAT44(fVar8 + fVar15,fVar4 + fVar14);
    param_4[2] = CONCAT44(fVar3 + fVar13,fVar1 + fVar12);
    return;
  }
  param_4[1] = param_2[1];
  *param_4 = uVar2;
  uVar2 = param_2[2];
  param_4[3] = param_2[3];
  param_4[2] = uVar2;
  return;
}


