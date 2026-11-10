/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecd4e8; name: FUN_02ecd4e8
 */


void FUN_02ecd4e8(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_02ecd51c(param_1 + 0x3b,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x02ecd518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}


