/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00329678; name: FUN_00329678
 */


void FUN_00329678(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52c);
                    /* try { // try from 003296cc to 003296df has its CatchHandler @ 003297a8 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 003296e0 to 003296e7 has its CatchHandler @ 003297a4 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (param_2 < iVar1) {
    iVar1 = param_1[1];
    uVar3 = *param_3;
  }
  else {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x52d);
                    /* try { // try from 00329714 to 00329727 has its CatchHandler @ 003297b0 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 00329728 to 0032972f has its CatchHandler @ 003297ac */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
    uVar3 = *param_3;
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00329760 to 00329773 has its CatchHandler @ 003297a0 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00329774 to 0032977b has its CatchHandler @ 0032979c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8) = uVar3;
  return;
}


