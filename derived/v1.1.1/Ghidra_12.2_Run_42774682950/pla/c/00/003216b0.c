/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003216b0; name: FUN_003216b0
 */


void FUN_003216b0(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  size_t sVar4;
  byte *__dest;
  byte *__dest_00;
  undefined1 auStack_80 [48];
  undefined1 auStack_48 [8];
  
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
  sVar4 = param_2[1];
  lVar1 = param_3[1] + sVar4 + param_4[1] + param_5[1] + param_6[1] + param_7[1];
  if (lVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    __dest = param_1 + 1;
  }
  else {
                    /* try { // try from 0032171c to 00321727 has its CatchHandler @ 003218c0 */
    FUN_002e6bd4(param_1,lVar1,0);
    sVar4 = param_2[1];
    __dest = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __dest = param_1 + 1;
    }
  }
  if (sVar4 == 0) {
    sVar4 = param_3[1];
    __dest_00 = __dest;
  }
  else {
    memcpy(__dest,(void *)*param_2,sVar4);
    __dest_00 = __dest + param_2[1];
    sVar4 = param_3[1];
  }
  if (sVar4 != 0) {
    memcpy(__dest_00,(void *)*param_3,sVar4);
    __dest_00 = __dest_00 + param_3[1];
  }
  if (param_4[1] != 0) {
    memcpy(__dest_00,(void *)*param_4,param_4[1]);
    __dest_00 = __dest_00 + param_4[1];
  }
  if (param_5[1] != 0) {
    memcpy(__dest_00,(void *)*param_5,param_5[1]);
    __dest_00 = __dest_00 + param_5[1];
  }
  if (param_6[1] != 0) {
    memcpy(__dest_00,(void *)*param_6,param_6[1]);
    __dest_00 = __dest_00 + param_6[1];
  }
  if (param_7[1] != 0) {
    memcpy(__dest_00,(void *)*param_7,param_7[1]);
    __dest_00 = __dest_00 + param_7[1];
  }
  uVar2 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (__dest_00 != __dest + uVar2) {
                    /* try { // try from 00321808 to 0032181f has its CatchHandler @ 003218b0 */
    FUN_0030f640(auStack_80,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                 ,0x5f6);
                    /* try { // try from 00321820 to 00321833 has its CatchHandler @ 00321898 */
    uVar3 = FUN_0030f3ac(auStack_80,"CHECK failed: (out) == (begin + result.size()): ");
                    /* try { // try from 00321834 to 0032183b has its CatchHandler @ 00321894 */
    FUN_0030f41c(auStack_48,uVar3);
    FUN_0030f658(auStack_80);
  }
  return;
}


