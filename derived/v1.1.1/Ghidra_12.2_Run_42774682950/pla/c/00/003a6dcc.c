/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a6dcc; name: FUN_003a6dcc
 */


void FUN_003a6dcc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                   ,0x923);
                    /* try { // try from 003a6e04 to 003a6e17 has its CatchHandler @ 003a6ea0 */
      uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: options_ != nullptr: ");
                    /* try { // try from 003a6e18 to 003a6e1f has its CatchHandler @ 003a6e9c */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    FUN_00334cf0(lVar4 + 0x10);
    FUN_003c1f44(lVar4 + 0x28);
    if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
      uVar3 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
      if (*(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10)) {
        FUN_0030cac0();
      }
    }
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10)) {
      FUN_0030cac0();
    }
  }
  return;
}


