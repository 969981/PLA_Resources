/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123a160; name: FUN_0123a160
 */


void FUN_0123a160(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 10);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar12 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar7 = *param_1;
  uVar8 = *(undefined1 *)(param_1 + 4);
  uVar11 = *(undefined8 *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar10 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = uVar10;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  plVar9 = *(long **)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  plVar9 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar10;
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = uVar10;
  plVar9 = *(long **)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar10;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  plVar9 = *(long **)(param_2 + 2);
  *param_2 = uVar7;
  *(undefined8 *)(param_2 + 2) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar9 = *(long **)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = uVar12;
  *(undefined1 *)(param_2 + 4) = uVar8;
  *(undefined8 *)(param_2 + 6) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar9 = *(long **)(param_2 + 8);
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(undefined8 *)(param_2 + 8) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar9 = *(long **)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = uVar5;
  *(undefined8 *)(param_2 + 10) = uVar1;
  *(undefined8 *)(param_2 + 0xc) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  *(undefined8 *)(param_2 + 0xe) = uVar3;
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  *(undefined8 *)(param_2 + 0x12) = uVar11;
  return;
}


