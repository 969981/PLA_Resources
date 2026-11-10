/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00333e70; name: FUN_00333e70
 */


undefined8
FUN_00333e70(undefined8 *param_1,undefined8 param_2,byte param_3,long *param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  auVar4 = FUN_00335f6c();
  puVar2 = auVar4._0_8_;
  puVar2[2] = param_5;
  if ((auVar4._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar2 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x25e);
                    /* try { // try from 00333fa0 to 00333fb3 has its CatchHandler @ 003340b8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 00333fb4 to 00333fbb has its CatchHandler @ 003340b4 */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00333ff0 to 00334003 has its CatchHandler @ 003340b0 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00334004 to 0033400b has its CatchHandler @ 003340ac */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x25e);
                    /* try { // try from 00334040 to 00334053 has its CatchHandler @ 003340a8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 00334054 to 0033405b has its CatchHandler @ 003340a4 */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)((long)puVar2 + 10);
    *(byte *)((long)puVar2 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) == 0) {
      uVar3 = *puVar2;
    }
    else {
      uVar3 = (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2,param_4);
    }
  }
  else {
    *(byte *)(puVar2 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00333ed0 to 00333ee3 has its CatchHandler @ 003340c8 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00333ee4 to 00333eeb has its CatchHandler @ 003340c4 */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,599);
                    /* try { // try from 00333f24 to 00333f37 has its CatchHandler @ 003340c0 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 00333f38 to 00333f3f has its CatchHandler @ 003340bc */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar2 + 9) = 0;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf;
    uVar3 = (**(code **)(*param_4 + 0x20))(param_4,*param_1);
    *puVar2 = uVar3;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
  }
  return uVar3;
}


