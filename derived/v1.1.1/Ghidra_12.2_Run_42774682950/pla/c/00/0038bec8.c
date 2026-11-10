/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038bec8; name: FUN_0038bec8
 */


void FUN_0038bec8(long param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined4 local_6c;
  undefined **local_68;
  long *plStack_60;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  
  local_6c = param_4;
  if (*(char *)(param_3 + 0x43) == '\0') {
    FUN_00387e40(param_1,param_2,param_3,&local_6c);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0xffffffff) {
    FUN_0030f640(&local_68,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                 ,0xc4);
                    /* try { // try from 0038bf10 to 0038bf23 has its CatchHandler @ 0038bfdc */
    uVar3 = FUN_0030f3ac(&local_68,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038bf24 to 0038bf2b has its CatchHandler @ 0038bfd8 */
    FUN_0030f41c(&local_28,uVar3);
    FUN_0030f658(&local_68);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  uVar2 = *(undefined4 *)(param_3 + 0x44);
  puVar4 = *(ulong **)(param_3 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    puStack_30 = PTR_LAB_04373a98;
    local_38 = param_3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_68 = &puStack_30;
      plStack_60 = &local_38;
      local_28 = &local_68;
      std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  FUN_00333114(param_2 + (ulong)uVar1,uVar2,*(undefined4 *)(param_3 + 0x38),
               *(undefined1 *)(*(long *)(param_3 + 0x78) + 0x4c),local_6c,param_3);
  return;
}


