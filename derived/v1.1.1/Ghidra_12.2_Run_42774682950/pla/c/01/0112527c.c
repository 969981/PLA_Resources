/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112527c; name: FUN_0112527c
 */


void FUN_0112527c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x78) != '\0') {
    memcpy(param_1 + 1,(void *)(param_2 + 0x79),0x2f1);
    *param_1 = 1;
  }
  return;
}


