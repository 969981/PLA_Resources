/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030c7bc; name: FUN_0030c7bc
 */


uint FUN_0030c7bc(ulong *param_1,ulong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                 ,0xd1);
                    /* try { // try from 0030c7f4 to 0030c807 has its CatchHandler @ 0030c88c */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: *ptr: ");
                    /* try { // try from 0030c808 to 0030c80f has its CatchHandler @ 0030c888 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = *param_2;
  }
  if (uVar2 < *param_1) {
    return 0;
  }
  if (uVar2 - param_1[1] == (long)*(int *)((long)param_1 + 0x1c)) {
    return 1;
  }
  auVar3 = FUN_00322600(param_1,uVar2,param_3);
  *param_2 = auVar3._0_8_;
  return auVar3._8_4_ & 1;
}


