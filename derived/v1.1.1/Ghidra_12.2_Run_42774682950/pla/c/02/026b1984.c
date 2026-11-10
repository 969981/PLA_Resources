/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026b1984; name: FUN_026b1984
 */


void FUN_026b1984(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    do {
      lVar3 = lVar3 + -4;
      FUN_026b1adc(param_1 + 3,lVar1 + -4,lVar3);
      lVar1 = param_2[1] + -4;
      param_2[1] = lVar1;
    } while (lVar2 != lVar3);
    lVar2 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


