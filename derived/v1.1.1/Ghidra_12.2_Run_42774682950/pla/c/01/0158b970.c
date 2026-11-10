/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158b970; name: FUN_0158b970
 */


void FUN_0158b970(undefined8 param_1,char *param_2,long *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *__dest;
  char acStack_b0 [128];
  char *local_28;
  
  sVar1 = strlen(param_2);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + *(uint *)*param_3 + 0x10 & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  __dest = strcat(pcVar2,param_2);
  pcVar2 = (char *)0x0;
  if (*param_3 != 0) {
    pcVar2 = (char *)(*param_3 + 4);
  }
  strcat(__dest,pcVar2);
  FUN_009313e8(param_1,&local_28);
  return;
}


