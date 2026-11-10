/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00328490; name: FUN_00328490
 */


long FUN_00328490(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x525);
                    /* try { // try from 003284dc to 003284ef has its CatchHandler @ 003285b4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 003284f0 to 003284f7 has its CatchHandler @ 003285b0 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (param_2 < iVar1) {
    iVar1 = param_1[1];
  }
  else {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x526);
                    /* try { // try from 00328524 to 00328537 has its CatchHandler @ 003285bc */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 00328538 to 0032853f has its CatchHandler @ 003285b8 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = param_1[1];
  }
  if (iVar1 < 1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 0032856c to 0032857f has its CatchHandler @ 003285ac */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00328580 to 00328587 has its CatchHandler @ 003285a8 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  return *(long *)(param_1 + 2) + (long)param_2 * 8;
}


