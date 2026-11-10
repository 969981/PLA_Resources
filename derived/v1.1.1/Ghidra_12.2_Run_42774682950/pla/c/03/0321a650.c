/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0321a650; name: FUN_0321a650
 */


long FUN_0321a650(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int *piVar19;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  puVar4 = PTR_PTR_0434a080;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar7 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  uVar1 = *(uint *)(param_2 + 0x20);
  lVar16 = *(long *)(param_2 + 0x18);
  if ((int)uVar1 <= (int)uVar7) goto LAB_0321a998;
  lVar14 = *(long *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar18 = (ulong)uVar2;
  local_88 = 0x90;
  local_90 = (long)(int)uVar1 * 0x90;
  local_84 = uVar1;
  if ((int)uVar1 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_70 = &local_84;
    puStack_68 = &local_88;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_80);
    if ((int)uVar7 <= (int)local_84) goto LAB_0321a6cc;
LAB_0321a6d8:
    local_80 = 1;
    local_70 = &local_84;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
  }
  else {
    if ((int)uVar1 < (int)uVar7) goto LAB_0321a6d8;
LAB_0321a6cc:
    if (0x3fffffff < (int)local_84) goto LAB_0321a6d8;
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
  if (0 < (int)uVar2) {
    if (lVar14 == lVar5) {
      lVar8 = lVar14 + 0x70;
      uVar9 = uVar18;
      do {
        *(long *)(lVar8 + -0x30) = lVar8 + -0x20;
        *(undefined4 *)(lVar8 + -0x28) = 0;
        *(undefined4 *)(lVar8 + -0x24) = 0x80000004;
        uVar9 = uVar9 - 1;
        *(long *)(lVar8 + -0x10) = lVar8;
        *(undefined4 *)(lVar8 + -8) = 0;
        *(undefined4 *)(lVar8 + -4) = 0x80000004;
        lVar8 = lVar8 + 0x90;
      } while (uVar9 != 0);
    }
    else {
      lVar8 = 0;
      uVar9 = uVar18;
      do {
        puVar12 = (undefined8 *)(lVar14 + lVar8);
        uVar10 = puVar12[5];
        puVar17 = (undefined8 *)(lVar5 + lVar8);
        puVar17[3] = puVar12[3];
        puVar17[5] = uVar10;
        puVar17[1] = puVar12[1];
        uVar10 = *puVar12;
        puVar17[2] = puVar12[2];
        *puVar17 = uVar10;
        uVar10 = puVar12[4];
        puVar17[6] = puVar12[6];
        puVar17[4] = uVar10;
        *(undefined4 *)(puVar17 + 7) = *(undefined4 *)(puVar12 + 7);
        *(undefined4 *)((long)puVar17 + 0x3c) = *(undefined4 *)((long)puVar12 + 0x3c);
        puVar17[8] = 0;
        puVar17[9] = 0x8000000000000000;
        *(undefined4 *)(puVar17 + 9) = *(undefined4 *)(puVar12 + 9);
        *(undefined4 *)((long)puVar17 + 0x4c) = *(undefined4 *)((long)puVar12 + 0x4c);
        puVar11 = (undefined8 *)puVar12[8];
        if (puVar12 + 10 == puVar11) {
          puVar17[8] = puVar17 + 10;
          *(undefined4 *)(puVar17 + 10) = *(undefined4 *)puVar11;
          *(undefined4 *)((long)puVar17 + 0x54) = *(undefined4 *)((long)puVar12 + 0x54);
          *(undefined4 *)(puVar17 + 0xb) = *(undefined4 *)(puVar12 + 0xb);
          *(undefined4 *)((long)puVar17 + 0x5c) = *(undefined4 *)((long)puVar12 + 0x5c);
        }
        else {
          puVar17[8] = puVar11;
          puVar12[8] = puVar12 + 10;
          *(undefined4 *)((long)puVar12 + 0x4c) = 0x80000004;
        }
        *(undefined4 *)(puVar12 + 9) = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0x8000000000000000;
        *(undefined4 *)(puVar17 + 0xd) = *(undefined4 *)(puVar12 + 0xd);
        *(undefined4 *)((long)puVar17 + 0x6c) = *(undefined4 *)((long)puVar12 + 0x6c);
        puVar11 = (undefined8 *)puVar12[0xc];
        if (puVar12 + 0xe == puVar11) {
          puVar17[0xc] = puVar17 + 0xe;
          *(undefined4 *)(puVar17 + 0xe) = *(undefined4 *)puVar11;
          *(undefined4 *)((long)puVar17 + 0x74) = *(undefined4 *)((long)puVar12 + 0x74);
          *(undefined4 *)(puVar17 + 0xf) = *(undefined4 *)(puVar12 + 0xf);
          *(undefined4 *)((long)puVar17 + 0x7c) = *(undefined4 *)((long)puVar12 + 0x7c);
        }
        else {
          puVar17[0xc] = puVar11;
          puVar12[0xc] = puVar12 + 0xe;
          *(undefined4 *)((long)puVar12 + 0x6c) = 0x80000004;
        }
        *(undefined4 *)(puVar12 + 0xd) = 0;
        uVar6 = *(undefined4 *)(puVar12 + 0x10);
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + 0x90;
        *(undefined1 *)((long)puVar17 + 0x84) = *(undefined1 *)((long)puVar12 + 0x84);
        *(undefined4 *)(puVar17 + 0x10) = uVar6;
      } while (uVar9 != 0);
    }
    piVar19 = (int *)(lVar14 + 0x6c);
    do {
      piVar19[-1] = 0;
      if ((-1 < *piVar19) && (*(long *)(piVar19 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(piVar19 + -3),*piVar19 << 2);
      }
      piVar19[-3] = 0;
      piVar19[-2] = 0;
      *piVar19 = -0x80000000;
      piVar19[-9] = 0;
      if ((-1 < piVar19[-8]) && (*(long *)(piVar19 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(piVar19 + -0xb),piVar19[-8] << 2);
      }
      piVar19[-0xb] = 0;
      piVar19[-10] = 0;
      uVar18 = uVar18 - 1;
      piVar19[-8] = -0x80000000;
      piVar19 = piVar19 + 0x24;
    } while (uVar18 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar14,((ulong)uVar7 & 0x3fffffff) * 0x90);
  }
  if (local_90 < 0x23ffffff70) {
    uVar6 = (undefined4)(local_90 / 0x90);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(long *)(param_1 + 0x18) = lVar5;
LAB_0321a998:
  uVar7 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < (int)uVar7) {
    lVar14 = (long)(int)uVar7 * -0x90 + (long)(int)uVar1 * 0x90;
    puVar15 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar7 * 0x90 + -0x28);
    do {
      *puVar15 = 0;
      if ((-1 < (int)puVar15[1]) && (*(long *)(puVar15 + -2) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(puVar15 + -2),puVar15[1] << 2);
      }
      *(undefined8 *)(puVar15 + -2) = 0;
      puVar15[1] = 0x80000000;
      puVar15[-8] = 0;
      if ((-1 < (int)puVar15[-7]) && (*(long *)(puVar15 + -10) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*(long *)(puVar15 + -10),puVar15[-7] << 2);
      }
      *(undefined8 *)(puVar15 + -10) = 0;
      lVar14 = lVar14 + 0x90;
      puVar15[-7] = 0x80000000;
      puVar15 = puVar15 + -0x24;
    } while (lVar14 != 0);
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  lVar14 = *(long *)(param_1 + 0x18);
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = uVar1;
  }
  if ((lVar14 != lVar16) && (0 < (int)uVar7)) {
    lVar5 = 0;
    uVar18 = (ulong)uVar7;
    do {
      puVar12 = (undefined8 *)(lVar16 + lVar5);
      uVar10 = *puVar12;
      puVar17 = (undefined8 *)(lVar14 + lVar5);
      puVar17[1] = puVar12[1];
      *puVar17 = uVar10;
      uVar10 = puVar12[2];
      puVar17[3] = puVar12[3];
      puVar17[2] = uVar10;
      uVar10 = puVar12[4];
      puVar17[5] = puVar12[5];
      puVar17[4] = uVar10;
      puVar17[6] = puVar12[6];
      *(undefined4 *)(puVar17 + 7) = *(undefined4 *)(puVar12 + 7);
      *(undefined4 *)((long)puVar17 + 0x3c) = *(undefined4 *)((long)puVar12 + 0x3c);
      FUN_031863bc(puVar17 + 8,puVar12 + 8);
      FUN_031863bc(puVar17 + 0xc,puVar12 + 0xc);
      *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar12 + 0x10);
      *(undefined2 *)((long)puVar17 + 0x82) = *(undefined2 *)((long)puVar12 + 0x82);
      uVar18 = uVar18 - 1;
      lVar5 = lVar5 + 0x90;
      *(undefined1 *)((long)puVar17 + 0x84) = *(undefined1 *)((long)puVar12 + 0x84);
    } while (uVar18 != 0);
    lVar14 = *(long *)(param_1 + 0x18);
  }
  iVar13 = uVar1 - uVar7;
  if (0 < iVar13) {
    puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar7 * 0x90);
    puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar7 * 0x90);
    do {
      uVar10 = puVar17[5];
      puVar12[3] = puVar17[3];
      puVar12[5] = uVar10;
      puVar12[1] = puVar17[1];
      uVar10 = *puVar17;
      puVar12[2] = puVar17[2];
      *puVar12 = uVar10;
      uVar10 = puVar17[4];
      puVar12[6] = puVar17[6];
      puVar12[4] = uVar10;
      *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(puVar17 + 7);
      *(undefined4 *)((long)puVar12 + 0x3c) = *(undefined4 *)((long)puVar17 + 0x3c);
      puVar12[8] = puVar12 + 10;
      *(undefined4 *)(puVar12 + 9) = 0;
      *(undefined4 *)((long)puVar12 + 0x4c) = 0x80000004;
      FUN_031863bc(puVar12 + 8,puVar17 + 8);
      puVar12[0xc] = puVar12 + 0xe;
      *(undefined4 *)(puVar12 + 0xd) = 0;
      *(undefined4 *)((long)puVar12 + 0x6c) = 0x80000004;
      FUN_031863bc(puVar12 + 0xc,puVar17 + 0xc);
      uVar3 = *(undefined1 *)((long)puVar17 + 0x84);
      iVar13 = iVar13 + -1;
      *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(puVar17 + 0x10);
      *(undefined1 *)((long)puVar12 + 0x84) = uVar3;
      puVar12 = puVar12 + 0x12;
      puVar17 = puVar17 + 0x12;
    } while (iVar13 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  return param_1;
}


