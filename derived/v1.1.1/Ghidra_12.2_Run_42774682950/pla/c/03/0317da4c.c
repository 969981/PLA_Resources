/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317da4c; name: FUN_0317da4c
 */


long FUN_0317da4c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  ulong local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined *local_68;
  uint *local_60;
  undefined4 *puStack_58;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  puVar5 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    goto LAB_0317ddd8;
  }
  uVar1 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  uVar3 = *(uint *)(param_2 + 0x30);
  lVar18 = *(long *)(param_2 + 0x28);
  lVar16 = *(long *)(param_1 + 0x28);
  lVar6 = lVar16;
  if ((int)uVar1 < (int)uVar3) {
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar19 = (ulong)uVar4;
    local_80 = (long)(int)uVar3 << 2;
    local_78 = 4;
    local_74 = uVar3;
    if ((int)uVar3 < 0) {
      local_70 = 2;
      local_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_70);
      if ((int)uVar1 <= (int)local_74) goto LAB_0317dacc;
LAB_0317dad8:
      local_70 = 1;
      local_60 = &local_74;
      local_68 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_70);
    }
    else {
      if ((int)uVar3 < (int)uVar1) goto LAB_0317dad8;
LAB_0317dacc:
      if (0x3fffffff < (int)local_74) goto LAB_0317dad8;
    }
    iVar14 = *(int *)(param_1 + 0x34);
    lVar6 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    if (0 < (int)uVar4) {
      uVar15 = uVar19 & 3;
      if (uVar19 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar13 = (undefined4 *)(lVar16 + 8);
        puVar11 = (undefined4 *)(lVar6 + 8);
        do {
          puVar9 = puVar13 + 1;
          puVar11[-2] = puVar13[-2];
          puVar11[-1] = puVar13[-1];
          *puVar11 = *puVar13;
          lVar10 = lVar10 + 4;
          puVar13 = puVar13 + 4;
          puVar11[1] = *puVar9;
          puVar11 = puVar11 + 4;
        } while (uVar19 - uVar15 != lVar10);
      }
      if ((uVar4 & 3) != 0) {
        puVar13 = (undefined4 *)(lVar16 + lVar10 * 4);
        puVar11 = (undefined4 *)(lVar6 + lVar10 * 4);
        do {
          uVar8 = *puVar13;
          uVar15 = uVar15 - 1;
          puVar13 = puVar13 + 1;
          *puVar11 = uVar8;
          puVar11 = puVar11 + 1;
        } while (uVar15 != 0);
      }
    }
    if (-1 < iVar14) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar16,iVar14 << 2);
    }
    if (local_80 < 0xfffffffc) {
      uVar8 = (undefined4)(local_80 >> 2);
    }
    else {
      uVar8 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar8;
    *(long *)(param_1 + 0x28) = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar1 = uVar4;
  if ((int)uVar3 <= (int)uVar4) {
    uVar1 = uVar3;
  }
  if ((lVar6 != lVar18) && (0 < (int)uVar1)) {
    uVar15 = (ulong)uVar1;
    uVar19 = uVar15 & 3;
    if (uVar15 - 1 < 3) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      puVar13 = (undefined4 *)(lVar18 + 8);
      puVar11 = (undefined4 *)(lVar6 + 8);
      do {
        puVar11[-2] = puVar13[-2];
        puVar11[-1] = puVar13[-1];
        uVar8 = *puVar13;
        puVar9 = puVar13 + 1;
        puVar13 = puVar13 + 4;
        *puVar11 = uVar8;
        lVar16 = lVar16 + 4;
        puVar12 = puVar11 + 1;
        puVar11 = puVar11 + 4;
        *puVar12 = *puVar9;
      } while (uVar15 - uVar19 != lVar16);
    }
    if ((uVar1 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar6 + lVar16 * 4);
      puVar13 = (undefined4 *)(lVar18 + lVar16 * 4);
      do {
        uVar8 = *puVar13;
        uVar19 = uVar19 - 1;
        puVar13 = puVar13 + 1;
        *puVar11 = uVar8;
        puVar11 = puVar11 + 1;
      } while (uVar19 != 0);
    }
    lVar6 = *(long *)(param_1 + 0x28);
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = uVar3 - uVar1 & 3;
    puVar11 = (undefined4 *)(lVar18 + (long)(int)uVar1 * 4);
    puVar13 = (undefined4 *)(lVar6 + (long)(int)uVar1 * 4);
    if (2 < uVar3 + ~uVar1) {
      iVar14 = (uVar3 - uVar1) - uVar4;
      puVar9 = puVar11;
      puVar12 = puVar13;
      do {
        *puVar12 = *puVar9;
        puVar12[1] = puVar9[1];
        puVar12[2] = puVar9[2];
        puVar11 = puVar9 + 4;
        puVar13 = puVar12 + 4;
        iVar14 = iVar14 + -4;
        puVar12[3] = puVar9[3];
        puVar9 = puVar11;
        puVar12 = puVar13;
      } while (iVar14 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar8 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar13 = uVar8;
      puVar13 = puVar13 + 1;
    }
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  iVar14 = *(int *)(param_2 + 0x40);
  pvVar17 = *(void **)(param_2 + 0x38);
  pvVar7 = *(void **)(param_1 + 0x38);
  if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar14) {
    pvVar7 = (void *)FUN_032bd1d4(puVar5,iVar14,1,pvVar7,*(undefined4 *)(param_1 + 0x40));
    *(void **)(param_1 + 0x38) = pvVar7;
  }
  memcpy(pvVar7,pvVar17,(long)iVar14);
  *(int *)(param_1 + 0x40) = iVar14;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  iVar14 = *(int *)(param_2 + 0x58);
  pvVar7 = *(void **)(param_2 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar14) {
    pvVar17 = (void *)FUN_032bd1d4(puVar5,iVar14,2,*(undefined8 *)(param_1 + 0x50),
                                   *(undefined4 *)(param_1 + 0x58));
    *(void **)(param_1 + 0x50) = pvVar17;
  }
  else {
    pvVar17 = *(void **)(param_1 + 0x50);
  }
  memcpy(pvVar17,pvVar7,(long)iVar14 << 1);
  *(int *)(param_1 + 0x58) = iVar14;
  iVar14 = *(int *)(param_2 + 0x68);
  pvVar17 = *(void **)(param_2 + 0x60);
  pvVar7 = *(void **)(param_1 + 0x60);
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) < iVar14) {
    pvVar7 = (void *)FUN_032bd1d4(puVar5,iVar14,1,pvVar7,*(undefined4 *)(param_1 + 0x68));
    *(void **)(param_1 + 0x60) = pvVar7;
  }
  memcpy(pvVar7,pvVar17,(long)iVar14);
  *(int *)(param_1 + 0x68) = iVar14;
LAB_0317ddd8:
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}


