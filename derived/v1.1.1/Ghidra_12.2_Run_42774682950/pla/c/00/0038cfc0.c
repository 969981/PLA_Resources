/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038cfc0; name: FUN_0038cfc0
 */


void FUN_0038cfc0(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **local_70;
  long *plStack_68;
  long local_40;
  undefined *puStack_38;
  undefined1 *local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetRepeatedMessage","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"GetRepeatedMessage",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_38 = PTR_LAB_04373a98;
    local_40 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_70 = &puStack_38;
      plStack_68 = &local_40;
      local_28 = (undefined1 *)&local_70;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 10) {
    FUN_003871e0(*param_1,param_3,"GetRepeatedMessage",10);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar2 = *(ulong **)(param_3 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_38 = PTR_LAB_04373a98;
      local_40 = param_3;
      if (*puVar2 != 0xffffffffffffffff) {
        local_70 = &puStack_38;
        plStack_68 = &local_40;
        local_28 = (undefined1 *)&local_70;
        std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar4 = FUN_00344344(param_3), (uVar4 & 1) != 0)) {
      FUN_00382104(param_1,param_2,param_3);
      uVar3 = FUN_00395a9c();
    }
    else {
      uVar3 = FUN_003822b0(param_1,param_2,param_3);
    }
    FUN_0038d1c4(uVar3,param_4);
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038d0d0 to 0038d0e3 has its CatchHandler @ 0038d1b0 */
      uVar3 = FUN_0030f3ac(&local_70,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038d0e4 to 0038d0eb has its CatchHandler @ 0038d1ac */
      FUN_0030f41c(&local_28,uVar3);
      FUN_0030f658(&local_70);
      uVar1 = *(uint *)(param_1 + 5);
    }
    FUN_00334558(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),param_4);
  }
  return;
}


