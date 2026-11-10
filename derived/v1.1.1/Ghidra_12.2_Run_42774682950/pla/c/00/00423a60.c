/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423a60; name: FUN_00423a60
 */


undefined8 FUN_00423a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00423a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
  return uVar1;
}


