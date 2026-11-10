/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283bfbc; name: FUN_0283bfbc
 */


void FUN_0283bfbc(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
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
  plVar2 = plVar8;
  if ((lVar5 != 0) && (*plVar8 != lVar9)) {
    lVar6 = lVar5 * 0x30;
    plVar4 = plVar8 + lVar5 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar2 = plVar4;
      if (lVar6 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar2 = plVar8;
    } while (*plVar1 != lVar9);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar2 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    plVar8 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0xa0);
  }
  else {
    plVar8 = (long *)plVar2[4];
    lVar5 = *(long *)(param_1 + 0xa0);
  }
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x30;
    plVar7 = (long *)(*(long *)(param_1 + 0x98) + 0x20);
    do {
      plVar2 = *(long **)(*plVar7 + 0x60);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                                 (plVar2,*(long *)(*(long *)(*plVar7 + 0x58) + 0x58) + 0x3010,
                                  param_3);
      uVar3 = (**(code **)(*plVar2 + 0x30))();
      if ((uVar3 & 1) != 0) {
        lVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,0);
        *(long **)(*(long *)(lVar5 + 0x18) + 8) = plVar2;
        return;
      }
      lVar5 = lVar5 + -0x30;
      plVar7 = plVar7 + 6;
    } while (lVar5 != 0);
  }
  return;
}


