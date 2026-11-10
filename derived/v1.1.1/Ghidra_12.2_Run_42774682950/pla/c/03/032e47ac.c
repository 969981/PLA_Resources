/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e47ac; name: FUN_032e47ac
 */


int FUN_032e47ac(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)*param_1;
  if (__s1 == param_2) {
    return 0;
  }
  if (__s1 == (char *)0x0) {
    return -1;
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
  iVar1 = strcmp(__s1,param_2);
  return iVar1;
}


