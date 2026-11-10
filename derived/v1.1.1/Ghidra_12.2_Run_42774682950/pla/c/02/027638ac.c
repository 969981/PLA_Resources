/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027638ac; name: FUN_027638ac
 */


void FUN_027638ac(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  if (param_1[1] == lVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    lVar3 = param_1[1];
    do {
      *(undefined ***)(lVar2 + -0x48) = &PTR_FUN_0426b998;
      lVar4 = lVar3 + -0x48;
      FUN_02762fb0(lVar2 + -0x40,lVar3 + -0x40);
      FUN_02762fb0(lVar2 + -0x20,lVar3 + -0x20);
      lVar2 = param_2[1] + -0x48;
      param_2[1] = lVar2;
      lVar3 = lVar4;
    } while (lVar1 != lVar4);
    lVar1 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}


