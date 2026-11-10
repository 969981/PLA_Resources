/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ce044; name: FUN_031ce044
 */


void FUN_031ce044(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  ulong local_58;
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  undefined4 *puStack_38;
  undefined4 local_24;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  if ((int)param_2[5] < 0) {
    local_24 = 6;
    piVar4 = param_2 + 4;
    iVar2 = *piVar4;
    local_58 = (long)iVar2 * 6;
    if (iVar2 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar4;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar2 = *piVar4;
    }
    if (iVar2 == 0) {
      param_2[5] = 0;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar3 != (void *)0x0) {
        uVar5 = local_58 / 6;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        memcpy(pvVar3,*(void **)(param_2 + 2),local_58);
        param_2[5] = (int)uVar5;
        *(void **)(param_2 + 2) = pvVar3;
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
    piVar4 = param_2 + 8;
    iVar2 = *piVar4;
    local_58 = (long)iVar2 << 2;
    if (iVar2 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar4;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar2 = *piVar4;
    }
    if (iVar2 == 0) {
      param_2[9] = 0;
      *(undefined8 *)(param_2 + 6) = 0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar3 != (void *)0x0) {
        uVar5 = local_58 >> 2;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        memcpy(pvVar3,*(void **)(param_2 + 6),local_58);
        param_2[9] = (int)uVar5;
        *(void **)(param_2 + 6) = pvVar3;
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
    local_24 = 8;
    piVar4 = param_2 + 0xc;
    iVar2 = *piVar4;
    local_58 = (long)iVar2 << 3;
    if (iVar2 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar4;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar2 = *piVar4;
    }
    if (iVar2 == 0) {
      param_2[0xd] = 0;
      *(undefined8 *)(param_2 + 10) = 0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar3 != (void *)0x0) {
        uVar5 = local_58 >> 3;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        memcpy(pvVar3,*(void **)(param_2 + 10),local_58);
        param_2[0xd] = (int)uVar5;
        *(void **)(param_2 + 10) = pvVar3;
      }
    }
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  if ((int)param_2[0x11] < 0) {
    local_24 = 8;
    piVar4 = param_2 + 0x10;
    iVar2 = *piVar4;
    local_58 = (long)iVar2 << 3;
    if (iVar2 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar4;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar2 = *piVar4;
    }
    if (iVar2 == 0) {
      param_2[0x11] = 0;
      *(undefined8 *)(param_2 + 0xe) = 0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar3 != (void *)0x0) {
        uVar5 = local_58 >> 3;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        memcpy(pvVar3,*(void **)(param_2 + 0xe),local_58);
        param_2[0x11] = (int)uVar5;
        *(void **)(param_2 + 0xe) = pvVar3;
      }
    }
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0x8000000000000000;
  if ((int)param_2[0x15] < 0) {
    local_24 = 0x10;
    piVar4 = param_2 + 0x14;
    iVar2 = *piVar4;
    local_58 = (long)iVar2 << 4;
    if (iVar2 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar4;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar2 = *piVar4;
    }
    if (iVar2 == 0) {
      param_2[0x15] = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar3 != (void *)0x0) {
        uVar5 = local_58 >> 4;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        memcpy(pvVar3,*(void **)(param_2 + 0x12),local_58);
        *(void **)(param_2 + 0x12) = pvVar3;
        param_2[0x15] = (int)uVar5;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  return;
}


