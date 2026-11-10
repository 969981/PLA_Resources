/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de6178; name: FUN_02de6178
 */


void FUN_02de6178(long param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = 2;
  *(byte *)(param_1 + 0x11c) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  return;
}


