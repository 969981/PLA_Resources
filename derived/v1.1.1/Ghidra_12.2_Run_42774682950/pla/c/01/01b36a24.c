/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b36a24; name: FUN_01b36a24
 */


void FUN_01b36a24(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char *__s;
  size_t sVar1;
  
  __s = strcat(param_1,(char *)*param_2);
  sVar1 = strlen(__s);
  (param_1 + sVar1)[0] = '/';
  (param_1 + sVar1)[1] = '\0';
  FUN_01b36aa8(param_1,param_3,param_4);
  return;
}


