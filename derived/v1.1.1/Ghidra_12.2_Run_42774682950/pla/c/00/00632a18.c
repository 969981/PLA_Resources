/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00632a18; name: FUN_00632a18
 */


void FUN_00632a18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
                 ,0x37c);
                    /* try { // try from 00632a50 to 00632a63 has its CatchHandler @ 00632b44 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00632a64 to 00632a6b has its CatchHandler @ 00632b40 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if ((pbVar4 != PTR_DAT_043730c0) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  if ((pbVar4 != puVar1) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  pbVar4 = *(byte **)(param_1 + 0x20);
  if ((pbVar4 != puVar1) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  return;
}


