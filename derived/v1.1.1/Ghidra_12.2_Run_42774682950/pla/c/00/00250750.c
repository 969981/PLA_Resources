/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250750; name: FUN_00250750
 */


void FUN_00250750(long *param_1,undefined8 param_2,uint param_3)

{
  (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x00250788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3 & 1);
  return;
}


