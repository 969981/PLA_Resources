/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ddd30; name: FUN_006ddd30
 */


char * FUN_006ddd30(char *param_1,size_t param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *__n;
  int iVar4;
  
  pcVar2 = strstr(param_3,param_4);
  pcVar3 = strchr(param_3,0x3e);
  if ((pcVar2 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    iVar4 = (int)param_2;
    pcVar2 = param_1;
    if (0 < iVar4) {
      for (; (iVar4 = iVar4 + -1, iVar4 != 0 && (*param_4 != '\0')); param_4 = param_4 + 1) {
        *pcVar2 = *param_4;
        pcVar2 = pcVar2 + 1;
      }
      *pcVar2 = '\0';
    }
    do {
      cVar1 = *param_4;
      param_4 = param_4 + 1;
    } while (cVar1 != '\0');
  }
  else {
    memset(param_1,0,param_2);
    __n = (char *)(param_2 - 1);
    if (pcVar3 + (1 - (long)pcVar2) <= __n) {
      __n = pcVar3 + (1 - (long)pcVar2);
    }
    strncpy(param_1,pcVar2,(size_t)__n);
  }
  return param_1;
}


