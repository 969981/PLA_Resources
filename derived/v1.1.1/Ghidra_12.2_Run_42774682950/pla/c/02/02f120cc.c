/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f120cc; name: FUN_02f120cc
 */


float FUN_02f120cc(float *param_1,float *param_2,float *param_3)

{
  return (param_2[1] * *param_1 * param_3[2] + *param_3 * param_2[2] * param_1[1] +
         param_3[1] * *param_2 * param_1[2]) -
         (*param_3 * param_2[1] * param_1[2] + *param_2 * param_1[1] * param_3[2] +
         param_3[1] * param_2[2] * *param_1);
}


