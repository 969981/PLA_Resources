/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b58be8; name: FUN_02b58be8
 */


void FUN_02b58be8(undefined8 param_1,long param_2,char *param_3,long param_4)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  char acStack_c0 [128];
  char *local_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  sVar1 = strlen(param_3);
  pcVar2 = acStack_c0 +
           (0x80 - (lVar3 + sVar1 + *(long *)(param_4 + 0x10) + 0x10 & 0xfffffffffffffff0));
  local_38 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  pcVar2 = strcat(pcVar2,param_3);
  strcat(pcVar2,*(char **)(param_4 + 8));
  FUN_009313e8(param_1,&local_38);
  return;
}


