/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0199ce4c; name: FUN_0199ce4c
 */


void FUN_0199ce4c(long param_1,ulong param_2)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x70), plVar1 == (long *)0x0)) {
    return;
  }
  if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0199ce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0199ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,0);
  return;
}


