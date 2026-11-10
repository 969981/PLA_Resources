/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ecccc; name: FUN_001ecccc
 */


undefined8 FUN_001ecccc(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *__s;
  ulong uVar6;
  
  sVar3 = strlen(param_2);
  uVar4 = FUN_001f8bec(param_1,param_2,sVar3);
  if ((int)uVar4 != 0) {
    __s = (char *)(param_1 + sVar3);
    cVar1 = *__s;
    while ((cVar1 != '\0' && (iVar2 = FUN_001e33f4(cVar1), iVar2 != 0))) {
      __s = __s + 1;
      cVar1 = *__s;
    }
    pcVar5 = strchr(__s,0xd);
    if ((pcVar5 == (char *)0x0) && (pcVar5 = strchr(__s,10), pcVar5 == (char *)0x0)) {
      sVar3 = strlen(__s);
      pcVar5 = __s + sVar3;
    }
    sVar3 = strlen(param_3);
    for (uVar6 = (long)pcVar5 - (long)__s; sVar3 <= uVar6; uVar6 = uVar6 - 1) {
      iVar2 = FUN_001f8bec(__s,param_3,sVar3);
      if (iVar2 != 0) {
        return 1;
      }
      __s = __s + 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}


