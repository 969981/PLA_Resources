/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f09c38; name: FUN_02f09c38
 */


void FUN_02f09c38(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x178);
  while (plVar1 != (long *)0x0) {
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    else {
      *(long *)(param_1 + 0x178) = *plVar1;
    }
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
    FUN_02f09c9c(param_1,plVar1);
    FUN_02f09d28(plVar1);
    plVar1 = *(long **)(param_1 + 0x178);
  }
  return;
}


