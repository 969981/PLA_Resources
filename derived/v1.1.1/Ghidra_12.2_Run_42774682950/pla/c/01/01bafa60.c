/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafa60; name: FUN_01bafa60
 */


void FUN_01bafa60(long param_1)

{
  *(undefined1 *)(param_1 + 0xbf4) = 0;
  if (*(int *)(param_1 + 0xbf0) == 0) {
    FUN_01a51334(param_1,&DAT_03a7ca78,0);
    return;
  }
  return;
}


