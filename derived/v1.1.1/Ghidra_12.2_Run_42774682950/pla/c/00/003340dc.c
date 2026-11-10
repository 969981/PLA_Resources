/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003340dc; name: FUN_003340dc
 */


void FUN_003340dc(long *param_1,int param_2,byte param_3,long param_4,long param_5)

{
  byte bVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_5 == 0) {
    if (*(ushort *)(param_1 + 1) < 0x101) {
      piVar4 = (int *)param_1[2];
      uVar3 = (ulong)*(ushort *)((long)param_1 + 10);
      while (piVar2 = piVar4, uVar3 != 0) {
        uVar8 = uVar3 >> 1;
        piVar4 = piVar2 + uVar8 * 8 + 8;
        uVar3 = uVar3 + ~uVar8;
        if (param_2 <= piVar2[uVar8 * 8]) {
          piVar4 = piVar2;
          uVar3 = uVar8;
        }
      }
      if (piVar2 == (int *)param_1[2] + (ulong)*(ushort *)((long)param_1 + 10) * 8) {
        return;
      }
      plVar6 = (long *)(piVar2 + 2);
      if (*piVar2 != param_2) {
        return;
      }
    }
    else {
      plVar7 = (long *)(param_1[2] + 8);
      plVar9 = (long *)*plVar7;
      if (plVar9 == (long *)0x0) {
        return;
      }
      plVar6 = plVar7;
      do {
        if (param_2 <= (int)plVar9[4]) {
          plVar6 = plVar9;
        }
        plVar9 = (long *)plVar9[(int)plVar9[4] < param_2];
      } while (plVar9 != (long *)0x0);
      if (plVar6 == plVar7) {
        return;
      }
      if (param_2 < (int)plVar6[4]) {
        return;
      }
      plVar6 = plVar6 + 5;
    }
    FUN_0032e380(plVar6);
    return;
  }
  auVar11 = FUN_00335f6c(param_1);
  plVar7 = auVar11._0_8_;
  plVar7[2] = param_4;
  if ((auVar11._8_8_ & 0xff) == 0) {
    if (*(char *)((long)plVar7 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x2a9);
                    /* try { // try from 00334278 to 0033428b has its CatchHandler @ 003343e8 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 0033428c to 00334293 has its CatchHandler @ 003343e4 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    bVar1 = *(byte *)(plVar7 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003342c8 to 003342db has its CatchHandler @ 003343e0 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003342dc to 003342e3 has its CatchHandler @ 003343dc */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x2a9);
                    /* try { // try from 00334318 to 0033432b has its CatchHandler @ 003343d8 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0033432c to 00334333 has its CatchHandler @ 003343d4 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    if ((*(byte *)((long)plVar7 + 10) >> 4 & 1) != 0) {
      (**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,param_5);
      goto LAB_003341d0;
    }
    if ((*param_1 == 0) && (puVar10 = (undefined8 *)*plVar7, puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)(puVar10);
      FUN_002e2ea0(PTR_LAB_04373088,puVar10);
    }
  }
  else {
    *(byte *)(plVar7 + 1) = param_3;
    if (0x11 < (byte)(param_3 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00334144 to 00334157 has its CatchHandler @ 003343f8 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00334158 to 0033415f has its CatchHandler @ 003343f4 */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)param_3 * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x2a4);
                    /* try { // try from 00334198 to 003341ab has its CatchHandler @ 003343f0 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type(extension->type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 003341ac to 003341b3 has its CatchHandler @ 003343ec */
      FUN_0030f41c(auStack_68,uVar5);
      FUN_0030f658(auStack_60);
    }
    *(undefined1 *)((long)plVar7 + 9) = 0;
    *(byte *)((long)plVar7 + 10) = *(byte *)((long)plVar7 + 10) & 0xf;
  }
  *plVar7 = param_5;
LAB_003341d0:
  *(byte *)((long)plVar7 + 10) = *(byte *)((long)plVar7 + 10) & 0xf0;
  return;
}


