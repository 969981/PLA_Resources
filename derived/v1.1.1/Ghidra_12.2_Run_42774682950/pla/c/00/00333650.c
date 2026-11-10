/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00333650; name: FUN_00333650
 */


undefined8 FUN_00333650(long *param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  auVar6 = FUN_00335f6c();
  puVar2 = auVar6._0_8_;
  puVar2[2] = param_4;
  if ((auVar6._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar2 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x214);
                    /* try { // try from 00333778 to 0033378b has its CatchHandler @ 003338ac */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 0033378c to 00333793 has its CatchHandler @ 003338a8 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar2 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003337c8 to 003337db has its CatchHandler @ 003338a4 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003337dc to 003337e3 has its CatchHandler @ 003338a0 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 9) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x214);
                    /* try { // try from 00333818 to 0033382b has its CatchHandler @ 0033389c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_STRING): "
                          );
                    /* try { // try from 0033382c to 00333833 has its CatchHandler @ 00333898 */
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
                    /* try { // try from 003336ac to 003336bf has its CatchHandler @ 003338bc */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003336c0 to 003336c7 has its CatchHandler @ 003338b8 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 9) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x210);
                    /* try { // try from 00333700 to 00333713 has its CatchHandler @ 003338b4 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_STRING): "
                          );
                    /* try { // try from 00333714 to 0033371b has its CatchHandler @ 003338b0 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar2 + 9) = 0;
    lVar5 = *param_1;
    if (lVar5 == 0) {
      puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x18);
      }
      puVar4 = (undefined8 *)FUN_0032c850(lVar5,0x18,PTR_LAB_043730d0);
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
    }
    *puVar2 = puVar4;
  }
  *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
  return *puVar2;
}


