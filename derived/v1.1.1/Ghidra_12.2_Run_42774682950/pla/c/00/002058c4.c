/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002058c4; name: FUN_002058c4
 */


bool FUN_002058c4(int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = param_1 + 1;
  }
  return 0 < param_2 && param_1 >> 1 <= param_2;
}


