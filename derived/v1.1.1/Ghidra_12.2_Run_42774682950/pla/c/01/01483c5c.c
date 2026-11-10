/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01483c5c; name: FUN_01483c5c
 */


void FUN_01483c5c(void)

{
  if (DAT_043c3c28 != (long *)0x0) {
    (**(code **)(*DAT_043c3c28 + 0x20))();
  }
  if (DAT_043c3c08 != (long *)0x0) {
    (**(code **)(*DAT_043c3c08 + 0x20))();
  }
  if (DAT_043c3be8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01483cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043c3be8 + 0x20))();
  return;
}


