/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404ff0; name: FUN_00404ff0
 */


long FUN_00404ff0(char *param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_2 != 0) {
    do {
      if (*pcVar1 == '\0') break;
      param_2 = param_2 + -1;
      pcVar1 = pcVar1 + 1;
    } while (param_2 != 0);
  }
  return (long)pcVar1 - (long)param_1;
}


