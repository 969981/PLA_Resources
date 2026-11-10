/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0216fb18; name: FUN_0216fb18
 */


void FUN_0216fb18(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = param_2[1] + 2;
  iVar3 = FUN_00150310(param_1,iVar1);
  if (iVar3 == 0) {
    *param_2 = 1;
    uVar5 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar1);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar5 = FUN_01602d14(param_1,*(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)),iVar1,
                         param_2);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar2 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0216fbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5,uVar5);
  return;
}


