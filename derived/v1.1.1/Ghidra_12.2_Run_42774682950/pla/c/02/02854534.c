/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02854534; name: FUN_02854534
 */


void FUN_02854534(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x348);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x368);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x388);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x3a8);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x3c8);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 1000);
  lVar6 = param_1 + 0x408;
  FUN_0283b430(*(undefined8 *)(param_1 + 8),lVar6);
  FUN_0283b430(*(undefined8 *)(param_1 + 8),param_1 + 0x428);
  lVar7 = param_1 + 0x348;
  if (*(int *)(param_1 + 0x488) != 1) {
    if (*(int *)(param_1 + 0x488) != 2) goto LAB_02854650;
    lVar7 = param_1 + 0x3c8;
  }
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),lVar7);
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  lVar9 = *(long *)(param_1 + 0x2c8);
  plVar8 = *(long **)(param_1 + 0x2e0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar2 = plVar5;
  if ((lVar7 != 0) && (*plVar5 != lVar9)) {
    lVar4 = lVar7 * 0x30;
    plVar3 = plVar5 + lVar7 * 6;
    do {
      lVar4 = lVar4 + -0x30;
      plVar2 = plVar3;
      if (lVar4 == 0) break;
      plVar1 = plVar5 + 6;
      plVar5 = plVar5 + 6;
      plVar2 = plVar5;
    } while (*plVar1 != lVar9);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
LAB_02854650:
  if (*(int *)(param_1 + 0x48c) == 1) {
    lVar6 = param_1 + 0x388;
  }
  else if (*(int *)(param_1 + 0x48c) != 2) {
    return;
  }
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),lVar6);
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  lVar7 = *(long *)(param_1 + 0x2e8);
  plVar8 = *(long **)(param_1 + 0x300);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar2 = plVar5;
  if ((lVar6 != 0) && (*plVar5 != lVar7)) {
    lVar9 = lVar6 * 0x30;
    plVar3 = plVar5 + lVar6 * 6;
    do {
      lVar9 = lVar9 + -0x30;
      plVar2 = plVar3;
      if (lVar9 == 0) break;
      plVar1 = plVar5 + 6;
      plVar5 = plVar5 + 6;
      plVar2 = plVar5;
    } while (*plVar1 != lVar7);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
  return;
}


