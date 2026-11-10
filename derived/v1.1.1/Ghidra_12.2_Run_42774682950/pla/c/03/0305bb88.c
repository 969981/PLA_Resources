/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305bb88; name: FUN_0305bb88
 */


void FUN_0305bb88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  plVar4 = (long *)*param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = plVar4;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  iVar8 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar5 = param_2[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar7 = (undefined8 *)(lVar5 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar8;
    puVar7 = (undefined8 *)(param_2[1] + (long)iVar8 * 8);
  }
  puVar7 = (undefined8 *)*puVar7;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)((long)puVar7 + 4) = *(undefined4 *)(param_1 + 3);
  puVar3 = PTR_PTR_0434a080;
  iVar8 = *(int *)(param_1 + 3);
  uVar1 = iVar8 + 1;
  puVar6 = (uint *)((long)param_1 + 0x1c);
  uVar9 = *puVar6;
  if (iVar8 < (int)(uVar9 & 0x3fffffff)) {
    lVar5 = param_1[2];
  }
  else {
    uVar10 = param_1[2];
    if (0x3ffffffe < iVar8) {
      FUN_032bd0a8(uVar1);
      uVar9 = *puVar6;
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar9) {
      uVar2 = uVar9;
    }
    lVar5 = FUN_032bd1d4(puVar3,uVar2,8,uVar10,iVar8,puVar6);
    iVar8 = *(int *)(param_1 + 3);
    param_1[2] = lVar5;
  }
  *(undefined8 **)(lVar5 + (long)iVar8 * 8) = puVar7;
  *(uint *)(param_1 + 3) = uVar1;
  param_1[0x1e] = param_3;
  plVar4 = (long *)*param_2;
  param_1[0x20] = plVar4;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  iVar8 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar5 = param_2[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar7 = (undefined8 *)(lVar5 + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar8;
    puVar7 = (undefined8 *)(param_2[1] + (long)iVar8 * 8);
  }
  puVar7 = (undefined8 *)*puVar7;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)((long)puVar7 + 4) = *(undefined4 *)(param_1 + 0x23);
  uVar9 = *(uint *)((long)param_1 + 0x11c);
  iVar8 = *(int *)(param_1 + 0x23);
  uVar1 = iVar8 + 1;
  if (iVar8 < (int)(uVar9 & 0x3fffffff)) {
    lVar5 = param_1[0x22];
  }
  else {
    uVar10 = param_1[0x22];
    if (0x3ffffffe < iVar8) {
      FUN_032bd0a8(uVar1);
      uVar9 = *(uint *)((long)param_1 + 0x11c);
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar9) {
      uVar2 = uVar9;
    }
    lVar5 = FUN_032bd1d4(puVar3,uVar2,8,uVar10,iVar8,(uint *)((long)param_1 + 0x11c));
    iVar8 = *(int *)(param_1 + 0x23);
    param_1[0x22] = lVar5;
  }
  *(undefined8 **)(lVar5 + (long)iVar8 * 8) = puVar7;
  *(uint *)(param_1 + 0x23) = uVar1;
  param_1[0x3e] = param_3;
  return;
}


