/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a77d8; name: FUN_003a77d8
 */


void FUN_003a77d8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0xdd9);
                    /* try { // try from 003a780c to 003a781f has its CatchHandler @ 003a7890 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003a7820 to 003a7827 has its CatchHandler @ 003a788c */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
  }
  FUN_00334da8(param_1 + 0x10,param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar2 = FUN_0030c8c0();
    }
    else {
      lVar2 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  }
  FUN_003c32e0(param_1 + 0x28,param_2 + 0x28);
  return;
}


