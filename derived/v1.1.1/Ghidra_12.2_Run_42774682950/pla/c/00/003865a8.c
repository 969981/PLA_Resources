/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003865a8; name: FUN_003865a8
 */


long FUN_003865a8(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) == 0xffffffff) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x75b);
                    /* try { // try from 003865e0 to 003865f3 has its CatchHandler @ 00386670 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: schema_.HasHasbits(): ");
                    /* try { // try from 003865f4 to 003865fb has its CatchHandler @ 0038666c */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x20) == 0xffffffff) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xb3);
                    /* try { // try from 00386628 to 0038663b has its CatchHandler @ 00386668 */
      uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: HasHasbits(): ");
                    /* try { // try from 0038663c to 00386643 has its CatchHandler @ 00386664 */
      FUN_0030f41c(auStack_18,uVar1);
      FUN_0030f658(auStack_50);
      uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    }
  }
  return param_2 + uVar2;
}


