/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c858; name: FUN_02e7c858
 */


void FUN_02e7c858(long param_1)

{
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_02e7a760(*(long *)(param_1 + 0x58),param_1);
    FUN_02e7a0dc(*(undefined8 *)(param_1 + 0x58),param_1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_02e7c354(param_1);
  return;
}


