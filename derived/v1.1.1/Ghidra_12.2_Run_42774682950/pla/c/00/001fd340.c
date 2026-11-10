/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd340; name: FUN_001fd340
 */


undefined8 FUN_001fd340(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x420) + 0x40);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 600);
    return 0x10001;
  }
                    /* WARNING: Could not recover jumptable at 0x001fd34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


