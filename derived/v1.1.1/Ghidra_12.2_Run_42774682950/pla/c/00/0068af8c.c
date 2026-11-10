/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068af8c; name: FUN_0068af8c
 */


void FUN_0068af8c(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0x17cf);
                    /* try { // try from 0068afc0 to 0068afd3 has its CatchHandler @ 0068b040 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0068afd4 to 0068afdb has its CatchHandler @ 0068b03c */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((pbVar3 != PTR_DAT_043730c0) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
  }
  return;
}


