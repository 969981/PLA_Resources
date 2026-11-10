/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121b1fc; name: FUN_0121b1fc
 */


void FUN_0121b1fc(void)

{
  if (DAT_043bf210 != (long *)0x0) {
    (**(code **)(*DAT_043bf210 + 0x20))();
  }
  if (DAT_043bf1e8 != (long *)0x0) {
    (**(code **)(*DAT_043bf1e8 + 0x20))();
  }
  if (DAT_043bf1c0 != (long *)0x0) {
    (**(code **)(*DAT_043bf1c0 + 0x20))();
  }
  if (DAT_043bf198 != (long *)0x0) {
    (**(code **)(*DAT_043bf198 + 0x20))();
  }
  if (DAT_043bf170 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0121b280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043bf170 + 0x20))();
  return;
}


