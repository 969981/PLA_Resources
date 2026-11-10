/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e5d94; name: FUN_021e5d94
 */


void FUN_021e5d94(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  double __x;
  
  iVar2 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar2 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 2,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00ea12ac();
    uVar7 = (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar2 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 2,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00ea12ac();
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar2);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar2,0);
    uVar5 = llround(__x);
  }
  else {
    uVar5 = FUN_00150ba0(param_1,iVar2,0);
  }
  uVar6 = FUN_020fcd5c(param_1,param_2[1] + 2,param_2);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x021e601c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar7,uVar8,uVar5 & 0xffffffff,uVar6);
  return;
}


