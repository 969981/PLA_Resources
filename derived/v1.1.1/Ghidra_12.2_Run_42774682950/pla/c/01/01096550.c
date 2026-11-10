/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01096550; name: FUN_01096550
 */


uint FUN_01096550(int param_1)

{
  if (param_1 - 1U < 4) {
    return 0x20100fe >> (ulong)((param_1 - 1U) * 8 & 0x1f);
  }
  return 0xff;
}


