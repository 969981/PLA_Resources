/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a8818; name: FUN_003a8818
 */


void FUN_003a8818(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  FUN_003c1c48(param_1 + 0x18);
  FUN_003c1a44(param_1 + 0x30);
  FUN_003c1af0(param_1 + 0x48);
  FUN_003c1cf4(param_1 + 0x60);
  FUN_003c1c48(param_1 + 0x78);
  FUN_003c1da0(param_1 + 0x90);
  FUN_003c1e4c(param_1 + 0xa8);
  FUN_0032b96c(param_1 + 0xc0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0xd8);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0xe0);
      if (lVar5 == 0) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                     ,0xb6f);
                    /* try { // try from 003a88ac to 003a88bf has its CatchHandler @ 003a8964 */
        uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: options_ != nullptr: ");
                    /* try { // try from 003a88c0 to 003a88c7 has its CatchHandler @ 003a8960 */
        FUN_0030f41c(auStack_18,uVar2);
        FUN_0030f658(auStack_50);
        lVar5 = *(long *)(param_1 + 0xe0);
      }
      FUN_00334cf0(lVar5 + 0x10);
      FUN_003c1f44(lVar5 + 0x30);
      *(undefined4 *)(lVar5 + 0x48) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar3 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10))) {
        FUN_0030cac0();
        uVar3 = *(ulong *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
        goto joined_r0x003a8934;
      }
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x003a8934:
  if (((uVar3 & 1) != 0) &&
     (*(long *)((uVar3 & 0xfffffffffffffffe) + 8) != *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10))
     ) {
    FUN_0030cac0();
  }
  return;
}


