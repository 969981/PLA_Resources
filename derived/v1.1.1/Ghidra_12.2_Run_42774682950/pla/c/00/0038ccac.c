/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038ccac; name: FUN_0038ccac
 */


undefined8 FUN_0038ccac(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"ReleaseMessage","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"ReleaseMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_04373a98, local_78 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar3,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) == 10) {
    if (param_4 != 0) goto LAB_0038cd7c;
LAB_0038ce00:
    param_4 = param_1[8];
    cVar2 = *(char *)(param_3 + 0x43);
  }
  else {
    FUN_003871e0(*param_1,param_3,"ReleaseMessage",10);
    if (param_4 == 0) goto LAB_0038ce00;
LAB_0038cd7c:
    cVar2 = *(char *)(param_3 + 0x43);
  }
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038cda8 to 0038cdbb has its CatchHandler @ 0038cfac */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038cdbc to 0038cdc3 has its CatchHandler @ 0038cfa8 */
      FUN_0030f41c(&local_68,uVar4);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar4 = FUN_0039d5cc(param_2 + (ulong)uVar1,param_3,param_4);
    return uVar4;
  }
  if ((*(int *)(param_3 + 0x3c) != 3) &&
     ((lVar7 = *(long *)(param_3 + 0x58), lVar7 == 0 ||
      ((*(int *)(lVar7 + 0x18) == 1 && (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0')))))) {
    FUN_00387010(param_1,param_2,param_3);
  }
  lVar7 = *(long *)(param_3 + 0x58);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0') goto LAB_0038cf64;
      if (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(&local_60,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 0038ce98 to 0038ceab has its CatchHandler @ 0038cfa4 */
        uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038ceac to 0038ceb3 has its CatchHandler @ 0038cfa0 */
        FUN_0030f41c(&local_68,uVar4);
        FUN_0030f658(&local_60);
      }
    }
    iVar6 = *(int *)((long)param_1 + 0x2c);
    if (*(int *)(param_2 +
                (ulong)(uint)(iVar6 + (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x10) + 0x30
                                                                     )) >> 4) * -0x55555554)) !=
        *(int *)(param_3 + 0x44)) {
      return 0;
    }
    lVar7 = *(long *)(param_3 + 0x58);
    if ((*(int *)(lVar7 + 0x18) == 1) && (*(char *)(**(long **)(lVar7 + 0x20) + 0x41) != '\0')) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x768);
                    /* try { // try from 0038cf24 to 0038cf37 has its CatchHandler @ 0038cf9c */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038cf38 to 0038cf3f has its CatchHandler @ 0038cf98 */
      FUN_0030f41c(&local_68,uVar4);
      FUN_0030f658(&local_60);
      iVar6 = *(int *)((long)param_1 + 0x2c);
    }
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(iVar6 + (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x10) + 0x30)) >> 4) *
                           -0x55555554)) = 0;
  }
LAB_0038cf64:
  uVar5 = FUN_0038fe58(param_1 + 1,param_3);
  uVar4 = *(undefined8 *)(param_2 + (uVar5 & 0xffffffff));
  *(undefined8 *)(param_2 + (uVar5 & 0xffffffff)) = 0;
  return uVar4;
}


