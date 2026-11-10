/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c2194; name: FUN_003c2194
 */


void FUN_003c2194(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6e8);
                    /* try { // try from 003c21f4 to 003c2207 has its CatchHandler @ 003c222c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 003c2208 to 003c220f has its CatchHandler @ 003c2228 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    return;
  }
  if (uVar1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    do {
      puVar3 = puVar3 + 1;
      FUN_003b275c(*puVar3);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


