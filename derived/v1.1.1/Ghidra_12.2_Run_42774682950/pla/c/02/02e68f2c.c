/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e68f2c; name: FUN_02e68f2c
 */


void FUN_02e68f2c(undefined8 *param_1)

{
  FUN_02e71964();
  FUN_02e6d6a8(param_1 + 0x55);
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x02e68f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(7,param_1);
  return;
}


