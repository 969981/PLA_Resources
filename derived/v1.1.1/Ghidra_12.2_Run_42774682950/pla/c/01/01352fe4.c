/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01352fe4; name: FUN_01352fe4
 */


void FUN_01352fe4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[4] = 0x249249249249249;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0xb] = 0x249249249249249;
  param_1[0xc] = 0;
  param_1[0x12] = 0x555555555555555;
  param_1[0x13] = 0;
  param_1[0x19] = 0x276276276276276;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0xffffffff00000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_2;
  param_1[0x2b] = 0x333333333333333;
  param_1[0x2c] = 0;
  plVar1 = (long *)FUN_00b779ac();
  plVar2 = (long *)*plVar1;
  param_1[0x2f] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x30] = plVar1[1];
  param_1[0x31] = plVar1[2];
  param_1[0x32] = plVar1[3];
  plVar2 = (long *)plVar1[4];
  param_1[0x33] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(int *)(param_1 + 0x34) = (int)plVar1[5];
  plVar1 = (long *)FUN_00b779ac();
  plVar2 = (long *)*plVar1;
  param_1[0x35] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x36] = plVar1[1];
  param_1[0x37] = plVar1[2];
  param_1[0x38] = plVar1[3];
  plVar2 = (long *)plVar1[4];
  param_1[0x39] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(int *)(param_1 + 0x3a) = (int)plVar1[5];
  param_1[0x3c] = &DAT_cbf29ce484222645;
  FUN_00b18558(param_1 + 0x3d);
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1c] = 0xe00000001;
  *(undefined4 *)((long)param_1 + 0x103) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  return;
}


