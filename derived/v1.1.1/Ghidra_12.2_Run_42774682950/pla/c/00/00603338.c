/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603338; name: FUN_00603338
 */


void FUN_00603338(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_04373088;
  if (*param_1 == 0) {
    return;
  }
  param_1[1] = *param_1;
  FUN_002e2ea0(puVar1);
  return;
}


