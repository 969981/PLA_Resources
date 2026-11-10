/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a3a1c; name: FUN_013a3a1c
 */


void FUN_013a3a1c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    memcpy(param_1 + 8,(void *)(param_2 + 0xd8),0x2c8);
    *param_1 = 1;
  }
  return;
}


