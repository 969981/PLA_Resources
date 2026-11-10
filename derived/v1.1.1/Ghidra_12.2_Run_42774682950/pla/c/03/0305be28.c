/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305be28; name: FUN_0305be28
 */


void FUN_0305be28(long *param_1,long param_2)

{
  param_1[1] = param_2 + 0x530;
  if (*(char *)(*(long *)(param_2 + 0x500) + 0xaa0) == '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = *(long *)(param_2 + 0x500) + 0xab0;
  return;
}


