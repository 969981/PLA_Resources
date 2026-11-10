/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145734; name: FUN_01145734
 */


void FUN_01145734(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = strcat(param_1,(char *)*param_2);
  sVar2 = strlen(pcVar1);
  pcVar1 = param_1 + sVar2;
  pcVar1[0] = ':';
  pcVar1[1] = '/';
  pcVar1[2] = '\0';
  strcat(param_1,(char *)*param_3);
  return;
}


