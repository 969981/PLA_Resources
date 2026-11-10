/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec61e0; name: FUN_02ec61e0
 */


void FUN_02ec61e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_02e96f44(DAT_0440a120 + 0x188);
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_02eba08c(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x02ec6224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


