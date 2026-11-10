/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d364; name: FUN_0039d364
 */


undefined8 FUN_0039d364(undefined8 *param_1,long param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined **local_70;
  long *plStack_68;
  undefined8 *local_40;
  long local_38;
  undefined *puStack_30;
  undefined1 *local_28;
  
  uVar3 = FUN_0032e954(param_1,*(undefined4 *)(param_2 + 0x44),param_2,&local_40);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)local_40 + 9) != '\0') {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xb6);
                    /* try { // try from 0039d4bc to 0039d4cf has its CatchHandler @ 0039d5b8 */
      uVar5 = FUN_0030f3ac(&local_70,
                           "CHECK failed: ((*extension).is_repeated ? FieldDescriptor::LABEL_REPEATED : FieldDescriptor::LABEL_OPTIONAL) == (FieldDescriptor::LABEL_OPTIONAL): "
                          );
                    /* try { // try from 0039d4d0 to 0039d4d7 has its CatchHandler @ 0039d5b4 */
      FUN_0030f41c(&local_28,uVar5);
      FUN_0030f658(&local_70);
    }
    if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(byte *)(local_40 + 1) * 4) != 10) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xb6);
                    /* try { // try from 0039d514 to 0039d527 has its CatchHandler @ 0039d5a8 */
      uVar5 = FUN_0030f3ac(&local_70,
                           "CHECK failed: (cpp_type((*extension).type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d528 to 0039d52f has its CatchHandler @ 0039d5a4 */
      FUN_0030f41c(&local_28,uVar5);
      FUN_0030f658(&local_70);
    }
    bVar2 = *(byte *)((long)local_40 + 10);
    *(byte *)((long)local_40 + 10) = bVar2 & 0xf0;
    if ((bVar2 >> 4 & 1) != 0) {
      plVar6 = (long *)*local_40;
      uVar5 = FUN_00342dac(param_2);
      uVar5 = (**(code **)(*param_3 + 0x10))(param_3,uVar5);
      uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar5);
      return uVar5;
    }
  }
  else {
    puVar4 = *(ulong **)(param_2 + 0x30);
    if (puVar4 != (ulong *)0x0) {
      puStack_30 = PTR_LAB_04373a98;
      local_38 = param_2;
      if (*puVar4 != 0xffffffffffffffff) {
        local_70 = &puStack_30;
        plStack_68 = &local_38;
        local_28 = (undefined1 *)&local_70;
        std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar1 = *(uint *)(param_2 + 0x38);
    *(char *)(local_40 + 1) = (char)uVar1;
    if (*(int *)(PTR_DAT_04373ab0 + ((ulong)uVar1 & 0xff) * 4) != 10) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0xac);
                    /* try { // try from 0039d410 to 0039d423 has its CatchHandler @ 0039d5b0 */
      uVar5 = FUN_0030f3ac(&local_70,
                           "CHECK failed: (cpp_type(extension->type)) == (FieldDescriptor::CPPTYPE_MESSAGE): "
                          );
                    /* try { // try from 0039d424 to 0039d42b has its CatchHandler @ 0039d5ac */
      FUN_0030f41c(&local_28,uVar5);
      FUN_0030f658(&local_70);
    }
    *(undefined1 *)((long)local_40 + 9) = 0;
    *(undefined1 *)((long)local_40 + 0xb) = 0;
    uVar5 = FUN_00342dac(param_2);
    plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar5);
    *(byte *)((long)local_40 + 10) = *(byte *)((long)local_40 + 10) & 0xf;
    uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,*param_1);
    *local_40 = uVar5;
    *(byte *)((long)local_40 + 10) = *(byte *)((long)local_40 + 10) & 0xf0;
  }
  return *local_40;
}


