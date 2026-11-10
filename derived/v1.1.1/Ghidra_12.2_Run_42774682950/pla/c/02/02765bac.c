/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765bac; name: FUN_02765bac
 */


long * FUN_02765bac(long param_1,int *param_2)

{
  long *plVar1;
  long *extraout_x8;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    do {
      while (*(int *)((long)plVar1 + 0x1c) <= *param_2) {
        if (*param_2 <= *(int *)((long)plVar1 + 0x1c)) goto LAB_02765be8;
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) goto LAB_02765be4;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
LAB_02765be4:
  do {
    FUN_02765c50();
    plVar1 = extraout_x8;
LAB_02765be8:
  } while (plVar1 == (long *)0x0);
  return plVar1 + 4;
}


