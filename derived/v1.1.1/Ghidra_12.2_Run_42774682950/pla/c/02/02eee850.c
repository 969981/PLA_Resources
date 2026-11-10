/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eee850; name: FUN_02eee850
 */


void FUN_02eee850(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x02eee888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,param_1);
  return;
}


