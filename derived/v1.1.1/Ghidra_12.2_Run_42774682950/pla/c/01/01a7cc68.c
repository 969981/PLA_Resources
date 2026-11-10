/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a7cc68; name: FUN_01a7cc68
 */


void FUN_01a7cc68(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ae8374();
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_00af7e30(param_1 + 2,param_2 + 0x10);
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_01435a5c(param_1 + 4,param_2 + 0x20);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00bd10a0(param_1 + 6,param_2 + 0x30);
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_00cf98c8(param_1 + 8,param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_018310a4(param_1 + 10,param_2 + 0x50);
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_01a6a07c(param_1 + 0xc,param_2 + 0x60);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_01a2bf84(param_1 + 0xe,param_2 + 0x70);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_01a9e18c(param_1 + 0x10,param_2 + 0x80);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_01a9e404(param_1 + 0x12,param_2 + 0x90);
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  FUN_01a9e67c(param_1 + 0x14,param_2 + 0xa0);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  FUN_00ac4814(param_1 + 0x16,param_2 + 0xb0);
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  FUN_0182a468(param_1 + 0x18,param_2 + 0xc0);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  FUN_01a9e8f4(param_1 + 0x1a,param_2 + 0xd0);
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  FUN_0095aa3c(param_1 + 0x1c,param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = uVar4;
  FUN_01a9ccd4(param_1 + 0x1f,param_2 + 0xf8);
  uVar4 = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
  param_1[0x22] = uVar4;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
    param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x140) != '\0') {
    param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
    param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_2 + 0x160) != '\0') {
    param_1[0x2f] = *(undefined8 *)(param_2 + 0x178);
    param_1[0x2e] = *(undefined8 *)(param_2 + 0x170);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1d8);
  uVar2 = *(undefined2 *)(param_2 + 0x1e0);
  param_1[0x39] = *(undefined8 *)(param_2 + 0x1c8);
  param_1[0x3b] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x35] = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x37] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x31] = *(undefined8 *)(param_2 + 0x188);
  param_1[0x33] = uVar4;
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  uVar4 = *(undefined8 *)(param_2 + 400);
  param_1[0x34] = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x32] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x38] = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x36] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  param_1[0x3a] = uVar4;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x200) != '\0') {
    param_1[0x43] = *(undefined8 *)(param_2 + 0x218);
    param_1[0x42] = *(undefined8 *)(param_2 + 0x210);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(char *)(param_2 + 0x220) != '\0') {
    uVar4 = *(undefined8 *)(param_2 + 0x268);
    param_1[0x4b] = *(undefined8 *)(param_2 + 600);
    param_1[0x4d] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x248);
    param_1[0x47] = *(undefined8 *)(param_2 + 0x238);
    param_1[0x49] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x230);
    param_1[0x48] = *(undefined8 *)(param_2 + 0x240);
    param_1[0x46] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x260);
    param_1[0x4a] = *(undefined8 *)(param_2 + 0x250);
    param_1[0x4c] = uVar4;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  if (*(code **)(param_2 + 0x280) != (code *)0x0) {
    (**(code **)(param_2 + 0x280))(param_2 + 0x290,param_1 + 0x52);
    uVar4 = *(undefined8 *)(param_2 + 0x270);
    uVar5 = *(undefined8 *)(param_2 + 0x278);
    uVar6 = *(undefined8 *)(param_2 + 0x288);
    param_1[0x50] = *(undefined8 *)(param_2 + 0x280);
    param_1[0x51] = uVar6;
    param_1[0x4e] = uVar4;
    param_1[0x4f] = uVar5;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x358);
  param_1[0x69] = *(undefined8 *)(param_2 + 0x348);
  param_1[0x6b] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x338);
  param_1[0x65] = *(undefined8 *)(param_2 + 0x328);
  param_1[0x67] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x318);
  param_1[0x61] = *(undefined8 *)(param_2 + 0x308);
  param_1[99] = uVar4;
  param_1[0x5f] = *(undefined8 *)(param_2 + 0x2f8);
  param_1[0x5e] = *(undefined8 *)(param_2 + 0x2f0);
  uVar4 = *(undefined8 *)(param_2 + 0x300);
  param_1[0x62] = *(undefined8 *)(param_2 + 0x310);
  param_1[0x60] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 800);
  param_1[0x66] = *(undefined8 *)(param_2 + 0x330);
  param_1[100] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x340);
  param_1[0x6a] = *(undefined8 *)(param_2 + 0x350);
  param_1[0x68] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x378);
  param_1[0x6d] = *(undefined8 *)(param_2 + 0x368);
  uVar4 = *(undefined8 *)(param_2 + 0x360);
  uVar5 = *(undefined8 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x6f) = uVar1;
  param_1[0x6e] = uVar5;
  param_1[0x6c] = uVar4;
  param_1[0x70] = *(undefined8 *)(param_2 + 0x380);
  param_1[0x71] = *(undefined8 *)(param_2 + 0x388);
  param_1[0x72] = *(undefined8 *)(param_2 + 0x390);
  plVar3 = *(long **)(param_2 + 0x398);
  param_1[0x73] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a7cf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


