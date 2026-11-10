/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00386cec; name: FUN_00386cec
 */


ulong FUN_00386cec(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined **local_68;
  long *plStack_60;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"FieldSize","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"FieldSize",
                 "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar7 = *(uint *)(param_1 + 5);
    if (uVar7 == 0xffffffff) {
      FUN_0030f640(&local_68,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 00386d80 to 00386d93 has its CatchHandler @ 00386ffc */
      uVar1 = FUN_0030f3ac(&local_68,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00386d94 to 00386d9b has its CatchHandler @ 00386ff8 */
      FUN_0030f41c(&local_28,uVar1);
      FUN_0030f658(&local_68);
      uVar7 = *(uint *)(param_1 + 5);
    }
    uVar2 = FUN_0032e014(param_2 + (ulong)uVar7,*(undefined4 *)(param_3 + 0x44));
    return uVar2;
  }
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_30 = PTR_LAB_04373a98, local_38 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_68 = &puStack_30;
    plStack_60 = &local_38;
    local_28 = &local_68;
    std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar7 = *(uint *)(param_3 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar7 * 4)) {
  case 1:
  case 8:
    puVar4 = (uint *)FUN_003813a4(param_1,param_2,param_3);
    break;
  case 2:
    puVar4 = (uint *)FUN_00381550(param_1,param_2,param_3);
    break;
  case 3:
    puVar4 = (uint *)FUN_003816fc(param_1,param_2,param_3);
    break;
  case 4:
    puVar4 = (uint *)FUN_003818a8(param_1,param_2,param_3);
    break;
  case 5:
    puVar4 = (uint *)FUN_00381a54(param_1,param_2,param_3);
    break;
  case 6:
    puVar4 = (uint *)FUN_00381c00(param_1,param_2,param_3);
    break;
  case 7:
    puVar4 = (uint *)FUN_00381dac(param_1,param_2,param_3);
    break;
  case 9:
  case 10:
    puVar3 = *(ulong **)(param_3 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_30 = PTR_LAB_04373a98;
      local_38 = param_3;
      if (*puVar3 != 0xffffffffffffffff) {
        local_68 = &puStack_30;
        plStack_60 = &local_38;
        local_28 = &local_68;
        std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar7 = *(uint *)(param_3 + 0x38);
    }
    if ((uVar7 == 0xb) && (uVar2 = FUN_00344344(param_3), (uVar2 & 1) != 0)) {
      plVar5 = (long *)FUN_00382104(param_1,param_2,param_3);
      uVar2 = FUN_00395cbc();
      if ((uVar2 & 1) == 0) {
        uVar2 = (**(code **)(*plVar5 + 0x50))(plVar5);
        return uVar2;
      }
      lVar6 = FUN_00395a9c(plVar5);
    }
    else {
      lVar6 = FUN_003822b0(param_1,param_2,param_3);
    }
    return (ulong)*(uint *)(lVar6 + 8);
  default:
    FUN_0030f640(&local_68,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x30c);
                    /* try { // try from 00386f10 to 00386f23 has its CatchHandler @ 00386ff4 */
    uVar1 = FUN_0030f3ac(&local_68,"Can\'t get here.");
                    /* try { // try from 00386f24 to 00386f2b has its CatchHandler @ 00386ff0 */
    FUN_0030f41c(&local_28,uVar1);
    FUN_0030f658(&local_68);
    return 0;
  }
  return (ulong)*puVar4;
}


