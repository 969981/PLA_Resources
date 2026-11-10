/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038a4f8; name: FUN_0038a4f8
 */


byte FUN_0038a4f8(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined **local_68;
  long *plStack_60;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetBool","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"GetBool",
                 "Field is repeated; the method requires a singular field.");
  }
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
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 7) {
    FUN_003871e0(*param_1,param_3,"GetBool",7);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    pcVar5 = (char *)FUN_0038f2a4(param_1,param_2,param_3);
    bVar2 = *pcVar5 != '\0';
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_68,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038a600 to 0038a613 has its CatchHandler @ 0038a670 */
      uVar4 = FUN_0030f3ac(&local_68,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038a614 to 0038a61b has its CatchHandler @ 0038a66c */
      FUN_0030f41c(&local_28,uVar4);
      FUN_0030f658(&local_68);
      uVar1 = *(uint *)(param_1 + 5);
    }
    bVar2 = FUN_00331eb8(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),
                         *(undefined1 *)(param_3 + 0x90));
  }
  return bVar2 & 1;
}


