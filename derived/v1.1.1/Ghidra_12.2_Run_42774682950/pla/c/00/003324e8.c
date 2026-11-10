/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003324e8; name: FUN_003324e8
 */


void FUN_003324e8(long *param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
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
                   ,0x16a);
                    /* try { // try from 00332624 to 00332637 has its CatchHandler @ 0033280c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 00332638 to 0033263f has its CatchHandler @ 00332808 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00332674 to 00332687 has its CatchHandler @ 00332824 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00332688 to 0033268f has its CatchHandler @ 00332820 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 7) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x16a);
                    /* try { // try from 003326c4 to 003326d7 has its CatchHandler @ 0033281c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_BOOL): "
                          );
                    /* try { // try from 003326d8 to 003326df has its CatchHandler @ 00332818 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(byte *)((long)puVar2 + 0xb) == (param_4 & 1)) goto LAB_00332764;
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x16a);
                    /* try { // try from 00332710 to 00332723 has its CatchHandler @ 00332814 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (extension->is_packed) == (packed): ");
                    /* try { // try from 00332724 to 0033272b has its CatchHandler @ 00332810 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_00332784;
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00332550 to 00332563 has its CatchHandler @ 00332834 */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00332564 to 0033256b has its CatchHandler @ 00332830 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 7) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x16a);
                    /* try { // try from 003325a4 to 003325b7 has its CatchHandler @ 0033282c */
      uVar3 = FUN_0030f3ac(auStack_70,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_BOOL): "
                          );
                    /* try { // try from 003325b8 to 003325bf has its CatchHandler @ 00332828 */
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
      puVar4 = (undefined8 *)FUN_0032c850(lVar7,0x10,PTR_LAB_04373b40);
      *puVar4 = 0;
      puVar4[1] = lVar7;
    }
    *puVar2 = puVar4;
LAB_00332764:
    puVar6 = (uint *)*puVar2;
    uVar8 = (ulong)*puVar6;
    uVar5 = puVar6[1];
    if (*puVar6 != uVar5) goto LAB_00332784;
  }
  FUN_00325870(puVar6,(int)uVar8 + 1);
  uVar5 = puVar6[1];
LAB_00332784:
  if ((int)uVar5 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 003327a4 to 003327b7 has its CatchHandler @ 0033283c */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003327b8 to 003327bf has its CatchHandler @ 00332838 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
  }
  *(byte *)(*(long *)(puVar6 + 2) + uVar8) = param_5 & 1;
  *puVar6 = (int)uVar8 + 1;
  return;
}


