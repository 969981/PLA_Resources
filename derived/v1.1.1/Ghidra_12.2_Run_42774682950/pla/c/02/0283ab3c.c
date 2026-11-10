/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ab3c; name: FUN_0283ab3c
 */


void FUN_0283ab3c(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(param_1 + 0x148);
  lVar5 = *(long *)(param_1 + 0x150);
  lVar9 = *param_2;
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar3 = plVar8;
  if ((lVar5 != 0) && (*plVar8 != lVar9)) {
    lVar6 = lVar5 * 0x30;
    plVar4 = plVar8 + lVar5 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar4;
      if (lVar6 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar3 = plVar8;
    } while (*plVar1 != lVar9);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar3 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    lVar5 = 0;
  }
  else {
    lVar5 = plVar3[4];
  }
  uVar2 = param_3[1];
  *(undefined4 *)(lVar5 + 0x30) = *param_3;
  *(undefined4 *)(lVar5 + 0x34) = uVar2;
  *(undefined4 *)(lVar5 + 0x38) = 0;
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
  return;
}


