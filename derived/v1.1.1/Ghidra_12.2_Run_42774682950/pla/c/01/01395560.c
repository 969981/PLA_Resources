/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395560; name: FUN_01395560
 */


void FUN_01395560(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_01395c2c(param_1 + 8);
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_01395c2c(param_1 + 8);
  return;
}


