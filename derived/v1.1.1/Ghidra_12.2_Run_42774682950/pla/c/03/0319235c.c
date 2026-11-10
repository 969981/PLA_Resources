/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319235c; name: FUN_0319235c
 */


long FUN_0319235c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_c0;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  ulong *local_70;
  undefined4 *puStack_68;
  
  uVar8 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar6 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  uVar11 = uVar10 & 0x3fffffff;
  if ((int)param_2 <= (int)uVar6) {
    param_2 = uVar6;
  }
  local_98 = (ulong)param_2 * 0x38;
  local_90 = CONCAT44(local_90._4_4_,param_2);
  if ((int)param_2 < (int)uVar11 || 0x3fffffff < (int)param_2) {
    local_80 = 1;
    local_70 = &local_90;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
    uVar10 = *param_5;
    uVar11 = uVar10 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar3 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar9 = 0;
    uVar12 = uVar8;
    do {
      puVar7 = (undefined4 *)(param_3 + lVar9);
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = *puVar7;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0x8000000000000000;
      if ((int)puVar7[5] < 0) {
        local_84 = 0x14;
        iVar2 = (int)*(ulong *)(puVar7 + 4);
        local_90 = (long)iVar2 * 0x14;
        if (iVar2 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = (ulong *)(puVar7 + 4);
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar2 = puVar7[4];
        }
        if (iVar2 == 0) {
          puVar7[5] = 0;
          *(undefined8 *)(puVar7 + 2) = 0;
        }
        else {
          pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
          if (pvVar5 != (void *)0x0) {
            local_c0 = local_90 / 0x14;
            if (0x3ffffffe < local_c0) {
              local_c0 = 0x3fffffff;
            }
            memcpy(pvVar5,*(void **)(puVar7 + 2),local_90);
            *(void **)(puVar7 + 2) = pvVar5;
            puVar7[5] = (int)local_c0;
          }
        }
      }
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar7 + 2);
      puVar1[4] = puVar7[4];
      puVar1[5] = puVar7[5];
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0x8000000000000000;
      if ((int)puVar7[9] < 0) {
        local_84 = 4;
        iVar2 = (int)*(ulong *)(puVar7 + 8);
        local_90 = (long)iVar2 << 2;
        if (iVar2 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = (ulong *)(puVar7 + 8);
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar2 = puVar7[8];
        }
        if (iVar2 == 0) {
          puVar7[9] = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
        }
        else {
          pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
          if (pvVar5 != (void *)0x0) {
            local_c0 = local_90 >> 2;
            if (0x3ffffffe < local_c0) {
              local_c0 = 0x3fffffff;
            }
            memcpy(pvVar5,*(void **)(puVar7 + 6),local_90);
            *(void **)(puVar7 + 6) = pvVar5;
            puVar7[9] = (int)local_c0;
          }
        }
      }
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar7 + 6);
      puVar1[8] = puVar7[8];
      puVar1[9] = puVar7[9];
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0x8000000000000000;
      if ((int)puVar7[0xd] < 0) {
        local_84 = 4;
        iVar2 = (int)*(ulong *)(puVar7 + 0xc);
        local_90 = (long)iVar2 << 2;
        if (iVar2 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = (ulong *)(puVar7 + 0xc);
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar2 = puVar7[0xc];
        }
        if (iVar2 == 0) {
          puVar7[0xd] = 0;
          *(undefined8 *)(puVar7 + 10) = 0;
        }
        else {
          pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_90,&local_90);
          if (pvVar5 != (void *)0x0) {
            local_c0 = local_90 >> 2;
            if (0x3ffffffe < local_c0) {
              local_c0 = 0x3fffffff;
            }
            memcpy(pvVar5,*(void **)(puVar7 + 10),local_90);
            *(void **)(puVar7 + 10) = pvVar5;
            puVar7[0xd] = (int)local_c0;
          }
        }
      }
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar7 + 10);
      puVar1[0xc] = puVar7[0xc];
      lVar9 = lVar9 + 0x38;
      uVar12 = uVar12 - 1;
      puVar1[0xd] = puVar7[0xd];
      *(undefined8 *)(puVar7 + 10) = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0;
    } while (uVar12 != 0);
    puVar7 = (undefined4 *)(param_3 + 0x20);
    do {
      puVar7[4] = 0;
      if ((-1 < (int)puVar7[5]) && (*(long *)(puVar7 + 2) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar7 + 2),puVar7[5] << 2);
      }
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar7[5] = 0x80000000;
      *puVar7 = 0;
      if ((-1 < (int)puVar7[1]) && (*(long *)(puVar7 + -2) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar7 + -2),puVar7[1] << 2);
      }
      *(undefined8 *)(puVar7 + -2) = 0;
      puVar7[1] = 0x80000000;
      puVar7[-4] = 0;
      if ((-1 < (int)puVar7[-3]) && (*(long *)(puVar7 + -6) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(puVar7 + -6),((ulong)(uint)puVar7[-3] & 0x3fffffff) * 0x14);
      }
      *(undefined8 *)(puVar7 + -6) = 0;
      uVar8 = uVar8 - 1;
      puVar7[-3] = 0x80000000;
      puVar7 = puVar7 + 0xe;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar10) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar11 * 0x38);
  }
  if (local_98 < 0xdffffffc8) {
    uVar6 = (uint)(local_98 / 0x38);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar4;
}


