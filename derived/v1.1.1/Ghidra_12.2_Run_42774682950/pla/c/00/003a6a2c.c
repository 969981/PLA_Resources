/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a6a2c; name: FUN_003a6a2c
 */


undefined8 FUN_003a6a2c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar6 = *(int *)(param_1 + 0x38);
  while (0 < iVar6) {
    FUN_00365e80(param_1 + 0x30,iVar6 + -1);
    uVar1 = FUN_003aa80c();
    iVar6 = iVar6 + -1;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x50);
  while (0 < iVar6) {
    FUN_00365f68(param_1 + 0x48,iVar6 + -1);
    uVar1 = FUN_003b00ec();
    iVar6 = iVar6 + -1;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x68);
  while (0 < iVar6) {
    FUN_00366050(param_1 + 0x60,iVar6 + -1);
    uVar1 = FUN_003b2378();
    iVar6 = iVar6 + -1;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x80);
  while (0 < iVar6) {
    FUN_00366138(param_1 + 0x78,iVar6 + -1);
    uVar1 = FUN_003ad1cc();
    iVar6 = iVar6 + -1;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x10) >> 3 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 200);
    if (lVar5 == 0) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x1d1e);
                    /* try { // try from 003a6b10 to 003a6b23 has its CatchHandler @ 003a6bc8 */
      uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003a6b24 to 003a6b2b has its CatchHandler @ 003a6bc4 */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(auStack_60);
      lVar5 = *(long *)(param_1 + 200);
    }
    uVar1 = FUN_00336170(lVar5 + 0x10);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    iVar6 = *(int *)(lVar5 + 0x38);
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        lVar3 = FUN_003c17a8(lVar5 + 0x30,iVar6);
        iVar7 = *(int *)(lVar3 + 0x20);
        while (0 < iVar7) {
          lVar4 = FUN_003669e8(lVar3 + 0x18,iVar7 + -1);
          iVar7 = iVar7 + -1;
          if ((~*(uint *)(lVar4 + 0x10) & 3) != 0) {
            return 0;
          }
        }
      } while (0 < iVar6);
      return 1;
    }
  }
  return 1;
}


