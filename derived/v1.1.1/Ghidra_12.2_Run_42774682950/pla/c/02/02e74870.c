/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74870; name: FUN_02e74870
 */


float FUN_02e74870(float param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  
  switch(param_5) {
  case 0:
    param_1 = 1.0 - param_1;
    return param_3 - param_4 * param_1 * param_1 * param_1;
  case 1:
    fVar1 = param_1 * param_1 * -0.4052847 + param_1 * 1.2732395;
    return param_2 + (fVar1 * 0.225 + 0.775) * fVar1 * param_4;
  case 2:
    fVar1 = -3.0;
    break;
  case 3:
    if (1.5707964 < param_1) {
      param_1 = 3.1415927 - param_1;
      fVar1 = param_1 * param_1;
      return param_2 + param_4 * (param_1 * (fVar1 * (fVar1 * (fVar1 * 9.181827e-05 + -0.0041531627)
                                                     + 0.08332414) + -0.4999983) + 1.0);
    }
    fVar1 = param_1 * param_1;
    fVar1 = fVar1 * (fVar1 * (fVar1 * -9.181827e-05 + 0.0041531627) + -0.08332414) + 0.4999983;
    goto LAB_02e749b0;
  default:
    return 0.0;
  case 5:
    param_1 = param_1 * param_1;
    param_1 = param_1 * (param_1 * (param_1 * 0.000484834 + -0.01961384) + 0.2476748) +
              0.00069670216;
    goto LAB_02e748a0;
  case 6:
    fVar1 = 1.0;
    break;
  case 7:
    param_1 = param_1 * param_1;
    return param_3 + param_4 * (param_1 * (param_1 * (param_1 * 0.0012712094 + -0.04148775) +
                                          0.49991244) + -0.9999933);
  case 8:
    param_1 = param_1 * param_1 * param_1;
LAB_02e748a0:
    return param_2 + param_4 * param_1;
  }
  fVar1 = param_1 + fVar1;
LAB_02e749b0:
  return param_2 + fVar1 * param_4 * param_1;
}


