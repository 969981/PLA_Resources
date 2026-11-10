/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f57a40; name: FUN_02f57a40
 */


void FUN_02f57a40(void)

{
  if (DAT_0442d130 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f57a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d130)();
  return;
}


