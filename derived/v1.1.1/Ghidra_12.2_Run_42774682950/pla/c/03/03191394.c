/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03191394; name: FUN_03191394
 */


long * FUN_03191394(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong local_c8;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  ulong *local_70;
  undefined4 *puStack_68;
  
  puVar3 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_03191424;
  uVar11 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  uVar1 = *(uint *)(param_2 + 1);
  lVar16 = *param_2;
  if ((int)uVar11 < (int)uVar1) {
    lVar9 = *param_1;
    uVar2 = *(uint *)(param_1 + 1);
    uVar15 = (ulong)uVar2;
    local_90 = CONCAT44(local_90._4_4_,uVar1);
    local_84 = 0x38;
    local_98 = (long)(int)uVar1 * 0x38;
    if ((int)uVar1 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_90;
      puStack_68 = &local_84;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      uVar7 = (uint)local_90;
      if ((int)uVar11 <= (int)(uint)local_90) goto LAB_03191484;
LAB_03191490:
      local_80 = 1;
      local_70 = &local_90;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      uVar7 = uVar1;
      if ((int)uVar1 < (int)uVar11) goto LAB_03191490;
LAB_03191484:
      if (0x3fffffff < (int)uVar7) goto LAB_03191490;
    }
    uVar11 = *(uint *)((long)param_1 + 0xc);
    lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_98,&local_98);
    if (0 < (int)uVar2) {
      lVar14 = 0;
      uVar6 = uVar15;
      do {
        puVar12 = (undefined4 *)(lVar9 + lVar14);
        puVar13 = (undefined4 *)(lVar4 + lVar14);
        *puVar13 = *puVar12;
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0x8000000000000000;
        if ((int)puVar12[5] < 0) {
          local_84 = 0x14;
          iVar10 = (int)*(ulong *)(puVar12 + 4);
          local_90 = (long)iVar10 * 0x14;
          if (iVar10 < 0) {
            local_80 = 2;
            local_78 = &DAT_0411b3a0;
            local_70 = (ulong *)(puVar12 + 4);
            puStack_68 = &local_84;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            iVar10 = puVar12[4];
          }
          if (iVar10 == 0) {
            puVar12[5] = 0;
            *(undefined8 *)(puVar12 + 2) = 0;
          }
          else {
            pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
            if (pvVar5 != (void *)0x0) {
              local_c8 = local_90 / 0x14;
              if (0x3ffffffe < local_c8) {
                local_c8 = 0x3fffffff;
              }
              memcpy(pvVar5,*(void **)(puVar12 + 2),local_90);
              *(void **)(puVar12 + 2) = pvVar5;
              puVar12[5] = (int)local_c8;
            }
          }
        }
        *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar12 + 2);
        puVar13[4] = puVar12[4];
        puVar13[5] = puVar12[5];
        *(undefined8 *)(puVar12 + 2) = 0;
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar13 + 6) = 0;
        *(undefined8 *)(puVar13 + 8) = 0x8000000000000000;
        if ((int)puVar12[9] < 0) {
          local_84 = 4;
          iVar10 = (int)*(ulong *)(puVar12 + 8);
          local_90 = (long)iVar10 << 2;
          if (iVar10 < 0) {
            local_80 = 2;
            local_78 = &DAT_0411b3a0;
            local_70 = (ulong *)(puVar12 + 8);
            puStack_68 = &local_84;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            iVar10 = puVar12[8];
          }
          if (iVar10 == 0) {
            puVar12[9] = 0;
            *(undefined8 *)(puVar12 + 6) = 0;
          }
          else {
            pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
            if (pvVar5 != (void *)0x0) {
              local_c8 = local_90 >> 2;
              if (0x3ffffffe < local_c8) {
                local_c8 = 0x3fffffff;
              }
              memcpy(pvVar5,*(void **)(puVar12 + 6),local_90);
              *(void **)(puVar12 + 6) = pvVar5;
              puVar12[9] = (int)local_c8;
            }
          }
        }
        *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar12 + 6);
        puVar13[8] = puVar12[8];
        puVar13[9] = puVar12[9];
        *(undefined8 *)(puVar12 + 6) = 0;
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar13 + 10) = 0;
        *(undefined8 *)(puVar13 + 0xc) = 0x8000000000000000;
        if ((int)puVar12[0xd] < 0) {
          local_84 = 4;
          iVar10 = (int)*(ulong *)(puVar12 + 0xc);
          local_90 = (long)iVar10 << 2;
          if (iVar10 < 0) {
            local_80 = 2;
            local_78 = &DAT_0411b3a0;
            local_70 = (ulong *)(puVar12 + 0xc);
            puStack_68 = &local_84;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            iVar10 = puVar12[0xc];
          }
          if (iVar10 == 0) {
            puVar12[0xd] = 0;
            *(undefined8 *)(puVar12 + 10) = 0;
          }
          else {
            pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
            if (pvVar5 != (void *)0x0) {
              local_c8 = local_90 >> 2;
              if (0x3ffffffe < local_c8) {
                local_c8 = 0x3fffffff;
              }
              memcpy(pvVar5,*(void **)(puVar12 + 10),local_90);
              *(void **)(puVar12 + 10) = pvVar5;
              puVar12[0xd] = (int)local_c8;
            }
          }
        }
        *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar12 + 10);
        puVar13[0xc] = puVar12[0xc];
        lVar14 = lVar14 + 0x38;
        uVar6 = uVar6 - 1;
        puVar13[0xd] = puVar12[0xd];
        *(undefined8 *)(puVar12 + 10) = 0;
        *(undefined8 *)(puVar12 + 0xc) = 0;
      } while (uVar6 != 0);
      puVar12 = (undefined4 *)(lVar9 + 0x20);
      do {
        puVar12[4] = 0;
        if ((-1 < (int)puVar12[5]) && (*(long *)(puVar12 + 2) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar12 + 2),puVar12[5] << 2);
        }
        *(undefined8 *)(puVar12 + 2) = 0;
        puVar12[5] = 0x80000000;
        *puVar12 = 0;
        if ((-1 < (int)puVar12[1]) && (*(long *)(puVar12 + -2) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar12 + -2),puVar12[1] << 2);
        }
        *(undefined8 *)(puVar12 + -2) = 0;
        puVar12[1] = 0x80000000;
        puVar12[-4] = 0;
        if ((-1 < (int)puVar12[-3]) && (*(long *)(puVar12 + -6) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x18))
                    (puVar3,*(long *)(puVar12 + -6),((ulong)(uint)puVar12[-3] & 0x3fffffff) * 0x14);
        }
        *(undefined8 *)(puVar12 + -6) = 0;
        uVar15 = uVar15 - 1;
        puVar12[-3] = 0x80000000;
        puVar12 = puVar12 + 0xe;
      } while (uVar15 != 0);
    }
    if (-1 < (int)uVar11) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar9,((ulong)uVar11 & 0x3fffffff) * 0x38);
    }
    if (local_98 < 0xdffffffc8) {
      uVar8 = (undefined4)(local_98 / 0x38);
    }
    else {
      uVar8 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar8;
    *param_1 = lVar4;
  }
  uVar11 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < (int)uVar11) {
    lVar9 = (long)(int)uVar11 * -0x38 + (long)(int)uVar1 * 0x38;
    puVar12 = (undefined4 *)(*param_1 + (long)(int)uVar11 * 0x38 + -0x18);
    do {
      puVar12[4] = 0;
      if ((-1 < (int)puVar12[5]) && (*(long *)(puVar12 + 2) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar12 + 2),puVar12[5] << 2);
      }
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar12[5] = 0x80000000;
      *puVar12 = 0;
      if ((-1 < (int)puVar12[1]) && (*(long *)(puVar12 + -2) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar12 + -2),puVar12[1] << 2);
      }
      *(undefined8 *)(puVar12 + -2) = 0;
      puVar12[1] = 0x80000000;
      puVar12[-4] = 0;
      if ((-1 < (int)puVar12[-3]) && (*(long *)(puVar12 + -6) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(puVar12 + -6),((ulong)(uint)puVar12[-3] & 0x3fffffff) * 0x14);
      }
      *(undefined8 *)(puVar12 + -6) = 0;
      lVar9 = lVar9 + 0x38;
      puVar12[-3] = 0x80000000;
      puVar12 = puVar12 + -0xe;
    } while (lVar9 != 0);
    uVar11 = *(uint *)(param_1 + 1);
  }
  if ((int)uVar1 <= (int)uVar11) {
    uVar11 = uVar1;
  }
  lVar9 = *param_1;
  if ((lVar9 != lVar16) && (0 < (int)uVar11)) {
    uVar15 = (ulong)uVar11;
    lVar4 = lVar16 + 8;
    lVar9 = lVar9 + 8;
    do {
      *(undefined4 *)(lVar9 + -8) = *(undefined4 *)(lVar4 + -8);
      FUN_03191c30(lVar9,lVar4);
      uVar15 = uVar15 - 1;
      lVar4 = lVar4 + 0x38;
      lVar9 = lVar9 + 0x38;
    } while (uVar15 != 0);
    lVar9 = *param_1;
  }
  iVar10 = uVar1 - uVar11;
  if (0 < iVar10) {
    puVar12 = (undefined4 *)(lVar16 + (long)(int)uVar11 * 0x38);
    puVar13 = (undefined4 *)(lVar9 + (long)(int)uVar11 * 0x38);
    do {
      *puVar13 = *puVar12;
      FUN_03191d80(puVar13 + 2,puVar12 + 2);
      iVar10 = iVar10 + -1;
      puVar12 = puVar12 + 0xe;
      puVar13 = puVar13 + 0xe;
    } while (iVar10 != 0);
  }
  *(uint *)(param_1 + 1) = uVar1;
LAB_03191424:
  FUN_032c27dc(param_1 + 2,param_2 + 2);
  return param_1;
}


