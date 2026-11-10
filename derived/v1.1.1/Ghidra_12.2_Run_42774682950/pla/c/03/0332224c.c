/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332224c; name: FUN_0332224c
 */


size_t FUN_0332224c(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  size_t sVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == (long *)0x0) {
    sVar2 = param_1[1] - (long)*param_1;
    memcpy((void *)*param_1,param_2,sVar2);
    *param_1 = param_1[1];
    return sVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x03322280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3);
  return sVar2;
}


