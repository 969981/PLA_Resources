/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4950; name: FUN_003f4950
 */


undefined8 FUN_003f4950(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if (*(char *)((long)param_1 + 9) != '\0') {
    return 5;
  }
  if (*(char *)((long)param_1 + 10) != '\0') {
    return 0xe;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 6;
  }
                    /* WARNING: Could not recover jumptable at 0x003f498c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


