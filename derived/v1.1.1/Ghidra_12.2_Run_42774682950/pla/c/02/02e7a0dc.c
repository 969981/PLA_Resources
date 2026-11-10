/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a0dc; name: FUN_02e7a0dc
 */


void FUN_02e7a0dc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0 || lVar2 == param_2) {
    lVar4 = 0;
    lVar3 = lVar2;
  }
  else {
    lVar3 = lVar2;
    do {
      lVar4 = lVar3;
      lVar3 = *(long *)(lVar4 + 8);
    } while (lVar3 != 0 && lVar3 != param_2);
  }
  if (lVar3 != 0) {
    plVar1 = (long *)(param_1 + 8);
    if (lVar3 != lVar2) {
      plVar1 = (long *)(lVar4 + 8);
    }
    *plVar1 = *(long *)(lVar3 + 8);
  }
  return;
}


