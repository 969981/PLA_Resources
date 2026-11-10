/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00386684; name: FUN_00386684
 */


ulong FUN_00386684(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"HasField","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"HasField",
                 "Field is repeated; the method requires a singular field.");
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    lVar4 = *(long *)(param_3 + 0x58);
    if (lVar4 == 0) {
LAB_00386778:
      uVar3 = FUN_0038691c(param_1,param_2,param_3);
      return uVar3;
    }
    if (*(int *)(lVar4 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') goto LAB_00386778;
      if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(auStack_60,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x761);
                    /* try { // try from 003867c0 to 003867d3 has its CatchHandler @ 00386830 */
        uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 003867d4 to 003867db has its CatchHandler @ 0038682c */
        FUN_0030f41c(auStack_28,uVar2);
        FUN_0030f658(auStack_60);
      }
    }
    uVar1 = (uint)(*(int *)(param_2 +
                           (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                                        (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) +
                                                                       0x30)) >> 4) * -0x55555554))
                  == *(int *)(param_3 + 0x44));
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038671c to 0038672f has its CatchHandler @ 00386838 */
      uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00386730 to 00386737 has its CatchHandler @ 00386834 */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(auStack_60);
      uVar1 = *(uint *)(param_1 + 5);
    }
    uVar1 = FUN_0032de44(param_2 + (ulong)uVar1,*(undefined4 *)(param_3 + 0x44));
  }
  return (ulong)(uVar1 & 1);
}


