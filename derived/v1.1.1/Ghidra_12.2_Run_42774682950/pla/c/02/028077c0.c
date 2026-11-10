/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028077c0; name: FUN_028077c0
 */


void FUN_028077c0(long *param_1,byte param_2)

{
  if (*(byte *)((long)param_1 + 0xa3) == (param_2 & 1)) {
    return;
  }
  *(byte *)((long)param_1 + 0xa3) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x028077dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}


