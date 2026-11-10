/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b0324; name: FUN_003b0324
 */


void FUN_003b0324(undefined *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x145a);
                    /* try { // try from 003b035c to 003b036f has its CatchHandler @ 003b0410 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003b0370 to 003b0377 has its CatchHandler @ 003b040c */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  if ((pbVar4 != PTR_DAT_043730c0) && (pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar4);
  }
  if ((param_1 != PTR_DAT_04373d78) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    FUN_003b8ce8(lVar3);
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  return;
}


