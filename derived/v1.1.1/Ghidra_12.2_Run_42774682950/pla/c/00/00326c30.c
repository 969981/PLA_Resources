/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00326c30; name: FUN_00326c30
 */


void FUN_00326c30(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 00326d20 to 00326d33 has its CatchHandler @ 00326ddc */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 00326d34 to 00326d3b has its CatchHandler @ 00326dd8 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 != 0) goto LAB_00326c54;
LAB_00326d4c:
    lVar4 = param_1[1];
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 != 0) goto LAB_00326cac;
LAB_00326d5c:
    if (lVar4 == param_2[1]) goto LAB_00326da8;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 == 0) goto LAB_00326d4c;
LAB_00326c54:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00326c74 to 00326c87 has its CatchHandler @ 00326dd4 */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00326c88 to 00326c8f has its CatchHandler @ 00326dd0 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    lVar4 = *(long *)(param_1[1] + -8);
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 == 0) goto LAB_00326d5c;
LAB_00326cac:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00326ccc to 00326cdf has its CatchHandler @ 00326dcc */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00326ce0 to 00326ce7 has its CatchHandler @ 00326dc8 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    if (lVar4 == *(long *)(param_2[1] + -8)) goto LAB_00326da8;
  }
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0x5a8);
                    /* try { // try from 00326d84 to 00326d97 has its CatchHandler @ 00326de4 */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 00326d98 to 00326d9f has its CatchHandler @ 00326de0 */
  FUN_0030f41c(auStack_58,uVar3);
  FUN_0030f658(auStack_50);
LAB_00326da8:
  uVar5 = *param_2;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return;
}


