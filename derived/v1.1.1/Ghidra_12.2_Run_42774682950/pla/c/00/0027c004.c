/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027c004; name: FUN_0027c004
 */


int FUN_0027c004(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(*(long *)(param_1 + 0x238) + 0x338) + 0x14);
  fVar2 = fVar1 * *(float *)(param_1 + 0x4c);
  if (*(float *)(param_1 + 0x4c) <= 1.0) {
    fVar2 = fVar1;
  }
  return (int)fVar2;
}


