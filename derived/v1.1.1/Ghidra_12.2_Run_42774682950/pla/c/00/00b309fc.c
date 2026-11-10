/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b309fc; name: FUN_00b309fc
 */


void FUN_00b309fc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = FUN_00b2fe64(param_1,*(int *)(param_2 + 4) + 2,param_2);
  uVar3 = FUN_00b2fe64(param_1,*(int *)(param_2 + 4) + 2,param_2);
  uVar4 = FUN_00b2fe64(param_1,*(int *)(param_2 + 4) + 2,param_2);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00b30ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2,uVar3,uVar4);
  return;
}


