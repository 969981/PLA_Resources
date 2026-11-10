/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204e664; name: FUN_0204e664
 */


void FUN_0204e664(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ea12ac();
    uVar6 = (*pcVar4)(uVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437da68 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00fadcb8();
    uVar7 = (*pcVar4)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0();
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar5 = FUN_00150ba0(param_1,iVar1 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x0204e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,uVar6,uVar7,iVar2 != 0,uVar5);
  return;
}


