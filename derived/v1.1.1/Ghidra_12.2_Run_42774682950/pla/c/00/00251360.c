/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251360; name: FUN_00251360
 */


int FUN_00251360(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_1);
  if ((int)sVar3 < 1) {
    return 0;
  }
  if ((sVar3 & 0xffffffff) == 1) {
    lVar4 = 0;
    iVar2 = 0;
  }
  else {
    lVar4 = 0;
    iVar2 = 0;
    do {
      pcVar1 = param_1 + lVar4;
      lVar4 = lVar4 + 2;
      if (*pcVar1 == '%') {
        iVar2 = iVar2 + 1;
      }
      if (pcVar1[1] == '%') {
        iVar2 = iVar2 + 1;
      }
    } while ((sVar3 & 0xffffffff) - (sVar3 & 1) != lVar4);
  }
  if (((sVar3 & 1) != 0) && (param_1[lVar4] == '%')) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


