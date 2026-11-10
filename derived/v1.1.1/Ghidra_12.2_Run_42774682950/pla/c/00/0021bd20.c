/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021bd20; name: FUN_0021bd20
 */


float FUN_0021bd20(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  return *(float *)(param_1 + 0x10) * (float)iVar1;
}


