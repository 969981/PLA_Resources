/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003875f4; name: FUN_003875f4
 */


long FUN_003875f4(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) == 0xffffffff) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x756);
                    /* try { // try from 0038762c to 0038763f has its CatchHandler @ 003876bc */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: schema_.HasHasbits(): ");
                    /* try { // try from 00387640 to 00387647 has its CatchHandler @ 003876b8 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x20) == 0xffffffff) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xb3);
                    /* try { // try from 00387674 to 00387687 has its CatchHandler @ 003876b4 */
      uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: HasHasbits(): ");
                    /* try { // try from 00387688 to 0038768f has its CatchHandler @ 003876b0 */
      FUN_0030f41c(auStack_18,uVar1);
      FUN_0030f658(auStack_50);
      uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    }
  }
  return param_2 + uVar2;
}


