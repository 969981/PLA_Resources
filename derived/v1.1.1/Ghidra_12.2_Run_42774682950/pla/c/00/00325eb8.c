/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00325eb8; name: FUN_00325eb8
 */


void FUN_00325eb8(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 00325fa8 to 00325fbb has its CatchHandler @ 00326064 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 00325fbc to 00325fc3 has its CatchHandler @ 00326060 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 != 0) goto LAB_00325edc;
LAB_00325fd4:
    lVar4 = param_1[1];
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 != 0) goto LAB_00325f34;
LAB_00325fe4:
    if (lVar4 == param_2[1]) goto LAB_00326030;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 4);
    if (iVar2 == 0) goto LAB_00325fd4;
LAB_00325edc:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00325efc to 00325f0f has its CatchHandler @ 0032605c */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00325f10 to 00325f17 has its CatchHandler @ 00326058 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    lVar4 = *(long *)(param_1[1] + -8);
    iVar2 = *(int *)((long)param_2 + 4);
    if (iVar2 == 0) goto LAB_00325fe4;
LAB_00325f34:
    if (iVar2 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00325f54 to 00325f67 has its CatchHandler @ 00326054 */
      uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00325f68 to 00325f6f has its CatchHandler @ 00326050 */
      FUN_0030f41c(auStack_58,uVar3);
      FUN_0030f658(auStack_50);
    }
    if (lVar4 == *(long *)(param_2[1] + -8)) goto LAB_00326030;
  }
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0x5a8);
                    /* try { // try from 0032600c to 0032601f has its CatchHandler @ 0032606c */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 00326020 to 00326027 has its CatchHandler @ 00326068 */
  FUN_0030f41c(auStack_58,uVar3);
  FUN_0030f658(auStack_50);
LAB_00326030:
  uVar5 = *param_2;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return;
}


