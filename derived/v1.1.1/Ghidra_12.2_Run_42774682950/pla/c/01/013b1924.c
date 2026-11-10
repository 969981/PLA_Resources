/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b1924; name: FUN_013b1924
 */


void FUN_013b1924(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_007ee578(param_1 + 4,param_2 + 4);
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    *param_1 = '\0';
  }
  else {
    FUN_007ee660(param_1 + 4,param_2 + 4);
  }
  return;
}


