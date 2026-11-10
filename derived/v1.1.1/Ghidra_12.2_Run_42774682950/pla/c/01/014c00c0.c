/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c00c0; name: FUN_014c00c0
 */


void FUN_014c00c0(void)

{
  if (DAT_043c40e8 != (long *)0x0) {
    (**(code **)(*DAT_043c40e8 + 0x20))();
  }
  if (DAT_043c40c8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014c00f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043c40c8 + 0x20))();
  return;
}


