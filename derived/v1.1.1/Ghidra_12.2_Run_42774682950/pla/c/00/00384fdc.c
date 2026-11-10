/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00384fdc; name: FUN_00384fdc
 */


void FUN_00384fdc(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar4 = *(long *)(param_3 + 0x58);
  if (lVar4 == 0) {
LAB_00385020:
    uVar1 = *param_4;
    uVar2 = FUN_0038fe58(param_1 + 8,param_3);
    *(undefined4 *)(param_2 + (uVar2 & 0xffffffff)) = uVar1;
    FUN_0038c860(param_1,param_2,param_3);
    return;
  }
  if (*(int *)(lVar4 + 0x18) == 1) {
    if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') goto LAB_00385020;
    if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x761);
                    /* try { // try from 0038507c to 0038508f has its CatchHandler @ 00385188 */
      uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00385090 to 00385097 has its CatchHandler @ 00385184 */
      FUN_0030f41c(auStack_68,uVar3);
      FUN_0030f658(auStack_60);
    }
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                           (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x30)) >> 4) *
                           -0x55555554)) != *(int *)(param_3 + 0x44)) {
    FUN_003862a4(param_1,param_2,*(undefined8 *)(param_3 + 0x58));
  }
  uVar1 = *param_4;
  uVar2 = FUN_0038fe58(param_1 + 8,param_3);
  *(undefined4 *)(param_2 + (uVar2 & 0xffffffff)) = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 0x44);
  lVar4 = *(long *)(param_3 + 0x58);
  if ((*(int *)(lVar4 + 0x18) == 1) && (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x768);
                    /* try { // try from 00385130 to 00385143 has its CatchHandler @ 00385190 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00385144 to 0038514b has its CatchHandler @ 0038518c */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
  }
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x30)) >> 4) * -0x55555554
                )) = uVar1;
  return;
}


