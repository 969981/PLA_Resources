/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02030d30; name: FUN_02030d30
 */


void FUN_02030d30(undefined8 param_1,long param_2,int *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_008cca50();
  FUN_008cca50();
  lVar3 = FUN_008cca50();
  puVar2 = PTR_LAB_04383ba0;
  if ((*(byte *)(lVar3 + 0x180) & 1) == 0) {
    lVar3 = lVar3 + 0x181;
  }
  else {
    lVar3 = *(long *)(lVar3 + 400);
  }
  plVar1 = (long *)(param_2 + (long)*param_3 * 0x10);
  *plVar1 = lVar3;
  plVar1[1] = (long)puVar2;
  *param_3 = *param_3 + 1;
  lVar3 = FUN_008cca50();
  puVar2 = PTR_LAB_04383ba8;
  if ((*(byte *)(lVar3 + 0x288) & 1) == 0) {
    lVar3 = lVar3 + 0x289;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x298);
  }
  plVar1 = (long *)(param_2 + (long)*param_3 * 0x10);
  *plVar1 = lVar3;
  plVar1[1] = (long)puVar2;
  *param_3 = *param_3 + 1;
  return;
}


