/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5049c; name: FUN_01a5049c
 */


void FUN_01a5049c(float param_1,long param_2)

{
  float fVar1;
  float *pfVar2;
  float local_4;
  
  local_4 = param_1;
  if (param_1 < *(float *)(param_2 + 0x338)) {
    pfVar2 = (float *)(param_2 + 0x338);
  }
  else {
    pfVar2 = (float *)(param_2 + 0x33c);
    if (param_1 <= *(float *)(param_2 + 0x33c)) {
      pfVar2 = &local_4;
    }
  }
  fVar1 = *pfVar2;
  *(float *)(param_2 + 0x330) = fVar1;
  FUN_01a50188(fVar1,param_2,param_2 + 0x358);
  return;
}


