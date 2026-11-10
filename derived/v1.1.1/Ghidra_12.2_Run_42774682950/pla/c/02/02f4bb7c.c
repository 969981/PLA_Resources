/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4bb7c; name: FUN_02f4bb7c
 */


void FUN_02f4bb7c(long param_1)

{
  if ((*(char *)(param_1 + 0x36) == '\0') && (*(long *)(param_1 + 8) != 0)) {
    FUN_02f4bb7c();
  }
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}


