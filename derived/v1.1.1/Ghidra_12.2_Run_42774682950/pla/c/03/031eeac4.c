/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031eeac4; name: FUN_031eeac4
 */


void FUN_031eeac4(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000000;
  if ((int)param_2[0x2d] < 0) {
    FUN_031eec24(PTR_PTR_0434a080,param_2 + 0x2a);
  }
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  if ((int)param_2[0x31] < 0) {
    FUN_031eef6c(PTR_PTR_0434a080,param_2 + 0x2e);
  }
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar1 = *(undefined2 *)(param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  return;
}


