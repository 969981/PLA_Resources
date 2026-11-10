/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00326080; name: FUN_00326080
 */


void FUN_00326080(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52c);
                    /* try { // try from 003260d4 to 003260e7 has its CatchHandler @ 003261b0 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 003260e8 to 003260ef has its CatchHandler @ 003261ac */
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
                    /* try { // try from 0032611c to 0032612f has its CatchHandler @ 003261b8 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 00326130 to 00326137 has its CatchHandler @ 003261b4 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
    uVar2 = *param_3;
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00326168 to 0032617b has its CatchHandler @ 003261a8 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032617c to 00326183 has its CatchHandler @ 003261a4 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
  }
  *(undefined1 *)(*(long *)(param_1 + 2) + (long)param_2) = uVar2;
  return;
}


