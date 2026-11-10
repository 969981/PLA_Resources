/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009938e4; name: FUN_009938e4
 */


undefined8 FUN_009938e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 == (long *)0x0) {
    return 1;
  }
  plVar2 = plVar1;
  while ((int)plVar2[4] != 1) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 1;
    }
  }
  plVar2 = plVar1;
  while ((int)plVar2[4] != 2) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 2;
    }
  }
  plVar2 = plVar1;
  while ((int)plVar2[4] != 3) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 3;
    }
  }
  plVar2 = plVar1;
  while ((int)plVar2[4] != 4) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 4;
    }
  }
  do {
    if ((int)plVar1[4] == 5) {
      return 0x15;
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return 5;
}


