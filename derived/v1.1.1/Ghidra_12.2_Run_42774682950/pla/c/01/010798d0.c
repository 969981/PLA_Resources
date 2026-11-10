/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010798d0; name: FUN_010798d0
 */


void FUN_010798d0(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_008cca50();
  FUN_008cca50();
  lVar3 = FUN_008cca50();
  lVar2 = lVar3 + 0x181;
  if ((*(byte *)(lVar3 + 0x180) & 1) != 0) {
    lVar2 = *(long *)(lVar3 + 400);
  }
  plVar1 = (long *)(param_1 + (long)*param_2 * 0x10);
  *plVar1 = lVar2;
  plVar1[1] = (long)&LAB_01079970;
  *param_2 = *param_2 + 1;
  lVar3 = FUN_008cca50();
  lVar2 = lVar3 + 0x289;
  if ((*(byte *)(lVar3 + 0x288) & 1) != 0) {
    lVar2 = *(long *)(lVar3 + 0x298);
  }
  plVar1 = (long *)(param_1 + (long)*param_2 * 0x10);
  *plVar1 = lVar2;
  plVar1[1] = (long)&LAB_01079968;
  *param_2 = *param_2 + 1;
  return;
}


