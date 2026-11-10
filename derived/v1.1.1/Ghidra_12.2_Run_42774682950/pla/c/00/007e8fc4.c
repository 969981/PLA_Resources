/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8fc4; name: FUN_007e8fc4
 */


void FUN_007e8fc4(long param_1,long param_2,long *param_3)

{
  *param_3 = param_2;
  param_3[1] = *(long *)(param_2 + 8);
  **(undefined8 **)(param_2 + 8) = param_3;
  *(long **)(param_2 + 8) = param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


