/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033216f4; name: FUN_033216f4
 */


size_t FUN_033216f4(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  size_t sVar2;
  
  plVar1 = (long *)param_1[7];
  if (plVar1 == (long *)0x0) {
    sVar2 = param_1[1] - (long)*param_1;
    memcpy(param_2,(void *)*param_1,sVar2);
    *param_1 = param_1[1];
    return sVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x03321728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,param_3);
  return sVar2;
}


