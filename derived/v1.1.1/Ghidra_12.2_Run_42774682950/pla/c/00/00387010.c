/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00387010; name: FUN_00387010
 */


void FUN_00387010(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (*(char *)(*(long *)(param_3 + 0x78) + 0x4f) != '\0') {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x7ce);
                    /* try { // try from 00387050 to 00387063 has its CatchHandler @ 00387110 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: !field->options().weak(): ");
                    /* try { // try from 00387064 to 0038706b has its CatchHandler @ 0038710c */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(auStack_60);
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar1 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) +
                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
    lVar3 = FUN_003865a8(param_1,param_2);
    uVar4 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(lVar3 + uVar4) = *(uint *)(lVar3 + uVar4) & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)
    ;
  }
  return;
}


