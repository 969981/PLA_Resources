/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d7dc; name: FUN_0079d7dc
 */


void FUN_0079d7dc(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/resources.pb.cc"
                 ,0x133);
                    /* try { // try from 0079d814 to 0079d827 has its CatchHandler @ 0079d9a0 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 0079d828 to 0079d82f has its CatchHandler @ 0079d99c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar4 = *(byte **)(param_1 + 0x40);
  if ((pbVar4 != PTR_DAT_043730c0) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  pbVar4 = *(byte **)(param_1 + 0x48);
  if ((pbVar4 != puVar1) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  pbVar4 = *(byte **)(param_1 + 0x50);
  if ((pbVar4 != puVar1) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  pbVar4 = *(byte **)(param_1 + 0x58);
  if ((pbVar4 != puVar1) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  if (param_1 != PTR_DAT_04376f28) {
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
      FUN_00602294(lVar5);
      FUN_002e2ea0(PTR_LAB_04373088,lVar5);
    }
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 != 0) {
      FUN_00602294(lVar5);
      FUN_002e2ea0(PTR_LAB_04373088,lVar5);
    }
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0079d6a4(param_1);
  }
  return;
}


