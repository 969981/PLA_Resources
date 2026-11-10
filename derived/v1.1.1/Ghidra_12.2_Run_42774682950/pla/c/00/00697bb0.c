/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00697bb0; name: FUN_00697bb0
 */


void FUN_00697bb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x14f5);
                    /* try { // try from 00697be4 to 00697bf7 has its CatchHandler @ 00697c8c */
    uVar2 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00697bf8 to 00697bff has its CatchHandler @ 00697c88 */
    FUN_0030f41c(auStack_48,uVar2);
    FUN_0030f658(auStack_40);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if (puVar3 == (ulong *)0x0) {
        FUN_0069e168(*(undefined8 *)(param_1 + 0x10));
      }
    }
    else if (iVar1 == 1) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      if (puVar3 == (ulong *)0x0) {
        FUN_0069e0dc(*(undefined8 *)(param_1 + 0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


