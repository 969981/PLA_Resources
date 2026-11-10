/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01602b6c; name: FUN_01602b6c
 */


void FUN_01602b6c(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  
  iVar2 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar2 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 2,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1] + 2;
  iVar3 = FUN_00150310(param_1,iVar2);
  if (iVar3 == 0) {
    *param_2 = 1;
    uVar5 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar2);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar5 = FUN_01602d14(param_1,*(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)),iVar2,
                         param_2);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01602cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar6,uVar5);
  return;
}


