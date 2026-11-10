/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baf99c; name: FUN_01baf99c
 */


void FUN_01baf99c(long param_1)

{
  *(undefined1 *)(param_1 + 0xbf4) = 1;
  *(undefined4 *)(param_1 + 0xbf0) = 0x1e;
  *(undefined4 *)(param_1 + 0xbf8) = *(undefined4 *)(param_1 + 0xb8c);
  if (((*(byte *)(param_1 + 0xb50) & 1) == 0) && ((*(byte *)(param_1 + 0xb58) & 1) == 0)) {
    FUN_01a51334(param_1,&DAT_03a7ca78);
    return;
  }
  return;
}


