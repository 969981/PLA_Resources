/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e13e0; name: FUN_003e13e0
 */


void FUN_003e13e0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


