/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f06c4; name: FUN_031f06c4
 */


void FUN_031f06c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  ulong local_58;
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  undefined4 *puStack_38;
  undefined4 local_24;
  
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  *param_1 = uVar3;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_2[5] < 0) {
    local_24 = 4;
    piVar11 = param_2 + 4;
    iVar7 = *piVar11;
    local_58 = (long)iVar7 << 2;
    if (iVar7 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar11;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar7 = *piVar11;
    }
    if (iVar7 == 0) {
      param_2[5] = 0;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    else {
      pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_58,&local_58);
      if (pvVar6 != (void *)0x0) {
        uVar12 = local_58 >> 2;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        memcpy(pvVar6,*(void **)(param_2 + 2),local_58);
        *(void **)(param_2 + 2) = pvVar6;
        param_2[5] = (int)uVar12;
      }
    }
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  if ((int)param_2[9] < 0) {
    local_24 = 4;
    piVar11 = param_2 + 8;
    iVar7 = *piVar11;
    local_58 = (long)iVar7 << 2;
    if (iVar7 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar11;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar7 = *piVar11;
    }
    if (iVar7 == 0) {
      param_2[9] = 0;
      *(undefined8 *)(param_2 + 6) = 0;
    }
    else {
      pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_58,&local_58);
      if (pvVar6 != (void *)0x0) {
        uVar12 = local_58 >> 2;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        memcpy(pvVar6,*(void **)(param_2 + 6),local_58);
        *(void **)(param_2 + 6) = pvVar6;
        param_2[9] = (int)uVar12;
      }
    }
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x8000000000000000;
  if ((int)param_2[0xd] < 0) {
    local_24 = 0x20;
    piVar11 = param_2 + 0xc;
    iVar7 = *piVar11;
    local_58 = (long)iVar7 << 5;
    if (iVar7 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar11;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar7 = *piVar11;
    }
    if (iVar7 == 0) {
      param_2[0xd] = 0;
      *(undefined8 *)(param_2 + 10) = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_58,&local_58);
      if (lVar5 != 0) {
        iVar7 = (int)(local_58 >> 5);
        if (0x3ffffffe < iVar7) {
          iVar7 = 0x3fffffff;
        }
        if (0 < *piVar11) {
          lVar8 = 0;
          lVar9 = 0;
          do {
            puVar1 = (undefined8 *)(*(long *)(param_2 + 10) + lVar8);
            uVar10 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + lVar8);
            lVar8 = lVar8 + 0x20;
            puVar2[3] = puVar1[3];
            puVar2[1] = uVar10;
            uVar10 = *puVar1;
            puVar2[2] = puVar1[2];
            *puVar2 = uVar10;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *piVar11);
        }
        *(long *)(param_2 + 10) = lVar5;
        param_2[0xd] = iVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(long *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  return;
}


