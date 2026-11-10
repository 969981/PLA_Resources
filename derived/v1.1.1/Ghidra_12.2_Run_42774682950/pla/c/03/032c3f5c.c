/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3f5c; name: FUN_032c3f5c
 */


void FUN_032c3f5c(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_2);
    param_2 = param_2 + sVar1;
  }
  param_1[1] = param_2;
  return;
}


