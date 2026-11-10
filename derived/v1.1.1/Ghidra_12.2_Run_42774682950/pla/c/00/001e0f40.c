/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0f40; name: FUN_001e0f40
 */


undefined8 FUN_001e0f40(long *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xa5) = param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = *param_1;
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_001f43b0(lVar3,3,2);
      }
      lVar2 = FUN_001e13b4(lVar3,param_3,param_1[0xa2],(int)param_1[0xa3]);
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_001f43f8(lVar3,3);
      }
      if (lVar2 != 0) {
        uVar1 = 0;
        goto LAB_001e0fd8;
      }
      FUN_001dffa4(param_3);
    }
    uVar1 = 0x1b;
  }
  else {
    uVar1 = 0;
    lVar2 = 0;
  }
LAB_001e0fd8:
  param_1[0xa4] = lVar2;
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  return uVar1;
}


