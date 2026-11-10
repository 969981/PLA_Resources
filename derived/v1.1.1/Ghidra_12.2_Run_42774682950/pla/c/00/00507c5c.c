/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507c5c; name: FUN_00507c5c
 */


void FUN_00507c5c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_LAB_04373088;
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


