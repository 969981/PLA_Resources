/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762adc; name: FUN_02762adc
 */


void FUN_02762adc(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = param_2;
  lVar2 = *param_2;
  plVar3 = param_2 + 1;
  *param_2 = (long)plVar3;
  *(undefined8 *)(*plVar3 + 0x10) = 0;
  *plVar3 = 0;
  param_2[3] = 0;
  lVar4 = *(long *)(lVar2 + 8);
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    uVar1 = FUN_02762bdc();
    param_1[1] = uVar1;
  }
  return;
}


