/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315b20c; name: FUN_0315b20c
 */


void FUN_0315b20c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  uint local_34;
  
  *param_1 = &PTR_LAB_0430b0e0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar7;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  lVar16 = *(long *)(param_2 + 0x68);
  param_1[0xd] = lVar16;
  if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
    plVar3 = (long *)(lVar16 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = *plVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  puVar10 = PTR_PTR_0434a080;
  uVar18 = *(uint *)(param_2 + 0x78);
  puVar19 = *(undefined4 **)(param_2 + 0x70);
  if ((int)uVar18 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    puVar11 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_34);
    *(uint *)(param_1 + 0xf) = uVar18;
    *(uint *)((long)param_1 + 0x7c) = local_34;
    uVar4 = uVar18 & 3;
    param_1[0xe] = puVar11;
    if (2 < uVar18 - 1) {
      iVar17 = uVar4 - uVar18;
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar19;
        puVar14[1] = puVar19[1];
        puVar14[2] = puVar19[2];
        puVar1 = puVar19 + 3;
        puVar11 = puVar14 + 4;
        puVar19 = puVar19 + 4;
        iVar17 = iVar17 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar17 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar19;
      puVar11 = puVar11 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar18 = *(uint *)(param_2 + 0x88);
  puVar20 = *(undefined8 **)(param_2 + 0x80);
  if ((int)uVar18 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    puVar12 = (undefined8 *)FUN_032cf190(puVar10,8,&local_34);
    *(uint *)(param_1 + 0x11) = uVar18;
    *(uint *)((long)param_1 + 0x8c) = local_34;
    uVar4 = uVar18 & 3;
    param_1[0x10] = puVar12;
    if (2 < uVar18 - 1) {
      iVar17 = uVar4 - uVar18;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar20;
        puVar13[1] = puVar20[1];
        puVar13[2] = puVar20[2];
        puVar2 = puVar20 + 3;
        puVar12 = puVar13 + 4;
        puVar20 = puVar20 + 4;
        iVar17 = iVar17 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar17 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar20;
      puVar12 = puVar12 + 1;
      puVar20 = puVar20 + 1;
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  uVar18 = *(uint *)(param_2 + 0x98);
  puVar20 = *(undefined8 **)(param_2 + 0x90);
  if ((int)uVar18 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    puVar12 = (undefined8 *)FUN_032cf190(puVar10,8,&local_34);
    *(uint *)(param_1 + 0x13) = uVar18;
    *(uint *)((long)param_1 + 0x9c) = local_34;
    uVar4 = uVar18 & 3;
    param_1[0x12] = puVar12;
    if (2 < uVar18 - 1) {
      iVar17 = uVar4 - uVar18;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar20;
        puVar13[1] = puVar20[1];
        puVar13[2] = puVar20[2];
        puVar2 = puVar20 + 3;
        puVar12 = puVar13 + 4;
        puVar20 = puVar20 + 4;
        iVar17 = iVar17 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar17 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar20;
      puVar12 = puVar12 + 1;
      puVar20 = puVar20 + 1;
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  uVar18 = *(uint *)(param_2 + 0xa8);
  puVar19 = *(undefined4 **)(param_2 + 0xa0);
  if ((int)uVar18 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    puVar11 = (undefined4 *)FUN_032cf190(puVar10,4,&local_34);
    *(uint *)(param_1 + 0x15) = uVar18;
    *(uint *)((long)param_1 + 0xac) = local_34;
    uVar4 = uVar18 & 3;
    param_1[0x14] = puVar11;
    if (2 < uVar18 - 1) {
      iVar17 = uVar4 - uVar18;
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar19;
        puVar14[1] = puVar19[1];
        puVar14[2] = puVar19[2];
        puVar1 = puVar19 + 3;
        puVar11 = puVar14 + 4;
        puVar19 = puVar19 + 4;
        iVar17 = iVar17 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar17 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar19;
      puVar11 = puVar11 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  uVar18 = *(uint *)(param_2 + 0xb8);
  puVar19 = *(undefined4 **)(param_2 + 0xb0);
  if ((int)uVar18 < 1) {
    param_1[0x16] = 0;
    param_1[0x17] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    puVar11 = (undefined4 *)FUN_032cf190(puVar10,4,&local_34);
    *(uint *)(param_1 + 0x17) = uVar18;
    *(uint *)((long)param_1 + 0xbc) = local_34;
    uVar4 = uVar18 & 3;
    param_1[0x16] = puVar11;
    if (2 < uVar18 - 1) {
      iVar17 = uVar4 - uVar18;
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar19;
        puVar14[1] = puVar19[1];
        puVar14[2] = puVar19[2];
        puVar1 = puVar19 + 3;
        puVar11 = puVar14 + 4;
        puVar19 = puVar19 + 4;
        iVar17 = iVar17 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar17 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar19;
      puVar11 = puVar11 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  uVar18 = *(uint *)(param_2 + 200);
  lVar16 = *(long *)(param_2 + 0xc0);
  if ((int)uVar18 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = 0x8000000000000000;
  }
  else {
    local_34 = uVar18;
    lVar15 = FUN_032cf190(puVar10,0x10,&local_34);
    param_1[0x18] = lVar15;
    *(uint *)(param_1 + 0x19) = uVar18;
    *(uint *)((long)param_1 + 0xcc) = local_34;
    do {
      FUN_0315c820(lVar15,lVar16);
      uVar18 = uVar18 - 1;
      lVar15 = lVar15 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while (uVar18 != 0);
  }
  return;
}


