/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba0150; name: FUN_01ba0150
 */


void FUN_01ba0150(float param_1,long param_2,int param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x800) - *(float *)(param_2 + 0x808) * (float)param_3;
  if (param_1 <= fVar1) {
    param_1 = fVar1;
  }
  *(float *)(param_2 + 0x800) = param_1;
  return;
}


