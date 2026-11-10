/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007aa20c; name: FUN_007aa20c
 */


void FUN_007aa20c(long param_1)

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
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0xc23);
                    /* try { // try from 007aa240 to 007aa253 has its CatchHandler @ 007aa2c0 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 007aa254 to 007aa25b has its CatchHandler @ 007aa2bc */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if ((pbVar3 != PTR_DAT_043730c0) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
  }
  return;
}


