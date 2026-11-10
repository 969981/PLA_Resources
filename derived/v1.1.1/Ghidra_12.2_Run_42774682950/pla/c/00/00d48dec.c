/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d48dec; name: FUN_00d48dec
 */


void FUN_00d48dec(void)

{
  if (DAT_043abbc8 != (long *)0x0) {
    (**(code **)(*DAT_043abbc8 + 0x20))();
  }
  if (DAT_043abba8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d48e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_043abba8 + 0x20))();
  return;
}


