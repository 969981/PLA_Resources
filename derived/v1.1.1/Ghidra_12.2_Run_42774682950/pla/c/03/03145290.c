/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03145290; name: FUN_03145290
 */


void FUN_03145290(undefined8 *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_LAB_042b6f10;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 3;
  UNRECOVERED_JUMPTABLE = PTR_FUN_042b6f70;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff00000000;
                    /* WARNING: Could not recover jumptable at 0x031452c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


