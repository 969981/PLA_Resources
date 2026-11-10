/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f957f4; name: FUN_00f957f4
 */


void FUN_00f957f4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double __x;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437d928 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00f946e4();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar2;
  iVar1 = FUN_001504d0(param_1,iVar2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar2,0);
    uVar4 = llround(__x);
  }
  else {
    uVar4 = FUN_00150ba0(param_1,iVar2,0);
  }
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f958bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar7,uVar4 & 0xffffffff,iVar2 != 0);
  return;
}


