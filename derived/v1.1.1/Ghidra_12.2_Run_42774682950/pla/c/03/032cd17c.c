/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd17c; name: FUN_032cd17c
 */


long FUN_032cd17c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    lVar1 = 0;
    plVar2 = *(long **)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
    do {
      lVar1 = plVar2[3] + lVar1;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    plVar2 = *(long **)(param_1 + 0x20);
  }
  if (plVar2 == (long *)0x0) {
    return lVar1;
  }
  lVar3 = 0;
  do {
    lVar3 = plVar2[3] + lVar3;
    plVar2 = (long *)*plVar2;
  } while (plVar2 != (long *)0x0);
  return lVar3 + lVar1;
}


