/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a3ccc; name: FUN_003a3ccc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003a3ccc(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  FUN_0032b96c(param_1 + 0x18);
  FUN_003c1a44(param_1 + 0x30);
  FUN_003c1af0(param_1 + 0x48);
  FUN_003c1b9c(param_1 + 0x60);
  FUN_003c1c48(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = *(byte **)(param_1 + 0xb0);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar5 = *(byte **)(param_1 + 0xb8);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar5 = *(byte **)(param_1 + 0xc0);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 200);
      if (lVar2 == 0) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                     ,0x6ce);
                    /* try { // try from 003a3d48 to 003a3d5b has its CatchHandler @ 003a3ea8 */
        uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: options_ != nullptr: ");
                    /* try { // try from 003a3d5c to 003a3d63 has its CatchHandler @ 003a3ea4 */
        FUN_0030f41c(auStack_18,uVar3);
        FUN_0030f658(auStack_50);
        lVar2 = *(long *)(param_1 + 200);
      }
      FUN_003a3ebc(lVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xd0);
      if (lVar2 == 0) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                     ,0x6d2);
                    /* try { // try from 003a3ddc to 003a3def has its CatchHandler @ 003a3ea0 */
        uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: source_code_info_ != nullptr: ");
                    /* try { // try from 003a3df0 to 003a3df7 has its CatchHandler @ 003a3e9c */
        FUN_0030f41c(auStack_18,uVar3);
        FUN_0030f658(auStack_50);
        lVar2 = *(long *)(param_1 + 0xd0);
      }
      FUN_003707c4(lVar2 + 0x10);
      if (((*(ulong *)(lVar2 + 8) & 1) != 0) &&
         (uVar4 = *(ulong *)(lVar2 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10))) {
        FUN_0030cac0();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) != 0) &&
     (uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10))) {
    FUN_0030cac0();
  }
  return;
}


