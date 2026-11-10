/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046a9f0; name: FUN_0046a9f0
 */


undefined8 FUN_0046a9f0(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x28);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0046aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


