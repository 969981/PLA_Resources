/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f88ac; name: FUN_001f88ac
 */


undefined8 * FUN_001f88ac(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
LAB_001f8944:
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_001f87a0(param_1,param_2);
    lVar2 = puVar1[4];
    if (param_1 == lVar2) {
      if (*(int *)(puVar1 + 5) == (int)param_2) {
        param_4[4] = 0xffffffffffffffff;
        param_4[5] = 0xffffffffffffffff;
        param_4[2] = puVar1;
        param_4[3] = puVar1[3];
        *(undefined8 **)(puVar1[3] + 0x10) = param_4;
        goto LAB_001f8964;
      }
    }
    else if (puVar1 == (undefined8 *)0x0) goto LAB_001f8944;
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && ((int)param_2 < *(int *)(puVar1 + 5))))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1[1] = 0;
    }
  }
  param_4[4] = param_1;
  param_4[5] = param_2;
  param_4[2] = param_4;
  puVar1 = param_4;
LAB_001f8964:
  puVar1[3] = param_4;
  return puVar1;
}


