/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032f0f0; name: FUN_0032f0f0
 */


void FUN_0032f0f0(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  auVar4 = FUN_00335f6c();
  puVar2 = auVar4._0_8_;
  puVar2[2] = param_5;
  if ((auVar4._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar2 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x165);
                    /* try { // try from 0032f1ec to 0032f1ff has its CatchHandler @ 0032f2e8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 0032f200 to 0032f207 has its CatchHandler @ 0032f2e4 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032f23c to 0032f24f has its CatchHandler @ 0032f2e0 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032f250 to 0032f257 has its CatchHandler @ 0032f2dc */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 2) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x165);
                    /* try { // try from 0032f28c to 0032f29f has its CatchHandler @ 0032f2d8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_INT64): "
                          );
                    /* try { // try from 0032f2a0 to 0032f2a7 has its CatchHandler @ 0032f2d4 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032f14c to 0032f15f has its CatchHandler @ 0032f2f8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032f160 to 0032f167 has its CatchHandler @ 0032f2f4 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 2) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x165);
                    /* try { // try from 0032f1a0 to 0032f1b3 has its CatchHandler @ 0032f2f0 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_INT64): "
                          );
                    /* try { // try from 0032f1b4 to 0032f1bb has its CatchHandler @ 0032f2ec */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar2 + 9) = 0;
  }
  *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
  *puVar2 = param_4;
  return;
}


