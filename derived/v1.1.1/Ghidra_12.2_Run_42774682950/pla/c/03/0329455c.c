/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329455c; name: FUN_0329455c
 */


void FUN_0329455c(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  uint uVar23;
  long *plVar24;
  uint local_54;
  
  *param_1 = &PTR_LAB_04341e50;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_032c7b0c(param_1 + 3,param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  puVar7 = PTR_PTR_0434a080;
  uVar23 = *(uint *)(param_2 + 0x28);
  puVar18 = *(undefined2 **)(param_2 + 0x20);
  if ((int)uVar23 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    puVar8 = (undefined2 *)FUN_032cf190(PTR_PTR_0434a080,2,&local_54);
    *(uint *)(param_1 + 5) = uVar23;
    *(uint *)((long)param_1 + 0x2c) = local_54;
    uVar4 = uVar23 & 3;
    param_1[4] = puVar8;
    if (2 < uVar23 - 1) {
      iVar16 = uVar4 - uVar23;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar18;
        puVar9[1] = puVar18[1];
        puVar9[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar8 = puVar9 + 4;
        puVar18 = puVar18 + 4;
        iVar16 = iVar16 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar18;
      puVar8 = puVar8 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x38);
  puVar19 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar23 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    puVar10 = (undefined8 *)FUN_032cf190(puVar7,0x10,&local_54);
    param_1[6] = puVar10;
    *(uint *)(param_1 + 7) = uVar23;
    *(uint *)((long)param_1 + 0x3c) = local_54;
    do {
      *puVar10 = 0;
      if (puVar10 != puVar19) {
        FUN_032c7e9c(puVar10,puVar19);
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar19 + 1);
      }
      uVar23 = uVar23 - 1;
      puVar19 = puVar19 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar23 != 0);
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x48);
  puVar19 = *(undefined8 **)(param_2 + 0x40);
  if ((int)uVar23 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    puVar10 = (undefined8 *)FUN_032cf190(puVar7,0x30,&local_54);
    param_1[8] = puVar10;
    *(uint *)(param_1 + 9) = uVar23;
    *(uint *)((long)param_1 + 0x4c) = local_54;
    if (uVar23 != 1) {
      iVar16 = (uVar23 & 1) - uVar23;
      puVar11 = puVar10;
      puVar20 = puVar19;
      do {
        uVar17 = puVar20[5];
        iVar16 = iVar16 + 2;
        puVar11[3] = puVar20[3];
        puVar11[5] = uVar17;
        puVar11[1] = puVar20[1];
        *puVar11 = *puVar20;
        uVar17 = puVar20[2];
        puVar11[4] = puVar20[4];
        puVar11[2] = uVar17;
        puVar11[7] = puVar20[7];
        uVar17 = puVar20[8];
        uVar5 = puVar20[9];
        puVar10 = puVar11 + 0xc;
        uVar6 = puVar20[0xb];
        puVar19 = puVar20 + 0xc;
        puVar11[10] = puVar20[10];
        puVar11[0xb] = uVar6;
        puVar11[8] = uVar17;
        puVar11[9] = uVar5;
        puVar11[6] = puVar20[6];
        puVar11 = puVar10;
        puVar20 = puVar19;
      } while (iVar16 != 0);
    }
    if ((uVar23 & 1) != 0) {
      uVar17 = puVar19[5];
      puVar10[3] = puVar19[3];
      puVar10[5] = uVar17;
      puVar10[1] = puVar19[1];
      *puVar10 = *puVar19;
      uVar17 = puVar19[2];
      puVar10[4] = puVar19[4];
      puVar10[2] = uVar17;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x58);
  puVar21 = *(undefined4 **)(param_2 + 0x50);
  if ((int)uVar23 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    puVar12 = (undefined4 *)FUN_032cf190(puVar7,4,&local_54);
    *(uint *)(param_1 + 0xb) = uVar23;
    *(uint *)((long)param_1 + 0x5c) = local_54;
    uVar4 = uVar23 & 3;
    param_1[10] = puVar12;
    if (2 < uVar23 - 1) {
      iVar16 = uVar4 - uVar23;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar21;
        puVar13[1] = puVar21[1];
        puVar13[2] = puVar21[2];
        puVar3 = puVar21 + 3;
        puVar12 = puVar13 + 4;
        puVar21 = puVar21 + 4;
        iVar16 = iVar16 + 4;
        puVar13[3] = *puVar3;
        puVar13 = puVar12;
      } while (iVar16 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar21;
      puVar12 = puVar12 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x68);
  lVar22 = *(long *)(param_2 + 0x60);
  if ((int)uVar23 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    lVar14 = FUN_032cf190(puVar7,8,&local_54);
    param_1[0xc] = lVar14;
    *(uint *)(param_1 + 0xd) = uVar23;
    *(uint *)((long)param_1 + 0x6c) = local_54;
    do {
      FUN_032c7b0c(lVar14,lVar22);
      uVar23 = uVar23 - 1;
      lVar14 = lVar14 + 8;
      lVar22 = lVar22 + 8;
    } while (uVar23 != 0);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x78);
  plVar24 = *(long **)(param_2 + 0x70);
  if ((int)uVar23 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    plVar15 = (long *)FUN_032cf190(puVar7,0x10,&local_54);
    param_1[0xe] = plVar15;
    *(uint *)(param_1 + 0xf) = uVar23;
    *(uint *)((long)param_1 + 0x7c) = local_54;
    do {
      lVar22 = *plVar24;
      *plVar15 = lVar22;
      if (lVar22 != 0) {
        FUN_032d645c();
      }
      plVar2 = plVar24 + 1;
      uVar23 = uVar23 - 1;
      plVar24 = plVar24 + 2;
      *(short *)(plVar15 + 1) = (short)*plVar2;
      plVar15 = plVar15 + 2;
    } while (uVar23 != 0);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar23 = *(uint *)(param_2 + 0x88);
  lVar22 = *(long *)(param_2 + 0x80);
  if ((int)uVar23 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_54 = uVar23;
    lVar14 = FUN_032cf190(puVar7,0x10,&local_54);
    param_1[0x10] = lVar14;
    *(uint *)(param_1 + 0x11) = uVar23;
    *(uint *)((long)param_1 + 0x8c) = local_54;
    do {
      FUN_032c7b0c(lVar14,lVar22);
      *(undefined2 *)(lVar14 + 8) = *(undefined2 *)(lVar22 + 8);
      puVar18 = (undefined2 *)(lVar22 + 10);
      uVar23 = uVar23 - 1;
      lVar22 = lVar22 + 0x10;
      *(undefined2 *)(lVar14 + 10) = *puVar18;
      lVar14 = lVar14 + 0x10;
    } while (uVar23 != 0);
  }
  return;
}


