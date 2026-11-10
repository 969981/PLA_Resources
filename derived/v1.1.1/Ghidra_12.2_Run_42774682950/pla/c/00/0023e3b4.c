/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023e3b4; name: FUN_0023e3b4
 */


void FUN_0023e3b4(float *param_1,float *param_2)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  fVar4 = param_2[3];
  uVar2 = (ulong)(param_2[2] * (fVar3 / *(float *)PTR_FloatDegree180_04372ce0));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar3 = (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
  fVar6 = pfVar1[1] + pfVar1[3] * fVar3;
  fVar3 = *pfVar1 + pfVar1[2] * fVar3;
  fVar5 = param_2[4];
  *param_1 = fVar4 * fVar3;
  param_1[1] = -(fVar5 * fVar6);
  param_1[2] = fVar5 * fVar6 * 0.5 + ((*param_2 + 0.5) - fVar4 * fVar3 * 0.5);
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar8 = fVar3 * fVar5;
  fVar7 = fVar6 * fVar4;
  param_1[3] = fVar7;
  param_1[4] = fVar8;
  fVar9 = param_2[1];
  param_1[3] = -(fVar6 * fVar4);
  param_1[4] = -(fVar3 * fVar5);
  param_1[5] = (fVar8 * 0.5 - ((fVar9 + 0.5) - fVar7 * 0.5)) + 1.0;
  return;
}


