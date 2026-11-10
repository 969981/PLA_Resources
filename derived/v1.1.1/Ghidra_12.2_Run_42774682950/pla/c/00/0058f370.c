/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f370; name: FUN_0058f370
 */


void FUN_0058f370(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(*(void **)((long)param_1 + 0x10));
  free(param_1);
  return;
}


