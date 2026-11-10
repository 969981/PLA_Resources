/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b25b0; name: FUN_003b25b0
 */


void FUN_003b25b0(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x16eb);
                    /* try { // try from 003b25e8 to 003b25fb has its CatchHandler @ 003b270c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003b25fc to 003b2603 has its CatchHandler @ 003b2708 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar5 = *(byte **)(param_1 + 0x18);
  if ((pbVar5 != PTR_DAT_043730c0) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = *(byte **)(param_1 + 0x20);
  if ((pbVar5 != puVar1) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = *(byte **)(param_1 + 0x28);
  if ((pbVar5 != puVar1) && (pbVar5 != (byte *)0x0)) {
    if ((*pbVar5 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  if ((param_1 != PTR_DAT_04373e38) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    FUN_003b9f60(lVar4);
    FUN_002e2ea0(PTR_LAB_04373088,lVar4);
  }
  return;
}


