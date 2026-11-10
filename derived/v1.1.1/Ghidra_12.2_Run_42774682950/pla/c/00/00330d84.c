/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00330d84; name: FUN_00330d84
 */


void FUN_00330d84(undefined4 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
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
                   ,0x168);
                    /* try { // try from 00330e80 to 00330e93 has its CatchHandler @ 00330f7c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 00330e94 to 00330e9b has its CatchHandler @ 00330f78 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar2 + 2);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00330ed0 to 00330ee3 has its CatchHandler @ 00330f74 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00330ee4 to 00330eeb has its CatchHandler @ 00330f70 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 6) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x168);
                    /* try { // try from 00330f20 to 00330f33 has its CatchHandler @ 00330f6c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_FLOAT): "
                          );
                    /* try { // try from 00330f34 to 00330f3b has its CatchHandler @ 00330f68 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
  }
  else {
    *(byte *)(puVar2 + 2) = param_4;
    if (0x11 < (byte)(param_4 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00330de0 to 00330df3 has its CatchHandler @ 00330f8c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00330df4 to 00330dfb has its CatchHandler @ 00330f88 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_4 * 4) != 6) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x168);
                    /* try { // try from 00330e34 to 00330e47 has its CatchHandler @ 00330f84 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_FLOAT): "
                          );
                    /* try { // try from 00330e48 to 00330e4f has its CatchHandler @ 00330f80 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar2 + 9) = 0;
  }
  *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
  *puVar2 = param_1;
  return;
}


