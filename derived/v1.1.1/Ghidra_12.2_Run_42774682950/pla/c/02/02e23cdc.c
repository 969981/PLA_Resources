/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23cdc; name: FUN_02e23cdc
 */


undefined8 FUN_02e23cdc(undefined8 *param_1,long *param_2)

{
  FUN_02e23b34();
  FUN_02e23bd4(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
  }
  return 1;
}


