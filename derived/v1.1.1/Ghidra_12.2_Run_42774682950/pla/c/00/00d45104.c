/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d45104; name: FUN_00d45104
 */


long * FUN_00d45104(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)*param_1;
  *param_1 = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar5 = (long *)param_2[4];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[4];
  param_1[4] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar5 = (long *)param_2[6];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[6];
  param_1[6] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  plVar5 = (long *)param_2[10];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[10];
  param_1[10] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  plVar5 = (long *)param_2[0xc];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  plVar5 = (long *)param_2[0x10];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x10];
  param_1[0x10] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  plVar5 = (long *)param_2[0x12];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x12];
  param_1[0x12] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  plVar5 = (long *)param_2[0x16];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)param_1[0x16];
  param_1[0x16] = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  lVar4 = param_2[0x1a];
  lVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = lVar1;
  param_1[0x1a] = lVar4;
  lVar1 = param_2[0x1b];
  lVar4 = param_2[0x1c];
  lVar2 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = lVar2;
  param_1[0x1b] = lVar1;
  param_1[0x1c] = lVar4;
  return param_1;
}


