/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ebd28; name: FUN_001ebd28
 */


long FUN_001ebd28(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
  if (((*(byte *)((long)param_1 + 0x3fc) >> 4 & 1) == 0) ||
     ((*(byte *)(lVar3 + 0xf40) >> 4 & 1) == 0)) {
    plVar4 = (long *)(lVar3 + 0x808);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x810);
  }
  plVar4 = (long *)*plVar4;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_001f8bec(*plVar4,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar4 + sVar2) & 0xfe) == 0x3a)) break;
    plVar4 = (long *)plVar4[1];
  }
  return *plVar4;
}


