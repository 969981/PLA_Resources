/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02185e90; name: FUN_02185e90
 */


void FUN_02185e90(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  undefined8 uVar9;
  double __x;
  undefined8 local_68;
  
  iVar4 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar4 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar2 = PTR_DAT_0437acb0;
  local_68 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar4 = FUN_00155630(param_1,iVar4 + 2,"class_cast"), iVar4 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00b4fc10();
    local_68 = (*UNRECOVERED_JUMPTABLE)(local_68,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar4 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar4 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*puVar2 != '\0') && (iVar4 = FUN_00155630(param_1,iVar4 + 2,"class_cast"), iVar4 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar9 = FUN_00b4fc10();
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar9);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar4 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar4 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar9 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*puVar2 != '\0') && (iVar4 = FUN_00155630(param_1,iVar4 + 2,"class_cast"), iVar4 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00b4fc10();
    uVar9 = (*UNRECOVERED_JUMPTABLE)(uVar9,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar4 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar4);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar4,0);
    uVar6 = llround(__x);
  }
  else {
    uVar6 = FUN_00150ba0(param_1,iVar4,0);
  }
  iVar4 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar4 + 1;
  uVar7 = FUN_00150ba0(param_1,iVar4 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02186010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5,local_68,uVar8,uVar9,uVar6 & 0xffffffff,uVar7);
  return;
}


