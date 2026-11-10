/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00929e1c; name: FUN_00929e1c
 */


void FUN_00929e1c(void)

{
  if (DAT_043a8720 != (long *)0x0) {
    (**(code **)(*DAT_043a8720 + 0x20))();
  }
  if (DAT_043a86f0 != (long *)0x0) {
    (**(code **)(*DAT_043a86f0 + 0x20))();
  }
  if (DAT_043a86c0 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00929e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043a86c0 + 0x20))();
  return;
}


