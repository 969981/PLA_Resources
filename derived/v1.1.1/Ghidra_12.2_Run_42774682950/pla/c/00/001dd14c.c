/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dd14c; name: FUN_001dd14c
 */


char * FUN_001dd14c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char *__s;
  size_t sVar3;
  
  __s = (char *)FUN_00205634();
  if (__s != (char *)0x0) {
    bVar1 = false;
    do {
      sVar3 = strlen(__s);
      if (sVar3 == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = __s[sVar3 - 1] != '\n';
        if (!(bool)(bVar1 | bVar2)) {
          return __s;
        }
      }
      __s = (char *)FUN_00205634(param_1,param_2,param_3);
      bVar1 = bVar2;
    } while (__s != (char *)0x0);
  }
  return (char *)0x0;
}


