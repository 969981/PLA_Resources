/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e580; name: FUN_0038e580
 */


long FUN_0038e580(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_90 [8];
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x89d);
                    /* try { // try from 0038e5cc to 0038e5df has its CatchHandler @ 0038e858 */
    uVar8 = FUN_0030f3ac(&local_70,"CHECK failed: field->is_repeated(): ");
                    /* try { // try from 0038e5e0 to 0038e5e7 has its CatchHandler @ 0038e854 */
    FUN_0030f41c(&local_78,uVar8);
    FUN_0030f658(&local_70);
  }
  puVar5 = PTR_LAB_04373a98;
  puVar9 = *(ulong **)(param_3 + 0x30);
  if ((puVar9 != (ulong *)0x0) &&
     (puStack_80 = PTR_LAB_04373a98, local_88 = param_3, *puVar9 != 0xffffffffffffffff)) {
    local_70 = &puStack_80;
    plStack_68 = &local_88;
    local_78 = &local_70;
    std::__call_once(puVar9,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  puVar6 = PTR_DAT_04373ab0;
  iVar4 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  if (iVar4 != param_4) {
    puVar9 = *(ulong **)(param_3 + 0x30);
    if (puVar9 != (ulong *)0x0) {
      puStack_80 = puVar5;
      local_88 = param_3;
      if (*puVar9 != 0xffffffffffffffff) {
        local_70 = &puStack_80;
        plStack_68 = &local_88;
        local_78 = &local_70;
        std::__call_once(puVar9,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      iVar4 = *(int *)(puVar6 + (ulong)*(uint *)(param_3 + 0x38) * 4);
    }
    if ((param_4 != 1) || (iVar4 != 8)) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x8a0);
                    /* try { // try from 0038e7f0 to 0038e827 has its CatchHandler @ 0038e85c */
      uVar8 = FUN_0030f3ac(&local_70,
                           "CHECK failed: field->cpp_type() == cpp_type || (field->cpp_type() == FieldDescriptor::CPPTYPE_ENUM && cpp_type == FieldDescriptor::CPPTYPE_INT32): "
                          );
      uVar8 = FUN_0030f3ac(uVar8,"The type parameter T in RepeatedFieldRef<T> API doesn\'t match ");
      uVar8 = FUN_0030f3ac(uVar8,"the actual field type (for enums T should be the generated enum ")
      ;
      uVar8 = FUN_0030f3ac(uVar8,"type or int32).");
                    /* try { // try from 0038e828 to 0038e82f has its CatchHandler @ 0038e844 */
      FUN_0030f41c(auStack_90,uVar8);
      FUN_0030f658(&local_70);
    }
  }
  if ((param_5 != 0) && (lVar10 = FUN_00342dac(param_3), lVar10 != param_5)) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x8a5);
                    /* try { // try from 0038e6cc to 0038e6df has its CatchHandler @ 0038e850 */
    uVar8 = FUN_0030f3ac(&local_70,"CHECK failed: (message_type) == (field->message_type()): ");
                    /* try { // try from 0038e6e0 to 0038e6e7 has its CatchHandler @ 0038e84c */
    FUN_0030f41c(&local_78,uVar8);
    FUN_0030f658(&local_70);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar11 = FUN_0038ff3c(param_1 + 8,param_3);
    param_2 = param_2 + (uVar11 & 0xffffffff);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038e71c to 0038e72f has its CatchHandler @ 0038e848 */
      uVar8 = FUN_0030f3ac(&local_70,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038e730 to 0038e737 has its CatchHandler @ 0038e840 */
      FUN_0030f41c(&local_78,uVar8);
      FUN_0030f658(&local_70);
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar9 = *(ulong **)(param_3 + 0x30);
    if ((puVar9 != (ulong *)0x0) &&
       (puStack_80 = puVar5, local_88 = param_3, *puVar9 != 0xffffffffffffffff)) {
      local_70 = &puStack_80;
      plStack_68 = &local_88;
      local_78 = &local_70;
      std::__call_once(puVar9,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = FUN_0034c24c(param_3);
    param_2 = FUN_00332850(param_2 + (ulong)uVar1,uVar2,uVar3,uVar7 & 1,param_3);
  }
  return param_2;
}


