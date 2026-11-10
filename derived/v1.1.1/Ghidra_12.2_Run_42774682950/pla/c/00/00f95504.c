/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f95504; name: FUN_00f95504
 */


void FUN_00f95504(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar3 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437d928 != '\0') &&
     (iVar3 = FUN_00155630(param_1,iVar3 + 1,"class_cast"), iVar3 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00f946e4();
    uVar8 = (*pcVar6)(uVar8,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar3 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar3;
  iVar2 = FUN_001504d0(param_1,iVar3);
  if (iVar2 == 0) {
    dVar1 = (double)FUN_00150a90(param_1,iVar3,0);
    uVar5 = llround(dVar1);
  }
  else {
    uVar5 = FUN_00150ba0(param_1,iVar3,0);
  }
  iVar3 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  dVar1 = (double)FUN_00150a90(param_1,iVar3 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x00f955cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)((float)dVar1,uVar8,uVar5 & 0xffffffff);
  return;
}


