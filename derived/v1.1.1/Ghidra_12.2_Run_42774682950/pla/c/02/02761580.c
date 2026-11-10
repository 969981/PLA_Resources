/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761580; name: FUN_02761580
 */


long * FUN_02761580(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = (long)plVar2;
    return plVar2;
  }
  plVar2 = (long *)(param_1 + 8);
  do {
    if (*param_3 < *(int *)((long)plVar3 + 0x1c)) {
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
    }
    else {
      if (*param_3 <= *(int *)((long)plVar3 + 0x1c)) {
LAB_027615c8:
        *param_2 = (long)plVar3;
        return plVar2;
      }
      plVar2 = plVar3 + 1;
      plVar1 = (long *)*plVar2;
      if ((long *)*plVar2 == (long *)0x0) goto LAB_027615c8;
    }
    plVar3 = plVar1;
  } while( true );
}


