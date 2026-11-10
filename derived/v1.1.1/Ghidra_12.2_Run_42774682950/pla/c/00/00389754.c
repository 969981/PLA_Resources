/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00389754; name: FUN_00389754
 */


void FUN_00389754(undefined4 param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined4 local_74;
  long local_70;
  undefined *puStack_68;
  undefined **local_60;
  long *plStack_58;
  undefined ***local_28;
  
  local_74 = param_1;
  if (*(long *)(param_4 + 0x50) != *param_2) {
    FUN_00386850(*param_2,param_4,"SetFloat","Field does not match message type.");
  }
  if (*(int *)(param_4 + 0x3c) == 3) {
    FUN_00386850(*param_2,param_4,"SetFloat",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar3 = PTR_LAB_04373a98;
  puVar4 = *(ulong **)(param_4 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    puStack_68 = PTR_LAB_04373a98;
    local_70 = param_4;
    if (*puVar4 != 0xffffffffffffffff) {
      local_60 = &puStack_68;
      plStack_58 = &local_70;
      local_28 = &local_60;
      std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 0x38) * 4) != 6) {
    FUN_003871e0(*param_2,param_4,"SetFloat",6);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    FUN_003856fc(param_2,param_3,param_4,&local_74);
  }
  else {
    uVar1 = *(uint *)(param_2 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 00389864 to 00389877 has its CatchHandler @ 00389918 */
      uVar5 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00389878 to 0038987f has its CatchHandler @ 00389914 */
      FUN_0030f41c(&local_28,uVar5);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_2 + 5);
    }
    uVar2 = *(undefined4 *)(param_4 + 0x44);
    puVar4 = *(ulong **)(param_4 + 0x30);
    if (puVar4 != (ulong *)0x0) {
      puStack_68 = puVar3;
      local_70 = param_4;
      if (*puVar4 != 0xffffffffffffffff) {
        local_60 = &puStack_68;
        plStack_58 = &local_70;
        local_28 = &local_60;
        std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    FUN_00330d84(local_74,param_3 + (ulong)uVar1,uVar2,*(undefined4 *)(param_4 + 0x38),param_4);
  }
  return;
}


