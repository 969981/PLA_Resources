/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00324a00; name: FUN_00324a00
 */


void FUN_00324a00(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar4 = (uint *)*param_1;
  uVar1 = *puVar4;
  uVar3 = puVar4[1];
  if (uVar1 == uVar3) {
    FUN_003265e4(puVar4,uVar1 + 1);
    uVar3 = puVar4[1];
  }
  if ((int)uVar3 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00324a50 to 00324a63 has its CatchHandler @ 00324aa4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00324a64 to 00324a6b has its CatchHandler @ 00324aa0 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 4) = -(param_2 & 1) ^ param_2 >> 1;
  *puVar4 = uVar1 + 1;
  return;
}


