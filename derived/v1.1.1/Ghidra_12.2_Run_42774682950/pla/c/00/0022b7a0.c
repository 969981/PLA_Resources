/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022b7a0; name: FUN_0022b7a0
 */


void FUN_0022b7a0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if ((long *)(param_1 + 8) == plVar2) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if ((long *)(param_1 + 8) != plVar2) {
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


