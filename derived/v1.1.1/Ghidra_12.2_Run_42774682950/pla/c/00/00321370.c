/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00321370; name: FUN_00321370
 */


void FUN_00321370(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  size_t sVar3;
  byte *__dest;
  byte *__dest_00;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  sVar3 = param_2[1];
  if (param_3[1] + sVar3 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    __dest = param_1 + 1;
  }
  else {
                    /* try { // try from 003213a4 to 003213af has its CatchHandler @ 003214d0 */
    FUN_002e6bd4(param_1,param_3[1] + sVar3,0);
    sVar3 = param_2[1];
    __dest = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __dest = param_1 + 1;
    }
  }
  if (sVar3 == 0) {
    sVar3 = param_3[1];
    __dest_00 = __dest;
  }
  else {
    memcpy(__dest,(void *)*param_2,sVar3);
    __dest_00 = __dest + param_2[1];
    sVar3 = param_3[1];
  }
  if (sVar3 != 0) {
    memcpy(__dest_00,(void *)*param_3,sVar3);
    __dest_00 = __dest_00 + param_3[1];
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (__dest_00 != __dest + uVar1) {
                    /* try { // try from 00321420 to 00321437 has its CatchHandler @ 003214c0 */
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                 ,0x5cb);
                    /* try { // try from 00321438 to 0032144b has its CatchHandler @ 003214a8 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: (out) == (begin + result.size()): ");
                    /* try { // try from 0032144c to 00321453 has its CatchHandler @ 003214a4 */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(auStack_60);
  }
  return;
}


