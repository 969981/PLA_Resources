/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022f4498; name: FUN_022f4498
 */


void FUN_022f4498(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  double __x;
  
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(__x);
  }
  else {
    lVar4 = FUN_00150ba0(param_1,iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar2 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x022f4508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,lVar4);
  return;
}


