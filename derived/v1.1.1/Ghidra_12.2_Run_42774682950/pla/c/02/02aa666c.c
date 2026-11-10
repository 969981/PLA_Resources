/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa666c; name: FUN_02aa666c
 */


void FUN_02aa666c(undefined8 param_1,long param_2,long param_3,char *param_4)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char acStack_50 [8];
  char *local_48;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_3 + 0x10);
  sVar1 = strlen(param_4);
  pcVar2 = acStack_50 + -(lVar3 + lVar4 + sVar1 + 0x10 & 0xfffffffffffffff0);
  local_48 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  pcVar2 = strcat(pcVar2,*(char **)(param_3 + 8));
  strcat(pcVar2,param_4);
  FUN_009313e8(param_1,&local_48);
  return;
}


