/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02936d18; name: FUN_02936d18
 */


void FUN_02936d18(undefined8 *param_1)

{
  long lVar1;
  
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x10))();
  }
  param_1[0xb] = 0;
  lVar1 = param_1[9];
  (**(code **)*param_1)(param_1);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02936d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d158)(0xf,lVar1);
  return;
}


