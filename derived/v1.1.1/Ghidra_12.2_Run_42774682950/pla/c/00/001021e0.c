/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001021e0; name: FUN_001021e0
 */


undefined4 FUN_001021e0(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return uVar1;
}


