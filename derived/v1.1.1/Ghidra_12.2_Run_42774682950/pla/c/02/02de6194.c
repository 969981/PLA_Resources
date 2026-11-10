/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de6194; name: FUN_02de6194
 */


void FUN_02de6194(long param_1)

{
  if (*(int *)(param_1 + 0xf8) != 2) {
    *(undefined4 *)(param_1 + 0xf8) = 2;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined1 *)(param_1 + 0x144) = 1;
  }
  return;
}


