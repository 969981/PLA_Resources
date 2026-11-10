/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b926cc; name: FUN_01b926cc
 */


void FUN_01b926cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  plVar1 = (long *)param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[7];
  param_2[7] = 0;
  param_1[7] = uVar2;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  plVar1 = (long *)param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[0xb];
  param_2[0xb] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  plVar1 = (long *)param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[0xf];
  param_2[0xf] = 0;
  param_1[0xf] = uVar2;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  plVar1 = (long *)param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[0x13];
  param_2[0x13] = 0;
  param_1[0x13] = uVar2;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  plVar1 = (long *)param_1[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[0x17];
  param_2[0x17] = 0;
  param_1[0x17] = uVar2;
  param_1[0x18] = param_2[0x18];
  return;
}


