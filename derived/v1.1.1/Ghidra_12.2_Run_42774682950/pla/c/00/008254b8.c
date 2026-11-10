/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008254b8; name: FUN_008254b8
 */


void FUN_008254b8(long *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x38))(param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x008254e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}


