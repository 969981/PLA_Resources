/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e220; name: FUN_0333e220
 */


void FUN_0333e220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    fVar12 = (float)param_1[2];
    fVar13 = (float)((ulong)param_1[2] >> 0x20);
    fVar14 = (float)param_1[3];
    fVar15 = (float)((ulong)param_1[3] >> 0x20);
    fVar8 = (float)*param_1;
    fVar5 = (float)((ulong)*param_1 >> 0x20);
    fVar6 = (float)param_1[1];
    fVar7 = (float)((ulong)param_1[1] >> 0x20);
    fVar20 = (float)param_1[4];
    fVar21 = (float)((ulong)param_1[4] >> 0x20);
    fVar22 = (float)param_1[5];
    fVar23 = (float)((ulong)param_1[5] >> 0x20);
    fVar16 = ABS(fVar20 * fVar4) + ABS(fVar8 * fVar1) + ABS(fVar12 * fVar3);
    fVar17 = ABS(fVar21 * fVar4) + ABS(fVar5 * fVar1) + ABS(fVar13 * fVar3);
    fVar18 = ABS(fVar22 * fVar4) + ABS(fVar6 * fVar1) + ABS(fVar14 * fVar3);
    fVar19 = ABS(fVar23 * fVar4) + ABS(fVar7 * fVar1) + ABS(fVar15 * fVar3);
    fVar1 = (float)param_1[6] + fVar20 * fVar11 + fVar8 * fVar9 + fVar12 * fVar10;
    fVar3 = (float)((ulong)param_1[6] >> 0x20) + fVar21 * fVar11 + fVar5 * fVar9 + fVar13 * fVar10;
    fVar4 = (float)param_1[7] + fVar22 * fVar11 + fVar6 * fVar9 + fVar14 * fVar10;
    fVar8 = (float)((ulong)param_1[7] >> 0x20) + fVar23 * fVar11 + fVar7 * fVar9 + fVar15 * fVar10;
    param_3[1] = CONCAT44(fVar8 - fVar19,fVar4 - fVar18);
    *param_3 = CONCAT44(fVar3 - fVar17,fVar1 - fVar16);
    param_3[3] = CONCAT44(fVar19 + fVar8,fVar18 + fVar4);
    param_3[2] = CONCAT44(fVar17 + fVar3,fVar16 + fVar1);
    return;
  }
  param_3[1] = param_2[1];
  *param_3 = uVar2;
  uVar2 = param_2[2];
  param_3[3] = param_2[3];
  param_3[2] = uVar2;
  return;
}


