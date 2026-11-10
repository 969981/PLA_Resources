/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032b398; name: FUN_0032b398
 */


void FUN_0032b398(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_68;
  long local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_1 == param_2) {
    return;
  }
  if (*(int *)((long)param_1 + 4) == 0) {
    lVar5 = param_1[1];
    iVar1 = *(int *)((long)param_2 + 4);
  }
  else {
    if (*(int *)((long)param_1 + 4) < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032b3dc to 0032b3ef has its CatchHandler @ 0032b590 */
      uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032b3f0 to 0032b3f7 has its CatchHandler @ 0032b58c */
      FUN_0030f41c(&local_68,uVar2);
      FUN_0030f658(auStack_50);
    }
    lVar5 = *(long *)(param_1[1] + -8);
    iVar1 = *(int *)((long)param_2 + 4);
  }
  if (iVar1 == 0) {
    lVar3 = param_2[1];
  }
  else {
    if (iVar1 < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032b434 to 0032b447 has its CatchHandler @ 0032b588 */
      uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032b448 to 0032b44f has its CatchHandler @ 0032b584 */
      FUN_0030f41c(&local_68,uVar2);
      FUN_0030f658(auStack_50);
    }
    lVar3 = *(long *)(param_2[1] + -8);
  }
  if (lVar5 == lVar3) {
    FUN_0032afb0(param_1,param_2);
    return;
  }
  if (*(int *)((long)param_2 + 4) == 0) {
    plVar4 = param_2 + 1;
  }
  else {
    if (*(int *)((long)param_2 + 4) < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032b494 to 0032b4a7 has its CatchHandler @ 0032b580 */
      uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032b4a8 to 0032b4af has its CatchHandler @ 0032b57c */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
    }
    plVar4 = (long *)(param_2[1] + -8);
  }
  local_60 = *plVar4;
  local_68 = 0;
                    /* try { // try from 0032b50c to 0032b53f has its CatchHandler @ 0032b5a4 */
  FUN_0032b2c4(&local_68,param_1);
  *(undefined4 *)param_1 = 0;
  FUN_0032b2c4(param_1,param_2);
  if (&local_68 != param_2) {
    FUN_0032afb0(param_2,&local_68);
  }
  if ((local_68._4_4_ < 1) || (*(long *)(local_60 + -8) != 0)) {
    return;
  }
  FUN_002ee710();
  return;
}


