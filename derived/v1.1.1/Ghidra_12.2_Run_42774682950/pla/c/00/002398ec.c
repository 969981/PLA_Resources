/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002398ec; name: thunk_FUN_0022779c
 */


void thunk_FUN_0022779c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_043729d0 + 0x10);
  if (param_1[6] != 0) {
    FUN_00232674();
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_00232674();
  return;
}


