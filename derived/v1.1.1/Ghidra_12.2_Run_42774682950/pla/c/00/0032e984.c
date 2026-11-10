/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e984; name: FUN_0032e984
 */


undefined4 FUN_0032e984(long param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar5 = *(int **)(param_1 + 0x10);
    uVar4 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar3 = piVar5, uVar4 != 0) {
      uVar9 = uVar4 >> 1;
      piVar5 = piVar3 + uVar9 * 8 + 8;
      uVar4 = uVar4 + ~uVar9;
      if (param_2 <= piVar3[uVar9 * 8]) {
        piVar5 = piVar3;
        uVar4 = uVar9;
      }
    }
    if ((piVar3 == *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) ||
       (plVar11 = (long *)(piVar3 + 2), *piVar3 != param_2)) goto LAB_0032e9e8;
  }
  else {
    plVar11 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar10 = (long *)*plVar11;
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar11;
      do {
        if (param_2 <= (int)plVar10[4]) {
          plVar8 = plVar10;
        }
        plVar10 = (long *)plVar10[(int)plVar10[4] < param_2];
      } while (plVar10 != (long *)0x0);
      if ((plVar8 != plVar11) && ((int)plVar8[4] <= param_2)) {
        plVar11 = plVar8 + 5;
        cVar1 = *(char *)((long)plVar8 + 0x31);
        goto joined_r0x0032eb7c;
      }
    }
LAB_0032e9e8:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x164);
                    /* try { // try from 0032ea00 to 0032ea1f has its CatchHandler @ 0032eba0 */
    uVar6 = FUN_0030f3ac(auStack_50,"CHECK failed: extension != NULL: ");
    uVar6 = FUN_0030f3ac(uVar6,"Index out-of-bounds (field is empty).");
                    /* try { // try from 0032ea20 to 0032ea27 has its CatchHandler @ 0032eb9c */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
    plVar11 = (long *)0x0;
  }
  cVar1 = *(char *)((long)plVar11 + 9);
joined_r0x0032eb7c:
  if (cVar1 == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x164);
                    /* try { // try from 0032ea54 to 0032ea67 has its CatchHandler @ 0032eb88 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                        );
                    /* try { // try from 0032ea68 to 0032ea6f has its CatchHandler @ 0032eb84 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  bVar2 = *(byte *)(plVar11 + 1);
  if (0x11 < (byte)(bVar2 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 0032eaa4 to 0032eab7 has its CatchHandler @ 0032eb98 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032eab8 to 0032eabf has its CatchHandler @ 0032eb94 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar2 * 4) != 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x164);
                    /* try { // try from 0032eaf4 to 0032eb07 has its CatchHandler @ 0032eb90 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_INT32): "
                        );
                    /* try { // try from 0032eb08 to 0032eb0f has its CatchHandler @ 0032eb8c */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  puVar7 = (undefined4 *)FUN_00326ad0(*plVar11,param_3);
  return *puVar7;
}


