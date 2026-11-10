/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c08fc; name: FUN_014c08fc
 */


void FUN_014c08fc(void)

{
  if (DAT_043c4c38 != (long *)0x0) {
    (**(code **)(*DAT_043c4c38 + 0x20))();
  }
  if (DAT_043c4c18 != (long *)0x0) {
    (**(code **)(*DAT_043c4c18 + 0x20))();
  }
  if (DAT_043c4bf8 != (long *)0x0) {
    (**(code **)(*DAT_043c4bf8 + 0x20))();
  }
  if (DAT_043c4bd8 != (long *)0x0) {
    (**(code **)(*DAT_043c4bd8 + 0x20))();
  }
  if (DAT_043c4bb8 != (long *)0x0) {
    (**(code **)(*DAT_043c4bb8 + 0x20))();
  }
  if (DAT_043c4b98 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014c0998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043c4b98 + 0x20))();
  return;
}


