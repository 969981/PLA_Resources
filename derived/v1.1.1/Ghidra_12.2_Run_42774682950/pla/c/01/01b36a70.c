/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b36a70; name: FUN_01b36a70
 */


long FUN_01b36a70(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen((char *)*param_1);
  sVar2 = strlen(param_2);
  return sVar1 + sVar2 + 1;
}


