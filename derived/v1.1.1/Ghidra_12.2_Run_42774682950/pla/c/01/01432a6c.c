/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01432a6c; name: FUN_01432a6c
 */


void FUN_01432a6c(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)(param_1 + 0x10);
  bVar2 = param_2 & 1;
  *(byte *)(param_1 + 0x4fd) = bVar2;
  lVar10 = *(long *)(lVar8 + 0x148);
  plVar9 = *(long **)(lVar10 + 0x148);
  lVar5 = *(long *)(lVar10 + 0x150);
  lVar11 = *(long *)(param_1 + 0x408);
  plVar7 = *(long **)(param_1 + 0x420);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar3 = plVar9;
  if ((lVar5 != 0) && (*plVar9 != lVar11)) {
    lVar6 = lVar5 * 0x30;
    plVar4 = plVar9 + lVar5 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar4;
      if (lVar6 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar3 = plVar9;
    } while (*plVar1 != lVar11);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (((plVar3 != (long *)(*(long *)(lVar10 + 0x148) + *(long *)(lVar10 + 0x150) * 0x30)) &&
      (lVar5 = plVar3[4], lVar5 != 0)) && (((*(byte *)(lVar5 + 0x58) ^ param_2) & 1) != 0)) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar2;
  }
  lVar10 = *(long *)(lVar8 + 0x148);
  plVar9 = *(long **)(lVar10 + 0x148);
  lVar5 = *(long *)(lVar10 + 0x150);
  lVar11 = *(long *)(param_1 + 0x428);
  plVar7 = *(long **)(param_1 + 0x440);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar3 = plVar9;
  if ((lVar5 != 0) && (*plVar9 != lVar11)) {
    lVar6 = lVar5 * 0x30;
    plVar4 = plVar9 + lVar5 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar4;
      if (lVar6 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar3 = plVar9;
    } while (*plVar1 != lVar11);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (((plVar3 != (long *)(*(long *)(lVar10 + 0x148) + *(long *)(lVar10 + 0x150) * 0x30)) &&
      (lVar5 = plVar3[4], lVar5 != 0)) && (((*(byte *)(lVar5 + 0x58) ^ param_2) & 1) != 0)) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar2;
  }
  lVar8 = *(long *)(lVar8 + 0x148);
  plVar9 = *(long **)(lVar8 + 0x148);
  lVar5 = *(long *)(lVar8 + 0x150);
  lVar10 = *(long *)(param_1 + 0x448);
  plVar7 = *(long **)(param_1 + 0x460);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar3 = plVar9;
  if ((lVar5 != 0) && (*plVar9 != lVar10)) {
    lVar11 = lVar5 * 0x30;
    plVar4 = plVar9 + lVar5 * 6;
    do {
      lVar11 = lVar11 + -0x30;
      plVar3 = plVar4;
      if (lVar11 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar3 = plVar9;
    } while (*plVar1 != lVar10);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (((plVar3 != (long *)(*(long *)(lVar8 + 0x148) + *(long *)(lVar8 + 0x150) * 0x30)) &&
      (lVar5 = plVar3[4], lVar5 != 0)) && (((*(byte *)(lVar5 + 0x58) ^ param_2) & 1) != 0)) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar2;
  }
  return;
}


