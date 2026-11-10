/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6078c; name: FUN_02b6078c
 */


void FUN_02b6078c(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char acStack_40 [4];
  char acStack_3c [4];
  char *local_38;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  lVar1 = -(sVar2 + sVar3 + 0x15 & 0xfffffffffffffff0);
  pcVar4 = acStack_40 + lVar1;
  local_38 = pcVar4;
  *pcVar4 = '\0';
  pcVar4 = strcat(pcVar4,param_2);
  pcVar4 = strcat(pcVar4,(char *)*param_3);
  sVar2 = strlen(pcVar4);
  builtin_strncpy(acStack_40 + sVar2 + lVar1,".bnsh",6);
  FUN_009313e8(param_1,&local_38);
  return;
}


