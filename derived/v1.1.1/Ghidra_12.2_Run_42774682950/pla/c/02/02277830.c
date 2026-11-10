/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02277830; name: FUN_02277830
 */


void FUN_02277830(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_02265ba4(param_1,1,&local_28);
  iVar1 = FUN_00150cc0(param_1,3);
  *(bool *)(lVar2 + *param_2) = iVar1 != 0;
  FUN_0014ff10(param_1,0);
  return;
}


