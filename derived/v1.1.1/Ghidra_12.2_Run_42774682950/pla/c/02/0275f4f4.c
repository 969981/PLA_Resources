/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275f4f4; name: FUN_0275f4f4
 */


void FUN_0275f4f4(long param_1)

{
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0275f504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))();
  return;
}


