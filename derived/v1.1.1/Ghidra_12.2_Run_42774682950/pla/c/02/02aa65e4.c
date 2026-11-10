/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa65e4; name: FUN_02aa65e4
 */


void FUN_02aa65e4(undefined8 param_1,long param_2,int param_3)

{
  size_t __n;
  char *pcVar1;
  char acStack_30 [8];
  char *local_28;
  
  if (0 < param_3) {
    __n = *(long *)(param_2 + 0x10) - 5;
    if (__n != 0) {
      local_28 = acStack_30 + -(*(long *)(param_2 + 0x10) + 0xbU & 0xfffffffffffffff0);
      pcVar1 = strncpy(local_28,*(char **)(param_2 + 8),__n);
      pcVar1[__n] = '\0';
      FUN_009313e8(param_1,&local_28);
      return;
    }
  }
  FUN_00befc74(param_1,param_2);
  return;
}


