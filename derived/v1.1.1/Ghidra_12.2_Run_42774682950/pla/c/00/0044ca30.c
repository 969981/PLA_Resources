/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044ca30; name: FUN_0044ca30
 */


int FUN_0044ca30(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,(long)(int)sVar2);
  if (((iVar1 == 0) && (param_1[(int)sVar2] != '\0')) && (param_1[(int)sVar2] != '.')) {
    return 1;
  }
  return iVar1;
}


