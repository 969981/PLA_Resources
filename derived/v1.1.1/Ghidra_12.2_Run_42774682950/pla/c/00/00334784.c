/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00334784; name: FUN_00334784
 */


void FUN_00334784(long param_1,int param_2,undefined4 param_3)

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
       (plVar10 = (long *)(piVar3 + 2), *piVar3 != param_2)) goto LAB_003347e8;
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
        goto joined_r0x00334978;
      }
    }
LAB_003347e8:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x2f7);
                    /* try { // try from 00334800 to 0033481f has its CatchHandler @ 0033499c */
    uVar6 = FUN_0030f3ac(auStack_50,"CHECK failed: extension != NULL: ");
    uVar6 = FUN_0030f3ac(uVar6,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00334820 to 00334827 has its CatchHandler @ 00334998 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
    plVar10 = (long *)0x0;
  }
  cVar1 = *(char *)((long)plVar10 + 9);
joined_r0x00334978:
  if (cVar1 == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x2f8);
                    /* try { // try from 00334854 to 00334867 has its CatchHandler @ 00334984 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: ((*extension).is_repeated ? REPEATED_FIELD : OPTIONAL_FIELD) == (REPEATED_FIELD): "
                        );
                    /* try { // try from 00334868 to 0033486f has its CatchHandler @ 00334980 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  bVar2 = *(byte *)(plVar10 + 1);
  if (0x11 < (byte)(bVar2 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 003348a4 to 003348b7 has its CatchHandler @ 00334994 */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003348b8 to 003348bf has its CatchHandler @ 00334990 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar2 * 4) != 10) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x2f8);
                    /* try { // try from 003348f4 to 00334907 has its CatchHandler @ 0033498c */
    uVar6 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: (cpp_type((*extension).type)) == (WireFormatLite::CPPTYPE_MESSAGE): "
                        );
                    /* try { // try from 00334908 to 0033490f has its CatchHandler @ 00334988 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  FUN_0033b1ec(*plVar10,param_3);
  return;
}


