/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a8288; name: FUN_007a8288
 */


void FUN_007a8288(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0x96e);
                    /* try { // try from 007a82c0 to 007a82d3 has its CatchHandler @ 007a8384 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 007a82d4 to 007a82db has its CatchHandler @ 007a8380 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if (puVar3 == (ulong *)0x0) {
        FUN_007b2068(*(undefined8 *)(param_1 + 0x28));
      }
    }
    else if (iVar1 == 2) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if ((puVar3 == (ulong *)0x0) && (lVar4 = *(long *)(param_1 + 0x28), lVar4 != 0)) {
        FUN_007a7908(lVar4);
        FUN_002e2ea0(PTR_LAB_04373088,lVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


