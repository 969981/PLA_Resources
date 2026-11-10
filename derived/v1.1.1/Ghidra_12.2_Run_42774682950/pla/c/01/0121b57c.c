/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121b57c; name: FUN_0121b57c
 */


void FUN_0121b57c(void)

{
  if (DAT_043bf660 != (long *)0x0) {
    (**(code **)(*DAT_043bf660 + 0x20))();
  }
  if (DAT_043bf640 != (long *)0x0) {
    (**(code **)(*DAT_043bf640 + 0x20))();
  }
  if (DAT_043bf620 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0121b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043bf620 + 0x20))();
  return;
}


