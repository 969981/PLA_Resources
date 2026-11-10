/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ed0c0; name: FUN_010ed0c0
 */


void FUN_010ed0c0(long param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = exp2f((float)param_2);
  *(uint *)(param_1 + 0x454) = *(uint *)(param_1 + 0x454) | (int)fVar1;
  return;
}


