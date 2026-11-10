/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002667d0; name: FUN_002667d0
 */


void FUN_002667d0(float param_1,long param_2)

{
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x54) = param_1;
  return;
}


