/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacc68; name: FUN_02eacc68
 */


void FUN_02eacc68(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_2)(param_2);
  FUN_02f59e60(5,param_2);
  return;
}


