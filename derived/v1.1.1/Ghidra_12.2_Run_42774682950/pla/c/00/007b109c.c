/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b109c; name: FUN_007b109c
 */


undefined8 FUN_007b109c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 0) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x69d);
                    /* try { // try from 007b10dc to 007b10ef has its CatchHandler @ 007b1168 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) >= (0): ");
                    /* try { // try from 007b10f0 to 007b10f7 has its CatchHandler @ 007b1164 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 <= param_2) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x69e);
                    /* try { // try from 007b1124 to 007b1137 has its CatchHandler @ 007b1170 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 007b1138 to 007b113f has its CatchHandler @ 007b116c */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8 + 8);
}


