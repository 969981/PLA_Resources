/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18750; name: FUN_02f18750
 */


void FUN_02f18750(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  if ((long *)*param_1 == (long *)0x0) {
    *param_4 = 0xffffffff;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f18760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x1d8))();
  return;
}


