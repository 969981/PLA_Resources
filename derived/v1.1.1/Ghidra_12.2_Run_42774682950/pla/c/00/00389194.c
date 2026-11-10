/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00389194; name: FUN_00389194
 */


undefined8 FUN_00389194(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_70;
  undefined *puStack_68;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetRepeatedUInt64","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"GetRepeatedUInt64",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_68 = PTR_LAB_04373a98;
    local_70 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_60 = &puStack_68;
      local_28 = &local_60;
      puStack_58 = (undefined1 *)&local_70;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 4) {
    FUN_003871e0(*param_1,param_3,"GetRepeatedUInt64",4);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar3 = FUN_003818a8(param_1,param_2,param_3);
    puVar4 = (undefined8 *)FUN_00329350(uVar3,param_4);
    uVar3 = *puVar4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 003892a4 to 003892b7 has its CatchHandler @ 00389314 */
      uVar3 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 003892b8 to 003892bf has its CatchHandler @ 00389310 */
      FUN_0030f41c(&local_28,uVar3);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar3 = FUN_0033061c(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),param_4);
  }
  return uVar3;
}


