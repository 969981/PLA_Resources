/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033222b0; name: FUN_033222b0
 */


size_t FUN_033222b0(long *param_1,long param_2,void *param_3)

{
  size_t sVar1;
  
  if ((long *)param_1[6] == (long *)0x0) {
    sVar1 = param_1[1] - (*param_1 + param_2);
    memcpy((void *)(*param_1 + param_2),param_3,sVar1);
    return sVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x033222e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)(*(long *)param_1[6] + 0x38))();
  return sVar1;
}


