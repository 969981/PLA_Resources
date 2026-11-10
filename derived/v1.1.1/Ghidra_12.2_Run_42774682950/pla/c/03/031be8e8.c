/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031be8e8; name: FUN_031be8e8
 */


void FUN_031be8e8(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int local_44;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_0430b6b0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a080;
  uVar3 = *(uint *)(param_2 + 0x20);
  puVar11 = *(undefined4 **)(param_2 + 0x18);
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_38);
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)((long)param_1 + 0x24) = local_38;
    uVar2 = uVar3 & 3;
    param_1[3] = puVar6;
    if (2 < uVar3 - 1) {
      iVar9 = uVar2 - uVar3;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        puVar7[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar6 = puVar7 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar7[3] = *puVar1;
        puVar7 = puVar6;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar11;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar11 = *(undefined4 **)(param_2 + 0x28);
  local_34 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined4 *)FUN_032cf190(puVar5,4,&local_34);
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((long)param_1 + 0x34) = local_34;
    uVar2 = uVar3 & 3;
    param_1[5] = puVar6;
    if (2 < uVar3 - 1) {
      iVar9 = uVar2 - uVar3;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        puVar7[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar6 = puVar7 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar7[3] = *puVar1;
        puVar7 = puVar6;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar11;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  iVar9 = *(int *)(param_2 + 0x40);
  puVar12 = *(undefined8 **)(param_2 + 0x38);
  if (iVar9 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_44 = iVar9;
    puVar8 = (undefined8 *)FUN_032cf190(puVar5,0x30,&local_44);
    param_1[7] = puVar8;
    *(int *)(param_1 + 8) = iVar9;
    *(int *)((long)param_1 + 0x44) = local_44;
    do {
      uVar10 = puVar12[3];
      iVar9 = iVar9 + -1;
      uVar4 = *(undefined4 *)(puVar12 + 4);
      puVar8[1] = puVar12[1];
      puVar8[3] = uVar10;
      *puVar8 = *puVar12;
      uVar10 = puVar12[2];
      *(undefined4 *)(puVar8 + 4) = uVar4;
      puVar8[2] = uVar10;
      *(undefined4 *)((long)puVar8 + 0x24) = *(undefined4 *)((long)puVar12 + 0x24);
      *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar12 + 5);
      puVar8 = puVar8 + 6;
      puVar12 = puVar12 + 6;
    } while (iVar9 != 0);
  }
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  return;
}


