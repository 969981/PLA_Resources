/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053dd20; name: FUN_0053dd20
 */


void FUN_0053dd20(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *param_1 = (long)(PTR_DAT_04374c40 + 0x10);
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
                    /* try { // try from 0053dd50 to 0053dd7b has its CatchHandler @ 0053de58 */
  auVar2 = FUN_003d6b30(param_3);
  *(undefined1 (*) [16])(param_1 + 2) = auVar2;
  FUN_00535dbc(*(undefined8 *)(param_1[1] + 0x20),0);
  lVar1 = FUN_003f5988();
  param_1[4] = lVar1;
  FUN_003d6cf4(param_1 + 5);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)(param_1 + 0x11);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0xe9] = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  return;
}


