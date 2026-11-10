/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba0174; name: FUN_01ba0174
 */


void FUN_01ba0174(long param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x804) + *(float *)(param_1 + 0x810) * (float)param_2;
  *(float *)(param_1 + 0x804) = fVar1;
  if (*(float *)(param_1 + 0x80c) < fVar1) {
    *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x80c);
  }
  return;
}


