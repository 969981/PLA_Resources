/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003349b0; name: FUN_003349b0
 */


long FUN_003349b0(long *param_1,undefined8 param_2,byte param_3,long *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  auVar10 = FUN_00335f6c();
  plVar4 = auVar10._0_8_;
  plVar4[2] = param_5;
  if ((auVar10._8_8_ & 0xff) == 0) {
    if (*(char *)((long)plVar4 + 9) == '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x307);
                    /* try { // try from 00334af0 to 00334b03 has its CatchHandler @ 00334cbc */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                          );
                    /* try { // try from 00334b04 to 00334b0b has its CatchHandler @ 00334cb8 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(plVar4 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00334b40 to 00334b53 has its CatchHandler @ 00334ccc */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00334b54 to 00334b5b has its CatchHandler @ 00334cc8 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x307);
                    /* try { // try from 00334b90 to 00334ba3 has its CatchHandler @ 00334cc4 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 00334ba4 to 00334bab has its CatchHandler @ 00334cc0 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    plVar6 = (long *)*plVar4;
    piVar8 = (int *)plVar6[2];
  }
  else {
    *(byte *)(plVar4 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00334a10 to 00334a23 has its CatchHandler @ 00334cdc */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00334a24 to 00334a2b has its CatchHandler @ 00334cd8 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x302);
                    /* try { // try from 00334a64 to 00334a77 has its CatchHandler @ 00334cd4 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 00334a78 to 00334a7f has its CatchHandler @ 00334cd0 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)plVar4 + 9) = 1;
    lVar9 = *param_1;
    if (lVar9 == 0) {
      plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
      *plVar4 = (long)plVar6;
      piVar8 = (int *)plVar6[2];
    }
    else {
      if (*(long *)(lVar9 + 0x70) != 0) {
        FUN_0032cf88(lVar9,0,0x18);
      }
      plVar6 = (long *)FUN_0032c850(lVar9,0x18,PTR_LAB_04373b50);
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = lVar9;
      *plVar4 = (long)plVar6;
      piVar8 = (int *)plVar6[2];
    }
  }
  if (piVar8 != (int *)0x0) {
    iVar2 = (int)plVar6[1];
    if (iVar2 < *piVar8) {
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(long *)(piVar8 + (long)iVar2 * 2 + 2) != 0) {
        return *(long *)(piVar8 + (long)iVar2 * 2 + 2);
      }
    }
  }
  lVar9 = (**(code **)(*param_4 + 0x20))(param_4,*param_1);
  lVar7 = *plVar4;
  piVar8 = *(int **)(lVar7 + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    if (iVar2 < *(int *)(lVar7 + 0xc)) {
      iVar3 = *(int *)(lVar7 + 8);
      if (iVar3 < iVar2) {
        *(undefined8 *)(piVar8 + (long)iVar2 * 2 + 2) =
             *(undefined8 *)(piVar8 + (long)iVar3 * 2 + 2);
      }
      *(long *)(piVar8 + (long)iVar3 * 2 + 2) = lVar9;
      *(int *)(lVar7 + 8) = iVar3 + 1;
      **(int **)(lVar7 + 0x10) = **(int **)(lVar7 + 0x10) + 1;
      return lVar9;
    }
  }
  FUN_0033b2d4(lVar7,lVar9);
  return lVar9;
}


