/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003affbc; name: FUN_003affbc
 */


void FUN_003affbc(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x20fc);
                    /* try { // try from 003afff0 to 003b0003 has its CatchHandler @ 003b00a4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003b0004 to 003b000b has its CatchHandler @ 003b00a0 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  FUN_00334da8(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_0030c8c0();
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar3,(uVar4 & 0xfffffffffffffffe) + 8);
  }
  FUN_003c32e0(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar1;
  }
  return;
}


