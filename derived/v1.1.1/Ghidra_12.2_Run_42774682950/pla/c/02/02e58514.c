/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58514; name: FUN_02e58514
 */


void FUN_02e58514(long *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 8))();
  if (pfVar1 != (float *)0x0) {
    pfVar1[0x1e] = 0.0;
    pfVar1[0x20] = (*param_3 - *param_2) * (*param_3 - *param_2) +
                   (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                   (param_3[2] - param_2[2]) * (param_3[2] - param_2[2]);
    pfVar1[0x1b] = *param_2;
    pfVar1[0x1c] = param_2[1];
    pfVar1[0x1d] = param_2[2];
    *pfVar1 = *param_3;
    pfVar1[1] = param_3[1];
    pfVar1[2] = param_3[2];
  }
  *(undefined2 *)((long)param_1 + 0xc) = 1;
  return;
}


