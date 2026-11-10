/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b020; name: FUN_02e7b020
 */


void FUN_02e7b020(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || (*plVar3 == *(long *)(param_2 + 0x40))) {
    plVar5 = plVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x20;
    plVar6 = plVar3;
    do {
      lVar4 = lVar4 + -0x20;
      if (lVar4 == 0) goto LAB_02e7b0bc;
      plVar5 = plVar6 + 4;
      plVar1 = plVar6 + 4;
      plVar6 = plVar5;
    } while (*plVar1 != *(long *)(param_2 + 0x40));
  }
  if (plVar5 != plVar3 + (ulong)uVar2 * 4) {
    for (plVar3 = (long *)plVar5[2]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3[3] == param_2) {
        FUN_02e7bf0c(plVar3);
      }
    }
  }
LAB_02e7b0bc:
  for (plVar3 = *(long **)(param_1 + 0x28); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3[3] == param_2) {
      FUN_02e7bf0c(plVar3);
    }
  }
  return;
}


