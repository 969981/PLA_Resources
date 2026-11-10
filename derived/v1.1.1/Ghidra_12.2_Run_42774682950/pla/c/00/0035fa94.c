/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035fa94; name: FUN_0035fa94
 */


void FUN_0035fa94(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if ((0 < *(int *)(param_2 + 0x2c)) && (*(int *)(*(long *)(param_2 + 0x30) + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if (*(int *)(param_3 + 0x20) < 1) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x69e);
                    /* try { // try from 0035fae8 to 0035fafb has its CatchHandler @ 0035fb40 */
      uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0035fafc to 0035fb03 has its CatchHandler @ 0035fb3c */
      FUN_0030f41c(auStack_58,uVar1);
      FUN_0030f658(auStack_50);
    }
    FUN_0034dc2c(param_1,uVar2,*(undefined8 *)(*(long *)(param_3 + 0x28) + 8),1,
                 "The first enum value must be zero in proto3.");
  }
  return;
}


