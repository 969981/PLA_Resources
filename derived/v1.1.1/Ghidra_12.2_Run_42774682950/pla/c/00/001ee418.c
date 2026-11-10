/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee418; name: FUN_001ee418
 */


char * FUN_001ee418(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *__dest;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar5 = 0;
  ppuVar7 = &PTR_s_identity_0411cf20;
  ppuVar6 = &PTR_PTR_0411cea8;
  do {
    iVar1 = FUN_001f8b48(*ppuVar7,"identity");
    if (iVar1 == 0) {
      sVar2 = strlen(*ppuVar7);
      lVar5 = lVar5 + sVar2 + 2;
    }
    ppuVar7 = (undefined **)*ppuVar6;
    ppuVar6 = ppuVar6 + 1;
  } while (ppuVar7 != (undefined **)0x0);
  if (lVar5 == 0) {
    pcVar3 = (char *)FUN_002044f4("identity");
    return pcVar3;
  }
  pcVar3 = (char *)FUN_002044c4(lVar5);
  if (pcVar3 != (char *)0x0) {
    ppuVar7 = &PTR_s_identity_0411cf20;
    __dest = pcVar3;
    ppuVar6 = &PTR_PTR_0411cea8;
    do {
      iVar1 = FUN_001f8b48(*ppuVar7,"identity");
      if (iVar1 == 0) {
        pcVar4 = strcpy(__dest,*ppuVar7);
        sVar2 = strlen(pcVar4);
        pcVar4 = __dest + sVar2;
        __dest = pcVar4 + 2;
        pcVar4[0] = ',';
        pcVar4[1] = ' ';
      }
      ppuVar7 = (undefined **)*ppuVar6;
      ppuVar6 = ppuVar6 + 1;
    } while (ppuVar7 != (undefined **)0x0);
    __dest[-2] = '\0';
  }
  return pcVar3;
}


