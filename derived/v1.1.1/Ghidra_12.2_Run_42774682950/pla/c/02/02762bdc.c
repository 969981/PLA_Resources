/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762bdc; name: FUN_02762bdc
 */


long * FUN_02762bdc(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*plVar1 == param_1) {
    *plVar1 = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
      do {
        plVar1 = plVar2;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
    }
  }
  else {
    plVar1[1] = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)*plVar1;
    while (plVar2 != (long *)0x0) {
      do {
        plVar1 = plVar2;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
      plVar2 = (long *)plVar1[1];
    }
  }
  return plVar1;
}


