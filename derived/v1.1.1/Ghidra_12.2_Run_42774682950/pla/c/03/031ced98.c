/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ced98; name: FUN_031ced98
 */


void FUN_031ced98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  ulong uVar4;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  int *local_50;
  undefined4 *puStack_48;
  undefined4 local_34;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xc) < 0) {
    local_34 = 4;
    piVar3 = (int *)(param_2 + 1);
    iVar1 = *piVar3;
    local_68 = (long)iVar1 << 2;
    if (iVar1 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0;
      *param_2 = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_68 >> 2;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)*param_2,local_68);
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
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_2[2] = &DAT_03aad864;
  *(undefined4 *)(param_2 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x2c) < 0) {
    local_34 = 0xc;
    piVar3 = (int *)(param_2 + 5);
    iVar1 = *piVar3;
    local_68 = (long)iVar1 * 0xc;
    if (iVar1 < 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      puStack_48 = &local_34;
      local_50 = piVar3;
      FUN_03320b50(0x77a36e5f,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x27,"Array size overflow {}*{}",&local_60);
      iVar1 = *piVar3;
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
      param_2[4] = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                 (PTR_PTR_0434a080,local_68,&local_68);
      if (pvVar2 != (void *)0x0) {
        uVar4 = local_68 / 0xc;
        if (0x3ffffffe < uVar4) {
          uVar4 = 0x3fffffff;
        }
        memcpy(pvVar2,(void *)param_2[4],local_68);
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
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_2[6] = &DAT_03aad864;
  *(undefined4 *)(param_2 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0x4c) < 0) {
    FUN_031cf070(PTR_PTR_0434a080,param_2 + 8);
  }
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_2[10] = &DAT_03aad864;
  *(undefined4 *)(param_2 + 0xb) = 0;
  return;
}


