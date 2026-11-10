/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038ae60; name: FUN_0038ae60
 */


long FUN_0038ae60(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
LAB_0038aea0:
    FUN_0038c860(param_1,param_2,param_3);
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 1) {
      if (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) != '\0') goto LAB_0038aea0;
      uVar4 = *(undefined4 *)(param_3 + 0x44);
      if (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) != '\0') {
        FUN_0030f640(auStack_60,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                     ,0x768);
                    /* try { // try from 0038af2c to 0038af3f has its CatchHandler @ 0038af58 */
        uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 0038af40 to 0038af47 has its CatchHandler @ 0038af54 */
        FUN_0030f41c(auStack_68,uVar2);
        FUN_0030f658(auStack_60);
      }
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + 0x44);
    }
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                  (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x30)) >> 4) *
                  -0x55555554)) = uVar4;
  }
  uVar1 = FUN_0038fe58(param_1 + 8,param_3);
  return param_2 + (uVar1 & 0xffffffff);
}


