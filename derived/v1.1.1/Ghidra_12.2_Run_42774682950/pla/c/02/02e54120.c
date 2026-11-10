/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54120; name: FUN_02e54120
 */


void FUN_02e54120(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar8 = *param_2;
  fVar7 = param_2[1];
  fVar6 = param_2[2];
  fVar1 = param_1[0x14];
  fVar13 = param_1[0x15];
  fVar10 = fVar7 - fVar13;
  fVar9 = fVar8 - fVar1;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar14 = param_1[0x16];
  fVar11 = fVar6 - fVar14;
  fVar5 = param_1[2];
  fVar12 = fVar3 * fVar9 + fVar10 * fVar4 + fVar11 * fVar5;
  fVar2 = fVar12 * (fVar3 * (*param_3 - fVar1) + (param_3[1] - fVar13) * fVar4 +
                   (param_3[2] - fVar14) * fVar5);
  if (0.0 < fVar2) {
    fVar9 = fVar12 * -2.0;
    fVar8 = fVar8 + fVar3 * fVar9;
    fVar7 = fVar7 + fVar4 * fVar9;
    fVar6 = fVar6 + fVar5 * fVar9;
    fVar9 = fVar8 - fVar1;
    fVar10 = fVar7 - fVar13;
    fVar11 = fVar6 - fVar14;
  }
  fVar6 = param_3[2] - fVar6;
  fVar8 = *param_3 - fVar8;
  fVar7 = param_3[1] - fVar7;
  fVar12 = ABS(fVar12 / ABS(fVar6 * fVar5 + fVar4 * fVar7 + fVar3 * fVar8));
  fVar9 = fVar9 + fVar8 * fVar12;
  fVar10 = fVar10 + fVar7 * fVar12;
  fVar11 = fVar11 + fVar6 * fVar12;
  fVar8 = param_1[0x17];
  fVar12 = param_1[0x18];
  fVar7 = fVar9 * param_1[0x1a] + param_1[0x1b] * fVar10 + param_1[0x1c] * fVar11;
  fVar6 = fVar8;
  if (fVar7 <= fVar8) {
    fVar6 = fVar7;
  }
  fVar13 = -fVar8;
  if (-fVar8 <= fVar7) {
    fVar13 = fVar6;
  }
  fVar7 = param_1[3] * fVar9 + fVar10 * param_1[4] + fVar11 * param_1[5];
  fVar6 = -fVar12;
  if ((-fVar12 <= fVar7) && (fVar6 = fVar12, fVar7 <= fVar12)) {
    fVar6 = fVar7;
  }
  fVar4 = fVar9 * fVar3 + fVar4 * fVar10 + fVar5 * fVar11;
  fVar5 = param_1[0x19];
  fVar3 = -fVar5;
  if ((-fVar5 <= fVar4) && (fVar3 = fVar5, fVar4 <= fVar5)) {
    fVar3 = fVar4;
  }
  if (0.0 < fVar2) {
    if (fVar12 - ABS(fVar6) <= fVar8 - ABS(fVar13)) {
      if (fVar12 - ABS(fVar6) < fVar8 - ABS(fVar13)) {
        fVar2 = 1.0;
        if (fVar6 < 0.0) {
          fVar2 = -1.0;
        }
        fVar6 = fVar2 * fVar12;
      }
    }
    else {
      fVar2 = 1.0;
      if (fVar13 < 0.0) {
        fVar2 = -1.0;
      }
      fVar13 = fVar2 * fVar8;
    }
  }
  *param_4 = fVar1;
  fVar2 = param_1[0x15];
  param_4[1] = fVar2;
  fVar4 = param_1[0x16];
  param_4[2] = fVar4;
  fVar2 = fVar2 + fVar13 * param_1[0x1b];
  fVar1 = fVar1 + fVar13 * param_1[0x1a];
  fVar4 = fVar4 + fVar13 * param_1[0x1c];
  param_4[1] = fVar2;
  *param_4 = fVar1;
  param_4[2] = fVar4;
  fVar2 = fVar2 + fVar6 * param_1[4];
  fVar1 = fVar1 + fVar6 * param_1[3];
  fVar4 = fVar4 + fVar6 * param_1[5];
  param_4[1] = fVar2;
  *param_4 = fVar1;
  param_4[2] = fVar4;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *param_4 = fVar1 + fVar3 * *param_1;
  param_4[1] = fVar2 + fVar3 * fVar5;
  param_4[2] = fVar4 + fVar3 * fVar6;
  return;
}


