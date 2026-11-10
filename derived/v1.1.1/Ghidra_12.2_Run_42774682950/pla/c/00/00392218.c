/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00392218; name: FUN_00392218
 */


void FUN_00392218(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)();
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


