/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205774; name: FUN_00205774
 */


undefined8 FUN_00205774(int *param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_4;
  if (iVar1 < 1) {
    if (((-1 < *param_1 + iVar1) && (-0x80000000 - iVar1 <= (int)*param_2)) &&
       (*param_3 <= iVar1 + 0x7fffffff)) {
      *param_1 = *param_1 + iVar1;
      *param_2 = *param_2 + *param_4;
      *param_3 = *param_3 - *param_4;
      *param_4 = 0;
      return 0;
    }
  }
  else {
    uVar3 = (*param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU)) - iVar1;
    if (-1 < (int)uVar3) {
      *param_2 = uVar3;
      return 0;
    }
    if (*param_1 <= (int)(uVar3 + 0x7fffffff)) {
      *param_1 = *param_1 - uVar3;
      iVar2 = *param_3;
      iVar1 = iVar2;
      if ((int)-uVar3 <= iVar2) {
        iVar1 = -uVar3;
      }
      *param_3 = iVar2 - iVar1;
      *param_2 = (*param_2 & (int)*param_2 >> 0x1f) + iVar1;
      *param_4 = *param_4 - iVar1;
      return 0;
    }
  }
  return 0xfffffdf4;
}


