/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a8b0; name: FUN_0056a8b0
 */


void FUN_0056a8b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[8];
  *param_1 = (long)(PTR_DAT_04374da0 + 0x10);
  if (lVar3 != 0) {
    FUN_00552cc4(lVar3);
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  puVar1 = PTR_LAB_04373088;
  plVar2 = (long *)param_1[0x11];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar3 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_0056df00(param_1);
  return;
}


