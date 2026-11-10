/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00330bb0; name: FUN_00330bb0
 */


int FUN_00330bb0(int param_1,long param_2,int param_3)

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
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (*(ushort *)(param_2 + 8) < 0x101) {
    piVar4 = *(int **)(param_2 + 0x10);
    uVar3 = (ulong)*(ushort *)(param_2 + 10);
    while (piVar2 = piVar4, uVar3 != 0) {
      uVar8 = uVar3 >> 1;
      piVar4 = piVar2 + uVar8 * 8 + 8;
      uVar3 = uVar3 + ~uVar8;
      if (param_3 <= piVar2[uVar8 * 8]) {
        piVar4 = piVar2;
        uVar3 = uVar8;
      }
    }
    if (piVar2 == *(int **)(param_2 + 0x10) + (ulong)*(ushort *)(param_2 + 10) * 8) {
      return param_1;
    }
    plVar6 = (long *)(piVar2 + 2);
    if (*piVar2 != param_3) {
      return param_1;
    }
    bVar1 = *(byte *)((long)piVar2 + 0x12);
  }
  else {
    plVar6 = (long *)(*(long *)(param_2 + 0x10) + 8);
    plVar9 = (long *)*plVar6;
    if (plVar9 == (long *)0x0) {
      return param_1;
    }
    plVar7 = plVar6;
    do {
      if (param_3 <= (int)plVar9[4]) {
        plVar7 = plVar9;
      }
      plVar9 = (long *)plVar9[(int)plVar9[4] < param_3];
    } while (plVar9 != (long *)0x0);
    if (plVar7 == plVar6) {
      return param_1;
    }
    if (param_3 < (int)plVar7[4]) {
      return param_1;
    }
    plVar6 = plVar7 + 5;
    bVar1 = *(byte *)((long)plVar7 + 0x32);
  }
  if ((bVar1 & 1) == 0) {
    if (*(char *)((long)plVar6 + 9) != '\0') {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x168);
                    /* try { // try from 00330c38 to 00330c4b has its CatchHandler @ 00330d70 */
      uVar5 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (OPTIONAL_FIELD): "
                          );
                    /* try { // try from 00330c4c to 00330c53 has its CatchHandler @ 00330d6c */
      FUN_0030f41c(auStack_18,uVar5);
      FUN_0030f658(auStack_50);
    }
    bVar1 = *(byte *)(plVar6 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00330c88 to 00330c9b has its CatchHandler @ 00330d68 */
      uVar5 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00330c9c to 00330ca3 has its CatchHandler @ 00330d64 */
      FUN_0030f41c(auStack_18,uVar5);
      FUN_0030f658(auStack_50);
    }
    if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) != 6) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x168);
                    /* try { // try from 00330cd8 to 00330ceb has its CatchHandler @ 00330d60 */
      uVar5 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_FLOAT): "
                          );
                    /* try { // try from 00330cec to 00330cf3 has its CatchHandler @ 00330d5c */
      FUN_0030f41c(auStack_18,uVar5);
      FUN_0030f658(auStack_50);
    }
    param_1 = (int)*plVar6;
  }
  return param_1;
}


