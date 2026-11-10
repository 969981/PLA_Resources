/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e46340; name: FUN_02e46340
 */


void FUN_02e46340(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0 || plVar1 == param_2) {
    plVar2 = (long *)0x0;
    plVar3 = plVar1;
  }
  else {
    plVar3 = plVar1;
    do {
      plVar2 = plVar3;
      plVar3 = (long *)*plVar2;
    } while (plVar3 != (long *)0x0 && plVar3 != param_2);
  }
  if (plVar3 != (long *)0x0) {
    if (plVar1 != plVar3) {
      param_1 = plVar2;
    }
    *param_1 = *plVar3;
  }
  return;
}


