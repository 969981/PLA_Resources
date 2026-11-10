/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009313c0; name: FUN_009313c0
 */


void FUN_009313c0(char *param_1,long param_2,long param_3)

{
  char *__dest;
  
  __dest = strcat(param_1,*(char **)(param_2 + 8));
  strcat(__dest,*(char **)(param_3 + 8));
  return;
}


