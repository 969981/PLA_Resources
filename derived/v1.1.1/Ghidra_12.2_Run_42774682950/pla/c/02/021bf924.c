/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021bf924; name: FUN_021bf924
 */


void FUN_021bf924(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar4 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437d4b8 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00f0973c();
    uVar4 = (*pcVar3)(uVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00ea12ac();
    uVar5 = (*pcVar3)(uVar5,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ea12ac();
    uVar6 = (*pcVar3)(uVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00ea12ac();
    uVar7 = (*pcVar3)(uVar7,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if (*PTR_DAT_0437acb0 != '\0') {
    local_58 = uVar8;
    iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast");
    if (iVar1 == 0) {
      uVar8 = local_58;
    }
    else {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar8 = FUN_00b4fc10();
      uVar8 = (*pcVar3)(local_58,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_58 = FUN_00150da0(param_1,iVar1 + 1,&local_58);
  FUN_021bfe8c(param_1,param_2,param_3,uVar4,uVar5,uVar6,uVar7,uVar8,&local_58);
  return;
}


