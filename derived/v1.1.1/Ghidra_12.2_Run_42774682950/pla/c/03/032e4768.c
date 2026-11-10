/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e4768; name: FUN_032e4768
 */


bool FUN_032e4768(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *__s1;
  
  __s1 = (char *)*param_1;
  if (__s1 == param_2) {
    return true;
  }
  bVar1 = false;
  if ((param_2 != (char *)0x0) && (__s1 != (char *)0x0)) {
    iVar2 = strcmp(__s1,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


