/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038dc64; name: FUN_0038dc64
 */


long FUN_0038dc64(undefined8 *param_1,long param_2,long param_3,int param_4,int param_5,long param_6
                 )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_88;
  long *plStack_80;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"\"GetRawRepeatedField\"",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar4 = PTR_LAB_04373a98;
  puVar6 = *(ulong **)(param_3 + 0x30);
  if (puVar6 != (ulong *)0x0) {
    puStack_50 = PTR_LAB_04373a98;
    local_58 = param_3;
    if (*puVar6 != 0xffffffffffffffff) {
      local_88 = &puStack_50;
      plStack_80 = &local_58;
      local_48 = &local_88;
      std::__call_once(puVar6,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != param_4) {
    FUN_003871e0(*param_1,param_3,"GetRawRepeatedField",param_4);
  }
  if ((-1 < param_5) && (*(int *)(*(long *)(param_3 + 0x78) + 0x48) != param_5)) {
    FUN_0030f640(&local_88,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x6cb);
                    /* try { // try from 0038dd58 to 0038dd77 has its CatchHandler @ 0038df48 */
    uVar7 = FUN_0030f3ac(&local_88,"CHECK failed: (field->options().ctype()) == (ctype): ");
    uVar7 = FUN_0030f3ac(uVar7,"subtype mismatch");
                    /* try { // try from 0038dd78 to 0038dd7f has its CatchHandler @ 0038df40 */
    FUN_0030f41c(&local_48,uVar7);
    FUN_0030f658(&local_88);
  }
  if ((param_6 != 0) && (lVar8 = FUN_00342dac(param_3), lVar8 != param_6)) {
    FUN_0030f640(&local_88,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x6cd);
                    /* try { // try from 0038ddb4 to 0038ddd3 has its CatchHandler @ 0038df4c */
    uVar7 = FUN_0030f3ac(&local_88,"CHECK failed: (field->message_type()) == (desc): ");
    uVar7 = FUN_0030f3ac(uVar7,"wrong submessage type");
                    /* try { // try from 0038ddd4 to 0038dddb has its CatchHandler @ 0038df44 */
    FUN_0030f41c(&local_48,uVar7);
    FUN_0030f658(&local_88);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar6 = *(ulong **)(param_3 + 0x30);
    if (puVar6 != (ulong *)0x0) {
      puStack_50 = puVar4;
      local_58 = param_3;
      if (*puVar6 != 0xffffffffffffffff) {
        local_88 = &puStack_50;
        plStack_80 = &local_58;
        local_48 = &local_88;
        std::__call_once(puVar6,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar9 = FUN_00344344(param_3), (uVar9 & 1) != 0)) {
      uVar9 = FUN_0038ff3c(param_1 + 1,param_3);
      param_2 = FUN_00395a9c(param_2 + (uVar9 & 0xffffffff));
    }
    else {
      uVar9 = FUN_0038ff3c(param_1 + 1,param_3);
      param_2 = param_2 + (uVar9 & 0xffffffff);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_88,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038de10 to 0038de23 has its CatchHandler @ 0038df3c */
      uVar7 = FUN_0030f3ac(&local_88,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038de24 to 0038de2b has its CatchHandler @ 0038df38 */
      FUN_0030f41c(&local_48,uVar7);
      FUN_0030f658(&local_88);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar6 = *(ulong **)(param_3 + 0x30);
    if (puVar6 != (ulong *)0x0) {
      puStack_50 = puVar4;
      local_58 = param_3;
      if (*puVar6 != 0xffffffffffffffff) {
        local_88 = &puStack_50;
        plStack_80 = &local_58;
        local_48 = &local_88;
        std::__call_once(puVar6,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar5 = FUN_0034c24c(param_3);
    param_2 = FUN_00332850(param_2 + (ulong)uVar1,uVar2,uVar3,uVar5 & 1,param_3);
  }
  return param_2;
}


