/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56510; name: FUN_02e56510
 */


void FUN_02e56510(float *param_1,float *param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = *param_2;
  fVar6 = param_2[1];
  fVar5 = param_2[2];
  fVar4 = SQRT((*param_3 - fVar8) * (*param_3 - fVar8) + (param_3[1] - fVar6) * (param_3[1] - fVar6)
               + (param_3[2] - fVar5) * (param_3[2] - fVar5));
  if (1 < (uint)param_2[0x3a]) {
    lVar1 = (ulong)(uint)param_2[0x3a] - 1;
    pfVar3 = param_2 + 6;
    fVar10 = fVar6;
    fVar7 = fVar5;
    fVar9 = fVar8;
    do {
      fVar8 = pfVar3[-2];
      fVar6 = pfVar3[-1];
      fVar5 = *pfVar3;
      fVar4 = SQRT((fVar9 - fVar8) * (fVar9 - fVar8) + (fVar10 - fVar6) * (fVar10 - fVar6) +
                   (fVar7 - fVar5) * (fVar7 - fVar5)) + fVar4;
      lVar1 = lVar1 + -1;
      pfVar3 = pfVar3 + 4;
      fVar10 = fVar6;
      fVar7 = fVar5;
      fVar9 = fVar8;
    } while (lVar1 != 0);
  }
  fVar7 = param_4[1];
  fVar8 = fVar8 - *param_4;
  fVar9 = param_4[2];
  fVar6 = fVar6 - fVar7;
  fVar5 = fVar5 - fVar9;
  fVar10 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar10 == 0.0) {
    uVar2 = *(undefined8 *)param_4;
    param_1[2] = param_4[2];
    *(undefined8 *)param_1 = uVar2;
    return;
  }
  fVar10 = (fVar10 + fVar4) / fVar10;
  *param_1 = *param_4 + fVar8 * fVar10;
  param_1[1] = fVar7 + fVar6 * fVar10;
  param_1[2] = fVar9 + fVar5 * fVar10;
  return;
}


