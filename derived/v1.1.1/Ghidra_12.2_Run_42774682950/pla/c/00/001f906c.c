/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f906c; name: FUN_001f906c
 */


long FUN_001f906c(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  
  sVar2 = strlen(param_2);
  plVar3 = *(long **)(*param_1 + 0x808);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_001f8bec(*plVar3,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar3 + sVar2) & 0xfe) == 0x3a)) break;
    plVar3 = (long *)plVar3[1];
  }
  return *plVar3;
}


