/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423010; name: FUN_00423010
 */


undefined8 FUN_00423010(int *param_1,int *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(long *)(param_1 + 4) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00423030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


