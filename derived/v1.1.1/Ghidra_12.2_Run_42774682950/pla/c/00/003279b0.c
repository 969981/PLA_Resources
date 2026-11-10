/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003279b0; name: FUN_003279b0
 */


void FUN_003279b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_1 == param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x5a7);
                    /* try { // try from 00327aa0 to 00327ab3 has its CatchHandler @ 00327b5c */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 00327ab4 to 00327abb has its CatchHandler @ 00327b58 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 != 0) goto LAB_003279d4;
LAB_00327acc:
    lVar4 = param_1[1];
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 != 0) goto LAB_00327a2c;
LAB_00327adc:
    if (lVar4 == param_2[1]) goto LAB_00327b28;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 == 0) goto LAB_00327acc;
LAB_003279d4:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 003279f4 to 00327a07 has its CatchHandler @ 00327b54 */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00327a08 to 00327a0f has its CatchHandler @ 00327b50 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    lVar4 = *(long *)(param_1[1] + -8);
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 == 0) goto LAB_00327adc;
LAB_00327a2c:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00327a4c to 00327a5f has its CatchHandler @ 00327b4c */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00327a60 to 00327a67 has its CatchHandler @ 00327b48 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    if (lVar4 == *(long *)(param_2[1] + -8)) goto LAB_00327b28;
  }
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0x5a8);
                    /* try { // try from 00327b04 to 00327b17 has its CatchHandler @ 00327b64 */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 00327b18 to 00327b1f has its CatchHandler @ 00327b60 */
  FUN_0030f41c(auStack_58,uVar3);
  FUN_0030f658(auStack_50);
LAB_00327b28:
  uVar5 = *param_2;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return;
}


