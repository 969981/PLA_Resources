/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624358; name: FUN_02624358
 */


long FUN_02624358(long param_1,ulong param_2)

{
  long extraout_x8;
  
  if (1 < param_2) {
    FUN_02624b30();
    param_1 = extraout_x8;
  }
  return param_1 + param_2 * 8;
}


