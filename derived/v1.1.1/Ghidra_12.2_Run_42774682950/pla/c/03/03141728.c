/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03141728; name: FUN_03141728
 */


void FUN_03141728(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  int *local_50;
  undefined4 *puStack_48;
  undefined4 local_34;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  uVar6 = param_2[6];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = uVar6;
  uVar1 = param_2[9];
  uVar6 = param_2[10];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  param_1[9] = uVar1;
  param_1[10] = uVar6;
  uVar6 = param_2[0xf];
  uVar1 = param_2[0xd];
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  param_1[0xd] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x94) < 0) {
    local_34 = 0x10;
    piVar7 = (int *)(param_2 + 0x12);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 4;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0x94) = 0;
      param_2[0x11] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 4;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x11],local_68);
        param_2[0x11] = pvVar5;
        *(int *)((long)param_2 + 0x94) = (int)uVar8;
      }
    }
  }
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xa4) < 0) {
    local_34 = 0x10;
    piVar7 = (int *)(param_2 + 0x14);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 4;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xa4) = 0;
      param_2[0x13] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 4;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x13],local_68);
        param_2[0x13] = pvVar5;
        *(int *)((long)param_2 + 0xa4) = (int)uVar8;
      }
    }
  }
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)((long)param_2 + 0xa4);
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xb4) < 0) {
    local_34 = 0x10;
    piVar7 = (int *)(param_2 + 0x16);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 4;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xb4) = 0;
      param_2[0x15] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 4;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x15],local_68);
        param_2[0x15] = pvVar5;
        *(int *)((long)param_2 + 0xb4) = (int)uVar8;
      }
    }
  }
  param_1[0x15] = param_2[0x15];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_2 + 0xb4);
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xc4) < 0) {
    local_34 = 0x10;
    piVar7 = (int *)(param_2 + 0x18);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 4;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xc4) = 0;
      param_2[0x17] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 4;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x17],local_68);
        param_2[0x17] = pvVar5;
        *(int *)((long)param_2 + 0xc4) = (int)uVar8;
      }
    }
  }
  param_1[0x17] = param_2[0x17];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0xc4);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xd4) < 0) {
    local_34 = 4;
    piVar7 = (int *)(param_2 + 0x1a);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 2;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xd4) = 0;
      param_2[0x19] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 2;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x19],local_68);
        param_2[0x19] = pvVar5;
        *(int *)((long)param_2 + 0xd4) = (int)uVar8;
      }
    }
  }
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)((long)param_2 + 0xd4);
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xe4) < 0) {
    local_34 = 4;
    piVar7 = (int *)(param_2 + 0x1c);
    iVar4 = *piVar7;
    local_68 = (long)iVar4 << 2;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar7;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *piVar7;
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xe4) = 0;
      param_2[0x1b] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 2;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x1b],local_68);
        param_2[0x1b] = pvVar5;
        *(int *)((long)param_2 + 0xe4) = (int)uVar8;
      }
    }
  }
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)((long)param_2 + 0xe4);
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xf4) < 0) {
    FUN_031422e0(PTR_PTR_0434a080,param_2 + 0x1d);
  }
  param_1[0x1d] = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((long)param_1 + 0xf4) = *(undefined4 *)((long)param_2 + 0xf4);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x104) < 0) {
    local_34 = 4;
    iVar4 = *(int *)(param_2 + 0x20);
    local_68 = (long)iVar4 << 2;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = (int *)(param_2 + 0x20);
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *(int *)(param_2 + 0x20);
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0x104) = 0;
      param_2[0x1f] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68 >> 2;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x1f],local_68);
        param_2[0x1f] = pvVar5;
        *(int *)((long)param_2 + 0x104) = (int)uVar8;
      }
    }
  }
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)((long)param_2 + 0x104);
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x114) < 0) {
    local_34 = 1;
    iVar4 = *(int *)(param_2 + 0x22);
    local_68 = (ulong)iVar4;
    if (iVar4 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = (int *)(param_2 + 0x22);
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar4 = *(int *)(param_2 + 0x22);
    }
    if (iVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0x114) = 0;
      param_2[0x21] = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar5 != (void *)0x0) {
        uVar8 = local_68;
        if (0x3ffffffe < local_68) {
          uVar8 = 0x3fffffff;
        }
        memcpy(pvVar5,(void *)param_2[0x21],local_68);
        param_2[0x21] = pvVar5;
        *(int *)((long)param_2 + 0x114) = (int)uVar8;
      }
    }
  }
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)((long)param_2 + 0x114);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}


