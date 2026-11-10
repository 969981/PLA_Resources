/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03368e24; name: FUN_03368e24
 */


void FUN_03368e24(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  *param_1 = &PTR_LAB_04367e40;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  iVar5 = *(int *)(param_2 + 0x20);
  puVar16 = *(undefined8 **)(param_2 + 0x18);
  if (iVar5 < 1) {
    puVar9 = (undefined8 *)0x0;
    if (iVar5 == 0) {
      puVar16 = (undefined8 *)0x0;
      uVar11 = 0;
      uVar17 = 0x80000000;
      goto LAB_03368ee4;
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_0336914c(PTR_PTR_0434a080,iVar5,0,0,(long)param_1 + 0x24);
    param_1[3] = puVar9;
  }
  lVar14 = (long)iVar5 * 0x28;
  do {
    *puVar9 = *puVar16;
    lVar14 = lVar14 + -0x28;
    uVar15 = puVar16[1];
    uVar3 = puVar16[2];
    puVar10 = puVar16 + 3;
    uVar4 = puVar16[4];
    puVar16 = puVar16 + 5;
    puVar9[3] = *puVar10;
    puVar9[4] = uVar4;
    puVar9[1] = uVar15;
    puVar9[2] = uVar3;
    puVar9 = puVar9 + 5;
  } while (lVar14 != 0);
  uVar11 = *(uint *)(param_1 + 6);
  uVar17 = *(uint *)((long)param_1 + 0x34);
  puVar16 = (undefined8 *)param_1[5];
LAB_03368ee4:
  *(int *)(param_1 + 4) = iVar5;
  iVar5 = *(int *)(param_2 + 0x30);
  puVar9 = *(undefined8 **)(param_2 + 0x28);
  uVar1 = iVar5 + uVar11;
  uVar2 = uVar17 & 0x3fffffff;
  if ((int)uVar2 < (int)uVar1) {
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar17 = *(uint *)((long)param_1 + 0x34);
      uVar2 = uVar17 & 0x3fffffff;
    }
    puVar8 = PTR_PTR_0434a080;
    uVar12 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    local_7c = uVar1;
    if ((int)uVar1 <= (int)uVar12) {
      local_7c = uVar12;
    }
    local_88 = (ulong)local_7c << 5;
    if (((int)local_7c < (int)uVar2) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar17 = *(uint *)((long)param_1 + 0x34);
      uVar2 = uVar17 & 0x3fffffff;
    }
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_88,&local_88);
    if (0 < (int)uVar11) {
      uVar15 = puVar16[3];
      puVar10[1] = puVar16[1];
      puVar10[3] = uVar15;
      uVar15 = *puVar16;
      puVar10[2] = puVar16[2];
      *puVar10 = uVar15;
      if (uVar11 != 1) {
        lVar14 = (ulong)uVar11 - 1;
        puVar6 = puVar10;
        puVar7 = puVar16;
        do {
          uVar15 = puVar7[7];
          lVar14 = lVar14 + -1;
          puVar6[5] = puVar7[5];
          puVar6[7] = uVar15;
          uVar15 = puVar7[4];
          puVar6[6] = puVar7[6];
          puVar6[4] = uVar15;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (lVar14 != 0);
      }
    }
    if (-1 < (int)uVar17) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar16,(ulong)uVar2 << 5);
    }
    if (local_88 < 0x7ffffffe0) {
      uVar13 = (undefined4)(local_88 >> 5);
    }
    else {
      uVar13 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x34) = uVar13;
    param_1[5] = puVar10;
    puVar16 = puVar10;
  }
  if (iVar5 != 0) {
    puVar16 = puVar16 + (long)(int)uVar11 * 4;
    lVar14 = (long)iVar5 * 0x20 + -0x20;
    puVar10 = puVar9;
    if (((uint)lVar14 >> 5 & 1) == 0) {
      uVar15 = puVar9[3];
      puVar16[1] = puVar9[1];
      puVar16[3] = uVar15;
      uVar15 = *puVar9;
      puVar16[2] = puVar9[2];
      *puVar16 = uVar15;
      puVar10 = puVar9 + 4;
      puVar16 = puVar16 + 4;
    }
    if (lVar14 != 0) {
      do {
        uVar15 = puVar10[3];
        puVar16[1] = puVar10[1];
        puVar16[3] = uVar15;
        uVar15 = *puVar10;
        puVar16[2] = puVar10[2];
        *puVar16 = uVar15;
        uVar15 = puVar10[4];
        uVar3 = puVar10[5];
        puVar6 = puVar10 + 6;
        uVar4 = puVar10[7];
        puVar10 = puVar10 + 8;
        puVar16[6] = *puVar6;
        puVar16[7] = uVar4;
        puVar16[4] = uVar15;
        puVar16[5] = uVar3;
        puVar16 = puVar16 + 8;
      } while (puVar10 != puVar9 + (long)iVar5 * 4);
    }
  }
  *(uint *)(param_1 + 6) = uVar1;
  return;
}


