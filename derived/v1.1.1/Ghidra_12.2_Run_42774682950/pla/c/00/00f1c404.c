/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1c404; name: FUN_00f1c404
 */


void FUN_00f1c404(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  double __x;
  undefined8 local_38;
  
  iVar1 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if (*PTR_DAT_0437acb0 != '\0') {
    local_38 = uVar7;
    iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast");
    if (iVar1 == 0) {
      uVar7 = local_38;
    }
    else {
      pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar7 = FUN_00b4fc10();
      uVar7 = (*pcVar5)(local_38,uVar7);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar6 = llround(__x);
    uVar3 = (undefined4)lVar6;
  }
  else {
    uVar3 = FUN_00150ba0(param_1,iVar1,0);
  }
  local_38 = CONCAT44(uVar3,(undefined4)local_38);
  FUN_00f1c578(param_1,param_2,param_3,uVar7,(long)&local_38 + 4);
  return;
}


