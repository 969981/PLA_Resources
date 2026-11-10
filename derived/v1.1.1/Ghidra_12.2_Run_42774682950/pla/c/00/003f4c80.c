/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4c80; name: FUN_003f4c80
 */


long * FUN_003f4c80(long *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 != (long *)0x0) && (uVar2 = param_1[1], uVar2 != 0)) {
    param_1 = (long *)*param_1;
    if (param_2 == (char *)0x0) {
      uVar3 = 0;
      do {
        if (*param_1 == 0) {
          return param_1;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 3;
      } while (uVar3 < uVar2);
    }
    else {
      uVar3 = 0;
      __s1 = (char *)*param_1;
      while( true ) {
        if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,param_2), iVar1 == 0)) {
          return param_1;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 3;
        if (uVar2 <= uVar3) break;
        __s1 = (char *)*param_1;
      }
    }
  }
  return (long *)0x0;
}


