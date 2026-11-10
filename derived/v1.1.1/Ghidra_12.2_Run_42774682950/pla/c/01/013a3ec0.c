/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a3ec0; name: FUN_013a3ec0
 */


void FUN_013a3ec0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2[3];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lVar2 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar2;
  param_1[3] = lVar4;
  param_1[4] = lVar3;
  if (param_2[1] - *param_2 != 0) {
    FUN_013a3f80(param_1,(param_2[1] - *param_2 >> 3) * -0x50295fad40a57eb5);
    lVar4 = *param_2;
    lVar1 = param_2[1];
    if (lVar4 != lVar1) {
      lVar3 = param_1[1];
      do {
        FUN_013a400c(param_1 + 3,lVar3,lVar4);
        lVar4 = lVar4 + 0x318;
        lVar3 = param_1[1] + 0x318;
        param_1[1] = lVar3;
      } while (lVar1 != lVar4);
    }
  }
  return;
}


