/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f31dd0; name: FUN_02f31dd0
 */


void FUN_02f31dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042ad080;
  if (param_1[0x12] != 0) {
    FUN_02f59e60(5);
  }
  if (param_1[0x11] != 0) {
    FUN_02f59e70(5);
    param_1[0x11] = 0;
  }
  FUN_02f203f4(param_1);
  return;
}


