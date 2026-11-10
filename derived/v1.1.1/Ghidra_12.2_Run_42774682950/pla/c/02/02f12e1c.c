/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12e1c; name: FUN_02f12e1c
 */


void FUN_02f12e1c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar1 = (float)FUN_02f120cc(param_3,param_4,param_5);
  if ((1e-38 <= fVar1) || (fVar1 <= -1e-38)) {
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar13 = param_3[2];
    fVar1 = 1.0 / fVar1;
    fVar6 = param_4[2];
    fVar8 = param_5[1];
    fVar5 = param_5[2];
    fVar7 = *param_5;
    fVar10 = *param_3;
    fVar11 = param_3[1];
    fVar9 = *param_2;
    fVar12 = param_2[1];
    fVar14 = param_2[2];
    fVar2 = (fVar9 * (fVar11 * fVar6 - fVar13 * fVar4) + fVar12 * (fVar3 * fVar13 - fVar10 * fVar6)
            + (fVar10 * fVar4 - fVar3 * fVar11) * fVar14) * fVar1;
    *param_1 = (fVar9 * (fVar5 * fVar4 - fVar8 * fVar6) + (fVar7 * fVar6 - fVar3 * fVar5) * fVar12 +
               (fVar3 * fVar8 - fVar7 * fVar4) * fVar14) * fVar1;
    param_1[1] = (fVar9 * (fVar13 * fVar8 - fVar11 * fVar5) +
                  fVar12 * (fVar10 * fVar5 - fVar7 * fVar13) +
                 (fVar7 * fVar11 - fVar10 * fVar8) * fVar14) * fVar1;
  }
  else {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    fVar2 = 0.0;
  }
  param_1[2] = fVar2;
  return;
}


