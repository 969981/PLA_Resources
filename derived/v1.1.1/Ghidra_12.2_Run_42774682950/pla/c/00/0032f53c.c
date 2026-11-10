/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032f53c; name: FUN_0032f53c
 */


void FUN_0032f53c(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5,
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
                   ,0x165);
                    /* try { // try from 0032f678 to 0032f68b has its CatchHandler @ 0032f85c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 0032f68c to 0032f693 has its CatchHandler @ 0032f858 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032f6c8 to 0032f6db has its CatchHandler @ 0032f874 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032f6dc to 0032f6e3 has its CatchHandler @ 0032f870 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 2) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x165);
                    /* try { // try from 0032f718 to 0032f72b has its CatchHandler @ 0032f86c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_INT64): "
                          );
                    /* try { // try from 0032f72c to 0032f733 has its CatchHandler @ 0032f868 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(byte *)((long)puVar2 + 0xb) == (param_4 & 1)) goto LAB_0032f7b8;
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x165);
                    /* try { // try from 0032f764 to 0032f777 has its CatchHandler @ 0032f864 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (extension->is_packed) == (packed): ");
                    /* try { // try from 0032f778 to 0032f77f has its CatchHandler @ 0032f860 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_0032f7d8;
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032f5a4 to 0032f5b7 has its CatchHandler @ 0032f884 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032f5b8 to 0032f5bf has its CatchHandler @ 0032f880 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 2) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x165);
                    /* try { // try from 0032f5f8 to 0032f60b has its CatchHandler @ 0032f87c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_INT64): "
                          );
                    /* try { // try from 0032f60c to 0032f613 has its CatchHandler @ 0032f878 */
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
      puVar4 = (undefined8 *)FUN_0032c850(lVar7,0x10,PTR_LAB_04373b18);
      *puVar4 = 0;
      puVar4[1] = lVar7;
    }
    *puVar2 = puVar4;
LAB_0032f7b8:
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_0032f7d8;
  }
  FUN_003280e4(puVar6,(int)uVar8 + 1);
  uVar5 = puVar6[1];
LAB_0032f7d8:
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0032f7f8 to 0032f80b has its CatchHandler @ 0032f88c */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032f80c to 0032f813 has its CatchHandler @ 0032f888 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
  }
  *(undefined8 *)(*(long *)(puVar6 + 2) + uVar8 * 8) = param_5;
  *puVar6 = (int)uVar8 + 1;
  return;
}


