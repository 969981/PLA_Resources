/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8ac8; name: FUN_032d8ac8
 */


void FUN_032d8ac8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_0434ac00;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x38d490);
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 8) + 0x50);
  param_1[1] = &PTR_FUN_0434af50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x4000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x8000000000000000;
  param_1[0x44] = 0;
  *(undefined1 *)((long)param_1 + 0x22a) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = 0;
  param_1[7] = uVar3;
  param_1[0x33] = 0x8000000000000000;
  param_1[0x34] = param_1 + 0x36;
  param_1[0x35] = 0x8000000200000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0x3c] = param_1 + 0x3e;
  param_1[0x3d] = 0x8000000300000000;
  *(undefined2 *)(param_1 + 0x45) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x8000000000000000;
  param_1[0x32] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x8000000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}


