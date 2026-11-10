/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03321630; name: FUN_03321630
 */


long FUN_03321630(long *param_1)

{
  long lVar1;
  
  if ((long *)param_1[7] == (long *)0x0) {
    return param_1[1] - *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x03321644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)param_1[7] + 0x28))();
  return lVar1;
}


