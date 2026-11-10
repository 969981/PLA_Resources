/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e9ea4; name: FUN_003e9ea4
 */


void FUN_003e9ea4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  FUN_003e9f80(param_1,*plVar4);
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar4;
    return;
  }
  *(long **)(lVar2 + 0x10) = plVar4;
  *param_2 = plVar1;
  *plVar1 = 0;
  param_2[2] = 0;
  return;
}


