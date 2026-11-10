/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d754; name: FUN_0039d754
 */


undefined8 * FUN_0039d754(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined **local_68;
  long *plStack_60;
  undefined8 *local_38;
  long local_30;
  undefined *puStack_28;
  undefined ***local_18;
  
  uVar2 = FUN_0032e954(param_1,*(undefined4 *)(param_2 + 0x44),param_2,&local_38);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)local_38 + 9) == '\0') {
      FUN_0030f640(&local_68,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xfe);
                    /* try { // try from 0039d880 to 0039d893 has its CatchHandler @ 0039d950 */
      uVar4 = FUN_0030f3ac(&local_68,
                           "CHECK failed: ((*extension).is_repeated ? FieldDescriptor::LABEL_REPEATED : FieldDescriptor::LABEL_OPTIONAL) == (FieldDescriptor::LABEL_REPEATED): "
                          );
                    /* try { // try from 0039d894 to 0039d89b has its CatchHandler @ 0039d94c */
      FUN_0030f41c(&local_18,uVar4);
      FUN_0030f658(&local_68);
    }
    if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(byte *)(local_38 + 1) * 4) != 10) {
      FUN_0030f640(&local_68,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xfe);
                    /* try { // try from 0039d8d8 to 0039d8eb has its CatchHandler @ 0039d958 */
      uVar4 = FUN_0030f3ac(&local_68,
                           "CHECK failed: (cpp_type((*extension).type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d8ec to 0039d8f3 has its CatchHandler @ 0039d954 */
      FUN_0030f41c(&local_18,uVar4);
      FUN_0030f658(&local_68);
    }
  }
  else {
    puVar3 = *(ulong **)(param_2 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_28 = PTR_LAB_04373a98;
      local_30 = param_2;
      if (*puVar3 != 0xffffffffffffffff) {
        local_68 = &puStack_28;
        plStack_60 = &local_30;
        local_18 = &local_68;
        std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar1 = *(uint *)(param_2 + 0x38);
    *(char *)(local_38 + 1) = (char)uVar1;
    if (*(int *)(PTR_DAT_04373ab0 + ((ulong)uVar1 & 0xff) * 4) != 10) {
      FUN_0030f640(&local_68,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xf9);
                    /* try { // try from 0039d7fc to 0039d80f has its CatchHandler @ 0039d960 */
      uVar4 = FUN_0030f3ac(&local_68,
                           "CHECK failed: (cpp_type(extension->type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d810 to 0039d817 has its CatchHandler @ 0039d95c */
      FUN_0030f41c(&local_18,uVar4);
      FUN_0030f658(&local_68);
    }
    *(undefined1 *)((long)local_38 + 9) = 1;
    lVar6 = *param_1;
    if (lVar6 == 0) {
      plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar5 != (long *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar6 + 0x70) != 0) {
        FUN_0032cf88(lVar6,0,0x18);
      }
      plVar5 = (long *)FUN_0032c850(lVar6,0x18,PTR_LAB_04373b50);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = lVar6;
    }
    *local_38 = plVar5;
  }
  return local_38;
}


