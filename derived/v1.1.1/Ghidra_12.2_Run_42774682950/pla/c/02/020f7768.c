/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f7768; name: FUN_020f7768
 */


void FUN_020f7768(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  
  iVar3 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar3 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar3 = FUN_00155630(param_1,iVar3 + 2,"class_cast"), iVar3 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ea12ac();
    uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar3 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar3 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x020f78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((float)dVar2,plVar1,uVar6);
  return;
}


