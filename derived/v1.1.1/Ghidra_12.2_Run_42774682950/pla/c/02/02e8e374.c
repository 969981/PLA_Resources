/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e374; name: FUN_02e8e374
 */


void FUN_02e8e374(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)*plVar1;
  if (plVar1[2] == param_1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar4 = plVar1;
    do {
      plVar2 = plVar4;
      plVar4 = plVar3;
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar3 = (long *)*plVar4;
    } while (plVar4[2] != param_1);
    if (plVar4 != plVar1) {
      *plVar2 = (long)plVar3;
      plVar1 = plVar4;
      goto LAB_02e8e3cc;
    }
    plVar1 = plVar4;
  }
  *param_2 = (long)plVar3;
LAB_02e8e3cc:
  if ((long *)param_2[1] == plVar1) {
    param_2[1] = (long)plVar2;
  }
  *plVar1 = param_2[2];
  param_2[2] = (long)plVar1;
  *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + -1;
  return;
}


