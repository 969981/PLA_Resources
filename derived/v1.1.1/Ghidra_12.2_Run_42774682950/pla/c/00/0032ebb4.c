/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032ebb4; name: FUN_0032ebb4
 */


void FUN_0032ebb4(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined4 param_5,
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
                   ,0x164);
                    /* try { // try from 0032ecf0 to 0032ed03 has its CatchHandler @ 0032eed4 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 0032ed04 to 0032ed0b has its CatchHandler @ 0032eed0 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032ed40 to 0032ed53 has its CatchHandler @ 0032eeec */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032ed54 to 0032ed5b has its CatchHandler @ 0032eee8 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 1) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x164);
                    /* try { // try from 0032ed90 to 0032eda3 has its CatchHandler @ 0032eee4 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_INT32): "
                          );
                    /* try { // try from 0032eda4 to 0032edab has its CatchHandler @ 0032eee0 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(byte *)((long)puVar2 + 0xb) == (param_4 & 1)) goto LAB_0032ee30;
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x164);
                    /* try { // try from 0032eddc to 0032edef has its CatchHandler @ 0032eedc */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (extension->is_packed) == (packed): ");
                    /* try { // try from 0032edf0 to 0032edf7 has its CatchHandler @ 0032eed8 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_0032ee50;
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032ec1c to 0032ec2f has its CatchHandler @ 0032eefc */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032ec30 to 0032ec37 has its CatchHandler @ 0032eef8 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 1) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x164);
                    /* try { // try from 0032ec70 to 0032ec83 has its CatchHandler @ 0032eef4 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_INT32): "
                          );
                    /* try { // try from 0032ec84 to 0032ec8b has its CatchHandler @ 0032eef0 */
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
LAB_0032ee30:
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_0032ee50;
  }
  FUN_003265e4(puVar6,(int)uVar8 + 1);
  uVar5 = puVar6[1];
LAB_0032ee50:
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0032ee70 to 0032ee83 has its CatchHandler @ 0032ef04 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032ee84 to 0032ee8b has its CatchHandler @ 0032ef00 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
  }
  *(undefined4 *)(*(long *)(puVar6 + 2) + uVar8 * 4) = param_5;
  *puVar6 = (int)uVar8 + 1;
  return;
}


