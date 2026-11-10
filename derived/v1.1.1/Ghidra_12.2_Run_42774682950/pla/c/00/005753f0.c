/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005753f0; name: FUN_005753f0
 */


void FUN_005753f0(void *param_1)

{
  if (*(void **)((long)param_1 + 0x20) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x20));
  }
  if (*(void **)((long)param_1 + 0x48) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x48));
  }
  free(*(void **)((long)param_1 + 0x70));
  free(param_1);
  return;
}


