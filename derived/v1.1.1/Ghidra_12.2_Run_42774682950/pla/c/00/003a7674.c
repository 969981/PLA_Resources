/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a7674; name: FUN_003a7674
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003a7674(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x9c3);
                    /* try { // try from 003a76e8 to 003a76fb has its CatchHandler @ 003a77c4 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003a76fc to 003a7703 has its CatchHandler @ 003a77c0 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if ((uVar6 & 1) == 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      lVar4 = FUN_0030c8c0((ulong *)(param_1 + 8));
    }
    else {
      lVar4 = (uVar7 & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar4,(uVar6 & 0xfffffffffffffffe) + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar4 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_003bfef0(puVar5);
        *(long *)(param_1 + 0x18) = lVar4;
      }
      puVar1 = PTR_DAT_04373c18;
      if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
        puVar1 = *(undefined **)(param_2 + 0x18);
      }
      FUN_003a77d8(lVar4,puVar1);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  return;
}


