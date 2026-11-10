/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032bcc4; name: FUN_0032bcc4
 */


void FUN_0032bcc4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_1 == param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0xa11);
                    /* try { // try from 0032bd0c to 0032bd1f has its CatchHandler @ 0032bda0 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: this != other: ");
                    /* try { // try from 0032bd20 to 0032bd27 has its CatchHandler @ 0032bd9c */
    FUN_0030f41c(auStack_18,uVar3);
    FUN_0030f658(auStack_50);
    if (*param_1 == *param_2) goto LAB_0032bd7c;
  }
  else if (*param_1 == *param_2) goto LAB_0032bd7c;
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
               ,0xa12);
                    /* try { // try from 0032bd58 to 0032bd6b has its CatchHandler @ 0032bda8 */
  uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == other->GetArena(): ");
                    /* try { // try from 0032bd6c to 0032bd73 has its CatchHandler @ 0032bda4 */
  FUN_0030f41c(auStack_18,uVar3);
  FUN_0030f658(auStack_50);
LAB_0032bd7c:
  lVar4 = param_2[1];
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  param_1[2] = param_2[2];
  param_1[1] = lVar4;
  param_2[1] = lVar1;
  param_2[2] = lVar2;
  return;
}


