/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b2a8; name: FUN_02e9b2a8
 */


undefined8 FUN_02e9b2a8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    *(undefined4 *)(param_1 + 9) = 0x4483126f;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((long)param_1 + 0x4c) = 0x32;
    param_1[2] = 0;
    param_1[3] = 0;
    return 1;
  }
  return 2;
}


