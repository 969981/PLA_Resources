/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027647a4; name: FUN_027647a4
 */


void FUN_027647a4(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_027647f0();
                    /* WARNING: Could not recover jumptable at 0x027647e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],*param_1,param_1[2] - *param_1,8);
  return;
}


