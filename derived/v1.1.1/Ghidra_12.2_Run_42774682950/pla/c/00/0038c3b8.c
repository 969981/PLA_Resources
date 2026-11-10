/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038c3b8; name: FUN_0038c3b8
 */


void FUN_0038c3b8(long *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined **local_80;
  long *plStack_78;
  long local_50;
  undefined *puStack_48;
  undefined1 *local_38;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"MutableMessage","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"MutableMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_04373a98, local_50 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_80 = &puStack_48;
    plStack_78 = &local_50;
    local_38 = (undefined1 *)&local_80;
    std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) == 10) {
    if (param_4 == 0) goto LAB_0038c510;
LAB_0038c48c:
    cVar1 = *(char *)(param_3 + 0x43);
  }
  else {
    FUN_003871e0(*param_1,param_3,"MutableMessage",10);
    if (param_4 != 0) goto LAB_0038c48c;
LAB_0038c510:
    param_4 = param_1[8];
    cVar1 = *(char *)(param_3 + 0x43);
  }
  if (cVar1 != '\0') {
    uVar7 = *(uint *)(param_1 + 5);
    if (uVar7 == 0xffffffff) {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038c4b8 to 0038c4cb has its CatchHandler @ 0038c84c */
      uVar3 = FUN_0030f3ac(&local_80,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038c4cc to 0038c4d3 has its CatchHandler @ 0038c848 */
      FUN_0030f41c(&local_38,uVar3);
      FUN_0030f658(&local_80);
      uVar7 = *(uint *)(param_1 + 5);
    }
    FUN_0039d364(param_2 + (ulong)uVar7,param_3,param_4);
    return;
  }
  uVar4 = FUN_0038fe58(param_1 + 1,param_3);
  lVar8 = *(long *)(param_3 + 0x58);
  if (lVar8 == 0) {
LAB_0038c554:
    FUN_0038c860(param_1,param_2,param_3);
    plVar6 = (long *)(param_2 + (uVar4 & 0xffffffff));
    lVar8 = *plVar6;
  }
  else {
    if (*(int *)(lVar8 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar8 + 0x20) + 0x41) != '\0') goto LAB_0038c554;
      if (*(char *)(**(long **)(lVar8 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(&local_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 0038c59c to 0038c5af has its CatchHandler @ 0038c844 */
        uVar3 = FUN_0030f3ac(&local_80,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038c5b0 to 0038c5b7 has its CatchHandler @ 0038c840 */
        FUN_0030f41c(&local_38,uVar3);
        FUN_0030f658(&local_80);
      }
    }
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                             (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x30)) >> 4)
                             * -0x55555554)) == *(int *)(param_3 + 0x44)) {
      plVar6 = (long *)(param_2 + (uVar4 & 0xffffffff));
      lVar8 = *plVar6;
    }
    else {
      FUN_003862a4(param_1,param_2,*(undefined8 *)(param_3 + 0x58));
      lVar8 = *(long *)(param_3 + 0x58);
      if ((lVar8 == 0) ||
         ((*(int *)(lVar8 + 0x18) == 1 && (*(char *)(**(long **)(lVar8 + 0x20) + 0x41) != '\0')))) {
        FUN_0038c860(param_1,param_2,param_3);
      }
      else {
        *(undefined4 *)
         (param_2 +
         (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                      (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x30)) >> 4) *
                      -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
      }
      uVar4 = FUN_0038fe58(param_1 + 1,param_3);
      lVar8 = param_1[1];
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar7 = (int)((ulong)(param_3 - *plVar6) >> 3) * 0x286bca1b;
      uVar7 = *(uint *)(param_1[2] +
                       (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
      puVar2 = *(ulong **)(param_3 + 0x30);
      if ((puVar2 != (ulong *)0x0) &&
         (puStack_48 = PTR_LAB_04373a98, local_50 = param_3, *puVar2 != 0xffffffffffffffff)) {
        local_80 = &puStack_48;
        plStack_78 = &local_50;
        local_38 = (undefined1 *)&local_80;
        std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar7 = uVar7 & 0xfffffffe;
      }
      plVar6 = (long *)(param_2 + (uVar4 & 0xffffffff));
      puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      lVar8 = (**(code **)(**(long **)(lVar8 + (ulong)uVar7) + 0x20))
                        (*(long **)(lVar8 + (ulong)uVar7),puVar2);
      *plVar6 = lVar8;
    }
  }
  if (lVar8 == 0) {
    lVar8 = param_1[1];
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar7 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
    uVar7 = *(uint *)(param_1[2] +
                     (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
    puVar2 = *(ulong **)(param_3 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (local_50 = param_3, puStack_48 = PTR_LAB_04373a98, *puVar2 != 0xffffffffffffffff)) {
      local_80 = &puStack_48;
      plStack_78 = &local_50;
      local_38 = (undefined1 *)&local_80;
      std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
      uVar7 = uVar7 & 0xfffffffe;
    }
    puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar8 = (**(code **)(**(long **)(lVar8 + (ulong)uVar7) + 0x20))
                      (*(long **)(lVar8 + (ulong)uVar7),puVar2);
    *plVar6 = lVar8;
  }
  return;
}


