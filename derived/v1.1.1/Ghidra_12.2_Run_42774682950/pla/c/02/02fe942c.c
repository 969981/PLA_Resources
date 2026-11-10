/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe942c; name: FUN_02fe942c
 */


void FUN_02fe942c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_02fecc2c();
  plVar3 = param_1 + 8;
  *param_1 = &PTR_LAB_042babd0;
  *plVar3 = 0;
  lVar2 = *(long *)(param_2 + 0x40);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2 + 0x40 + (lVar2 - (long)plVar3);
  }
  *plVar3 = lVar1;
  return;
}


