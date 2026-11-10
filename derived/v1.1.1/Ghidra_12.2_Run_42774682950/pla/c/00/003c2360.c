/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c2360; name: FUN_003c2360
 */


void FUN_003c2360(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6e8);
                    /* try { // try from 003c243c to 003c244f has its CatchHandler @ 003c2474 */
    uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 003c2450 to 003c2457 has its CatchHandler @ 003c2470 */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_50);
    return;
  }
  if (uVar2 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    lVar5 = *plVar1;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    uVar2 = *(uint *)(lVar5 + 0x10);
    while( true ) {
      if ((uVar2 & 1) != 0) {
        pbVar6 = *(byte **)(lVar5 + 0x30);
        if ((*pbVar6 & 1) == 0) {
          pbVar6[0] = 0;
          pbVar6[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar6 + 0x10) = 0;
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
        }
      }
      if ((uVar2 & 6) != 0) {
        *(undefined8 *)(lVar5 + 0x38) = 0;
      }
      *(undefined4 *)(lVar5 + 0x10) = 0;
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar3 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar3 + 8) != *(long *)(uVar3 + 0x10))) {
        FUN_0030cac0();
      }
      plVar1 = plVar1 + 1;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) break;
      lVar5 = *plVar1;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      uVar2 = *(uint *)(lVar5 + 0x10);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


