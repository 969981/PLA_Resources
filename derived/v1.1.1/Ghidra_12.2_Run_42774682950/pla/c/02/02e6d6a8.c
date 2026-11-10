/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d6a8; name: FUN_02e6d6a8
 */


void FUN_02e6d6a8(long param_1)

{
  FUN_02e6d714();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (*DAT_0442d150)(7);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(long *)(param_1 + 0x338) != 0) && (*(int *)(param_1 + 0x354) != -1)) {
    FUN_02f59e70();
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}


