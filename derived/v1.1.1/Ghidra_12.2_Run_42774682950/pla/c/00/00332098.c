/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00332098; name: FUN_00332098
 */


void FUN_00332098(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5
                 )

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  auVar4 = FUN_00335f6c();
  pbVar2 = auVar4._0_8_;
  *(undefined8 *)(pbVar2 + 0x10) = param_5;
  if ((auVar4._8_8_ & 0xff) == 0) {
    if (pbVar2[9] != 0) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x16a);
                    /* try { // try from 00332194 to 003321a7 has its CatchHandler @ 00332294 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 003321a8 to 003321af has its CatchHandler @ 00332290 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = pbVar2[8];
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003321e4 to 003321f7 has its CatchHandler @ 0033228c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003321f8 to 003321ff has its CatchHandler @ 00332288 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 7) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x16a);
                    /* try { // try from 00332234 to 00332247 has its CatchHandler @ 00332284 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_BOOL): "
                          );
                    /* try { // try from 00332248 to 0033224f has its CatchHandler @ 00332280 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
  }
  else {
    pbVar2[8] = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003320f4 to 00332107 has its CatchHandler @ 003322a4 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00332108 to 0033210f has its CatchHandler @ 003322a0 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 7) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x16a);
                    /* try { // try from 00332148 to 0033215b has its CatchHandler @ 0033229c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_BOOL): "
                          );
                    /* try { // try from 0033215c to 00332163 has its CatchHandler @ 00332298 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    pbVar2[9] = 0;
  }
  pbVar2[10] = pbVar2[10] & 0xf0;
  *pbVar2 = param_4 & 1;
  return;
}


