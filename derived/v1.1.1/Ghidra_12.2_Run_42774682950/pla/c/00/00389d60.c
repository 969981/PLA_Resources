/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00389d60; name: FUN_00389d60
 */


undefined1  [16] FUN_00389d60(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined **local_68;
  long *plStack_60;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetDouble","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"GetDouble",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_30 = PTR_LAB_04373a98;
    local_38 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_68 = &puStack_30;
      plStack_60 = &local_38;
      local_28 = &local_68;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 5) {
    FUN_003871e0(*param_1,param_3,"GetDouble",5);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar2 = (ulong *)FUN_0038fcac(param_1,param_2,param_3);
    auVar4._0_8_ = *puVar2;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 == 0xffffffff) {
    FUN_0030f640(&local_68,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                 ,0xc4);
                    /* try { // try from 00389e68 to 00389e7b has its CatchHandler @ 00389ed8 */
    uVar3 = FUN_0030f3ac(&local_68,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00389e7c to 00389e83 has its CatchHandler @ 00389ed4 */
    FUN_0030f41c(&local_28,uVar3);
    FUN_0030f658(&local_68);
    uVar1 = *(uint *)(param_1 + 5);
  }
  auVar4 = FUN_00331534(*(undefined8 *)(param_3 + 0x90),param_2 + (ulong)uVar1,
                        *(undefined4 *)(param_3 + 0x44));
  return auVar4;
}


