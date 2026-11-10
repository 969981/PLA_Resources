/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d82c8; name: FUN_027d82c8
 */


void FUN_027d82c8(undefined4 *param_1,char param_2,int *param_3,long *param_4)

{
  int iVar1;
  
  if (param_2 == -0x7a) {
    iVar1 = *(int *)(*param_4 + param_4[2]);
    param_4[2] = param_4[2] + 4;
  }
  else if (param_2 == -0x7b) {
    iVar1 = (int)*(short *)(*param_4 + param_4[2]);
    param_4[2] = param_4[2] + 2;
  }
  else if (param_2 == -0x7c) {
    iVar1 = (int)*(char *)(*param_4 + param_4[2]);
    param_4[2] = param_4[2] + 1;
  }
  else {
    iVar1 = (int)param_2;
  }
  *param_3 = iVar1;
  *param_1 = 0;
  return;
}


