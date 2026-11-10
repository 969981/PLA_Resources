/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a7c60; name: FUN_028a7c60
 */


void FUN_028a7c60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_028a7d54();
  uVar1 = param_1[1];
  *param_1 = &DAT_04272818;
  param_1[9] = &PTR_LAB_04272980;
  param_1[10] = &PTR_LAB_04272ae0;
  param_1[0x11] = uVar1;
  param_1[0x12] = 0x555555555555555;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = uVar1;
  param_1[0x19] = 0x2e8ba2e8ba2e8ba;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = 0x2e8ba2e8ba2e8ba;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = uVar1;
  param_1[0x27] = 0x2e8ba2e8ba2e8ba;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = 0x2e8ba2e8ba2e8ba;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x394,0,1);
  param_1[0x74] = 0;
  return;
}


