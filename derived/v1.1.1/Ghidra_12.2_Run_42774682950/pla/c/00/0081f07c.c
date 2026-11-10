/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f07c; name: FUN_0081f07c
 */


char * FUN_0081f07c(char *param_1,char param_2,long *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  else {
    *param_3 = (long)param_1;
  }
  pcVar2 = param_1;
  if ((param_4 & 1) != 0) {
    cVar1 = *param_1;
    while (pcVar2 = param_1, cVar1 == param_2) {
      *param_1 = '\0';
      lVar3 = *param_3;
      param_1 = (char *)(lVar3 + 1);
      *param_3 = (long)param_1;
      cVar1 = *(char *)(lVar3 + 1);
    }
  }
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      *param_1 = '\0';
      *param_3 = (long)(param_1 + 1);
      goto joined_r0x0081f0fc;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *param_3 = 0;
joined_r0x0081f0fc:
  if (((param_4 & 1) == 0) || (*pcVar2 != '\0')) {
    return pcVar2;
  }
  return (char *)0x0;
}


