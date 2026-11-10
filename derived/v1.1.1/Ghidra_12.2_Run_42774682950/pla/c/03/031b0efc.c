/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b0efc; name: FUN_031b0efc
 */


void FUN_031b0efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint local_34;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar6 = PTR_PTR_0434a080;
  uVar5 = *(uint *)(param_2 + 1);
  puVar11 = (undefined4 *)*param_2;
  if ((int)uVar5 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_34);
    *(uint *)(param_1 + 1) = uVar5;
    *(uint *)((long)param_1 + 0xc) = local_34;
    uVar2 = uVar5 & 3;
    *param_1 = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar7 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 3);
  puVar11 = (undefined4 *)param_2[2];
  if ((int)uVar5 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_032cf190(puVar6,4,&local_34);
    *(uint *)(param_1 + 3) = uVar5;
    *(uint *)((long)param_1 + 0x1c) = local_34;
    uVar2 = uVar5 & 3;
    param_1[2] = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar7 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 5);
  puVar11 = (undefined4 *)param_2[4];
  if ((int)uVar5 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_032cf190(puVar6,4,&local_34);
    *(uint *)(param_1 + 5) = uVar5;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar2 = uVar5 & 3;
    param_1[4] = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar7 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 7);
  puVar11 = (undefined4 *)param_2[6];
  if ((int)uVar5 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_032cf190(puVar6,4,&local_34);
    *(uint *)(param_1 + 7) = uVar5;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar2 = uVar5 & 3;
    param_1[6] = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar7 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar3 = param_2[8];
  uVar10 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar10;
  param_1[8] = uVar3;
  uVar3 = param_2[0xb];
  uVar10 = param_2[0xc];
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar10;
  uVar3 = param_2[0xf];
  uVar10 = param_2[0x10];
  uVar4 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar10;
  return;
}


