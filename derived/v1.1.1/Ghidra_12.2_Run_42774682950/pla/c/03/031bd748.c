/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bd748; name: FUN_031bd748
 */


void FUN_031bd748(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_0430b668;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  puVar8 = PTR_PTR_0434a080;
  uVar7 = *(uint *)(param_2 + 0x38);
  puVar14 = *(undefined8 **)(param_2 + 0x30);
  local_34 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar9 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_34);
    param_1[6] = puVar9;
    *(uint *)(param_1 + 7) = uVar7;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    if (uVar7 != 1) {
      iVar13 = (uVar7 & 1) - uVar7;
      puVar10 = puVar9;
      do {
        puVar10[1] = puVar14[1];
        *puVar10 = *puVar14;
        puVar10[3] = puVar14[3];
        puVar2 = puVar14 + 2;
        puVar9 = puVar10 + 4;
        puVar14 = puVar14 + 4;
        iVar13 = iVar13 + 2;
        puVar10[2] = *puVar2;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if ((uVar7 & 1) != 0) {
      puVar9[1] = puVar14[1];
      *puVar9 = *puVar14;
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x50);
  puVar15 = *(undefined4 **)(param_2 + 0x48);
  if ((int)uVar7 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_38 = uVar7;
    puVar11 = (undefined4 *)FUN_032cf190(puVar8,4,&local_38);
    *(uint *)(param_1 + 10) = uVar7;
    *(uint *)((long)param_1 + 0x54) = local_38;
    uVar3 = uVar7 & 3;
    param_1[9] = puVar11;
    if (2 < uVar7 - 1) {
      iVar13 = uVar3 - uVar7;
      puVar12 = puVar11;
      do {
        *puVar12 = *puVar15;
        puVar12[1] = puVar15[1];
        puVar12[2] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar11 = puVar12 + 4;
        puVar15 = puVar15 + 4;
        iVar13 = iVar13 + 4;
        puVar12[3] = *puVar1;
        puVar12 = puVar11;
      } while (iVar13 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar11 = *puVar15;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
  }
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar6;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar6;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar6;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar5;
  return;
}


