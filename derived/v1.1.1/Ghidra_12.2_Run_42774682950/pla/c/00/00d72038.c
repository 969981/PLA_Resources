/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d72038; name: FUN_00d72038
 */


void FUN_00d72038(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  sVar1 = strlen(s_data___0427f778);
  sVar2 = strlen((char *)*param_2);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,s_data___0427f778);
  strcat(pcVar3,(char *)*param_2);
  FUN_009313e8(param_1,&local_38);
  return;
}


