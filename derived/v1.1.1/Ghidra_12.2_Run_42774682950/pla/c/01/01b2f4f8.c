/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2f4f8; name: FUN_01b2f4f8
 */


void FUN_01b2f4f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *__dest;
  char acStack_60 [8];
  char *local_58;
  
  pcVar6 = (char *)*param_2;
  sVar2 = strlen(pcVar6);
  sVar3 = strlen((char *)*param_3);
  sVar4 = strlen((char *)*param_4);
  sVar5 = strlen((char *)*param_5);
  lVar1 = -(sVar2 + sVar3 + sVar4 + sVar5 + 0x19 & 0xfffffffffffffff0);
  __dest = acStack_60 + lVar1;
  local_58 = __dest;
  *__dest = '\0';
  pcVar6 = strcat(__dest,pcVar6);
  sVar2 = strlen(pcVar6);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar6 = strcat(__dest,(char *)*param_3);
  sVar2 = strlen(pcVar6);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar6 = strcat(__dest,(char *)*param_4);
  sVar2 = strlen(pcVar6);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar6 = strcat(__dest,(char *)*param_5);
  sVar2 = strlen(pcVar6);
  builtin_strncpy(acStack_60 + sVar2 + lVar1,".tracn",7);
  FUN_009313e8(param_1,&local_58);
  return;
}


