/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e7d58; name: FUN_031e7d58
 */


void FUN_031e7d58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_042f8788;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = &PTR_LAB_042f87c8;
  FUN_031f117c(param_1 + 4);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  uVar1 = param_2[5];
  param_1[0x2d] = param_2[3];
  param_1[0x2f] = uVar1;
  param_1[0x2b] = param_2[1];
  param_1[0x2a] = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[0x30] = 0x3a83126f00000000;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x19] = 0xbf800000bf800000;
  param_1[0x1a] = 0xbf800000bf800000;
  param_1[0x1b] = 0xbf800000bf800000;
  param_1[0x1c] = 0xbf800000bf800000;
  param_1[0x2e] = uVar2;
  param_1[0x2c] = uVar1;
  param_1[0x1d] = 0xbf800000bf800000;
  param_1[0x1e] = 0xbf800000bf800000;
  param_1[0x1f] = 0xbf800000bf800000;
  param_1[0x20] = 0xbf800000bf800000;
  param_1[0x21] = 0xbf800000bf800000;
  param_1[0x22] = 0xbf800000bf800000;
  param_1[0x23] = 0xbf800000bf800000;
  param_1[0x24] = 0xbf800000bf800000;
  param_1[0x25] = 0xbf800000bf800000;
  param_1[0x26] = 0xbf800000bf800000;
  param_1[0x27] = 0xbf800000bf800000;
  param_1[0x28] = 0xbf800000bf800000;
  return;
}


