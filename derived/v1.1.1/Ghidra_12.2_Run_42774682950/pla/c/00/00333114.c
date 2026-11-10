/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00333114; name: FUN_00333114
 */


void FUN_00333114(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined4 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  auVar9 = FUN_00335f6c();
  puVar2 = auVar9._0_8_;
  puVar2[2] = param_6;
  if ((auVar9._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar2 + 9) == '\0') {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x1f6);
                    /* try { // try from 00333250 to 00333263 has its CatchHandler @ 00333434 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 00333264 to 0033326b has its CatchHandler @ 00333430 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003332a0 to 003332b3 has its CatchHandler @ 0033344c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003332b4 to 003332bb has its CatchHandler @ 00333448 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 8) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x1f6);
                    /* try { // try from 003332f0 to 00333303 has its CatchHandler @ 00333444 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_ENUM): "
                          );
                    /* try { // try from 00333304 to 0033330b has its CatchHandler @ 00333440 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(byte *)((long)puVar2 + 0xb) == (param_4 & 1)) goto LAB_00333390;
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x1f7);
                    /* try { // try from 0033333c to 0033334f has its CatchHandler @ 0033343c */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (extension->is_packed) == (packed): ");
                    /* try { // try from 00333350 to 00333357 has its CatchHandler @ 00333438 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_003333b0;
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0033317c to 0033318f has its CatchHandler @ 0033345c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00333190 to 00333197 has its CatchHandler @ 00333458 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 8) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x1f0);
                    /* try { // try from 003331d0 to 003331e3 has its CatchHandler @ 00333454 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_ENUM): "
                          );
                    /* try { // try from 003331e4 to 003331eb has its CatchHandler @ 00333450 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
      puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
    }
    else {
      if (*(long *)(lVar7 + 0x70) != 0) {
        FUN_0032cf88(lVar7,0,0x10);
      }
      puVar4 = (undefined8 *)FUN_0032c850(lVar7,0x10,PTR_LAB_04373b10);
      *puVar4 = 0;
      puVar4[1] = lVar7;
    }
    *puVar2 = puVar4;
LAB_00333390:
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_003333b0;
  }
  FUN_003265e4(puVar6,(int)uVar8 + 1);
  uVar5 = puVar6[1];
LAB_003333b0:
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 003333d0 to 003333e3 has its CatchHandler @ 00333464 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003333e4 to 003333eb has its CatchHandler @ 00333460 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
  }
  *(undefined4 *)(*(long *)(puVar6 + 2) + uVar8 * 4) = param_5;
  *puVar6 = (int)uVar8 + 1;
  return;
}


