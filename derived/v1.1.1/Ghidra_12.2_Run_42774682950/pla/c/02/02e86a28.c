/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86a28; name: FUN_02e86a28
 */


void FUN_02e86a28(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    *param_1 = *plVar1;
    if ((long *)param_1[1] == plVar1) {
      param_1[1] = 0;
    }
    *plVar1 = param_1[2];
    param_1[2] = (long)plVar1;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
    plVar1 = (long *)*param_1;
  }
  return;
}


