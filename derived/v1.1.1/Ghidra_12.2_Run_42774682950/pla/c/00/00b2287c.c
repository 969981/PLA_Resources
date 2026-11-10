/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b2287c; name: FUN_00b2287c
 */


undefined8 FUN_00b2287c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)PTR_DAT_04379c88;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 0x58);
  }
  plVar2 = (long *)PTR_DAT_04379c88;
  if (*(long *)*param_1 != 0) {
    plVar2 = (long *)(*(long *)*param_1 + 0x58);
  }
  if (*plVar1 != *plVar2) {
    return 0;
  }
  if (param_2[7] == 0) {
    return 1;
  }
  uVar3 = FUN_02a43a8c();
  return uVar3;
}


