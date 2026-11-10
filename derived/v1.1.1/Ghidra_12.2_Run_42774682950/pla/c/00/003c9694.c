/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c9694; name: FUN_003c9694
 */


void FUN_003c9694(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 1;
  FUN_003d6cf4(param_1 + 3);
  param_1[0xf] = param_3[4];
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = *param_3;
                    /* try { // try from 003c96d4 to 003c96d7 has its CatchHandler @ 003c9808 */
  uVar2 = FUN_002eee30();
  param_1[0x13] = uVar2;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  lVar1 = param_3[6];
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *(bool *)(param_1 + 0x16) = lVar1 == 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_1 + 0xc3;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  memset(param_1 + 0x33,0,0x3b0);
  *(undefined4 *)(param_1 + 0xc2) = 1;
  param_1[0xbc] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)((long)param_1 + 0x654) = 0;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0;
  *(undefined8 *)((long)param_1 + 0x62c) = 0;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
                    /* try { // try from 003c9794 to 003c9797 has its CatchHandler @ 003c97d4 */
  FUN_002f2710(param_1 + 0x103);
  *(undefined4 *)(param_1 + 299) = 0;
  *(undefined1 *)((long)param_1 + 0x95c) = 0;
  param_1[300] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x4f] = 0x7fffffffffffffff;
  param_1[0x6c] = 0x7fffffffffffffff;
  param_1[0x89] = 0x7fffffffffffffff;
  param_1[0xa6] = 0x7fffffffffffffff;
  return;
}


