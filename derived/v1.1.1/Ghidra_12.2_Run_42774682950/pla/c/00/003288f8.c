/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003288f8; name: FUN_003288f8
 */


void FUN_003288f8(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52c);
                    /* try { // try from 0032894c to 0032895f has its CatchHandler @ 00328a28 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 00328960 to 00328967 has its CatchHandler @ 00328a24 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (param_2 < iVar1) {
    iVar1 = param_1[1];
    uVar3 = *param_3;
  }
  else {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52d);
                    /* try { // try from 00328994 to 003289a7 has its CatchHandler @ 00328a30 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 003289a8 to 003289af has its CatchHandler @ 00328a2c */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
    uVar3 = *param_3;
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 003289e0 to 003289f3 has its CatchHandler @ 00328a20 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003289f4 to 003289fb has its CatchHandler @ 00328a1c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8) = uVar3;
  return;
}


