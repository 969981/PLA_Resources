/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b2378; name: FUN_003b2378
 */


undefined8 FUN_003b2378(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar6 = *(int *)(param_1 + 0x20);
  while (0 < iVar6) {
    FUN_003666a8(param_1 + 0x18,iVar6 + -1);
    uVar1 = FUN_003b38fc();
    iVar6 = iVar6 + -1;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2760);
                    /* try { // try from 003b2450 to 003b2463 has its CatchHandler @ 003b24a0 */
      uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003b2464 to 003b246b has its CatchHandler @ 003b249c */
      FUN_0030f41c(auStack_28,uVar4);
      FUN_0030f658(auStack_60);
      lVar5 = *(long *)(param_1 + 0x38);
      uVar1 = FUN_00336170(lVar5 + 0x10);
    }
    else {
      uVar1 = FUN_00336170(lVar5 + 0x10);
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    iVar6 = *(int *)(lVar5 + 0x38);
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        lVar2 = FUN_003c17a8(lVar5 + 0x30,iVar6);
        iVar7 = *(int *)(lVar2 + 0x20);
        while (0 < iVar7) {
          lVar3 = FUN_003669e8(lVar2 + 0x18,iVar7 + -1);
          iVar7 = iVar7 + -1;
          if ((~*(uint *)(lVar3 + 0x10) & 3) != 0) {
            return 0;
          }
        }
      } while (0 < iVar6);
      return 1;
    }
  }
  return 1;
}


