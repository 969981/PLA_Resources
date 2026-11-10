/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f202a8; name: FUN_01f202a8
 */


void FUN_01f202a8(long param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_8;
  float local_4;
  
  lVar1 = *(long *)(param_2 + 0x40);
  pfVar2 = (float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_2 + 0x48) + *pfVar2;
  if (lVar1 == 0x4c6cadd419973531) {
    fVar4 = *(float *)(param_2 + 0x48) * *pfVar2;
  }
  *pfVar2 = fVar4;
  pfVar3 = &local_8;
  if (fVar4 <= 1.0) {
    pfVar3 = pfVar2;
  }
  local_8 = 1.0;
  local_4 = 0.0;
  pfVar2 = &local_4;
  if (0.0 <= fVar4) {
    pfVar2 = pfVar3;
  }
  *(float *)(param_1 + 0x48) = *pfVar2;
  pfVar2 = (float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_2 + 0x4c) + *pfVar2;
  if (lVar1 == 0x4c6cadd419973531) {
    fVar4 = *(float *)(param_2 + 0x4c) * *pfVar2;
  }
  *pfVar2 = fVar4;
  local_8 = 1.0;
  local_4 = 0.0;
  pfVar3 = &local_8;
  if (fVar4 <= 1.0) {
    pfVar3 = pfVar2;
  }
  pfVar2 = &local_4;
  if (0.0 <= fVar4) {
    pfVar2 = pfVar3;
  }
  *(float *)(param_1 + 0x4c) = *pfVar2;
  pfVar2 = (float *)(param_1 + 0x50);
  fVar4 = *(float *)(param_2 + 0x50) + *pfVar2;
  if (lVar1 == 0x4c6cadd419973531) {
    fVar4 = *(float *)(param_2 + 0x50) * *pfVar2;
  }
  *pfVar2 = fVar4;
  local_8 = 1.0;
  local_4 = 0.0;
  pfVar3 = &local_8;
  if (fVar4 <= 1.0) {
    pfVar3 = pfVar2;
  }
  if (fVar4 < 0.0) {
    pfVar3 = &local_4;
  }
  *(float *)(param_1 + 0x50) = *pfVar3;
  fVar4 = *(float *)(param_2 + 0x54) * *(float *)(param_1 + 0x54);
  if (lVar1 != -0x5be9f1ae26d98a45) {
    fVar4 = *(float *)(param_2 + 0x54) + *(float *)(param_1 + 0x54);
  }
  *(float *)(param_1 + 0x54) = fVar4;
  return;
}


