/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223ef8; name: FUN_00223ef8
 */


float FUN_00223ef8(long param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    fVar2 = 0.0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
    fVar2 = (float)iVar1;
  }
  return fVar2 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x44);
}


