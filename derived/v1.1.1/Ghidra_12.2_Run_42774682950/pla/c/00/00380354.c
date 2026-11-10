/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00380354; name: FUN_00380354
 */


void FUN_00380354(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  *param_1 = 0;
  puVar1 = PTR_LAB_04373088;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)plVar4[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = *plVar4;
  *plVar4 = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  return;
}


