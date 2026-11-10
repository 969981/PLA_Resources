/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024fd9c; name: FUN_0024fd9c
 */


void FUN_0024fd9c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  do {
    plVar2 = (long *)plVar2[1];
    if (param_1 == plVar2) {
      return;
    }
  } while (plVar2[0x12] != param_2);
  if (param_1 != plVar2) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
  }
  FUN_00232674();
  return;
}


