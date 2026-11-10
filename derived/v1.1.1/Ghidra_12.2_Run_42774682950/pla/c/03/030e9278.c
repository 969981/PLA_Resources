/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e9278; name: FUN_030e9278
 */


void FUN_030e9278(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0x20000d0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined2 *)(param_1 + 1) = 0x24;
  FUN_02ffec14(param_1 + 4);
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 6) = param_3[1];
    *(undefined8 *)(param_1 + 4) = uVar1;
    uVar1 = param_3[2];
    *(undefined8 *)(param_1 + 10) = param_3[3];
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = param_3[4];
    *(undefined8 *)(param_1 + 0xe) = param_3[5];
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    uVar1 = param_3[6];
    *(undefined8 *)(param_1 + 0x12) = param_3[7];
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = param_3[8];
    *(undefined8 *)(param_1 + 0x16) = param_3[9];
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    uVar1 = param_3[10];
    *(undefined8 *)(param_1 + 0x1a) = param_3[0xb];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = param_3[0xc];
    *(undefined8 *)(param_1 + 0x1e) = param_3[0xd];
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    uVar1 = param_3[0xe];
    *(undefined8 *)(param_1 + 0x22) = param_3[0xf];
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = param_3[0x10];
    *(undefined8 *)(param_1 + 0x26) = param_3[0x11];
    *(undefined8 *)(param_1 + 0x24) = uVar1;
    uVar1 = param_3[0x17];
    *(undefined8 *)(param_1 + 0x2e) = param_3[0x15];
    *(undefined8 *)(param_1 + 0x32) = uVar1;
    *(undefined8 *)(param_1 + 0x2a) = param_3[0x13];
    *(undefined8 *)(param_1 + 0x28) = param_3[0x12];
    uVar1 = param_3[0x14];
    *(undefined8 *)(param_1 + 0x30) = param_3[0x16];
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
  }
  return;
}


