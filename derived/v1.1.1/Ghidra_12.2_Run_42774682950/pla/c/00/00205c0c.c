/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205c0c; name: FUN_00205c0c
 */


bool FUN_00205c0c(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0x10)) {
    return (char)param_1[2] == '\0';
  }
  return false;
}


