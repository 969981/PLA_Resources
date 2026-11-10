/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c47c; name: FUN_0020c47c
 */


long FUN_0020c47c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    plVar1 = param_1 + 3;
    plVar2 = param_1 + 4;
    param_1 = (long *)*param_1;
    lVar3 = (*plVar2 + lVar3) - *plVar1;
  } while (param_1 != (long *)0x0);
  return lVar3;
}


