/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f53800; name: FUN_02f53800
 */


void FUN_02f53800(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042af5a0;
  param_1[3] = &PTR_LAB_042af6f0;
  param_1[5] = &PTR_FUN_042af718;
  FUN_02f4c804(param_1 + 0x13);
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))();
  }
  FUN_02f4f2ac(param_1);
  return;
}


