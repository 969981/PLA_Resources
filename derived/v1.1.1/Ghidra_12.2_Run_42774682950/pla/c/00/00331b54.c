/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00331b54; name: FUN_00331b54
 */


void FUN_00331b54(undefined8 param_1,long *param_2,undefined8 param_3,byte param_4,byte param_5,
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
                   ,0x169);
                    /* try { // try from 00331c90 to 00331ca3 has its CatchHandler @ 00331e74 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 00331ca4 to 00331cab has its CatchHandler @ 00331e70 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00331ce0 to 00331cf3 has its CatchHandler @ 00331e8c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00331cf4 to 00331cfb has its CatchHandler @ 00331e88 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 5) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x169);
                    /* try { // try from 00331d30 to 00331d43 has its CatchHandler @ 00331e84 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_DOUBLE): "
                          );
                    /* try { // try from 00331d44 to 00331d4b has its CatchHandler @ 00331e80 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(byte *)((long)puVar2 + 0xb) == (param_5 & 1)) goto LAB_00331dd0;
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x169);
                    /* try { // try from 00331d7c to 00331d8f has its CatchHandler @ 00331e7c */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (extension->is_packed) == (packed): ");
                    /* try { // try from 00331d90 to 00331d97 has its CatchHandler @ 00331e78 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_00331df0;
  }
  else {
    *(byte *)(puVar2 + 1) = param_4;
    if (0x11 < (byte)(param_4 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00331bbc to 00331bcf has its CatchHandler @ 00331e9c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00331bd0 to 00331bd7 has its CatchHandler @ 00331e98 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_4 * 4) != 5) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x169);
                    /* try { // try from 00331c10 to 00331c23 has its CatchHandler @ 00331e94 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_DOUBLE): "
                          );
                    /* try { // try from 00331c24 to 00331c2b has its CatchHandler @ 00331e90 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_5 & 1;
    lVar7 = *param_2;
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
      puVar4 = (undefined8 *)FUN_0032c850(lVar7,0x10,PTR_LAB_04373b38);
      *puVar4 = 0;
      puVar4[1] = lVar7;
    }
    *puVar2 = puVar4;
LAB_00331dd0:
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_00331df0;
  }
  FUN_0032a964(puVar6,(int)uVar8 + 1);
  uVar5 = puVar6[1];
LAB_00331df0:
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00331e10 to 00331e23 has its CatchHandler @ 00331ea4 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00331e24 to 00331e2b has its CatchHandler @ 00331ea0 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
  }
  *(undefined8 *)(*(long *)(puVar6 + 2) + uVar8 * 8) = param_1;
  *puVar6 = (int)uVar8 + 1;
  return;
}


