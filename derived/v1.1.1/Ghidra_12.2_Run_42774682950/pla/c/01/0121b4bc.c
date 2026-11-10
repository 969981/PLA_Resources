/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121b4bc; name: FUN_0121b4bc
 */


void FUN_0121b4bc(void)

{
  if (DAT_043bf5f8 != (long *)0x0) {
    (**(code **)(*DAT_043bf5f8 + 0x20))();
  }
  if (DAT_043bf5d0 != (long *)0x0) {
    (**(code **)(*DAT_043bf5d0 + 0x20))();
  }
  if (DAT_043bf5a8 != (long *)0x0) {
    (**(code **)(*DAT_043bf5a8 + 0x20))();
  }
  if (DAT_043bf580 != (long *)0x0) {
    (**(code **)(*DAT_043bf580 + 0x20))();
  }
  if (DAT_043bf558 != (long *)0x0) {
    (**(code **)(*DAT_043bf558 + 0x20))();
  }
  if (DAT_043bf530 != (long *)0x0) {
    (**(code **)(*DAT_043bf530 + 0x20))();
  }
  if (DAT_043bf508 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0121b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043bf508 + 0x20))();
  return;
}


