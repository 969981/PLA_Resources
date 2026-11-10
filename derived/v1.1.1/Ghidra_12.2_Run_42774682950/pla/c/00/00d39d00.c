/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d39d00; name: FUN_00d39d00
 */


void FUN_00d39d00(long param_1)

{
  if (*(long **)(param_1 + 0xd0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
                    /* WARNING: Could not recover jumptable at 0x00d39d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  return;
}


