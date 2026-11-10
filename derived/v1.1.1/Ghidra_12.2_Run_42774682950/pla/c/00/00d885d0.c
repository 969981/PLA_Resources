/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d885d0; name: FUN_00d885d0
 */


void FUN_00d885d0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x50);
  plVar3 = *(long **)(param_1 + 0x58);
  plVar1 = plVar2;
  if (plVar2 != plVar3) {
    lVar4 = *plVar2;
    while ((plVar1 = plVar2, lVar4 != param_2 &&
           (plVar2 = plVar2 + 4, plVar1 = plVar3, plVar3 != plVar2))) {
      lVar4 = *plVar2;
    }
  }
  if (plVar3 == plVar1) {
    return;
  }
  FUN_00d88730();
  return;
}


