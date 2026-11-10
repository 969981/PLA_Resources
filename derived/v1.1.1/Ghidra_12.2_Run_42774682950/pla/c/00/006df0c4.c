/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006df0c4; name: FUN_006df0c4
 */


void FUN_006df0c4(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x006df0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0x60,0x10);
  return;
}


