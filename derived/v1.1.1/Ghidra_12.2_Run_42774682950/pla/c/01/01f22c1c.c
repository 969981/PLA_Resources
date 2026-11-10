/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f22c1c; name: FUN_01f22c1c
 */


void FUN_01f22c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[3];
  param_1[3] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar5 = (long *)param_2[7];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[7];
  param_1[7] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar4 = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar4;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar5 = (long *)param_2[0xf];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar5 = (long *)param_2[0x13];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x13];
  param_1[0x13] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar1 = param_2[0x14];
  uVar2 = param_2[0x15];
  uVar4 = param_2[0x16];
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar4;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  plVar5 = (long *)param_2[0x1b];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x1b];
  param_1[0x1b] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  plVar5 = (long *)param_2[0x1f];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x1f];
  param_1[0x1f] = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar1 = param_2[0x20];
  uVar2 = param_2[0x21];
  uVar4 = param_2[0x22];
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar4;
  return;
}


