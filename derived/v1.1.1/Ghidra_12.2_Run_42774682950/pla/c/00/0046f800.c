/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046f800; name: FUN_0046f800
 */


uint FUN_0046f800(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  
  if (((param_2 == (void *)0x0) || (piVar5 = *(int **)(param_1 + 0x38), piVar5 == (int *)0x0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  FUN_00404040(param_1,0xf);
  uVar2 = piVar5[4];
  uVar4 = 0;
  while( true ) {
    if (uVar2 != 0) {
      uVar1 = param_3;
      if ((int)uVar2 <= (int)param_3) {
        uVar1 = uVar2;
      }
      memcpy(param_2,(void *)(*(long *)(piVar5 + 2) + (long)piVar5[5]),(long)(int)uVar1);
      uVar4 = uVar1 + uVar4;
      piVar5[4] = piVar5[4] - uVar1;
      piVar5[5] = piVar5[5] + uVar1;
      if ((int)param_3 <= (int)uVar2) {
        return uVar4;
      }
      param_3 = param_3 - uVar1;
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*piVar5 < (int)param_3) goto LAB_0046f8d8;
    uVar2 = FUN_00404070(uVar3,*(undefined8 *)(piVar5 + 2));
    if ((int)uVar2 < 1) break;
    piVar5[4] = uVar2;
    piVar5[5] = 0;
  }
LAB_0046f8f0:
  FUN_00404d10(param_1);
  uVar1 = uVar4;
  if ((int)uVar4 < 1) {
    uVar1 = uVar2;
  }
  if ((uVar2 & 0x80000000) != 0) {
    uVar4 = uVar1;
  }
  return uVar4;
LAB_0046f8d8:
  while (uVar2 = FUN_00404070(uVar3,param_2,param_3), 0 < (int)uVar2) {
    uVar4 = uVar2 + uVar4;
    param_3 = param_3 - uVar2;
    if (param_3 == 0) {
      return uVar4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    param_2 = (void *)((long)param_2 + (long)(int)uVar2);
  }
  goto LAB_0046f8f0;
}


