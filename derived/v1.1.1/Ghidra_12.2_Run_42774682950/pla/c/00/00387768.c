/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00387768; name: FUN_00387768
 */


ulong FUN_00387768(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined **local_68;
  long *plStack_60;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetInt32","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"GetInt32",
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
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 1) {
    FUN_003871e0(*param_1,param_3,"GetInt32",1);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar5 = (uint *)FUN_0038f450(param_1,param_2,param_3);
    return (ulong)*puVar5;
  }
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 == 0xffffffff) {
    FUN_0030f640(&local_68,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                 ,0xc4);
                    /* try { // try from 00387870 to 00387883 has its CatchHandler @ 003878e0 */
    uVar3 = FUN_0030f3ac(&local_68,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00387884 to 0038788b has its CatchHandler @ 003878dc */
    FUN_0030f41c(&local_28,uVar3);
    FUN_0030f658(&local_68);
    uVar1 = *(uint *)(param_1 + 5);
  }
  uVar4 = FUN_0032e560(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),
                       *(undefined4 *)(param_3 + 0x90));
  return uVar4;
}


