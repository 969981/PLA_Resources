/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ae44; name: FUN_0283ae44
 */


void FUN_0283ae44(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x148);
  lVar4 = *(long *)(param_1 + 0x150);
  lVar8 = *param_2;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar2 = plVar7;
  if ((lVar4 != 0) && (*plVar7 != lVar8)) {
    lVar5 = lVar4 * 0x30;
    plVar3 = plVar7 + lVar4 * 6;
    do {
      lVar5 = lVar5 + -0x30;
      plVar2 = plVar3;
      if (lVar5 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar2 = plVar7;
    } while (*plVar1 != lVar8);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar2 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar2[4];
  }
  *(undefined8 *)(lVar4 + 0x50) = *param_3;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
  return;
}


