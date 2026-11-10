/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da2540; name: FUN_00da2540
 */


void FUN_00da2540(undefined8 param_1,char *param_2,long param_3)

{
  size_t sVar1;
  char *pcVar2;
  char acStack_b0 [128];
  char *local_28;
  
  sVar1 = strlen(param_2);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + *(long *)(param_3 + 0x10) + 0x10 & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,param_2);
  strcat(pcVar2,*(char **)(param_3 + 8));
  FUN_009313e8(param_1,&local_28);
  return;
}


