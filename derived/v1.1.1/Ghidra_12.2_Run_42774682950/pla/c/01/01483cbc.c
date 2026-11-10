/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01483cbc; name: FUN_01483cbc
 */


void FUN_01483cbc(void)

{
  if (DAT_043c3c88 != (long *)0x0) {
    (**(code **)(*DAT_043c3c88 + 0x20))();
  }
  if (DAT_043c3c68 != (long *)0x0) {
    (**(code **)(*DAT_043c3c68 + 0x20))();
  }
  if (DAT_043c3c48 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01483d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043c3c48 + 0x20))();
  return;
}


