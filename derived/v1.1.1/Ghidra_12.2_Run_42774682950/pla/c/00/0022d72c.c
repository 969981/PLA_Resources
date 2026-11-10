/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d72c; name: FUN_0022d72c
 */


void FUN_0022d72c(long param_1)

{
  if (*(char *)(param_1 + 0x18c) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18c) = 0;
  FUN_0022ec78(*(undefined8 *)(param_1 + 0xb8));
  return;
}


