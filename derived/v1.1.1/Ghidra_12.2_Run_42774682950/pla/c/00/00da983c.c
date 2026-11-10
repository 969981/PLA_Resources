/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da983c; name: FUN_00da983c
 */


void FUN_00da983c(long param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    FUN_00da9874();
    FUN_00da9874(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  return;
}


