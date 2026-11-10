/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d7f4c; name: FUN_027d7f4c
 */


void FUN_027d7f4c(long param_1)

{
  if (((*(char *)(param_1 + 0x78) != '\0') && (*(char *)(param_1 + 0x94) != '\0')) &&
     (*(char *)(param_1 + 0x98) != '\0')) {
    if ((*(short *)(param_1 + 0x96) == *(short *)(param_1 + 0x9a)) &&
       ((*(char *)(param_1 + 0x90) == '\0' ||
        (*(short *)(param_1 + 0x96) != *(short *)(param_1 + 0x92))))) {
      FUN_027d7e84();
      return;
    }
  }
  return;
}


