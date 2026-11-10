/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12030; name: FUN_02f12030
 */


bool FUN_02f12030(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar1 = *param_2;
  fVar3 = param_2[1];
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar2 = ((fVar1 * fVar1 - fVar5 * fVar5) + fVar3 * fVar3) - fVar6 * fVar6;
  fVar4 = -(fVar5 * fVar5) - fVar6 * fVar6;
  fVar8 = fVar4 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar10 = *param_4;
  fVar11 = param_4[1];
  fVar4 = fVar4 + fVar10 * fVar10 + fVar11 * fVar11;
  return 0.01 < (fVar2 * (fVar7 - fVar5) * (fVar11 - fVar6) +
                 fVar8 * (fVar10 - fVar5) * (fVar3 - fVar6) +
                fVar4 * (fVar9 - fVar6) * (fVar1 - fVar5)) -
                (fVar2 * (fVar9 - fVar6) * (fVar10 - fVar5) +
                 (fVar11 - fVar6) * fVar8 * (fVar1 - fVar5) +
                fVar4 * (fVar7 - fVar5) * (fVar3 - fVar6));
}


