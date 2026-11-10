/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038c97c; name: FUN_0038c97c
 */


void FUN_0038c97c(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  if (*(long *)(param_4 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_4,"SetAllocatedMessage","Field does not match message type.");
  }
  if (*(int *)(param_4 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_4,"SetAllocatedMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar3 = PTR_LAB_04373a98;
  puVar4 = *(ulong **)(param_4 + 0x30);
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_04373a98, local_78 = param_4, *puVar4 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar4,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 0x38) * 4) != 10) {
    FUN_003871e0(*param_1,param_4,"SetAllocatedMessage",10);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    lVar7 = *(long *)(param_4 + 0x58);
    if ((lVar7 == 0) ||
       ((*(int *)(lVar7 + 0x18) == 1 && (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0')))) {
      if (param_3 == 0) {
        FUN_00387010(param_1,param_2,param_4);
      }
      else {
        FUN_0038c860(param_1,param_2,param_4);
      }
      uVar6 = FUN_0038fe58(param_1 + 1,param_4);
      uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      puVar4 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      if ((uVar8 & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      if ((puVar4 == (ulong *)0x0) &&
         (puVar9 = *(undefined8 **)(param_2 + (uVar6 & 0xffffffff)), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)(puVar9);
        FUN_002e2ea0(PTR_LAB_04373088,puVar9);
      }
      *(long *)(param_2 + (uVar6 & 0xffffffff)) = param_3;
    }
    else {
      FUN_003862a4(param_1,param_2);
      if (param_3 != 0) {
        uVar6 = FUN_0038fe58(param_1 + 1,param_4);
        *(long *)(param_2 + (uVar6 & 0xffffffff)) = param_3;
        uVar2 = *(undefined4 *)(param_4 + 0x44);
        lVar7 = *(long *)(param_4 + 0x58);
        if ((*(int *)(lVar7 + 0x18) == 1) && (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0'))
        {
          FUN_0030f640(&local_60,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                       ,0x768);
                    /* try { // try from 0038cbac to 0038cbbf has its CatchHandler @ 0038cc7c */
          uVar5 = FUN_0030f3ac(&local_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038cbc0 to 0038cbc7 has its CatchHandler @ 0038cc78 */
          FUN_0030f41c(&local_68,uVar5);
          FUN_0030f658(&local_60);
        }
        *(undefined4 *)
         (param_2 +
         (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                      (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x10) + 0x30)) >> 4) *
                      -0x55555554)) = uVar2;
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038ca8c to 0038ca9f has its CatchHandler @ 0038cc84 */
      uVar5 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038caa0 to 0038caa7 has its CatchHandler @ 0038cc80 */
      FUN_0030f41c(&local_68,uVar5);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar2 = *(undefined4 *)(param_4 + 0x44);
    puVar4 = *(ulong **)(param_4 + 0x30);
    if ((puVar4 != (ulong *)0x0) &&
       (puStack_70 = puVar3, local_78 = param_4, *puVar4 != 0xffffffffffffffff)) {
      local_60 = &puStack_70;
      plStack_58 = &local_78;
      local_68 = &local_60;
      std::__call_once(puVar4,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    FUN_003340dc(param_2 + (ulong)uVar1,uVar2,*(undefined4 *)(param_4 + 0x38),param_4,param_3);
  }
  return;
}


