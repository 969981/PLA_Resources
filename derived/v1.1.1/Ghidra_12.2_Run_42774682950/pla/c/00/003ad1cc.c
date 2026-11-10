/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ad1cc; name: FUN_003ad1cc
 */


undefined8 FUN_003ad1cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if ((*(uint *)(param_1 + 0x10) >> 5 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 == 0) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2365);
                    /* try { // try from 003ad27c to 003ad28f has its CatchHandler @ 003ad2cc */
      uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003ad290 to 003ad297 has its CatchHandler @ 003ad2c8 */
      FUN_0030f41c(auStack_28,uVar4);
      FUN_0030f658(auStack_60);
      lVar6 = *(long *)(param_1 + 0x40);
      uVar1 = FUN_00336170(lVar6 + 0x10);
    }
    else {
      uVar1 = FUN_00336170(lVar6 + 0x10);
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    iVar5 = *(int *)(lVar6 + 0x38);
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        lVar2 = FUN_003c17a8(lVar6 + 0x30,iVar5);
        iVar7 = *(int *)(lVar2 + 0x20);
        while (0 < iVar7) {
          lVar3 = FUN_003669e8(lVar2 + 0x18,iVar7 + -1);
          iVar7 = iVar7 + -1;
          if ((~*(uint *)(lVar3 + 0x10) & 3) != 0) {
            return 0;
          }
        }
      } while (0 < iVar5);
      return 1;
    }
  }
  return 1;
}


