/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9310; name: FUN_02eb9310
 */


float FUN_02eb9310(float *param_1,float *param_2)

{
  return SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}


