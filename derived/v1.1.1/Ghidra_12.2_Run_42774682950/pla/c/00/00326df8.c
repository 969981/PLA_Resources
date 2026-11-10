/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00326df8; name: FUN_00326df8
 */


void FUN_00326df8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52c);
                    /* try { // try from 00326e4c to 00326e5f has its CatchHandler @ 00326f28 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 00326e60 to 00326e67 has its CatchHandler @ 00326f24 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (param_2 < iVar1) {
    iVar1 = param_1[1];
    uVar2 = *param_3;
  }
  else {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52d);
                    /* try { // try from 00326e94 to 00326ea7 has its CatchHandler @ 00326f30 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 00326ea8 to 00326eaf has its CatchHandler @ 00326f2c */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
    uVar2 = *param_3;
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00326ee0 to 00326ef3 has its CatchHandler @ 00326f20 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00326ef4 to 00326efb has its CatchHandler @ 00326f1c */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
  }
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)param_2 * 4) = uVar2;
  return;
}


