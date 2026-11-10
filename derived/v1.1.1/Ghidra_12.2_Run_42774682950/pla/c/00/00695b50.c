/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00695b50; name: FUN_00695b50
 */


void FUN_00695b50(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x119a);
                    /* try { // try from 00695b88 to 00695b9b has its CatchHandler @ 00695c1c */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00695b9c to 00695ba3 has its CatchHandler @ 00695c18 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if ((puVar2 == (ulong *)0x0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_00602294(lVar3);
        FUN_002e2ea0(PTR_LAB_04373088,lVar3);
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


