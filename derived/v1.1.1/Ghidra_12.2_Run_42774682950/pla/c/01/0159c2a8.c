/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159c2a8; name: FUN_0159c2a8
 */


void FUN_0159c2a8(long param_1,undefined8 param_2,uint param_3)

{
  *(bool *)param_2 = **(int **)(param_1 + 0x90) != 0;
  if ((param_3 & 1) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 4;
  }
  return;
}


