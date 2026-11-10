/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d5f20; name: FUN_003d5f20
 */


void FUN_003d5f20(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = FUN_003d6b50(param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_003d6b70(param_3);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x003d5f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}


