/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fffe4; name: FUN_001fffe4
 */


void FUN_001fffe4(long param_1)

{
  size_t sVar1;
  char *__s;
  
  if ((((param_1 != 0) && (__s = *(char **)(param_1 + 0x10), __s != (char *)0x0)) &&
      (sVar1 = strlen(__s), sVar1 != 0)) && (__s[sVar1 - 1] == '.')) {
    __s[sVar1 - 1] = '\0';
  }
  return;
}


