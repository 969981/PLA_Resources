/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078fd84; name: FUN_0078fd84
 */


void FUN_0078fd84(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x0078fdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0x18,8);
  return;
}


