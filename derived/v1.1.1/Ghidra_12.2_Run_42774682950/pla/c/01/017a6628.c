/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017a6628; name: FUN_017a6628
 */


void FUN_017a6628(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = FUN_017a5c28(param_1,*(int *)(param_2 + 4) + 2,param_2);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x017a666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}


