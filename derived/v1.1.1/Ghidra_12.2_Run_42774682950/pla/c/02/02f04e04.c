/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04e04; name: FUN_02f04e04
 */


void FUN_02f04e04(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 1) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x02f04e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}


