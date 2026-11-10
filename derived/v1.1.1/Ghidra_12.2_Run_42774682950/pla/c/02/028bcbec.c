/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028bcbec; name: FUN_028bcbec
 */


void FUN_028bcbec(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0xc) = param_1;
  if (param_1 < fVar1) {
    *(float *)(param_2 + 0xc) = fVar1;
    param_1 = fVar1;
  }
  if (*(float *)(param_2 + 0x14) < param_1) {
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0x14);
  }
  return;
}


