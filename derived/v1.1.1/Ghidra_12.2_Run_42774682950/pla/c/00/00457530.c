/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00457530; name: FUN_00457530
 */


undefined4 FUN_00457530(long param_1)

{
  FUN_00456be0();
  if ((*(byte *)(param_1 + 0xe0) >> 1 & 1) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0xe4);
}


