/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01086048; name: FUN_01086048
 */


void FUN_01086048(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_01086048(*param_1);
  FUN_01086048(param_1[1]);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x20))();
  }
  operator_delete(param_1);
  return;
}


