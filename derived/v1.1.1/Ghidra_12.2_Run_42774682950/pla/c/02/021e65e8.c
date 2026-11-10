/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e65e8; name: FUN_021e65e8
 */


void FUN_021e65e8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = param_2[1] + 2;
  iVar2 = FUN_00150310(param_1,iVar3);
  if (iVar2 == 0) {
    *param_2 = 1;
    uVar6 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar3);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
    if ((*PTR_DAT_0437e298 != '\0') &&
       (iVar3 = FUN_00155630(param_1,iVar3,"class_cast"), iVar3 != 0)) {
      UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar5 = FUN_0105a774();
      uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x021e66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_5,param_6,param_7,*param_8,uVar6);
  return;
}


