/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e7c84; name: FUN_021e7c84
 */


uint FUN_021e7c84(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double __x;
  undefined4 local_54;
  
  uVar4 = FUN_00ff7a8c(param_1,param_2[1] + 2,param_2);
  iVar1 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar9 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar10 = FUN_00ea12ac();
    uVar9 = (*pcVar6)(uVar9,uVar10);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar10 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ea12ac();
    uVar10 = (*pcVar6)(uVar10,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar8 = llround(__x);
    local_54 = (undefined4)lVar8;
  }
  else {
    local_54 = FUN_00150ba0(param_1,iVar1,0);
  }
  uVar3 = FUN_021e7f90(param_1,param_2,param_3,param_4,uVar4,uVar9,uVar10,&local_54);
  return uVar3 & 1;
}


