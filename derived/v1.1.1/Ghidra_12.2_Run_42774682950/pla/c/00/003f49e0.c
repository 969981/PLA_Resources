/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f49e0; name: FUN_003f49e0
 */


void FUN_003f49e0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003f49ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


