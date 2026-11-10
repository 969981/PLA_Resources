/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417910; name: FUN_00417910
 */


long FUN_00417910(long *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  DIR *pDVar3;
  dirent *pdVar4;
  long lVar5;
  void *__s;
  
  piVar2 = __errno_location();
  if ((param_1 == (long *)0x0) || (param_2 == (char *)0x0)) {
    *piVar2 = 0x16;
    return 0;
  }
  *piVar2 = 0;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    __s = malloc(0x1010);
    *param_1 = (long)__s;
    if (__s == (void *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return 0;
    }
    memset(__s,0,0x1010);
    pDVar3 = opendir(param_2);
    *(DIR **)*param_1 = pDVar3;
    pDVar3 = *(DIR **)*param_1;
    if (pDVar3 == (DIR *)0x0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      free((void *)*param_1);
      *param_1 = 0;
      piVar2 = __errno_location();
      *piVar2 = iVar1;
      return 0;
    }
  }
  else {
    pDVar3 = *(DIR **)*param_1;
  }
  pdVar4 = readdir(pDVar3);
  lVar5 = 0;
  if (pdVar4 != (dirent *)0x0) {
    strncpy((char *)(*param_1 + 8),pdVar4->d_name,0x1000);
    *(undefined1 *)(*param_1 + 0x1008) = 0;
    lVar5 = *param_1 + 8;
  }
  return lVar5;
}


