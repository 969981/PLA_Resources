/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7c014; name: FUN_00d7c014
 */


void FUN_00d7c014(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char acStack_40 [8];
  char *local_38;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,__s);
  strcat(pcVar3,param_3);
  FUN_009313e8(param_1,&local_38);
  return;
}


