/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762b34; name: FUN_02762b34
 */


void FUN_02762b34(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    FUN_0276152c(param_1,(long *)(param_1 + 8));
    return;
  }
  do {
    if (*(int *)(param_2 + 0x1c) < *(int *)((long)plVar2 + 0x1c)) {
      plVar1 = (long *)*plVar2;
      if ((long *)*plVar2 == (long *)0x0) {
        FUN_0276152c(param_1,plVar2,plVar2);
        return;
      }
    }
    else {
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        FUN_0276152c(param_1,plVar2,plVar2 + 1);
        return;
      }
    }
    plVar2 = plVar1;
  } while( true );
}


