/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ab8a0; name: FUN_005ab8a0
 */


undefined1  [16] FUN_005ab8a0(double param_1,double param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (0.0 < param_2) {
    dVar6 = param_3[10];
    dVar4 = param_3[1] + (*param_3 + param_1) * param_2 * 0.5;
    dVar3 = dVar6;
    if (dVar4 <= dVar6) {
      dVar3 = dVar4;
    }
    param_3[1] = dVar4;
    dVar5 = -dVar6;
    if (-dVar6 <= dVar4) {
      dVar5 = dVar3;
    }
    param_3[1] = dVar5;
    dVar4 = param_3[4] * param_1 + dVar5 * param_3[5] +
            ((param_1 - *param_3) / param_2) * param_3[6];
    dVar6 = param_3[2] + (param_3[3] + dVar4) * param_2 * 0.5;
    dVar3 = param_3[8];
    if ((param_3[8] <= dVar6) && (dVar3 = dVar6, param_3[9] < dVar6)) {
      dVar3 = param_3[9];
    }
    *param_3 = param_1;
    param_3[2] = dVar3;
    param_3[3] = dVar4;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar3;
    return auVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[2];
  return auVar2;
}


