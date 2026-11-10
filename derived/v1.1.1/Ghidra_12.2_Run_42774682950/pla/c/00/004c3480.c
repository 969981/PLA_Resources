/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3480; name: FUN_004c3480
 */


void FUN_004c3480(long param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_004c9970();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x28);
  if (*(long *)(param_1 + 0x438) != 0) {
    FUN_0041b550();
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  if (*(long *)(param_1 + 0x468) != 0) {
    FUN_0041b550();
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  FUN_004bfb80(*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_004bfb80(*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  FUN_00444950(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_00444950(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}


