/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eca818; name: FUN_01eca818
 */


float FUN_01eca818(long param_1)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = *(long **)(param_1 + 0x288);
  if (plVar1 == *(long **)(param_1 + 0x290)) {
    return 0.0;
  }
  fVar2 = *(float *)(*plVar1 + 0xa8) + 0.0;
  while (plVar1 = plVar1 + 1, plVar1 != *(long **)(param_1 + 0x290)) {
    fVar2 = fVar2 + *(float *)(*plVar1 + 0xa8);
  }
  return fVar2;
}


