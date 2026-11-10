/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727c1c; name: FUN_02727c1c
 */


void FUN_02727c1c(char *param_1)

{
  char cVar1;
  
  if (param_1[0x30] != '\0') {
    param_1[0x30] = '\0';
  }
  if (param_1[0x20] == '\0') {
    cVar1 = param_1[8];
  }
  else {
    param_1[0x20] = '\0';
    cVar1 = param_1[8];
  }
  if (cVar1 != '\0') {
    param_1[8] = '\0';
  }
  if (*param_1 != '\0') {
    *param_1 = '\0';
  }
  return;
}


