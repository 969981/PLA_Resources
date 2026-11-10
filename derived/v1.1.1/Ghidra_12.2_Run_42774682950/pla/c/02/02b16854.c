/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b16854; name: FUN_02b16854
 */


void FUN_02b16854(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  size_t sVar2;
  char *__s;
  char *__s_00;
  char acStack_40 [4];
  char acStack_3c [4];
  char *local_38;
  
  lVar1 = -(*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x15U & 0xfffffffffffffff0);
  __s_00 = acStack_40 + lVar1;
  local_38 = __s_00;
  *__s_00 = '\0';
  sVar2 = strlen(__s_00);
  builtin_strncpy(acStack_40 + sVar2 + lVar1,"iso:",5);
  __s = strcat(__s_00,*(char **)(param_2 + 8));
  sVar2 = strlen(__s);
  (__s_00 + sVar2)[0] = ':';
  (__s_00 + sVar2)[1] = '\0';
  strcat(__s_00,*(char **)(param_3 + 8));
  FUN_009313e8(param_1,&local_38);
  return;
}


