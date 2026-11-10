/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3041c; name: FUN_02c3041c
 */


void FUN_02c3041c(long param_1)

{
  if (*(char *)(param_1 + 0x7c) != '\0') {
    **(undefined2 **)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}


