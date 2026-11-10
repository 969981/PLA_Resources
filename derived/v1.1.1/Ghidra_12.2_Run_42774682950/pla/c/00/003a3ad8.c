/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a3ad8; name: FUN_003a3ad8
 */


void FUN_003a3ad8(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x69e);
                    /* try { // try from 003a3b10 to 003a3b23 has its CatchHandler @ 003a3c7c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003a3b24 to 003a3b2b has its CatchHandler @ 003a3c78 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar5 = *(byte **)(param_1 + 0xb0);
  if ((pbVar5 != PTR_DAT_043730c0) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = *(byte **)(param_1 + 0xb8);
  if ((pbVar5 != puVar1) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = *(byte **)(param_1 + 0xc0);
  if ((pbVar5 != puVar1) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  if (param_1 != PTR_DAT_04373dd8) {
    plVar6 = *(long **)(param_1 + 200);
    if (plVar6 != (long *)0x0) {
      *plVar6 = (long)(PTR_DAT_04373ef8 + 0x10);
                    /* try { // try from 003a3c0c to 003a3c1b has its CatchHandler @ 003a3c90 */
      FUN_003b3bfc(plVar6);
      FUN_003a2ec4(plVar6 + 1);
      FUN_003aab64(plVar6 + 6);
      FUN_0032dd18(plVar6 + 2);
      FUN_002e2ea0(PTR_LAB_04373088,plVar6);
    }
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 != 0) {
      FUN_003bdda0(lVar4);
      FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    }
  }
  return;
}


