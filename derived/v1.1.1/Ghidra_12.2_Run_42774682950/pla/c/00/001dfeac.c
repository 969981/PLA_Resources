/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dfeac; name: FUN_001dfeac
 */


void FUN_001dfeac(long *param_1)

{
  if (*param_1 != 0) {
    nnosFinalizeMutex();
    FUN_002044d4(*param_1);
  }
  FUN_002044d4(param_1[2]);
  if (param_1[4] != 0) {
    FUN_001dffa4();
  }
  memset(param_1,0,0x78);
  return;
}


