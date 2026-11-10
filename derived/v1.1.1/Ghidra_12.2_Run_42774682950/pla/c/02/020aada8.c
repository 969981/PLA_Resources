/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020aada8; name: FUN_020aada8
 */


void FUN_020aada8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long *plVar1;
  int iVar2;
  double dVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  dVar3 = (double)FUN_00150a90(param_1,iVar2 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x020aae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_5,(float)dVar3,plVar1,*param_6,*param_7);
  return;
}


