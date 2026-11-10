/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baf9d4; name: FUN_01baf9d4
 */


void FUN_01baf9d4(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0xbf4) = 0;
  *(undefined4 *)(param_1 + 0xbf0) = param_2;
  *(undefined4 *)(param_1 + 0xbf8) = *(undefined4 *)(param_1 + 0xb8c);
  if (((*(byte *)(param_1 + 0xb50) & 1) == 0) && ((*(byte *)(param_1 + 0xb58) & 1) == 0)) {
    FUN_01a51334(param_1,&DAT_03a7ca78);
    return;
  }
  return;
}


