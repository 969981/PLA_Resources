/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e9574; name: FUN_001e9574
 */


void FUN_001e9574(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x12d8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*(int *)(*plVar1 + 0x28) == param_2) {
        FUN_001e3790(param_1 + 0x12d8,plVar1,0);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


