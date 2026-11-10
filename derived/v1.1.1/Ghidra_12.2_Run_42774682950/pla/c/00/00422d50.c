/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422d50; name: FUN_00422d50
 */


undefined8 FUN_00422d50(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x68),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00422d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


