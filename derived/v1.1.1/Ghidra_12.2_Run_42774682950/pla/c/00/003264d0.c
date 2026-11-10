/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003264d0; name: FUN_003264d0
 */


void FUN_003264d0(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00326524 to 00326537 has its CatchHandler @ 003265d0 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00326538 to 0032653f has its CatchHandler @ 003265cc */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    iVar1 = *(int *)(param_1 + 4);
    lVar5 = *(long *)(param_1 + 8);
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00326570 to 00326583 has its CatchHandler @ 003265c8 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00326584 to 0032658b has its CatchHandler @ 003265c4 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined1 *)(lVar5 + param_2);
  *(undefined1 *)(lVar5 + param_2) = *(undefined1 *)(lVar4 + param_3);
  *(undefined1 *)(lVar4 + param_3) = uVar2;
  return;
}


