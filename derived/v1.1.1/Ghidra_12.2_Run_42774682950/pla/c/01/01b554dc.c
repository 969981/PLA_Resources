/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b554dc; name: FUN_01b554dc
 */


byte FUN_01b554dc(long param_1)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  
  bVar2 = 1;
  for (plVar3 = *(long **)(param_1 + 0x3f8); plVar3 != *(long **)(param_1 + 0x400);
      plVar3 = plVar3 + 1) {
    if (*(long *)(*plVar3 + 0xe0) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(*(long *)(*plVar3 + 0xe0) + 0xc) == 0;
    }
    bVar2 = bVar2 & bVar1;
  }
  plVar3 = *(long **)(param_1 + 0x430);
  if (plVar3 != *(long **)(param_1 + 0x438)) {
    if (*(long *)(*plVar3 + 0xe0) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(*(long *)(*plVar3 + 0xe0) + 0xc) == 0;
    }
    bVar2 = bVar2 & bVar1;
    while (plVar3 = plVar3 + 1, plVar3 != *(long **)(param_1 + 0x438)) {
      if (*(long *)(*plVar3 + 0xe0) == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = *(int *)(*(long *)(*plVar3 + 0xe0) + 0xc) == 0;
      }
      bVar2 = bVar2 & bVar1;
    }
  }
  return bVar2;
}


