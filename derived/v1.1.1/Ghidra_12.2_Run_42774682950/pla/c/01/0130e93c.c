/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130e93c; name: FUN_0130e93c
 */


void FUN_0130e93c(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  strcat(pcVar3,param_3);
  FUN_009313e8(param_1,&local_38);
  return;
}


