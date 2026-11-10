/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f78bf0; name: FUN_00f78bf0
 */


void FUN_00f78bf0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double __x;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar6 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((DAT_043b5e08 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00f78758();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = FUN_001504d0(param_1,2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar3 = llround(__x);
  }
  else {
    lVar3 = FUN_00150ba0(param_1,2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f78c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(uVar6,lVar3);
  return;
}


