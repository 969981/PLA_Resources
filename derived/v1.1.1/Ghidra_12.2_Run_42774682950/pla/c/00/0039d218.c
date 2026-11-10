/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d218; name: FUN_0039d218
 */


undefined8 FUN_0039d218(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar1 = (undefined8 *)FUN_0032df70();
  if ((puVar1 == (undefined8 *)0x0) || ((*(byte *)((long)puVar1 + 10) & 1) != 0)) {
    pcVar3 = *(code **)(*param_4 + 0x10);
  }
  else {
    if (*(char *)((long)puVar1 + 9) != '\0') {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0x9d);
                    /* try { // try from 0039d260 to 0039d273 has its CatchHandler @ 0039d350 */
      uVar2 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: ((*extension).is_repeated ? FieldDescriptor::LABEL_REPEATED : FieldDescriptor::LABEL_OPTIONAL) == (FieldDescriptor::LABEL_OPTIONAL): "
                          );
                    /* try { // try from 0039d274 to 0039d27b has its CatchHandler @ 0039d34c */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
    }
    if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(byte *)(puVar1 + 1) * 4) != 10) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0x9d);
                    /* try { // try from 0039d2b4 to 0039d2c7 has its CatchHandler @ 0039d348 */
      uVar2 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: (cpp_type((*extension).type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d2c8 to 0039d2cf has its CatchHandler @ 0039d344 */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
    }
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      return *puVar1;
    }
    plVar4 = (long *)*puVar1;
    param_3 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
    pcVar3 = *(code **)(*plVar4 + 0x18);
    param_4 = plVar4;
  }
  uVar2 = (*pcVar3)(param_4,param_3);
  return uVar2;
}


