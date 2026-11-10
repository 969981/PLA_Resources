/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00eb088c; name: FUN_00eb088c
 */


void FUN_00eb088c(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 uVar8;
  double __x;
  
  iVar3 = param_2[1] + 2;
  iVar2 = FUN_00150310(param_1,iVar3);
  if (iVar2 == 0) {
    *param_2 = 1;
    iVar3 = param_2[1] + 1;
    uVar7 = 0;
    param_2[1] = iVar3;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar3);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
    if ((DAT_043b1b10 != '\0') && (iVar3 = FUN_00155630(param_1,iVar3,"class_cast"), iVar3 != 0)) {
      UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar8 = FUN_00eb0b14();
      uVar7 = (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
    }
    iVar3 = param_2[1];
  }
  iVar3 = iVar3 + 2;
  iVar2 = FUN_00150310(param_1,iVar3);
  if (iVar2 == 0) {
    *param_2 = 1;
    iVar3 = param_2[1] + 1;
    uVar8 = 0;
    param_2[1] = iVar3;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar3);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar8 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
    if ((DAT_043b1b10 != '\0') && (iVar3 = FUN_00155630(param_1,iVar3,"class_cast"), iVar3 != 0)) {
      UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar6 = FUN_00eb0b14();
      uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar6);
      FUN_0014ff10(param_1,0xfffffffe);
    }
    iVar3 = param_2[1];
  }
  iVar2 = iVar3 + 2;
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  iVar3 = FUN_001504d0(param_1,iVar2);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar2,0);
    uVar5 = llround(__x);
  }
  else {
    uVar5 = FUN_00150ba0(param_1,iVar2,0);
  }
  iVar3 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  iVar2 = FUN_00150cc0(param_1,iVar3 + 2);
  iVar3 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  iVar3 = FUN_00150cc0(param_1,iVar3 + 2);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00eb0a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,*param_5,*param_6,uVar7,uVar8,uVar5 & 0xffffffff,iVar2 != 0,iVar3 != 0);
  return;
}


