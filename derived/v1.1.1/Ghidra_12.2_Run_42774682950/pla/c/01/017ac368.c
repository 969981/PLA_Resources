/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ac368; name: FUN_017ac368
 */


void FUN_017ac368(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  iVar2 = FUN_00150cc0(param_1,iVar2 + 2);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x017ac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5,iVar2 != 0);
  return;
}


