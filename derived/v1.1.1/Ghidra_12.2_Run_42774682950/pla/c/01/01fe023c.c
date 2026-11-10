/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fe023c; name: FUN_01fe023c
 */


void FUN_01fe023c(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  double dVar6;
  double dVar7;
  
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    dVar6 = (double)FUN_00150a90(param_1,iVar1,0);
    uVar5 = llround(dVar6);
  }
  else {
    uVar5 = FUN_00150ba0(param_1,iVar1,0);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar4 = FUN_00150ba0(param_1,iVar1 + 2,0);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar6 = (double)FUN_00150a90(param_1,iVar1 + 2,0);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar7 = (double)FUN_00150a90(param_1,iVar1 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar2 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x01fe0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((float)dVar6,(float)dVar7,plVar2,uVar5 & 0xffffffff,uVar4);
  return;
}


