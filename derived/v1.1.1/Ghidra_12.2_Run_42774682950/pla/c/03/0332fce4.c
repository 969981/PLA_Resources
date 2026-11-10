/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332fce4; name: FUN_0332fce4
 */


void FUN_0332fce4(long param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_7c;
  ulong local_78;
  undefined *local_70;
  uint *local_68;
  
  if (param_3 < 1) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  plVar7 = param_2;
  lVar8 = 0;
  do {
    lVar9 = *plVar7;
    *(long *)(lVar9 + 0x58) = lVar8;
    pvVar10 = *(void **)(lVar9 + 0x20);
    *(undefined2 *)(lVar9 + 4) = 0xfffe;
    puVar5 = PTR_PTR_0434a080;
    if (pvVar10 != (void *)(lVar9 + 0x30)) {
      uVar2 = *(uint *)(lVar9 + 0x2c);
      uVar11 = (ulong)uVar2;
      if (-1 < (int)uVar2) {
        iVar3 = *(int *)(lVar9 + 0x28);
        uVar1 = iVar3 - 1U | (int)(iVar3 - 1U) >> 0x10;
        uVar1 = uVar1 | (int)uVar1 >> 8;
        uVar1 = uVar1 | (int)uVar1 >> 4;
        uVar1 = uVar1 | (int)uVar1 >> 2;
        uVar1 = uVar1 | (int)uVar1 >> 1;
        uVar4 = uVar1 + 1;
        if ((int)uVar4 < 2) {
          if (iVar3 < 2) {
            memcpy((void *)(lVar9 + 0x30),pvVar10,(long)iVar3 << 3);
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,(uVar11 & 0x3fffffff) << 3);
            *(void **)(lVar9 + 0x20) = (void *)(lVar9 + 0x30);
            *(undefined4 *)(lVar9 + 0x2c) = 0x80000002;
          }
          else {
            local_78 = 0x10;
            uVar12 = (long)(int)uVar2 * 8;
            pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                       (PTR_PTR_0434a080,0x10,&local_78);
            uVar11 = uVar12;
            if (local_78 <= uVar12) {
              uVar11 = local_78;
            }
            memcpy(pvVar6,pvVar10,uVar11);
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,uVar12);
            *(void **)(lVar9 + 0x20) = pvVar6;
            uVar11 = local_78 >> 3;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            *(int *)(lVar9 + 0x2c) = (int)uVar11;
          }
        }
        else if ((int)uVar4 < (int)(uVar2 & 0x3fffffff)) {
          local_7c = uVar4;
          if (0x3ffffffe < (int)uVar1) {
            local_78 = 1;
            local_68 = &local_7c;
            local_70 = &DAT_0411b3b8;
            FUN_03320b50(0x159079fc,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x80,"Invalid requestedCapacity {}",&local_78);
            pvVar10 = *(void **)(lVar9 + 0x20);
            uVar11 = (ulong)*(uint *)(lVar9 + 0x2c);
          }
          local_78 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
          uVar12 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
          pvVar6 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_78,&local_78);
          uVar11 = uVar12;
          if (local_78 <= uVar12) {
            uVar11 = local_78;
          }
          memcpy(pvVar6,pvVar10,uVar11);
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,uVar12);
          *(void **)(lVar9 + 0x20) = pvVar6;
          uVar11 = local_78 >> 3;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          *(int *)(lVar9 + 0x2c) = (int)uVar11;
        }
      }
    }
    puVar5 = PTR_PTR_0434a080;
    pvVar10 = *(void **)(lVar9 + 0x40);
    if (pvVar10 != (void *)(lVar9 + 0x50)) {
      uVar2 = *(uint *)(lVar9 + 0x4c);
      uVar11 = (ulong)uVar2;
      if (-1 < (int)uVar2) {
        iVar3 = *(int *)(lVar9 + 0x48);
        uVar4 = iVar3 - 1U | (int)(iVar3 - 1U) >> 0x10;
        uVar4 = uVar4 | (int)uVar4 >> 8;
        uVar4 = uVar4 | (int)uVar4 >> 4;
        uVar4 = uVar4 | (int)uVar4 >> 2;
        uVar4 = uVar4 | (int)uVar4 >> 1;
        if ((int)uVar4 < 0) {
          if (0 < iVar3) {
            local_78 = 8;
            uVar12 = (long)(int)uVar2 * 8;
            pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                       (PTR_PTR_0434a080,8,&local_78);
            uVar11 = uVar12;
            if (local_78 <= uVar12) {
              uVar11 = local_78;
            }
            memcpy(pvVar6,pvVar10,uVar11);
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,uVar12);
            *(void **)(lVar9 + 0x40) = pvVar6;
            goto LAB_03330028;
          }
          memcpy((void *)(lVar9 + 0x50),pvVar10,(long)iVar3 << 3);
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,(uVar11 & 0x3fffffff) << 3);
          *(void **)(lVar9 + 0x40) = (void *)(lVar9 + 0x50);
          *(undefined4 *)(lVar9 + 0x4c) = 0x80000001;
        }
        else {
          uVar1 = uVar4 + 1;
          if ((int)uVar1 < (int)(uVar2 & 0x3fffffff)) {
            local_7c = uVar1;
            if (0x3ffffffe < (int)uVar4) {
              local_78 = 1;
              local_68 = &local_7c;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x159079fc,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x80,"Invalid requestedCapacity {}",&local_78);
              pvVar10 = *(void **)(lVar9 + 0x40);
              uVar11 = (ulong)*(uint *)(lVar9 + 0x4c);
            }
            puVar5 = PTR_PTR_0434a080;
            local_78 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            uVar12 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
            pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                       (PTR_PTR_0434a080,local_78,&local_78);
            uVar11 = uVar12;
            if (local_78 <= uVar12) {
              uVar11 = local_78;
            }
            memcpy(pvVar6,pvVar10,uVar11);
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5,pvVar10,uVar12);
            *(void **)(lVar9 + 0x40) = pvVar6;
LAB_03330028:
            uVar11 = local_78 >> 3;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            *(int *)(lVar9 + 0x4c) = (int)uVar11;
          }
        }
      }
    }
    plVar7 = (long *)((long)plVar7 + (long)param_4);
    param_3 = param_3 + -1;
    lVar8 = lVar9;
    if (param_3 == 0) {
      *(undefined8 *)(*param_2 + 0x58) = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar9;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
      return;
    }
  } while( true );
}


