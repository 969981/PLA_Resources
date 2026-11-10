/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bec7c; name: FUN_027bec7c
 */


void FUN_027bec7c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
LAB_027bed30:
    *param_1 = 0;
    return;
  }
  if (*(long *)(param_2 + 0x1a0) == param_3) {
    param_2 = param_2 + 0x120;
  }
  else if (*(long *)(param_2 + 0x230) == param_3) {
    param_2 = param_2 + 0x1b0;
  }
  else if (*(long *)(param_2 + 0x2c0) == param_3) {
    param_2 = param_2 + 0x240;
  }
  else if (*(long *)(param_2 + 0x350) == param_3) {
    param_2 = param_2 + 0x2d0;
  }
  else if (*(long *)(param_2 + 0x3e0) == param_3) {
    param_2 = param_2 + 0x360;
  }
  else if (*(long *)(param_2 + 0x470) == param_3) {
    param_2 = param_2 + 0x3f0;
  }
  else if (*(long *)(param_2 + 0x500) == param_3) {
    param_2 = param_2 + 0x480;
  }
  else {
    if (*(long *)(param_2 + 0x590) != param_3) goto LAB_027bed30;
    param_2 = param_2 + 0x510;
  }
  lVar1 = 0;
  if (*(char *)(param_2 + 0x88) != '\0') {
    lVar1 = param_2;
  }
  *param_1 = lVar1;
  return;
}


