/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018544a4; name: FUN_018544a4
 */


void FUN_018544a4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_04228f60;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[7] = uVar3;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[2] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[6] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar3;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  plVar2 = *(long **)(param_2 + 0x78);
  param_1[0xf] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  plVar2 = *(long **)(param_2 + 0x98);
  param_1[0x13] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  plVar2 = *(long **)(param_2 + 0xb8);
  param_1[0x17] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  plVar2 = *(long **)(param_2 + 0xd8);
  param_1[0x1b] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  plVar2 = *(long **)(param_2 + 0xf8);
  param_1[0x1f] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x100);
  return;
}


