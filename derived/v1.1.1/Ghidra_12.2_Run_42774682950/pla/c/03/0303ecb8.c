/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ecb8; name: FUN_0303ecb8
 */


void FUN_0303ecb8(float param_1,float param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_3 + 0x30);
  fVar2 = fVar5;
  if (param_1 <= fVar5) {
    fVar2 = param_1;
  }
  fVar4 = *(float *)(param_3 + 0x18) / fVar2;
  iVar3 = (int)((float)*(int *)(param_3 + 0x24) / fVar4 + 0.999);
  iVar1 = *(int *)(param_3 + 0x28);
  if (*(int *)(param_3 + 0x28) <= iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  if (iVar1 <= *(int *)(param_3 + 0x2c)) {
    iVar3 = iVar1;
  }
  if (param_2 <= fVar5) {
    fVar5 = param_2;
  }
  fVar4 = (fVar4 * (float)iVar3) / (float)*(int *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x1c) / (fVar4 * fVar4);
  if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  FUN_0303ea2c(fVar4,*(undefined4 *)(param_3 + 0x20),param_5);
  FUN_0303ea98(fVar2,fVar5,param_5,param_4,iVar3,*(undefined4 *)(param_5 + 0x78));
  return;
}


