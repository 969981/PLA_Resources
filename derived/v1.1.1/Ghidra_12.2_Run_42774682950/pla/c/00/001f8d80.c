/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8d80; name: FUN_001f8d80
 */


char * FUN_001f8d80(int param_1,char *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  size_t __n;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  __n = param_3 - 1;
  *param_2 = '\0';
  pcVar3 = strerror(param_1);
  if (pcVar3 == (char *)0x0) {
    FUN_001e64cc(param_2,__n,"Unknown error %d",param_1);
  }
  else {
    strncpy(param_2,pcVar3,__n);
  }
  param_2[__n] = '\0';
  pcVar3 = strrchr(param_2,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(param_2,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  piVar2 = __errno_location();
  if (*piVar2 != iVar1) {
    piVar2 = __errno_location();
    *piVar2 = iVar1;
  }
  return param_2;
}


