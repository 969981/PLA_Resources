/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038a860; name: FUN_0038a860
 */


byte FUN_0038a860(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long local_70;
  undefined *puStack_68;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetRepeatedBool","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"GetRepeatedBool",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar3 = *(ulong **)(param_3 + 0x30);
  if (puVar3 != (ulong *)0x0) {
    puStack_68 = PTR_LAB_04373a98;
    local_70 = param_3;
    if (*puVar3 != 0xffffffffffffffff) {
      local_60 = &puStack_68;
      local_28 = &local_60;
      puStack_58 = (undefined1 *)&local_70;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 7) {
    FUN_003871e0(*param_1,param_3,"GetRepeatedBool",7);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar4 = FUN_00381dac(param_1,param_2,param_3);
    pcVar5 = (char *)FUN_00325d58(uVar4,param_4);
    bVar2 = *pcVar5 != '\0';
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038a970 to 0038a983 has its CatchHandler @ 0038a9ec */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038a984 to 0038a98b has its CatchHandler @ 0038a9e8 */
      FUN_0030f41c(&local_28,uVar4);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_1 + 5);
    }
    bVar2 = FUN_003322b8(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44),param_4);
  }
  return bVar2 & 1;
}


