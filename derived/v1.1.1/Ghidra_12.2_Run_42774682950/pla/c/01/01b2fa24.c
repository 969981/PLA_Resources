/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2fa24; name: FUN_01b2fa24
 */


void FUN_01b2fa24(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  char *__dest;
  char acStack_50 [8];
  char *local_48;
  
  pcVar5 = (char *)*param_2;
  sVar2 = strlen(pcVar5);
  sVar3 = strlen((char *)*param_3);
  sVar4 = strlen((char *)*param_4);
  lVar1 = -(sVar2 + sVar3 + sVar4 + 0x17 & 0xfffffffffffffff0);
  __dest = acStack_50 + lVar1;
  local_48 = __dest;
  *__dest = '\0';
  pcVar5 = strcat(__dest,pcVar5);
  pcVar5 = strcat(pcVar5,(char *)*param_3);
  sVar2 = strlen(pcVar5);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar5 = strcat(__dest,(char *)*param_4);
  sVar2 = strlen(pcVar5);
  builtin_strncpy(acStack_50 + sVar2 + lVar1,".gfpak",7);
  FUN_009313e8(param_1,&local_48);
  return;
}


