/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d48d2c; name: FUN_00d48d2c
 */


void FUN_00d48d2c(void)

{
  if (DAT_043abb18 != (long *)0x0) {
    (**(code **)(*DAT_043abb18 + 0x20))();
  }
  if (DAT_043abaf8 != (long *)0x0) {
    (**(code **)(*DAT_043abaf8 + 0x20))();
  }
  if (DAT_043abad8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d48d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043abad8 + 0x20))();
  return;
}


