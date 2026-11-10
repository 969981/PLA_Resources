/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727c7c; name: FUN_02727c7c
 */


void FUN_02727c7c(undefined1 *param_1,char *param_2)

{
  *param_1 = 0;
  if (*param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *param_1 = 1;
  }
  return;
}


