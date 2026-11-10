/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727c9c; name: FUN_02727c9c
 */


void FUN_02727c9c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_007ee578(param_1 + 4,param_2 + 0xc);
    *param_1 = 1;
  }
  return;
}


