/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ef340; name: FUN_031ef340
 */


long FUN_031ef340(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  void *__dest;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
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
  uVar7 = (ulong)param_2;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(uVar7);
  }
  uVar9 = *param_5;
  uVar3 = (uVar9 & 0x3fffffff) * 2;
  if (uVar3 < 0x3fffffff) {
    if ((int)uVar3 < (int)param_2) goto LAB_031ef39c;
  }
  else {
    uVar3 = 0x3fffffff;
    if (0x3fffffff < (int)param_2) goto LAB_031ef39c;
  }
  uVar7 = (ulong)uVar3;
LAB_031ef39c:
  uVar3 = uVar9 & 0x3fffffff;
  iVar6 = (int)uVar7;
  local_90 = CONCAT44(local_90._4_4_,iVar6);
  local_98 = uVar7 << 4;
  if ((iVar6 < (int)uVar3) || (0x3fffffff < iVar6)) {
    local_80 = 1;
    local_70 = &local_90;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
    uVar9 = *param_5;
    uVar3 = uVar9 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    uVar7 = uVar8;
    piVar4 = (int *)(lVar2 + 0xc);
    puVar5 = (ulong *)(param_3 + 8);
    do {
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      piVar4[0] = -0x80000000;
      if (*(int *)((long)puVar5 + 4) < 0) {
        local_84 = 4;
        iVar6 = (int)*puVar5;
        local_90 = (long)iVar6 << 2;
        if (iVar6 < 0) {
          local_80 = 2;
          local_78 = &DAT_0411b3a0;
          local_70 = puVar5;
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar6 = (int)*puVar5;
        }
        if (iVar6 == 0) {
          *(int *)((long)puVar5 + 4) = 0;
          puVar5[-1] = 0;
        }
        else {
          __dest = (void *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,local_90,&local_90);
          if (__dest != (void *)0x0) {
            local_b8 = local_90 >> 2;
            if (0x3ffffffe < local_b8) {
              local_b8 = 0x3fffffff;
            }
            memcpy(__dest,(void *)puVar5[-1],local_90);
            puVar5[-1] = (ulong)__dest;
            *(int *)((long)puVar5 + 4) = (int)local_b8;
          }
        }
      }
      *(ulong *)(piVar4 + -3) = puVar5[-1];
      piVar4[-1] = (int)*puVar5;
      *piVar4 = *(int *)((long)puVar5 + 4);
      uVar7 = uVar7 - 1;
      puVar5[-1] = 0;
      *puVar5 = 0;
      piVar4 = piVar4 + 4;
      puVar5 = puVar5 + 2;
    } while (uVar7 != 0);
    piVar4 = (int *)(param_3 + 0xc);
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(long *)(piVar4 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,*(long *)(piVar4 + -3),*piVar4 << 2);
      }
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      uVar8 = uVar8 - 1;
      *piVar4 = -0x80000000;
      piVar4 = piVar4 + 4;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar3 << 4);
  }
  if (local_98 < 0x3fffffff0) {
    uVar9 = (uint)(local_98 >> 4);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar2;
}


