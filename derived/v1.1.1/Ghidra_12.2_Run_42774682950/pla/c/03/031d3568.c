/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d3568; name: FUN_031d3568
 */


void FUN_031d3568(undefined4 param_1,long param_2,long param_3,int *param_4,int *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined2 local_58 [2];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar5 = *(long *)(param_3 + 0x20);
  iVar6 = *param_4;
  iVar7 = *(int *)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x28);
  if (iVar6 < iVar7) {
    iVar8 = iVar6;
    if (*(int *)(lVar5 + 0x78) != 0) {
      iVar8 = *(int *)(*(long *)(lVar5 + 0x70) + (long)iVar6 * 4);
    }
    lVar9 = lVar3;
    if (iVar8 != -1) {
      plVar4 = (long *)(lVar5 + 0xc0);
      iVar6 = iVar8;
      goto LAB_031d35c4;
    }
  }
  else {
    plVar4 = (long *)(lVar5 + 0xe0);
    iVar6 = iVar6 - iVar7;
LAB_031d35c4:
    lVar9 = *plVar4;
  }
  iVar10 = *(int *)(lVar9 + (long)iVar6 * 0x14);
  iVar8 = *(int *)(lVar5 + 0x40);
  plVar4 = (long *)(lVar5 + 0x38);
  if (iVar10 < iVar8) {
    iVar11 = 0;
    plVar2 = plVar4;
  }
  else {
    plVar2 = (long *)(lVar5 + 0xf0);
    iVar11 = iVar8;
  }
  puVar1 = (undefined8 *)(*plVar2 + (long)(iVar10 - iVar11) * 0x10);
  uStack_28 = puVar1[1];
  local_30 = *puVar1;
  iVar6 = *(int *)(lVar9 + (long)iVar6 * 0x14 + 4);
  if (iVar6 < iVar8) {
    iVar10 = 0;
  }
  else {
    plVar4 = (long *)(lVar5 + 0xf0);
    iVar10 = iVar8;
  }
  puVar1 = (undefined8 *)(*plVar4 + (long)(iVar6 - iVar10) * 0x10);
  uStack_18 = puVar1[1];
  uStack_20 = *puVar1;
  iVar6 = *param_5;
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
    if (*(int *)(lVar5 + 0x78) != 0) {
      iVar7 = *(int *)(*(long *)(lVar5 + 0x70) + (long)iVar6 * 4);
    }
    if (iVar7 == -1) goto LAB_031d3670;
    plVar4 = (long *)(lVar5 + 0xc0);
    iVar6 = iVar7;
  }
  else {
    plVar4 = (long *)(lVar5 + 0xe0);
    iVar6 = iVar6 - iVar7;
  }
  lVar3 = *plVar4;
LAB_031d3670:
  iVar7 = *(int *)(lVar3 + (long)iVar6 * 0x14);
  plVar4 = (long *)(lVar5 + 0x38);
  if (iVar7 < iVar8) {
    iVar10 = 0;
    plVar2 = plVar4;
  }
  else {
    plVar2 = (long *)(lVar5 + 0xf0);
    iVar10 = iVar8;
  }
  puVar1 = (undefined8 *)(*plVar2 + (long)(iVar7 - iVar10) * 0x10);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  iVar6 = *(int *)(lVar3 + (long)iVar6 * 0x14 + 4);
  if (iVar6 < iVar8) {
    iVar8 = 0;
  }
  else {
    plVar4 = (long *)(lVar5 + 0xf0);
  }
  puVar1 = (undefined8 *)(*plVar4 + (long)(iVar6 - iVar8) * 0x10);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  local_58[0] = 0;
  local_54 = param_1;
  FUN_031df430(*(undefined8 *)(param_2 + 0x18),param_3,param_3,&local_30,&local_50,param_6,param_7,
               param_9,param_8,param_9,local_58);
  return;
}


