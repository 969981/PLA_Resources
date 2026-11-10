/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d5cc; name: FUN_0039d5cc
 */


undefined8 FUN_0039d5cc(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  puVar1 = (undefined8 *)FUN_0032e2dc(param_1,*(undefined4 *)(param_2 + 0x44));
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)((long)puVar1 + 9) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xe4);
                    /* try { // try from 0039d618 to 0039d62b has its CatchHandler @ 0039d740 */
      uVar2 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: ((*extension).is_repeated ? FieldDescriptor::LABEL_REPEATED : FieldDescriptor::LABEL_OPTIONAL) == (FieldDescriptor::LABEL_OPTIONAL): "
                          );
                    /* try { // try from 0039d62c to 0039d633 has its CatchHandler @ 0039d73c */
      FUN_0030f41c(auStack_68,uVar2);
      FUN_0030f658(auStack_60);
    }
    if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(byte *)(puVar1 + 1) * 4) != 10) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xe4);
                    /* try { // try from 0039d66c to 0039d67f has its CatchHandler @ 0039d738 */
      uVar2 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (cpp_type((*extension).type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d680 to 0039d687 has its CatchHandler @ 0039d734 */
      FUN_0030f41c(auStack_68,uVar2);
      FUN_0030f658(auStack_60);
    }
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      uVar2 = *puVar1;
    }
    else {
      plVar3 = (long *)*puVar1;
      uVar2 = FUN_00342dac(param_2);
      uVar2 = (**(code **)(*param_3 + 0x10))(param_3,uVar2);
      uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar2);
      if ((*param_1 == 0) && (puVar1 = (undefined8 *)*puVar1, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1);
        FUN_002e2ea0(PTR_LAB_04373088,puVar1);
      }
    }
    FUN_0033440c(param_1,*(undefined4 *)(param_2 + 0x44));
  }
  return uVar2;
}


