/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01305e3c; name: FUN_01305e3c
 */


void FUN_01305e3c(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 20.0;
  if (20.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 8) = fVar1;
  return;
}


