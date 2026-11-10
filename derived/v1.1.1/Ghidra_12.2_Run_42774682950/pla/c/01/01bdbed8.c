/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdbed8; name: FUN_01bdbed8
 */


void FUN_01bdbed8(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_c;
  float fStack_8;
  float local_4;
  
  local_c = 1.0;
  fStack_8 = 0.0;
  pfVar1 = &local_c;
  if (param_1 <= 1.0) {
    pfVar1 = &local_4;
  }
  local_4 = param_1;
  pfVar2 = &fStack_8;
  if (0.0 <= param_1) {
    pfVar2 = pfVar1;
  }
  fVar3 = *pfVar2;
  *(float *)(param_2 + 0x22c) = fVar3;
  if ((*(float *)(param_2 + 0x228) == fVar3) || (*(int *)(param_2 + 0x21c) != 0)) {
    return;
  }
  *(float *)(param_2 + 0x228) = fVar3;
  FUN_01bdb280();
  return;
}


