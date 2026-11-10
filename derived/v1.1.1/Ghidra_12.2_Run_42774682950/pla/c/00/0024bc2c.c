/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024bc2c; name: FUN_0024bc2c
 */


void FUN_0024bc2c(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = param_2 & 3 | (param_3 & 3) << 2 | *param_1 & 0xfff0;
  return;
}


