/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032b884; name: FUN_0032b884
 */


undefined8 FUN_0032b884(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6b3);
                    /* try { // try from 0032b8c4 to 0032b8d7 has its CatchHandler @ 0032b950 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 0032b8d8 to 0032b8df has its CatchHandler @ 0032b94c */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 <= param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6b4);
                    /* try { // try from 0032b90c to 0032b91f has its CatchHandler @ 0032b958 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0032b920 to 0032b927 has its CatchHandler @ 0032b954 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8 + 8);
}


