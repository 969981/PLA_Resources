/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02767d84; name: FUN_02767d84
 */


void FUN_02767d84(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*param_2 != '\0') {
    FUN_02766d04(param_1,param_2 + 8);
    return;
  }
  lVar2 = param_3[1];
  *param_1 = *param_3;
  uVar3 = param_3[2];
  plVar1 = param_1 + 1;
  *plVar1 = lVar2;
  lVar2 = param_3[3];
  param_1[2] = uVar3;
  param_1[3] = lVar2;
  if (lVar2 == 0) {
    *param_1 = plVar1;
    return;
  }
  *(long **)(*plVar1 + 0x10) = plVar1;
  param_3[1] = 0;
  *param_3 = param_3 + 1;
  param_3[3] = 0;
  return;
}


