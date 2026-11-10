/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e3698; name: FUN_011e3698
 */


void FUN_011e3698(undefined8 *param_1)

{
  FUN_00d39e50();
  *param_1 = &PTR_LAB_041fa348;
  param_1[9] = &PTR_LAB_041fa398;
  param_1[10] = &PTR_LAB_041fa3e0;
  memset(param_1 + 0xd,0,0xa8d);
  param_1[0x161] = 0;
  *(undefined8 *)((long)param_1 + 0xb0d) = 0;
  return;
}


