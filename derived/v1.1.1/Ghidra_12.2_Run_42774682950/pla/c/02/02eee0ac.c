/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eee0ac; name: FUN_02eee0ac
 */


void FUN_02eee0ac(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (*DAT_0442d150)(0);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x02eee104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(2,param_1);
  return;
}


