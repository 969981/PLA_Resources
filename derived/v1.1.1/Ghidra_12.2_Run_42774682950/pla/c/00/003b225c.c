/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b225c; name: FUN_003b225c
 */


void FUN_003b225c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x2314);
                    /* try { // try from 003b2290 to 003b22a3 has its CatchHandler @ 003b2330 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003b22a4 to 003b22ab has its CatchHandler @ 003b232c */
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
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    *(undefined1 *)(param_1 + 0x48) = uVar1;
  }
  return;
}


