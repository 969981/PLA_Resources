/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003338d0; name: FUN_003338d0
 */


void FUN_003338d0(long param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar5 = *(int **)(param_1 + 0x10);
    uVar4 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar3 = piVar5, uVar4 != 0) {
      uVar8 = uVar4 >> 1;
      piVar5 = piVar3 + uVar8 * 8 + 8;
      uVar4 = uVar4 + ~uVar8;
      if (param_2 <= piVar3[uVar8 * 8]) {
        piVar5 = piVar3;
        uVar4 = uVar8;
      }
    }
    if ((piVar3 == *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) ||
       (plVar10 = (long *)(piVar3 + 2), *piVar3 != param_2)) goto LAB_00333934;
  }
  else {
    plVar10 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar9 = (long *)*plVar10;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar10;
      do {
        if (param_2 <= (int)plVar9[4]) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[(int)plVar9[4] < param_2];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 != plVar10) && ((int)plVar7[4] <= param_2)) {
        plVar10 = plVar7 + 5;
        cVar1 = *(char *)((long)plVar7 + 0x31);
        goto joined_r0x00333ac4;
      }
    }
LAB_00333934:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x21d);
                    /* try { // try from 0033394c to 0033396b has its CatchHandler @ 00333ae8 */
    uVar6 = FUN_0030f3ac(auStack_50,"CHECK failed: extension != NULL: ");
    uVar6 = FUN_0030f3ac(uVar6,"Index out-of-bounds (field is empty).");
                    /* try { // try from 0033396c to 00333973 has its CatchHandler @ 00333ae4 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
    plVar10 = (long *)0x0;
  }
  cVar1 = *(char *)((long)plVar10 + 9);
joined_r0x00333ac4:
  if (cVar1 == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x21e);
                    /* try { // try from 003339a0 to 003339b3 has its CatchHandler @ 00333ad0 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                        );
                    /* try { // try from 003339b4 to 003339bb has its CatchHandler @ 00333acc */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  bVar2 = *(byte *)(plVar10 + 1);
  if (0x11 < (byte)(bVar2 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 003339f0 to 00333a03 has its CatchHandler @ 00333ae0 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00333a04 to 00333a0b has its CatchHandler @ 00333adc */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar2 * 4) != 9) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x21e);
                    /* try { // try from 00333a40 to 00333a53 has its CatchHandler @ 00333ad8 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_STRING): "
                        );
                    /* try { // try from 00333a54 to 00333a5b has its CatchHandler @ 00333ad4 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  FUN_0032b79c(*plVar10,param_3);
  return;
}


