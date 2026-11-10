/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c1e4c; name: FUN_003c1e4c
 */


void FUN_003c1e4c(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6e8);
                    /* try { // try from 003c1ef8 to 003c1f0b has its CatchHandler @ 003c1f30 */
    uVar5 = FUN_0030f3ac(auStack_50,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 003c1f0c to 003c1f13 has its CatchHandler @ 003c1f2c */
    FUN_0030f41c(auStack_58,uVar5);
    FUN_0030f658(auStack_50);
    return;
  }
  if (uVar2 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    lVar6 = *plVar1;
    bVar3 = *(byte *)(lVar6 + 0x10);
    while( true ) {
      if ((bVar3 & 3) != 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
      }
      *(undefined4 *)(lVar6 + 0x10) = 0;
      if (((*(ulong *)(lVar6 + 8) & 1) != 0) &&
         (uVar4 = *(ulong *)(lVar6 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10))) {
        FUN_0030cac0();
      }
      plVar1 = plVar1 + 1;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) break;
      lVar6 = *plVar1;
      bVar3 = *(byte *)(lVar6 + 0x10);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


