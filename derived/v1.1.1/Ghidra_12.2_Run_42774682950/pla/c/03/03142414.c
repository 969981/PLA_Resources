/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03142414; name: FUN_03142414
 */


void FUN_03142414(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  ulong uVar4;
  ulong local_58;
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  undefined4 *puStack_38;
  undefined4 local_24;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xc) < 0) {
    local_24 = 0x10;
    piVar3 = (int *)(param_2 + 1);
    iVar1 = *piVar3;
    local_58 = (long)iVar1 << 4;
    if (iVar1 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0;
      *param_2 = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_58 >> 4;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)*param_2,local_58);
        *param_2 = pvVar2;
        *(int *)((long)param_2 + 0xc) = (int)uVar4;
      }
    }
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x1c) < 0) {
    local_24 = 0x10;
    piVar3 = (int *)(param_2 + 3);
    iVar1 = *piVar3;
    local_58 = (long)iVar1 << 4;
    if (iVar1 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0x1c) = 0;
      param_2[2] = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_58 >> 4;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)param_2[2],local_58);
        param_2[2] = pvVar2;
        *(int *)((long)param_2 + 0x1c) = (int)uVar4;
      }
    }
  }
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x2c) < 0) {
    local_24 = 0x10;
    piVar3 = (int *)(param_2 + 5);
    iVar1 = *piVar3;
    local_58 = (long)iVar1 << 4;
    if (iVar1 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
      param_2[4] = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_58 >> 4;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)param_2[4],local_58);
        param_2[4] = pvVar2;
        *(int *)((long)param_2 + 0x2c) = (int)uVar4;
      }
    }
  }
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x3c) < 0) {
    local_24 = 0x10;
    piVar3 = (int *)(param_2 + 7);
    iVar1 = *piVar3;
    local_58 = (long)iVar1 << 4;
    if (iVar1 < 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      puStack_38 = &local_24;
      local_40 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_50);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0x3c) = 0;
      param_2[6] = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_58,&local_58);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_58 >> 4;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)param_2[6],local_58);
        param_2[6] = pvVar2;
        *(int *)((long)param_2 + 0x3c) = (int)uVar4;
      }
    }
  }
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}


