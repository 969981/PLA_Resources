/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009e9418; name: FUN_009e9418
 */


float FUN_009e9418(float param_1)

{
  param_1 = 1.0 - param_1;
  if (param_1 != 0.0) {
    param_1 = exp2f((param_1 + -1.0) * 10.0);
  }
  return 1.0 - param_1;
}


