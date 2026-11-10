/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032a230; name: FUN_0032a230
 */


void FUN_0032a230(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 0032a320 to 0032a333 has its CatchHandler @ 0032a3dc */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 0032a334 to 0032a33b has its CatchHandler @ 0032a3d8 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 != 0) goto LAB_0032a254;
LAB_0032a34c:
    lVar4 = param_1[1];
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 != 0) goto LAB_0032a2ac;
LAB_0032a35c:
    if (lVar4 == param_2[1]) goto LAB_0032a3a8;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 == 0) goto LAB_0032a34c;
LAB_0032a254:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032a274 to 0032a287 has its CatchHandler @ 0032a3d4 */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032a288 to 0032a28f has its CatchHandler @ 0032a3d0 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    lVar4 = *(long *)(param_1[1] + -8);
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 == 0) goto LAB_0032a35c;
LAB_0032a2ac:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032a2cc to 0032a2df has its CatchHandler @ 0032a3cc */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032a2e0 to 0032a2e7 has its CatchHandler @ 0032a3c8 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    if (lVar4 == *(long *)(param_2[1] + -8)) goto LAB_0032a3a8;
  }
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0x5a8);
                    /* try { // try from 0032a384 to 0032a397 has its CatchHandler @ 0032a3e4 */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 0032a398 to 0032a39f has its CatchHandler @ 0032a3e0 */
  FUN_0030f41c(auStack_58,uVar3);
  FUN_0030f658(auStack_50);
LAB_0032a3a8:
  uVar5 = *param_2;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return;
}


