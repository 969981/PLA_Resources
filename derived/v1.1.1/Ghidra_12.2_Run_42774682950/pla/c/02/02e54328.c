/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54328; name: FUN_02e54328
 */


void FUN_02e54328(float *param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
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
  
  fVar2 = *param_3 - *(float *)(param_2 + 0x50);
  fVar5 = *(float *)(param_2 + 0x58);
  fVar4 = param_3[1] - *(float *)(param_2 + 0x54);
  fVar3 = param_3[2];
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[2] = *(float *)(param_2 + 0x58);
  *(undefined8 *)param_1 = uVar1;
  fVar10 = *(float *)(param_2 + 0x5c);
  fVar3 = fVar3 - fVar5;
  fVar6 = *(float *)(param_2 + 0x68) * fVar2 + fVar4 * *(float *)(param_2 + 0x6c) +
          fVar3 * *(float *)(param_2 + 0x70);
  fVar5 = -fVar10;
  if ((-fVar10 <= fVar6) && (fVar5 = fVar10, fVar6 <= fVar10)) {
    fVar5 = fVar6;
  }
  fVar7 = *param_1 + *(float *)(param_2 + 0x68) * fVar5;
  fVar10 = param_1[1] + *(float *)(param_2 + 0x6c) * fVar5;
  fVar8 = param_1[2] + *(float *)(param_2 + 0x70) * fVar5;
  *param_1 = fVar7;
  param_1[1] = fVar10;
  param_1[2] = fVar8;
  fVar11 = *(float *)(param_2 + 0x60);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0xc) * fVar2 + fVar4 * fVar9 + fVar3 * fVar6;
  fVar5 = -fVar11;
  if ((-fVar11 <= fVar2) && (fVar5 = fVar11, fVar2 <= fVar11)) {
    fVar5 = fVar2;
  }
  *param_1 = fVar7 + *(float *)(param_2 + 0xc) * fVar5;
  param_1[1] = fVar10 + fVar9 * fVar5;
  param_1[2] = fVar8 + fVar6 * fVar5;
  return;
}


