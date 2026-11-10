/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab3ba8; name: FUN_00ab3ba8
 */


void FUN_00ab3ba8(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  char acStack_30 [8];
  char *local_28;
  
  sVar1 = strlen(param_2);
  __dest = acStack_30 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_28 = __dest;
  *__dest = '\0';
  strcat(__dest,param_2);
  FUN_009313e8(param_1,&local_28);
  return;
}


