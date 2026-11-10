/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143f848; name: FUN_0143f848
 */


void FUN_0143f848(undefined8 param_1,long param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  char acStack_40 [8];
  char *local_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  sVar1 = strlen(param_3);
  pcVar2 = acStack_40 + -(lVar3 + sVar1 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  strcat(pcVar2,param_3);
  FUN_009313e8(param_1,&local_38);
  return;
}


