/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dec2b4; name: FUN_00dec2b4
 */


void FUN_00dec2b4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  double __x;
  undefined1 auStack_48 [8];
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437bb78 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00deb95c();
    uVar7 = (*pcVar6)(uVar7,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar4 = FUN_00150da0(param_1,iVar2 + 1,auStack_48);
  *param_2 = 1;
  iVar2 = param_2[1] + 1;
  param_2[1] = iVar2;
  iVar1 = FUN_001504d0(param_1,iVar2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar2,0);
    lVar5 = llround(__x);
  }
  else {
    lVar5 = FUN_00150ba0(param_1,iVar2,0);
  }
  (*(code *)*param_3)(uVar7,uVar4,lVar5);
  return;
}


