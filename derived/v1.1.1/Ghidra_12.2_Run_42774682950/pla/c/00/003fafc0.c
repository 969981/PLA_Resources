/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fafc0; name: FUN_003fafc0
 */


void FUN_003fafc0(undefined8 *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 == (undefined8 *)0x0) || (iVar1 = FUN_002ef660(param_1 + 1), iVar1 == 0)) ||
      ((undefined8 *)*param_1 == (undefined8 *)0x0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003faff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


