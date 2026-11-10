/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f951f0; name: FUN_00f951f0
 */


void FUN_00f951f0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437d928 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00f946e4();
    uVar8 = (*pcVar6)(uVar8,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar2;
  iVar1 = FUN_001504d0(param_1,iVar2);
  if (iVar1 == 0) {
    dVar9 = (double)FUN_00150a90(param_1,iVar2,0);
    uVar4 = llround(dVar9);
  }
  else {
    uVar4 = FUN_00150ba0(param_1,iVar2,0);
  }
  iVar2 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar2;
  iVar1 = FUN_001504d0(param_1,iVar2);
  if (iVar1 == 0) {
    dVar9 = (double)FUN_00150a90(param_1,iVar2,0);
    lVar5 = llround(dVar9);
  }
  else {
    lVar5 = FUN_00150ba0(param_1,iVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f952cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar8,uVar4 & 0xffffffff,lVar5);
  return;
}


