/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023049c; name: FUN_0023049c
 */


void FUN_0023049c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[1];
  if (param_1 != plVar2) {
    plVar1 = (long *)plVar2[1];
    while( true ) {
      if (param_1 != plVar2) {
        lVar3 = *plVar1;
        *(long **)(*plVar2 + 8) = plVar1;
        *plVar1 = *plVar2;
        *(long **)(lVar3 + 8) = plVar2;
        *plVar2 = lVar3;
      }
      if ((char)plVar2[5] == '\0') {
        plVar2 = plVar2 + -1;
        (**(code **)*plVar2)(plVar2);
        FUN_00232674(plVar2);
      }
      if (param_1 == plVar1) break;
      plVar2 = plVar1;
      plVar1 = (long *)plVar1[1];
    }
  }
  return;
}


