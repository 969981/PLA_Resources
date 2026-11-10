/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1d18c; name: FUN_00e1d18c
 */


void FUN_00e1d18c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar1 = PTR_DAT_0437acb0;
  local_70 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar15 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    local_70 = (*pcVar15)(local_70,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  local_78 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar15 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    local_78 = (*pcVar15)(local_78,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar4 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar5 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar6 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar7 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar8 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar9 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar10 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar11 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar12 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar13 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar14 = FUN_00150da0(param_1,iVar2 + 1,auStack_68);
  (*(code *)*param_3)(local_70,local_78,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                      uVar13,uVar14);
  return;
}


