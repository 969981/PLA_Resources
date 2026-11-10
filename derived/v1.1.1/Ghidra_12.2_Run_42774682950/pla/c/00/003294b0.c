/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003294b0; name: FUN_003294b0
 */


void FUN_003294b0(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 003295a0 to 003295b3 has its CatchHandler @ 0032965c */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 003295b4 to 003295bb has its CatchHandler @ 00329658 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 != 0) goto LAB_003294d4;
LAB_003295cc:
    lVar4 = param_1[1];
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 != 0) goto LAB_0032952c;
LAB_003295dc:
    if (lVar4 == param_2[1]) goto LAB_00329628;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 == 0) goto LAB_003295cc;
LAB_003294d4:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 003294f4 to 00329507 has its CatchHandler @ 00329654 */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329508 to 0032950f has its CatchHandler @ 00329650 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    lVar4 = *(long *)(param_1[1] + -8);
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 == 0) goto LAB_003295dc;
LAB_0032952c:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032954c to 0032955f has its CatchHandler @ 0032964c */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329560 to 00329567 has its CatchHandler @ 00329648 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    if (lVar4 == *(long *)(param_2[1] + -8)) goto LAB_00329628;
  }
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0x5a8);
                    /* try { // try from 00329604 to 00329617 has its CatchHandler @ 00329664 */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 00329618 to 0032961f has its CatchHandler @ 00329660 */
  FUN_0030f41c(auStack_58,uVar3);
  FUN_0030f658(auStack_50);
LAB_00329628:
  uVar5 = *param_2;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return;
}


