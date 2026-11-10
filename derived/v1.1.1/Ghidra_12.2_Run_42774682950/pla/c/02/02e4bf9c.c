/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4bf9c; name: FUN_02e4bf9c
 */


bool FUN_02e4bf9c(long param_1,float *param_2,float *param_3)

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
  
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar5 = fVar6 * *(float *)(param_1 + 0x1c) - fVar4 * *(float *)(param_1 + 0x20);
  fVar2 = fVar3 * *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x18) * fVar6;
  fVar1 = *(float *)(param_1 + 0x18) * fVar4 - fVar3 * *(float *)(param_1 + 0x1c);
  fVar9 = *param_2 * fVar3 + fVar4 * param_2[1] + fVar6 * param_2[2];
  fVar7 = *param_2 - fVar3 * fVar9;
  fVar8 = param_2[1] - fVar4 * fVar9;
  fVar9 = param_2[2] - fVar6 * fVar9;
  fVar10 = *param_3 * fVar3 + fVar4 * param_3[1] + fVar6 * param_3[2];
  fVar3 = fVar10 * fVar3 - *param_3;
  fVar4 = fVar10 * fVar4 - param_3[1];
  fVar6 = fVar10 * fVar6 - param_3[2];
  return -((fVar7 * fVar5 + fVar2 * fVar8 + fVar1 * fVar9) /
          SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9)) <
         (fVar3 * fVar5 + fVar2 * fVar4 + fVar1 * fVar6) /
         SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6);
}


