/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285968c; name: FUN_0285968c
 */


void FUN_0285968c(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char acStack_50 [8];
  char *local_48;
  
  sVar1 = strlen(&DAT_043eefc8);
  sVar2 = strlen((char *)*param_2);
  sVar3 = strlen(param_3);
  pcVar4 = acStack_50 + -(sVar1 + sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0);
  local_48 = pcVar4;
  *pcVar4 = '\0';
  pcVar4 = strcat(pcVar4,&DAT_043eefc8);
  pcVar4 = strcat(pcVar4,(char *)*param_2);
  strcat(pcVar4,param_3);
  FUN_009313e8(param_1,&local_48);
  return;
}


