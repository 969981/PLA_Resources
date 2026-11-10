/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f52d84; name: FUN_02f52d84
 */


void FUN_02f52d84(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042af410;
  param_1[3] = &PTR_LAB_042af560;
  param_1[5] = &PTR_FUN_042af588;
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))();
  }
  FUN_02f4f2ac(param_1);
  return;
}


