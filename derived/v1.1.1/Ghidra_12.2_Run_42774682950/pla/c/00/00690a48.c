/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00690a48; name: FUN_00690a48
 */


void FUN_00690a48(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  *param_1 = (long)(PTR_DAT_04375db0 + 0x10);
  puVar2 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 00690a74 to 00690a8b has its CatchHandler @ 00690b30 */
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x6f2);
                    /* try { // try from 00690a8c to 00690a9f has its CatchHandler @ 00690b1c */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00690aa0 to 00690aa7 has its CatchHandler @ 00690b18 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_00690214(param_1);
  }
  if ((((param_1[1] & 1U) != 0) &&
      (plVar3 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar3 == 0)) && (plVar3 != (long *)0x0)
     ) {
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar3[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar3);
  }
  return;
}


