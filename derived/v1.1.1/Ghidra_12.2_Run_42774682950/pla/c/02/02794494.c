/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02794494; name: FUN_02794494
 */


void FUN_02794494(long *param_1,undefined8 *param_2)

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
      lVar2 = lVar2 + -0x18;
      FUN_027942b4(param_1 + 3,lVar1 + -0x18,lVar2);
      lVar1 = param_2[1] + -0x18;
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


