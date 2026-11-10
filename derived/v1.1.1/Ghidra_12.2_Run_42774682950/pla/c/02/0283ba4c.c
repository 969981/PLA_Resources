/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ba4c; name: FUN_0283ba4c
 */


void FUN_0283ba4c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x148);
  lVar3 = *(long *)(param_1 + 0x150);
  lVar8 = *param_2;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = plVar7;
  if ((lVar3 != 0) && (*plVar7 != lVar8)) {
    lVar4 = lVar3 * 0x30;
    plVar2 = plVar7 + lVar3 * 6;
    do {
      lVar4 = lVar4 + -0x30;
      plVar5 = plVar2;
      if (lVar4 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar5 = plVar7;
    } while (*plVar1 != lVar8);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x148);
  lVar3 = *(long *)(param_1 + 0x150);
  plVar6 = plVar7 + lVar3 * 6;
  if (plVar5 == plVar6) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar5[4];
  }
  lVar4 = *param_3;
  plVar5 = (long *)param_3[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar2 = plVar7;
  if ((lVar3 != 0) && (*plVar7 != lVar4)) {
    lVar3 = lVar3 * 0x30;
    do {
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar6;
      if (lVar3 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar2 = plVar7;
    } while (*plVar1 != lVar4);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar2 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = plVar2[4];
  }
  FUN_00242d3c(lVar8,lVar3);
  return;
}


