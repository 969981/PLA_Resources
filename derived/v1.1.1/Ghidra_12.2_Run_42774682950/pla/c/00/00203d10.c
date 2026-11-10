/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203d10; name: FUN_00203d10
 */


void FUN_00203d10(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    (**(code **)(*(long *)PTR_PTR_04372758 + 0x88))();
    param_1[3] = 0;
    param_1[5] = 0;
    FUN_00203984(param_1 + 7);
    FUN_002044d4(*param_1);
    *param_1 = 0;
    FUN_002044d4(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


