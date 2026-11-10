/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277fa94; name: FUN_0277fa94
 */


void FUN_0277fa94(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar3) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    do {
      lVar2 = lVar2 + -0x30;
      FUN_0277f8a8(param_1 + 3,lVar1 + -0x30,lVar2);
      lVar1 = param_2[1] + -0x30;
      param_2[1] = lVar1;
    } while (lVar3 != lVar2);
    lVar3 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


