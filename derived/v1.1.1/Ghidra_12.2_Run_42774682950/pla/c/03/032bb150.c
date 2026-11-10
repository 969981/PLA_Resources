/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb150; name: FUN_032bb150
 */


ulong FUN_032bb150(ulong param_1,byte *param_2,long param_3)

{
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = *(ulong *)(&DAT_03aacf80 + (param_1 & 0xff ^ (ulong)*param_2) * 8) ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}


