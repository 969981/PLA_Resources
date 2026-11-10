/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00333afc; name: FUN_00333afc
 */


undefined8 * FUN_00333afc(long *param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  auVar9 = FUN_00335f6c();
  puVar5 = auVar9._0_8_;
  puVar5[2] = param_4;
  if ((auVar9._8_8_ & 0xff) == 0) {
    if (*(char *)((long)puVar5 + 9) == '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x234);
                    /* try { // try from 00333c3c to 00333c4f has its CatchHandler @ 00333e3c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 00333c50 to 00333c57 has its CatchHandler @ 00333e38 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(puVar5 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00333c8c to 00333c9f has its CatchHandler @ 00333e4c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00333ca0 to 00333ca7 has its CatchHandler @ 00333e48 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 9) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x234);
                    /* try { // try from 00333cdc to 00333cef has its CatchHandler @ 00333e44 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_STRING): "
                          );
                    /* try { // try from 00333cf0 to 00333cf7 has its CatchHandler @ 00333e40 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    plVar4 = (long *)*puVar5;
    piVar6 = (int *)plVar4[2];
joined_r0x00333d08:
    if (piVar6 != (int *)0x0) goto LAB_00333d0c;
LAB_00333da0:
    iVar7 = *(int *)((long)plVar4 + 0xc);
  }
  else {
    *(byte *)(puVar5 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00333b58 to 00333b6b has its CatchHandler @ 00333e5c */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00333b6c to 00333b73 has its CatchHandler @ 00333e58 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 9) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x22e);
                    /* try { // try from 00333bac to 00333bbf has its CatchHandler @ 00333e54 */
      uVar3 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_STRING): "
                          );
                    /* try { // try from 00333bc0 to 00333bc7 has its CatchHandler @ 00333e50 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)puVar5 + 9) = 1;
    *(undefined1 *)((long)puVar5 + 0xb) = 0;
    lVar8 = *param_1;
    if (lVar8 == 0) {
      plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar4 != (long *)0x0) {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      *puVar5 = plVar4;
      piVar6 = (int *)plVar4[2];
      goto joined_r0x00333d08;
    }
    if (*(long *)(lVar8 + 0x70) != 0) {
      FUN_0032cf88(lVar8,0,0x18);
    }
    plVar4 = (long *)FUN_0032c850(lVar8,0x18,PTR_LAB_04373b48);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = lVar8;
    *puVar5 = plVar4;
    piVar6 = (int *)plVar4[2];
    if (piVar6 == (int *)0x0) goto LAB_00333da0;
LAB_00333d0c:
    iVar2 = (int)plVar4[1];
    iVar7 = *piVar6;
    if (iVar2 < iVar7) {
      *(int *)(plVar4 + 1) = iVar2 + 1;
      return *(undefined8 **)(piVar6 + (long)iVar2 * 2 + 2);
    }
    if (iVar7 != *(int *)((long)plVar4 + 0xc)) {
      *piVar6 = iVar7 + 1;
      lVar8 = *plVar4;
      goto joined_r0x00333dc4;
    }
  }
  FUN_0032bcac(plVar4,iVar7 + 1);
  *(int *)plVar4[2] = *(int *)plVar4[2] + 1;
  lVar8 = *plVar4;
joined_r0x00333dc4:
  if (lVar8 == 0) {
    puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    }
  }
  else {
    if (*(long *)(lVar8 + 0x70) != 0) {
      FUN_0032cf88(lVar8,0,0x18);
    }
    puVar5 = (undefined8 *)FUN_0032c850(lVar8,0x18,PTR_LAB_043730d0);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
  }
  lVar8 = plVar4[1];
  *(int *)(plVar4 + 1) = (int)lVar8 + 1;
  *(undefined8 **)(plVar4[2] + (long)(int)lVar8 * 8 + 8) = puVar5;
  return puVar5;
}


