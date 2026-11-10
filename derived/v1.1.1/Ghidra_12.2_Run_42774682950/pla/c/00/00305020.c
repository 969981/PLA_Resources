/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305020; name: FUN_00305020
 */


void FUN_00305020(undefined8 *param_1)

{
  FUN_00305050();
  if ((undefined8 *)*param_1 == param_1 + 5) {
    return;
  }
  free((undefined8 *)*param_1);
  return;
}


