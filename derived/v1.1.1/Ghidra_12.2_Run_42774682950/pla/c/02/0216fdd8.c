/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0216fdd8; name: FUN_0216fdd8
 */


void FUN_0216fdd8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  double dVar6;
  double dVar7;
  
  iVar5 = param_2[1] + 2;
  iVar2 = FUN_00150310(param_1,iVar5);
  if (iVar2 == 0) {
    *param_2 = 1;
    iVar5 = param_2[1] + 1;
    uVar4 = 0;
    param_2[1] = iVar5;
  }
  else {
    lVar3 = FUN_001511d0(param_1,iVar5);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar4 = FUN_01602d14(param_1,*(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7)),iVar5,
                         param_2);
    iVar5 = param_2[1];
  }
  *param_2 = 1;
  param_2[1] = iVar5 + 1;
  dVar6 = (double)FUN_00150a90(param_1,iVar5 + 2,0);
  iVar5 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar5 + 1;
  dVar7 = (double)FUN_00150a90(param_1,iVar5 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0216fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((float)dVar6,(float)dVar7,plVar1,*param_5,uVar4);
  return;
}


