/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e740; name: FUN_02f0e740
 */


float FUN_02f0e740(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_4 == 4) {
    return param_2 + param_1 * (param_3 - param_2);
  }
  fVar1 = 0.0;
  switch(param_4) {
  case 0:
    param_1 = 1.0 - param_1;
    param_1 = param_1 * param_1 * param_1;
    goto LAB_02f0e860;
  case 1:
    param_1 = (2.0 - param_1) * param_1;
    fVar1 = param_1 * 0.225 + 0.775;
LAB_02f0e898:
    return param_2 + fVar1 * (param_3 - param_2) * param_1;
  case 2:
    param_3 = param_2 - param_3;
    param_1 = param_1 * 0.5 * (param_1 + -3.0);
    break;
  case 3:
    if (param_1 <= 0.5) {
      param_1 = param_1 * 3.1415927;
      fVar1 = param_1 * param_1;
      fVar1 = fVar1 * (fVar1 * (fVar1 * -9.181827e-05 + 0.0041531627) + -0.08332414) + 0.4999983;
      goto LAB_02f0e898;
    }
    fVar1 = 3.1415927 - param_1 * 3.1415927;
    fVar2 = fVar1 * fVar1;
    fVar2 = fVar2 * (fVar2 * (fVar2 * 9.181827e-05 + -0.0041531627) + 0.08332414) + -0.4999983;
    param_1 = 1.0;
    goto LAB_02f0e804;
  default:
    goto switchD_02f0e77c_caseD_4;
  case 5:
    fVar1 = param_1 * 3.1415927 * param_1 * 3.1415927;
    param_1 = 0.00069670216;
    fVar2 = fVar1 * (fVar1 * 0.000484834 + -0.01961384) + 0.2476748;
LAB_02f0e804:
    param_1 = param_1 + fVar1 * fVar2;
LAB_02f0e808:
    param_3 = param_3 - param_2;
    break;
  case 6:
    param_3 = param_3 - param_2;
    param_1 = param_1 * 0.5 + param_1 * 0.5 * param_1;
    break;
  case 7:
    fVar1 = param_1 * 1.5707964 * param_1 * 1.5707964;
    param_1 = fVar1 * (fVar1 * (fVar1 * -0.0012712094 + 0.04148775) + -0.49991244) + 0.9999933;
LAB_02f0e860:
    return param_3 + (param_2 - param_3) * param_1;
  case 8:
    param_1 = param_1 * param_1 * param_1;
    goto LAB_02f0e808;
  }
  fVar1 = param_2 + param_3 * param_1;
switchD_02f0e77c_caseD_4:
  return fVar1;
}


