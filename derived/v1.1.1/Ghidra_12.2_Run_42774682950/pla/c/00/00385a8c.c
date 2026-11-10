/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00385a8c; name: FUN_00385a8c
 */


void FUN_00385a8c(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar5 = *(long *)(param_3 + 0x58);
  if (lVar5 == 0) {
LAB_00385ad0:
    uVar2 = *param_4;
    uVar3 = FUN_0038fe58(param_1 + 8,param_3);
    *(undefined1 *)(param_2 + (uVar3 & 0xffffffff)) = uVar2;
    FUN_0038c860(param_1,param_2,param_3);
    return;
  }
  if (*(int *)(lVar5 + 0x18) == 1) {
    if (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) != '\0') goto LAB_00385ad0;
    if (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x761);
                    /* try { // try from 00385b2c to 00385b3f has its CatchHandler @ 00385c38 */
      uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00385b40 to 00385b47 has its CatchHandler @ 00385c34 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
    }
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                           (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x30)) >> 4) *
                           -0x55555554)) != *(int *)(param_3 + 0x44)) {
    FUN_003862a4(param_1,param_2,*(undefined8 *)(param_3 + 0x58));
  }
  uVar2 = *param_4;
  uVar3 = FUN_0038fe58(param_1 + 8,param_3);
  *(undefined1 *)(param_2 + (uVar3 & 0xffffffff)) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 0x44);
  lVar5 = *(long *)(param_3 + 0x58);
  if ((*(int *)(lVar5 + 0x18) == 1) && (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x768);
                    /* try { // try from 00385be0 to 00385bf3 has its CatchHandler @ 00385c40 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00385bf4 to 00385bfb has its CatchHandler @ 00385c3c */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
  }
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x30)) >> 4) * -0x55555554
                )) = uVar1;
  return;
}


