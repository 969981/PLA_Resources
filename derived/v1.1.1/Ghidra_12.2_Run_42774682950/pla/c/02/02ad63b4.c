/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad63b4; name: FUN_02ad63b4
 */


void FUN_02ad63b4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x02ad63f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
  return;
}


