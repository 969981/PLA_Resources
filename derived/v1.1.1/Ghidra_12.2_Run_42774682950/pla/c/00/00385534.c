/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00385534; name: FUN_00385534
 */


void FUN_00385534(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar4 = *(long *)(param_3 + 0x58);
  if (lVar4 == 0) {
LAB_00385578:
    uVar3 = *param_4;
    uVar2 = FUN_0038fe58(param_1 + 8,param_3);
    *(undefined8 *)(param_2 + (uVar2 & 0xffffffff)) = uVar3;
    FUN_0038c860(param_1,param_2,param_3);
    return;
  }
  if (*(int *)(lVar4 + 0x18) == 1) {
    if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') goto LAB_00385578;
    if (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0') {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                   ,0x761);
                    /* try { // try from 003855d4 to 003855e7 has its CatchHandler @ 003856e0 */
      uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 003855e8 to 003855ef has its CatchHandler @ 003856dc */
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
  uVar3 = *param_4;
  uVar2 = FUN_0038fe58(param_1 + 8,param_3);
  *(undefined8 *)(param_2 + (uVar2 & 0xffffffff)) = uVar3;
  uVar1 = *(undefined4 *)(param_3 + 0x44);
  lVar4 = *(long *)(param_3 + 0x58);
  if ((*(int *)(lVar4 + 0x18) == 1) && (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0')) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x768);
                    /* try { // try from 00385688 to 0038569b has its CatchHandler @ 003856e8 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038569c to 003856a3 has its CatchHandler @ 003856e4 */
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


