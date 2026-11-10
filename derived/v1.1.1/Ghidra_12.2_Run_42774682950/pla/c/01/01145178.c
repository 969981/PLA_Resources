/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145178; name: FUN_01145178
 */


bool FUN_01145178(undefined8 param_1,long param_2)

{
  int iVar1;
  size_t __n;
  char *__s1;
  char acStack_30 [16];
  
  __s1 = *(char **)(param_2 + 8);
  iVar1 = FUN_02a8f1c8();
  snprintf(acStack_30,0xf,s_save_d___0427f796,iVar1);
  __n = strlen(acStack_30);
  iVar1 = strncmp(__s1,acStack_30,__n);
  return iVar1 == 0;
}


