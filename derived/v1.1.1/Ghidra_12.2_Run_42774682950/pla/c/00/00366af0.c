/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00366af0; name: FUN_00366af0
 */


void FUN_00366af0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04153ae8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[3]);
  }
  FUN_0039f174(param_1);
  operator_delete(param_1);
  return;
}


