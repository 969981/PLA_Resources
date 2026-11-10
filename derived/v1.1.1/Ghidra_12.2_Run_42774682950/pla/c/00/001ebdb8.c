/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ebdb8; name: FUN_001ebdb8
 */


void * FUN_001ebdb8(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  void *__dest;
  char *__s;
  
  do {
    __s = param_1;
    cVar1 = *__s;
    param_1 = __s + 1;
  } while ((cVar1 == '\0') != (cVar1 != ':'));
  if (cVar1 != '\0') {
    __s = __s + 1;
  }
  cVar1 = *__s;
  while ((cVar1 != '\0' && (iVar2 = FUN_001e33f4(cVar1), iVar2 != 0))) {
    __s = __s + 1;
    cVar1 = *__s;
  }
  pcVar3 = strchr(__s,0xd);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(__s,10), pcVar3 == (char *)0x0)) {
    sVar4 = strlen(__s);
    pcVar3 = __s + sVar4;
    if (pcVar3 == (char *)0x0) {
      return (void *)0x0;
    }
  }
  while ((__s < pcVar3 && (iVar2 = FUN_001e33f4(*pcVar3), iVar2 != 0))) {
    pcVar3 = pcVar3 + -1;
  }
  __dest = (void *)FUN_002044c4(pcVar3 + (2 - (long)__s));
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,(size_t)(pcVar3 + (1 - (long)__s)));
    *(char *)((long)__dest + (long)(pcVar3 + (1 - (long)__s))) = '\0';
  }
  return __dest;
}


