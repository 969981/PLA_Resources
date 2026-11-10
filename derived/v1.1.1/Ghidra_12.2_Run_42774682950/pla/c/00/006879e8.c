/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006879e8; name: FUN_006879e8
 */


void FUN_006879e8(undefined *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0xda3);
                    /* try { // try from 00687a1c to 00687a2f has its CatchHandler @ 00687a8c */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00687a30 to 00687a37 has its CatchHandler @ 00687a88 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  if ((param_1 != PTR_DAT_04375bf8) && (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
    FUN_00602294(lVar3);
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  return;
}


