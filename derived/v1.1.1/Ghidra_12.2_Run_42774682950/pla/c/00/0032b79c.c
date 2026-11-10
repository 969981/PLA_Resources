/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032b79c; name: FUN_0032b79c
 */


undefined8 FUN_0032b79c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x69d);
                    /* try { // try from 0032b7dc to 0032b7ef has its CatchHandler @ 0032b868 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 0032b7f0 to 0032b7f7 has its CatchHandler @ 0032b864 */
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
                 ,0x69e);
                    /* try { // try from 0032b824 to 0032b837 has its CatchHandler @ 0032b870 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0032b838 to 0032b83f has its CatchHandler @ 0032b86c */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8 + 8);
}


