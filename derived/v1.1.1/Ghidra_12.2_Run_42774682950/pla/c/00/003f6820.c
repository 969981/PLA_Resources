/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6820; name: FUN_003f6820
 */


undefined8 FUN_003f6820(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return 2;
  }
  uVar1 = 2;
  if ((param_3 != 0) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f6844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar1 = 6;
  }
  return uVar1;
}


