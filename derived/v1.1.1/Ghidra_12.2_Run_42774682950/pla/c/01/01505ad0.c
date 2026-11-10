/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01505ad0; name: FUN_01505ad0
 */


long FUN_01505ad0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_1 + 0x2c8);
  plVar8 = *(long **)(lVar7 + 0x148);
  lVar3 = *(long *)(lVar7 + 0x150);
  lVar9 = *param_2;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar2 = plVar8;
  if ((lVar3 != 0) && (*plVar8 != lVar9)) {
    lVar5 = lVar3 * 0x30;
    plVar4 = plVar8 + lVar3 * 6;
    do {
      lVar5 = lVar5 + -0x30;
      plVar2 = plVar4;
      if (lVar5 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar2 = plVar8;
    } while (*plVar1 != lVar9);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar2 == (long *)(*(long *)(lVar7 + 0x148) + *(long *)(lVar7 + 0x150) * 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = plVar2[4];
  }
  return lVar3;
}


