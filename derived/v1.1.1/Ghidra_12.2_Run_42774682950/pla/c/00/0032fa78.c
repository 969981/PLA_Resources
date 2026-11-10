/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032fa78; name: FUN_0032fa78
 */


void FUN_0032fa78(undefined8 param_1,undefined8 param_2,byte param_3,undefined4 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  auVar4 = FUN_00335f6c();
  puVar2 = auVar4._0_8_;
  *(undefined8 *)(puVar2 + 4) = param_5;
  if ((auVar4._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar2 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x166);
                    /* try { // try from 0032fb74 to 0032fb87 has its CatchHandler @ 0032fc70 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 0032fb88 to 0032fb8f has its CatchHandler @ 0032fc6c */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar2 + 2);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032fbc4 to 0032fbd7 has its CatchHandler @ 0032fc68 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032fbd8 to 0032fbdf has its CatchHandler @ 0032fc64 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 3) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x166);
                    /* try { // try from 0032fc14 to 0032fc27 has its CatchHandler @ 0032fc60 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_UINT32): "
                          );
                    /* try { // try from 0032fc28 to 0032fc2f has its CatchHandler @ 0032fc5c */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
  }
  else {
    *(byte *)(puVar2 + 2) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032fad4 to 0032fae7 has its CatchHandler @ 0032fc80 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032fae8 to 0032faef has its CatchHandler @ 0032fc7c */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 3) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x166);
                    /* try { // try from 0032fb28 to 0032fb3b has its CatchHandler @ 0032fc78 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_UINT32): "
                          );
                    /* try { // try from 0032fb3c to 0032fb43 has its CatchHandler @ 0032fc74 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar2 + 9) = 0;
  }
  *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
  *puVar2 = param_4;
  return;
}


