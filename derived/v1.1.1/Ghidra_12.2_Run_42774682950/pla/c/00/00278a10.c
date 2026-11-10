/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278a10; name: FUN_00278a10
 */


void FUN_00278a10(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}


