/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780c44; name: FUN_02780c44
 */


long FUN_02780c44(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2[1];
  lVar4 = *param_1;
  lVar1 = lVar2;
  if (lVar4 != param_3) {
    lVar3 = param_3;
    do {
      lVar3 = lVar3 + -0x18;
      FUN_02764fa4(param_1 + 3,lVar1 + -0x18,lVar3);
      lVar1 = param_2[1] + -0x18;
      param_2[1] = lVar1;
    } while (lVar4 != lVar3);
  }
  lVar4 = param_1[1];
  if (lVar4 != param_3) {
    lVar1 = param_2[2];
    do {
      FUN_02764fa4(param_1 + 3,lVar1,param_3);
      param_3 = param_3 + 0x18;
      lVar1 = param_2[2] + 0x18;
      param_2[2] = lVar1;
    } while (lVar4 != param_3);
    lVar1 = param_2[1];
  }
  lVar4 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar4;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return lVar2;
}


