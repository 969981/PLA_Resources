/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de61e8; name: FUN_02de61e8
 */


void FUN_02de61e8(long param_1)

{
  if (*(int *)(param_1 + 0xf8) == 2) {
    *(undefined4 *)(param_1 + 0xf8) = 1;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined1 *)(param_1 + 0x11c) = 0;
  }
  return;
}


