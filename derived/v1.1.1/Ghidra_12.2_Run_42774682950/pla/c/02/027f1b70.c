/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f1b70; name: FUN_027f1b70
 */


void FUN_027f1b70(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_027f1bbc(param_1,&local_28);
  UNRECOVERED_JUMPTABLE = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x027f1bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}


