/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6d990; name: FUN_00b6d990
 */


void FUN_00b6d990(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    FUN_00b6d82c(param_1 + 3,param_2[1] + -0x80,lVar4 + -0x80);
    lVar3 = param_2[1];
    lVar1 = lVar3 + -0x80;
    param_2[1] = lVar1;
    if (lVar4 + -0x80 != lVar2) {
      do {
        FUN_00b6d82c(param_1 + 3,lVar3 + -0x100,lVar4 + -0x100);
        lVar3 = param_2[1];
        lVar4 = lVar4 + -0x80;
        lVar1 = lVar3 + -0x80;
        param_2[1] = lVar1;
      } while (lVar2 + 0x80 != lVar4);
    }
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


