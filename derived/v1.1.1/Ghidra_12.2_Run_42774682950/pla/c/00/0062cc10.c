/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062cc10; name: FUN_0062cc10
 */


void FUN_0062cc10(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  *param_1 = (long)(PTR_DAT_04375618 + 0x10);
  uVar2 = param_1[1];
  puVar3 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
                    /* try { // try from 0062cc3c to 0062cc53 has its CatchHandler @ 0062ccec */
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/friends.pb.cc"
                 ,0x1bb);
                    /* try { // try from 0062cc54 to 0062cc67 has its CatchHandler @ 0062ccd8 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0062cc68 to 0062cc6f has its CatchHandler @ 0062ccd4 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
    uVar2 = param_1[1];
  }
  if ((((uVar2 & 1) != 0) && (plVar4 = (long *)(uVar2 & 0xfffffffffffffffe), *plVar4 == 0)) &&
     (plVar4 != (long *)0x0)) {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar4[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  return;
}


