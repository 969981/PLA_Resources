/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00329350; name: FUN_00329350
 */


long FUN_00329350(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x510);
                    /* try { // try from 0032939c to 003293af has its CatchHandler @ 00329474 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 003293b0 to 003293b7 has its CatchHandler @ 00329470 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (param_2 < iVar1) {
    iVar1 = param_1[1];
  }
  else {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x511);
                    /* try { // try from 003293e4 to 003293f7 has its CatchHandler @ 0032947c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 003293f8 to 003293ff has its CatchHandler @ 00329478 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0032942c to 0032943f has its CatchHandler @ 0032946c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329440 to 00329447 has its CatchHandler @ 00329468 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  return *(long *)(param_1 + 2) + (long)param_2 * 8;
}


