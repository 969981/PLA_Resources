/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba03f4; name: FUN_01ba03f4
 */


float FUN_01ba03f4(float param_1,long param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  float local_8;
  float local_4;
  
  local_4 = (float)param_3 * param_1 + *(float *)(param_2 + 0x8a4);
  if (local_4 < 0.0) {
    pfVar2 = &local_8;
  }
  else {
    pfVar2 = (float *)(param_2 + 0x8a8);
    if (local_4 <= *(float *)(param_2 + 0x8a8)) {
      pfVar2 = &local_4;
    }
  }
  fVar1 = *pfVar2;
  *(float *)(param_2 + 0x8a4) = fVar1;
  return fVar1;
}


