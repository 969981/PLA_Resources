/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422d30; name: FUN_00422d30
 */


undefined8 FUN_00422d30(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00422d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


