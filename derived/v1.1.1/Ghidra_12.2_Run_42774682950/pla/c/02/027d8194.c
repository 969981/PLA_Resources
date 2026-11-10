/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d8194; name: FUN_027d8194
 */


void FUN_027d8194(undefined4 *param_1,char param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  
  if (param_2 == -0x7a) {
    *(undefined4 *)(*param_4 + param_4[2]) = param_3;
    lVar1 = 4;
  }
  else if (param_2 == -0x7b) {
    *(short *)(*param_4 + param_4[2]) = (short)param_3;
    lVar1 = 2;
  }
  else {
    if (param_2 != -0x7c) goto LAB_027d81f4;
    *(char *)(*param_4 + param_4[2]) = (char)param_3;
    lVar1 = 1;
  }
  param_4[2] = param_4[2] + lVar1;
LAB_027d81f4:
  *param_1 = 0;
  return;
}


