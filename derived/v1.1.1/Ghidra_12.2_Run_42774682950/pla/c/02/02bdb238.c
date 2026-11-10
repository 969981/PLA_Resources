/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdb238; name: FUN_02bdb238
 */


undefined8 FUN_02bdb238(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x7c) != 2) {
    return 0;
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x3e0) = *param_2;
  *(undefined8 *)(param_1 + 1000) = uVar1;
  if (*(char *)(param_1 + 0x3d0) == '\0') {
    *(undefined1 *)(param_1 + 0x3d0) = 1;
  }
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x400) = *param_3;
  *(undefined8 *)(param_1 + 0x408) = uVar1;
  if (*(char *)(param_1 + 0x3f0) == '\0') {
    *(undefined1 *)(param_1 + 0x3f0) = 1;
  }
  return 1;
}


