/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ec1c4; name: FUN_008ec1c4
 */


void FUN_008ec1c4(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  longlong lVar5;
  code *UNRECOVERED_JUMPTABLE;
  double dVar6;
  
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    dVar6 = (double)FUN_00150a90(param_1,iVar1,0);
    uVar4 = llround(dVar6);
  }
  else {
    uVar4 = FUN_00150ba0(param_1,iVar1,0);
  }
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    dVar6 = (double)FUN_00150a90(param_1,iVar1,0);
    lVar5 = llround(dVar6);
  }
  else {
    lVar5 = FUN_00150ba0(param_1,iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar2 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x008ec27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar4 & 0xffffffff,lVar5);
  return;
}


