/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038d974; name: FUN_0038d974
 */


long FUN_0038d974(undefined8 *param_1,long param_2,long param_3,int param_4,undefined8 param_5,
                 long param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **local_88;
  long *plStack_80;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"\"MutableRawRepeatedField\"",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar5 = PTR_LAB_04373a98;
  puVar8 = *(ulong **)(param_3 + 0x30);
  if ((puVar8 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_04373a98, local_58 = param_3, *puVar8 != 0xffffffffffffffff)) {
    local_88 = &puStack_50;
    plStack_80 = &local_58;
    local_48 = &local_88;
    std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  puVar6 = PTR_DAT_04373ab0;
  iVar4 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  if (iVar4 != param_4) {
    puVar8 = *(ulong **)(param_3 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      puStack_50 = puVar5;
      local_58 = param_3;
      if (*puVar8 != 0xffffffffffffffff) {
        local_88 = &puStack_50;
        plStack_80 = &local_58;
        local_48 = &local_88;
        std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      iVar4 = *(int *)(puVar6 + (ulong)*(uint *)(param_3 + 0x38) * 4);
    }
    if ((param_4 != 1) || (iVar4 != 8)) {
      FUN_003871e0(*param_1,param_3,"MutableRawRepeatedField",param_4);
    }
  }
  if ((param_6 != 0) && (lVar9 = FUN_00342dac(param_3), lVar9 != param_6)) {
    FUN_0030f640(&local_88,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x6b3);
                    /* try { // try from 0038daa0 to 0038dabf has its CatchHandler @ 0038dc50 */
    uVar10 = FUN_0030f3ac(&local_88,"CHECK failed: (field->message_type()) == (desc): ");
    uVar10 = FUN_0030f3ac(uVar10,"wrong submessage type");
                    /* try { // try from 0038dac0 to 0038dac7 has its CatchHandler @ 0038dc4c */
    FUN_0030f41c(&local_48,uVar10);
    FUN_0030f658(&local_88);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar8 = *(ulong **)(param_3 + 0x30);
    if ((puVar8 != (ulong *)0x0) &&
       (puStack_50 = puVar5, local_58 = param_3, *puVar8 != 0xffffffffffffffff)) {
      local_88 = &puStack_50;
      plStack_80 = &local_58;
      local_48 = &local_88;
      std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar11 = FUN_00344344(param_3), (uVar11 & 1) != 0)) {
      uVar11 = FUN_0038ff3c(param_1 + 1,param_3);
      param_2 = FUN_00395bc0(param_2 + (uVar11 & 0xffffffff));
    }
    else {
      uVar11 = FUN_0038ff3c(param_1 + 1,param_3);
      param_2 = param_2 + (uVar11 & 0xffffffff);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_88,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038dafc to 0038db0f has its CatchHandler @ 0038dc48 */
      uVar10 = FUN_0030f3ac(&local_88,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038db10 to 0038db17 has its CatchHandler @ 0038dc44 */
      FUN_0030f41c(&local_48,uVar10);
      FUN_0030f658(&local_88);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar8 = *(ulong **)(param_3 + 0x30);
    if ((puVar8 != (ulong *)0x0) &&
       (puStack_50 = puVar5, local_58 = param_3, *puVar8 != 0xffffffffffffffff)) {
      local_88 = &puStack_50;
      plStack_80 = &local_58;
      local_48 = &local_88;
      std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = FUN_0034c24c(param_3);
    param_2 = FUN_00332850(param_2 + (ulong)uVar1,uVar2,uVar3,uVar7 & 1,param_3);
  }
  return param_2;
}


