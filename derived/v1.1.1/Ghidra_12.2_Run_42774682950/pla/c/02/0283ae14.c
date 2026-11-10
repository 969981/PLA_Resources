/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ae14; name: FUN_0283ae14
 */


float FUN_0283ae14(long param_1)

{
  float *pfVar1;
  float fVar2;
  
  if (param_1 == 0) {
    return 0.0;
  }
  fVar2 = 0.0;
  do {
    pfVar1 = (float *)(param_1 + 0x30);
    param_1 = *(long *)(param_1 + 0x18);
    fVar2 = fVar2 + *pfVar1;
  } while (param_1 != 0);
  return fVar2;
}


