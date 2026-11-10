/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f6b80; name: FUN_020f6b80
 */


void FUN_020f6b80(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ea12ac();
    uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar3 = FUN_001511d0(param_1,3);
  uVar5 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437da68 != '\0') && (iVar2 = FUN_00155630(param_1,3,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00fadcb8();
    uVar5 = (*UNRECOVERED_JUMPTABLE)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x020f6c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar6,uVar5);
  return;
}


