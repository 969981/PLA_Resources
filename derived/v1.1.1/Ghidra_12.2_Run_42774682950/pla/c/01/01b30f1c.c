/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b30f1c; name: FUN_01b30f1c
 */


void FUN_01b30f1c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *__dest;
  char acStack_50 [8];
  char *local_48;
  
  pcVar4 = (char *)*param_2;
  sVar1 = strlen(pcVar4);
  sVar2 = strlen((char *)*param_3);
  sVar3 = strlen((char *)*param_4);
  __dest = acStack_50 + -(sVar1 + sVar2 + sVar3 + 0x12 & 0xfffffffffffffff0);
  local_48 = __dest;
  *__dest = '\0';
  pcVar4 = strcat(__dest,pcVar4);
  pcVar4 = strcat(pcVar4,(char *)*param_3);
  sVar1 = strlen(pcVar4);
  (__dest + sVar1)[0] = '/';
  (__dest + sVar1)[1] = '\0';
  pcVar4 = strcat(__dest,(char *)*param_4);
  sVar1 = strlen(pcVar4);
  (__dest + sVar1)[0] = '/';
  (__dest + sVar1)[1] = '\0';
  FUN_009313e8(param_1,&local_48);
  return;
}


