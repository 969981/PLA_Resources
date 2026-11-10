/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068d5a8; name: FUN_0068d5a8
 */


void FUN_0068d5a8(undefined *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x33f);
                    /* try { // try from 0068d5e0 to 0068d5f3 has its CatchHandler @ 0068d6d4 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0068d5f4 to 0068d5fb has its CatchHandler @ 0068d6d0 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((pbVar3 != PTR_DAT_043730c0) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
  }
  if (param_1 != PTR_DAT_04375918) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      FUN_002e0f54(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      FUN_00602294(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      FUN_00602294(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
  }
  return;
}


