/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8cc0; name: thunk_FUN_002f93f0
 */


bool thunk_FUN_002f93f0(void)

{
  if (DAT_043997f8 == 0) {
    return false;
  }
  return *(char *)(DAT_043997f8 + 9) != '\0';
}


