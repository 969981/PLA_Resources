/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e110c0; name: FUN_00e110c0
 */


void FUN_00e110c0(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_008cca50();
  FUN_008cca50();
  lVar2 = FUN_008cca50();
  if ((*(byte *)(lVar2 + 0x180) & 1) == 0) {
    lVar2 = lVar2 + 0x181;
  }
  else {
    lVar2 = *(long *)(lVar2 + 400);
  }
  plVar1 = (long *)(param_1 + (long)*param_2 * 0x10);
  *plVar1 = lVar2;
  plVar1[1] = (long)&LAB_00e11160;
  *param_2 = *param_2 + 1;
  lVar2 = FUN_008cca50();
  if ((*(byte *)(lVar2 + 0x288) & 1) == 0) {
    lVar2 = lVar2 + 0x289;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x298);
  }
  plVar1 = (long *)(param_1 + (long)*param_2 * 0x10);
  *plVar1 = lVar2;
  plVar1[1] = (long)&LAB_00e11158;
  *param_2 = *param_2 + 1;
  return;
}


