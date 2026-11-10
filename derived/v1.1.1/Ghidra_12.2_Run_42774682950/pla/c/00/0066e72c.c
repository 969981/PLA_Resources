/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066e72c; name: FUN_0066e72c
 */


void FUN_0066e72c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0066e754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


