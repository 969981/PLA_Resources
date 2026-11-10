/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786b0c; name: FUN_02786b0c
 */


uint FUN_02786b0c(uint param_1)

{
  if (param_1 < 0x33) {
    param_1 = 0x32;
  }
  if (99 < param_1) {
    param_1 = 100;
  }
  return param_1;
}


