/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bedb9c; name: FUN_01bedb9c
 */


void FUN_01bedb9c(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float local_18;
  float local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  iVar3 = FUN_01bedcb0();
  if (iVar3 != 2) {
    return;
  }
  if (param_1 < *(float *)(param_3 + 0x200)) {
    pfVar4 = (float *)(param_3 + 0x200);
  }
  else {
    pfVar4 = (float *)(param_3 + 0x204);
    if (param_1 <= *(float *)(param_3 + 0x204)) {
      pfVar4 = &local_14;
    }
  }
  fVar1 = *pfVar4;
  *(float *)(param_3 + 0x1f8) = fVar1;
  *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_3 + 0x20c);
  *(float *)(param_3 + 0x214) = fVar1;
  *(float *)(param_3 + 0x210) = fVar1;
  if (param_2 < *(float *)(param_3 + 0x338)) {
    pfVar4 = (float *)(param_3 + 0x338);
  }
  else {
    pfVar4 = (float *)(param_3 + 0x33c);
    if (param_2 <= *(float *)(param_3 + 0x33c)) {
      pfVar4 = &local_18;
    }
  }
  fVar2 = *pfVar4;
  *(float *)(param_3 + 0x330) = fVar2;
  *(float *)(param_3 + 0x34c) = fVar2;
  *(float *)(param_3 + 0x348) = fVar2;
  *(undefined4 *)(param_3 + 0x340) = *(undefined4 *)(param_3 + 0x344);
  FUN_01a50188(fVar1,param_3,param_3 + 0x220);
  FUN_01a50188(*(undefined4 *)(param_3 + 0x330),param_3,param_3 + 0x358);
  FUN_01a4f4d4(param_3,param_3 + 0x238,0);
  return;
}


