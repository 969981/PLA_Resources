/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0321b160; name: FUN_0321b160
 */


long FUN_0321b160(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  void *pvVar17;
  void *pvVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  puVar7 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar3 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  uVar4 = *(uint *)(param_2 + 0x20);
  lVar22 = *(long *)(param_2 + 0x18);
  if ((int)uVar4 <= (int)uVar3) goto LAB_0321b4b0;
  lVar23 = *(long *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar20 = (ulong)uVar5;
  local_88 = 0x120;
  local_90 = (long)(int)uVar4 * 0x120;
  local_84 = uVar4;
  if ((int)uVar4 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_70 = &local_84;
    puStack_68 = &local_88;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_80);
    if ((int)uVar3 <= (int)local_84) goto LAB_0321b1dc;
LAB_0321b1e8:
    local_80 = 1;
    local_70 = &local_84;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
  }
  else {
    if ((int)uVar4 < (int)uVar3) goto LAB_0321b1e8;
LAB_0321b1dc:
    if (0x3fffffff < (int)local_84) goto LAB_0321b1e8;
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  lVar8 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_90,&local_90);
  if (0 < (int)uVar5) {
    if (lVar23 == lVar8) {
      lVar21 = lVar23 + 0xd0;
      uVar12 = uVar20;
      do {
        *(long *)(lVar21 + -0x30) = lVar21 + -0x20;
        *(undefined4 *)(lVar21 + -0x28) = 0;
        *(undefined4 *)(lVar21 + -0x24) = 0x80000004;
        uVar12 = uVar12 - 1;
        *(long *)(lVar21 + -0x10) = lVar21;
        *(undefined4 *)(lVar21 + -8) = 0;
        *(undefined4 *)(lVar21 + -4) = 0x80000004;
        lVar21 = lVar21 + 0x120;
      } while (uVar12 != 0);
    }
    else {
      lVar21 = 0;
      uVar12 = uVar20;
      do {
        pvVar18 = (void *)(lVar8 + lVar21);
        pvVar17 = (void *)(lVar23 + lVar21);
        memcpy(pvVar18,pvVar17,0xa0);
        *(undefined8 *)((long)pvVar18 + 0xa0) = 0;
        *(undefined8 *)((long)pvVar18 + 0xa8) = 0x8000000000000000;
        *(undefined4 *)((long)pvVar18 + 0xa8) = *(undefined4 *)((long)pvVar17 + 0xa8);
        *(undefined4 *)((long)pvVar18 + 0xac) = *(undefined4 *)((long)pvVar17 + 0xac);
        puVar10 = *(undefined4 **)((long)pvVar17 + 0xa0);
        if ((undefined4 *)((long)pvVar17 + 0xb0) == puVar10) {
          *(undefined4 **)((long)pvVar18 + 0xa0) = (undefined4 *)((long)pvVar18 + 0xb0);
          *(undefined4 *)((long)pvVar18 + 0xb0) = *puVar10;
          *(undefined4 *)((long)pvVar18 + 0xb4) = *(undefined4 *)((long)pvVar17 + 0xb4);
          *(undefined4 *)((long)pvVar18 + 0xb8) = *(undefined4 *)((long)pvVar17 + 0xb8);
          *(undefined4 *)((long)pvVar18 + 0xbc) = *(undefined4 *)((long)pvVar17 + 0xbc);
        }
        else {
          *(undefined4 **)((long)pvVar18 + 0xa0) = puVar10;
          *(undefined4 **)((long)pvVar17 + 0xa0) = (undefined4 *)((long)pvVar17 + 0xb0);
          *(undefined4 *)((long)pvVar17 + 0xac) = 0x80000004;
        }
        *(undefined4 *)((long)pvVar17 + 0xa8) = 0;
        *(undefined8 *)((long)pvVar18 + 0xc0) = 0;
        *(undefined8 *)((long)pvVar18 + 200) = 0x8000000000000000;
        *(undefined4 *)((long)pvVar18 + 200) = *(undefined4 *)((long)pvVar17 + 200);
        *(undefined4 *)((long)pvVar18 + 0xcc) = *(undefined4 *)((long)pvVar17 + 0xcc);
        puVar10 = *(undefined4 **)((long)pvVar17 + 0xc0);
        if ((undefined4 *)((long)pvVar17 + 0xd0) == puVar10) {
          *(undefined4 **)((long)pvVar18 + 0xc0) = (undefined4 *)((long)pvVar18 + 0xd0);
          *(undefined4 *)((long)pvVar18 + 0xd0) = *puVar10;
          *(undefined4 *)((long)pvVar18 + 0xd4) = *(undefined4 *)((long)pvVar17 + 0xd4);
          *(undefined4 *)((long)pvVar18 + 0xd8) = *(undefined4 *)((long)pvVar17 + 0xd8);
          *(undefined4 *)((long)pvVar18 + 0xdc) = *(undefined4 *)((long)pvVar17 + 0xdc);
        }
        else {
          *(undefined4 **)((long)pvVar18 + 0xc0) = puVar10;
          *(undefined4 **)((long)pvVar17 + 0xc0) = (undefined4 *)((long)pvVar17 + 0xd0);
          *(undefined4 *)((long)pvVar17 + 0xcc) = 0x80000004;
        }
        *(undefined4 *)((long)pvVar17 + 200) = 0;
        uVar11 = *(undefined8 *)((long)pvVar17 + 0xe8);
        uVar13 = *(undefined8 *)((long)pvVar17 + 0xf0);
        uVar12 = uVar12 - 1;
        *(undefined8 *)((long)pvVar18 + 0xe0) = *(undefined8 *)((long)pvVar17 + 0xe0);
        uVar14 = *(undefined8 *)((long)pvVar17 + 0x108);
        uVar15 = *(undefined8 *)((long)pvVar17 + 0xf8);
        uVar9 = *(undefined4 *)((long)pvVar17 + 0x10f);
        *(undefined8 *)((long)pvVar18 + 0xe8) = uVar11;
        *(undefined8 *)((long)pvVar18 + 0xf0) = uVar13;
        *(undefined8 *)((long)pvVar18 + 0xf8) = uVar15;
        *(undefined8 *)((long)pvVar18 + 0x108) = uVar14;
        uVar11 = *(undefined8 *)((long)pvVar17 + 0x100);
        lVar21 = lVar21 + 0x120;
        *(undefined4 *)((long)pvVar18 + 0x10f) = uVar9;
        *(undefined8 *)((long)pvVar18 + 0x100) = uVar11;
      } while (uVar12 != 0);
    }
    piVar16 = (int *)(lVar23 + 0xcc);
    do {
      piVar16[-1] = 0;
      if ((-1 < *piVar16) && (*(long *)(piVar16 + -3) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar16 + -3),*piVar16 << 2);
      }
      piVar16[-3] = 0;
      piVar16[-2] = 0;
      *piVar16 = -0x80000000;
      piVar16[-9] = 0;
      if ((-1 < piVar16[-8]) && (*(long *)(piVar16 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar16 + -0xb),piVar16[-8] << 2);
      }
      piVar16[-0xb] = 0;
      piVar16[-10] = 0;
      uVar20 = uVar20 - 1;
      piVar16[-8] = -0x80000000;
      piVar16 = piVar16 + 0x48;
    } while (uVar20 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar23,((ulong)uVar3 & 0x3fffffff) * 0x120);
  }
  if (local_90 < 0x47fffffee0) {
    uVar9 = (undefined4)(local_90 / 0x120);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(long *)(param_1 + 0x18) = lVar8;
LAB_0321b4b0:
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((int)uVar4 < (int)uVar3) {
    lVar8 = *(long *)(param_1 + 0x18);
    lVar23 = (long)(int)uVar4 * 0x120;
    do {
      lVar21 = lVar8 + (long)(int)uVar3 * 0x120;
      *(undefined4 *)(lVar21 + -0x58) = 0;
      if ((-1 < *(int *)(lVar21 + -0x54)) && (*(long *)(lVar21 + -0x60) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))
                  (puVar7,*(long *)(lVar21 + -0x60),*(int *)(lVar21 + -0x54) << 2);
      }
      *(undefined8 *)(lVar21 + -0x60) = 0;
      *(undefined4 *)(lVar21 + -0x54) = 0x80000000;
      *(undefined4 *)(lVar21 + -0x78) = 0;
      if ((-1 < *(int *)(lVar21 + -0x74)) && (*(long *)(lVar21 + -0x80) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))
                  (puVar7,*(long *)(lVar21 + -0x80),*(int *)(lVar21 + -0x74) << 2);
      }
      lVar23 = lVar23 + 0x120;
      lVar8 = lVar8 + -0x120;
      *(undefined8 *)(lVar21 + -0x80) = 0;
      *(undefined4 *)(lVar21 + -0x74) = 0x80000000;
    } while ((long)(int)uVar3 * 0x120 != lVar23);
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  lVar23 = *(long *)(param_1 + 0x18);
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if ((lVar23 != lVar22) && (0 < (int)uVar3)) {
    lVar8 = 0;
    uVar20 = (ulong)uVar3;
    do {
      puVar1 = (undefined8 *)(lVar22 + lVar8);
      uVar11 = *puVar1;
      puVar2 = (undefined8 *)(lVar23 + lVar8);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar11;
      uVar11 = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[2] = uVar11;
      uVar11 = puVar1[4];
      puVar2[5] = puVar1[5];
      puVar2[4] = uVar11;
      uVar11 = puVar1[6];
      puVar2[7] = puVar1[7];
      puVar2[6] = uVar11;
      uVar11 = puVar1[8];
      puVar2[9] = puVar1[9];
      puVar2[8] = uVar11;
      uVar11 = puVar1[10];
      puVar2[0xb] = puVar1[0xb];
      puVar2[10] = uVar11;
      uVar11 = puVar1[0xc];
      puVar2[0xd] = puVar1[0xd];
      puVar2[0xc] = uVar11;
      uVar11 = puVar1[0xe];
      puVar2[0xf] = puVar1[0xf];
      puVar2[0xe] = uVar11;
      uVar11 = puVar1[0x10];
      puVar2[0x11] = puVar1[0x11];
      puVar2[0x10] = uVar11;
      uVar11 = puVar1[0x12];
      puVar2[0x13] = puVar1[0x13];
      puVar2[0x12] = uVar11;
      FUN_031863bc(puVar2 + 0x14,puVar1 + 0x14);
      FUN_031863bc(puVar2 + 0x18,puVar1 + 0x18);
      puVar2[0x1c] = puVar1[0x1c];
      uVar11 = puVar1[0x1e];
      puVar2[0x1f] = puVar1[0x1f];
      puVar2[0x1e] = uVar11;
      uVar11 = puVar1[0x20];
      uVar20 = uVar20 - 1;
      lVar8 = lVar8 + 0x120;
      puVar2[0x21] = puVar1[0x21];
      puVar2[0x20] = uVar11;
      uVar6 = *(undefined2 *)(puVar1 + 0x22);
      *(undefined1 *)((long)puVar2 + 0x112) = *(undefined1 *)((long)puVar1 + 0x112);
      *(undefined2 *)(puVar2 + 0x22) = uVar6;
    } while (uVar20 != 0);
    lVar23 = *(long *)(param_1 + 0x18);
  }
  iVar19 = uVar4 - uVar3;
  if (0 < iVar19) {
    pvVar17 = (void *)(lVar22 + (long)(int)uVar3 * 0x120);
    pvVar18 = (void *)(lVar23 + (long)(int)uVar3 * 0x120);
    do {
      memcpy(pvVar18,pvVar17,0xa0);
      *(long *)((long)pvVar18 + 0xa0) = (long)pvVar18 + 0xb0;
      *(undefined4 *)((long)pvVar18 + 0xa8) = 0;
      *(undefined4 *)((long)pvVar18 + 0xac) = 0x80000004;
      FUN_031863bc((long *)((long)pvVar18 + 0xa0),(long)pvVar17 + 0xa0);
      *(long *)((long)pvVar18 + 0xc0) = (long)pvVar18 + 0xd0;
      *(undefined4 *)((long)pvVar18 + 200) = 0;
      *(undefined4 *)((long)pvVar18 + 0xcc) = 0x80000004;
      FUN_031863bc((long *)((long)pvVar18 + 0xc0),(long)pvVar17 + 0xc0);
      uVar11 = *(undefined8 *)((long)pvVar17 + 0xe0);
      iVar19 = iVar19 + -1;
      uVar13 = *(undefined8 *)((long)pvVar17 + 0xf0);
      *(undefined8 *)((long)pvVar18 + 0xe8) = *(undefined8 *)((long)pvVar17 + 0xe8);
      *(undefined8 *)((long)pvVar18 + 0xf0) = uVar13;
      *(undefined8 *)((long)pvVar18 + 0xe0) = uVar11;
      uVar9 = *(undefined4 *)((long)pvVar17 + 0x10f);
      uVar11 = *(undefined8 *)((long)pvVar17 + 0x100);
      uVar13 = *(undefined8 *)((long)pvVar17 + 0x108);
      *(undefined8 *)((long)pvVar18 + 0xf8) = *(undefined8 *)((long)pvVar17 + 0xf8);
      *(undefined8 *)((long)pvVar18 + 0x100) = uVar11;
      *(undefined4 *)((long)pvVar18 + 0x10f) = uVar9;
      *(undefined8 *)((long)pvVar18 + 0x108) = uVar13;
      pvVar18 = (void *)((long)pvVar18 + 0x120);
      pvVar17 = (void *)((long)pvVar17 + 0x120);
    } while (iVar19 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar4;
  return param_1;
}


