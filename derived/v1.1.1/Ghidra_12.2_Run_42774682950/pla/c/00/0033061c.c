/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033061c; name: FUN_0033061c
 */


undefined8 FUN_0033061c(long param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
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
       (plVar11 = (long *)(piVar3 + 2), *piVar3 != param_2)) goto LAB_00330680;
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
        goto joined_r0x00330814;
      }
    }
LAB_00330680:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x167);
                    /* try { // try from 00330698 to 003306b7 has its CatchHandler @ 00330838 */
    uVar6 = FUN_0030f3ac(auStack_50,"CHECK failed: extension != NULL: ");
    uVar6 = FUN_0030f3ac(uVar6,"Index out-of-bounds (field is empty).");
                    /* try { // try from 003306b8 to 003306bf has its CatchHandler @ 00330834 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
    plVar11 = (long *)0x0;
  }
  cVar1 = *(char *)((long)plVar11 + 9);
joined_r0x00330814:
  if (cVar1 == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x167);
                    /* try { // try from 003306ec to 003306ff has its CatchHandler @ 00330820 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                        );
                    /* try { // try from 00330700 to 00330707 has its CatchHandler @ 0033081c */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  bVar2 = *(byte *)(plVar11 + 1);
  if (0x11 < (byte)(bVar2 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 0033073c to 0033074f has its CatchHandler @ 00330830 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00330750 to 00330757 has its CatchHandler @ 0033082c */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar2 * 4) != 4) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x167);
                    /* try { // try from 0033078c to 0033079f has its CatchHandler @ 00330828 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_UINT64): "
                        );
                    /* try { // try from 003307a0 to 003307a7 has its CatchHandler @ 00330824 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  puVar7 = (undefined8 *)FUN_00329350(*plVar11,param_3);
  return *puVar7;
}


