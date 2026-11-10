/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320c30; name: FUN_03320c30
 */


void FUN_03320c30(undefined4 param_1,ulong param_2)

{
  (**(code **)(*DAT_0444b100 + 0x28))(DAT_0444b100,param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x03320c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,param_1,param_2 & 1);
  return;
}


