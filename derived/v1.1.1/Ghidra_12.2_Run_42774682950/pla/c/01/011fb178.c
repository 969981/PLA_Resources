/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb178; name: FUN_011fb178
 */


void FUN_011fb178(long param_1)

{
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x174) = 0;
  if (*(long *)(*(long *)(param_1 + 0x68) + 0x78) == 0) {
    return;
  }
  thunk_FUN_027d93c8();
  return;
}


