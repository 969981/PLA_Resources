/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033243f0; name: FUN_033243f0
 */


void FUN_033243f0(long *param_1,char *param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
    uVar1 = 6;
  }
  else {
    uVar1 = FUN_032c4900(param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0332442c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
  return;
}


