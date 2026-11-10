/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305b678; name: FUN_0305b678
 */


long FUN_0305b678(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_b8;
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
  uVar9 = *param_5;
  uVar4 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar4) {
    param_2 = uVar4;
  }
  uVar4 = uVar9 & 0x3fffffff;
  local_98 = (ulong)param_2 << 5;
  local_90 = CONCAT44(local_90._4_4_,param_2);
  if ((int)param_2 < (int)uVar4 || 0x3fffffff < (int)param_2) {
    local_80 = 1;
    local_70 = &local_90;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
    uVar9 = *param_5;
    uVar4 = uVar9 & 0x3fffffff;
  }
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar2 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    puVar7 = (ulong *)(param_3 + 8);
    piVar6 = (int *)(lVar3 + 8);
    uVar5 = uVar8;
    do {
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      piVar6[0] = 0;
      piVar6[1] = -0x80000000;
      if (*(int *)((long)puVar7 + 4) < 0) {
        local_84 = 4;
        iVar1 = (int)*puVar7;
        local_90 = (long)iVar1 << 2;
        if (iVar1 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = puVar7;
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar1 = (int)*puVar7;
        }
        if (iVar1 == 0) {
          *(int *)((long)puVar7 + 4) = 0;
          puVar7[-1] = 0;
        }
        else {
          __dest = (void *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_90,&local_90);
          if (__dest != (void *)0x0) {
            local_b8 = local_90 >> 2;
            if (0x3ffffffe < local_b8) {
              local_b8 = 0x3fffffff;
            }
            memcpy(__dest,(void *)puVar7[-1],local_90);
            puVar7[-1] = (ulong)__dest;
            *(int *)((long)puVar7 + 4) = (int)local_b8;
          }
        }
      }
      *(ulong *)(piVar6 + -2) = puVar7[-1];
      *piVar6 = (int)*puVar7;
      piVar6[1] = *(int *)((long)puVar7 + 4);
      puVar7[-1] = 0;
      *puVar7 = 0;
      piVar6[2] = (int)puVar7[1];
      puVar7 = puVar7 + 4;
      piVar6 = piVar6 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    piVar6 = (int *)(param_3 + 0xc);
    do {
      piVar6[-1] = 0;
      if ((-1 < *piVar6) && (*(long *)(piVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,*(long *)(piVar6 + -3),*piVar6 << 2);
      }
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      uVar8 = uVar8 - 1;
      *piVar6 = -0x80000000;
      piVar6 = piVar6 + 8;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar4 << 5);
  }
  if (local_98 < 0x7ffffffe0) {
    uVar9 = (uint)(local_98 >> 5);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar3;
}


