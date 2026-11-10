/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251600; name: FUN_00251600
 */


void FUN_00251600(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)FUN_00232654(sVar1 + 1);
  strncpy(__dest,param_1,sVar1 + 1);
  return;
}


