/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304e930; name: FUN_0304e930
 */


void FUN_0304e930(long param_1,int *param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar11 = (int)param_3[1] - 1;
  iVar21 = *(int *)(param_1 + 0x20);
  if (0 < (int)uVar11) {
    uVar13 = (iVar21 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar21 * -0x61c8864f & 0xff00ffU) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    while( true ) {
      uVar13 = uVar11 & uVar13;
      iVar3 = *(int *)(*param_3 + (long)(int)uVar13 * 4);
      if (iVar3 == -1) break;
      if (iVar3 == iVar21) {
        if ((int)uVar13 < (int)param_3[1]) goto LAB_0304e9a8;
        break;
      }
      uVar13 = uVar13 + 1;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar19 = *(uint *)(param_4 + 1);
  uVar20 = (ulong)uVar19;
  uVar17 = *(uint *)((long)param_4 + 0xc);
  puVar14 = (undefined8 *)*param_4;
  uVar13 = uVar17 & 0x3fffffff;
  uVar11 = uVar19 + 1;
  puVar7 = puVar14;
  if ((int)uVar13 <= (int)uVar19) {
    if (0x3ffffffe < (int)uVar19) {
      FUN_032bd0a8();
      uVar17 = *(uint *)((long)param_4 + 0xc);
      uVar13 = uVar17 & 0x3fffffff;
    }
    puVar5 = PTR_PTR_0434a090;
    uVar8 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    local_7c = uVar11;
    if ((int)uVar11 <= (int)uVar8) {
      local_7c = uVar8;
    }
    local_88 = (ulong)local_7c * 0xc;
    if (((int)local_7c < (int)uVar13) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar17 = *(uint *)((long)param_4 + 0xc);
      uVar13 = uVar17 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_88,&local_88);
    if (0 < (int)uVar19) {
      puVar10 = puVar7;
      puVar12 = puVar14;
      do {
        uVar18 = *puVar12;
        uVar20 = uVar20 - 1;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
        puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        *puVar10 = uVar18;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar20 != 0);
    }
    if (-1 < (int)uVar17) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar14,(ulong)uVar13 * 0xc);
    }
    if (local_88 < 0x2fffffff4) {
      uVar9 = (undefined4)(local_88 / 0xc);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    uVar19 = *(uint *)(param_4 + 1);
    *(undefined4 *)((long)param_4 + 0xc) = uVar9;
    *param_4 = (long)puVar7;
  }
  puVar7 = (undefined8 *)((long)puVar7 + (long)(int)uVar19 * 0xc);
  *puVar7 = CONCAT44(uVar1,iVar21);
  *(undefined4 *)(puVar7 + 1) = uVar2;
  *(uint *)(param_4 + 1) = uVar11;
  iVar21 = (int)param_3[1];
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar21 <= (int)param_3[2] * 2) {
    FUN_0305af68(param_3,iVar21 << 1);
    iVar21 = (int)param_3[1];
  }
  uVar11 = (iVar3 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar3 * -0x61c8864f & 0xff00ffU) << 8;
  uVar11 = iVar21 - 1U & (uVar11 >> 0x10 | uVar11 << 0x10);
  lVar6 = *param_3;
  piVar15 = (int *)(lVar6 + (long)(int)uVar11 * 4);
  if (*piVar15 == -1) {
    iVar21 = 1;
  }
  else if (*piVar15 == iVar3) {
    iVar21 = 0;
  }
  else {
    do {
      uVar11 = uVar11 + 1 & iVar21 - 1U;
      iVar4 = *(int *)(lVar6 + (long)(int)uVar11 * 4);
      if (iVar4 == -1) {
        iVar21 = 1;
        goto LAB_0304ec10;
      }
    } while (iVar4 != iVar3);
    iVar21 = 0;
LAB_0304ec10:
    piVar15 = (int *)(lVar6 + (long)(int)uVar11 * 4);
  }
  *(int *)(param_3 + 2) = (int)param_3[2] + iVar21;
  *piVar15 = iVar3;
  iVar21 = *(int *)(param_1 + 0x20);
LAB_0304e9a8:
  *param_2 = iVar21;
  param_2[1] = *(int *)(param_1 + 0x18);
  puVar5 = PTR_PTR_0434a080;
  iVar21 = *(int *)(param_1 + 0x18);
  uVar11 = iVar21 + 1;
  puVar16 = (uint *)(param_1 + 0x1c);
  uVar13 = *puVar16;
  if (iVar21 < (int)(uVar13 & 0x3fffffff)) {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    if (0x3ffffffe < iVar21) {
      FUN_032bd0a8(uVar11);
      uVar13 = *puVar16;
    }
    uVar13 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uVar19 = uVar11;
    if ((int)uVar11 <= (int)uVar13) {
      uVar19 = uVar13;
    }
    lVar6 = FUN_032bd1d4(puVar5,uVar19,8,uVar18,iVar21,puVar16);
    iVar21 = *(int *)(param_1 + 0x18);
    *(long *)(param_1 + 0x10) = lVar6;
  }
  *(int **)(lVar6 + (long)iVar21 * 8) = param_2;
  *(uint *)(param_1 + 0x18) = uVar11;
  return;
}


