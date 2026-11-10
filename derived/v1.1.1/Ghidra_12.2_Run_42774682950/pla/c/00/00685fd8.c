/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00685fd8; name: FUN_00685fd8
 */


void FUN_00685fd8(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0x59c);
                    /* try { // try from 00686010 to 00686023 has its CatchHandler @ 006860fc */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00686024 to 0068602b has its CatchHandler @ 006860f8 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((pbVar5 != PTR_DAT_043730c0) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = *(byte **)(param_1 + 0x18);
  if ((pbVar5 != puVar1) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  if ((param_1 != PTR_DAT_04375b18) && (lVar4 = *(long *)(param_1 + 0x20), lVar4 != 0)) {
    FUN_00603500(lVar4);
    FUN_002e2ea0(PTR_LAB_04373088,lVar4);
  }
  return;
}


