/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f48fc; name: FUN_007f48fc
 */


void FUN_007f48fc(long *param_1)

{
  undefined *puVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  FUN_008471b4();
  puVar1 = PTR_DAT_04377588;
  *(undefined2 *)((long)param_1 + 0x5a) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007f0ce0(param_1 + 0xd);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_007f0ce0(param_1 + 0x13);
  FUN_007f0ce0(param_1 + 0x17);
  FUN_007e60f4(param_1 + 0x1b,7);
  FUN_007e60f4(param_1 + 0x1f,8);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  local_48[0] = 0x4c11;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1 + 0x33,local_48);
  local_48[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1 + 0x35,local_48);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_007e5b70(param_1 + 0x39);
  FUN_007e60f4(param_1 + 0x3f,6);
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  FUN_007e3120((long)param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x49) = 1;
  *(undefined2 *)((long)param_1 + 0x24c) = 0;
  FUN_007e60f4(param_1 + 0x4a,9);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((long)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  FUN_007e5b70(param_1 + 0x223);
  *(undefined4 *)(param_1 + 0x229) = 0;
  *(undefined1 *)((long)param_1 + 0x114c) = 0;
  *(undefined2 *)((long)param_1 + 0x114e) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  *(undefined2 *)(param_1 + 0x22d) = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  *(undefined1 *)(param_1 + 0x232) = 0;
  FUN_00821b80((long)param_1 + 0x1194);
  FUN_007f0ce0(param_1 + 0x235);
  *(undefined1 *)(param_1 + 0x239) = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  memset(param_1 + 0x44,0,0x10);
  FUN_007f0d34(param_1 + 0x235);
  return;
}


