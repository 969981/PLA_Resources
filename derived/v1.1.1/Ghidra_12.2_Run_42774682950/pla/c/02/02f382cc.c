/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f382cc; name: FUN_02f382cc
 */


void FUN_02f382cc(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (DAT_0442c040 != (long *)0x0) {
    plVar3 = DAT_0442c040;
    plVar2 = (long *)0x0;
    do {
      while (plVar1 = plVar3, plVar3 = (long *)*plVar1, (*(byte *)(plVar1 + 2) >> 1 & 1) != 0) {
        plVar2 = plVar1;
        if (plVar3 == (long *)0x0) {
          return;
        }
      }
      FUN_02f3869c(plVar1,plVar2);
    } while (plVar3 != (long *)0x0);
  }
  return;
}


