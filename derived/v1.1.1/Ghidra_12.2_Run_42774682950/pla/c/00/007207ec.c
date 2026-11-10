/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007207ec; name: FUN_007207ec
 */


void FUN_007207ec(undefined *param_1)

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
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/matchmaking/v1/resources.pb.cc"
                 ,0x134b);
                    /* try { // try from 00720824 to 00720837 has its CatchHandler @ 00720920 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00720838 to 0072083f has its CatchHandler @ 0072091c */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if ((pbVar3 != PTR_DAT_043730c0) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
  }
  if (param_1 != PTR_DAT_04376628) {
    FUN_007262a4(*(undefined8 *)(param_1 + 0x30));
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      FUN_0030be58(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      FUN_00602294(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      FUN_0030be58(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
  }
  return;
}


