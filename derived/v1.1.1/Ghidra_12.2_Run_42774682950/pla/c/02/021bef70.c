/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021bef70; name: FUN_021bef70
 */


void FUN_021bef70(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  local_70 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437d4b8 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00f0973c();
    local_70 = (*pcVar5)(local_70,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar1 = PTR_DAT_0437c708;
  local_78 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00ea12ac();
    local_78 = (*pcVar5)(local_78,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  local_80 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00ea12ac();
    local_80 = (*pcVar5)(local_80,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar9 = FUN_00ea12ac();
    uVar8 = (*pcVar5)(uVar8,uVar9);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar1 = PTR_DAT_0437acb0;
  uVar9 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar10 = FUN_00b4fc10();
    uVar9 = (*pcVar5)(uVar9,uVar10);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar10 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    uVar10 = (*pcVar5)(uVar10,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar4 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00b4fc10();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0(param_1);
  (*(code *)*param_3)(local_70,local_78,local_80,uVar8,uVar9,uVar10,uVar4,uVar7,iVar2 != 0);
  return;
}


