/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027beb3c; name: FUN_027beb3c
 */


void FUN_027beb3c(long *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x108) == '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = param_2 + 0x110;
  return;
}


