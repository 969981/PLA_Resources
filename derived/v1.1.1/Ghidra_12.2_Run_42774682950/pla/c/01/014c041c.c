/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c041c; name: FUN_014c041c
 */


void FUN_014c041c(void)

{
  if (DAT_043c45c8 != (long *)0x0) {
    (**(code **)(*DAT_043c45c8 + 0x20))();
  }
  if (DAT_043c45a8 != (long *)0x0) {
    (**(code **)(*DAT_043c45a8 + 0x20))();
  }
  if (DAT_043c4588 != (long *)0x0) {
    (**(code **)(*DAT_043c4588 + 0x20))();
  }
  if (DAT_043c4568 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014c0488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043c4568 + 0x20))();
  return;
}


