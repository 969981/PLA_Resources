/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038aca4; name: FUN_0038aca4
 */


undefined8 FUN_0038aca4(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_68;
  undefined *puStack_60;
  undefined ***local_58;
  undefined **local_50;
  long *plStack_48;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetStringReference","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"GetStringReference",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_60 = PTR_LAB_04373a98;
    local_68 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_50 = &puStack_60;
      plStack_48 = &local_68;
      local_58 = &local_50;
      std::__call_once(puVar2,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 9) {
    FUN_003871e0(*param_1,param_3,"GetStringReference",9);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar4 = FUN_0038f118(param_1 + 1,param_3);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)FUN_00382598(param_1,param_2,param_3);
      return *puVar5;
    }
    uVar3 = FUN_0038245c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 == 0xffffffff) {
    FUN_0030f640(&local_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                 ,0xc4);
                    /* try { // try from 0038adac to 0038adbf has its CatchHandler @ 0038ae4c */
    uVar3 = FUN_0030f3ac(&local_50,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038adc0 to 0038adc7 has its CatchHandler @ 0038ae48 */
    FUN_0030f41c(&local_58,uVar3);
    FUN_0030f658(&local_50);
    uVar1 = *(uint *)(param_1 + 5);
  }
  uVar3 = FUN_00333478(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),
                       *(undefined8 *)(param_3 + 0x90));
  return uVar3;
}


