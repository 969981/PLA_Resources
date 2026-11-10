/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f6311c; name: FUN_01f6311c
 */


void FUN_01f6311c(uint param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01f63140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(plVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f63134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,0);
  return;
}


