/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03254c50; name: FUN_03254c50
 */


void FUN_03254c50(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong local_c0;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  long *local_70;
  ulong *puStack_68;
  
  local_90 = CONCAT44(local_90._4_4_,0x38);
  plVar10 = param_2 + 1;
  iVar8 = (int)*plVar10;
  local_98 = (long)iVar8 * 0x38;
  if (iVar8 < 0) {
    local_80 = 2;
    puStack_78 = &DAT_0411b3a0;
    puStack_68 = &local_90;
    local_70 = plVar10;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_80);
    iVar8 = (int)*plVar10;
  }
  if (iVar8 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 != 0) {
      iVar8 = (int)(local_98 / 0x38);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)*plVar10) {
        lVar9 = 0;
        lVar11 = 0x20;
        do {
          plVar1 = (long *)(*param_2 + lVar11);
          piVar2 = (int *)(lVar6 + lVar11);
          piVar2[-8] = (int)plVar1[-4];
          piVar2[-6] = 0;
          piVar2[-5] = 0;
          piVar2[-4] = 0;
          piVar2[-3] = -0x80000000;
          if (*(int *)((long)plVar1 + -0xc) < 0) {
            local_84 = 0x14;
            iVar4 = (int)plVar1[-2];
            local_90 = (long)iVar4 * 0x14;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = plVar1 + -2;
              puStack_68 = (ulong *)&local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = (int)plVar1[-2];
            }
            if (iVar4 == 0) {
              *(int *)((long)plVar1 + -0xc) = 0;
              plVar1[-3] = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                local_c0 = local_90 / 0x14;
                if (0x3ffffffe < local_c0) {
                  local_c0 = 0x3fffffff;
                }
                memcpy(pvVar7,(void *)plVar1[-3],local_90);
                plVar1[-3] = (long)pvVar7;
                *(int *)((long)plVar1 + -0xc) = (int)local_c0;
              }
            }
          }
          *(long *)(piVar2 + -6) = plVar1[-3];
          piVar2[-4] = (int)plVar1[-2];
          piVar2[-3] = *(int *)((long)plVar1 + -0xc);
          plVar1[-3] = 0;
          plVar1[-2] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = 0;
          piVar2[1] = -0x80000000;
          if (*(int *)((long)plVar1 + 4) < 0) {
            local_84 = 4;
            iVar4 = (int)*plVar1;
            local_90 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = plVar1;
              puStack_68 = (ulong *)&local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = (int)*plVar1;
            }
            if (iVar4 == 0) {
              *(int *)((long)plVar1 + 4) = 0;
              plVar1[-1] = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                local_c0 = local_90 >> 2;
                if (0x3ffffffe < local_c0) {
                  local_c0 = 0x3fffffff;
                }
                memcpy(pvVar7,(void *)plVar1[-1],local_90);
                plVar1[-1] = (long)pvVar7;
                *(int *)((long)plVar1 + 4) = (int)local_c0;
              }
            }
          }
          *(long *)(piVar2 + -2) = plVar1[-1];
          *piVar2 = (int)*plVar1;
          piVar2[1] = *(int *)((long)plVar1 + 4);
          plVar1[-1] = 0;
          *plVar1 = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = -0x80000000;
          if (*(int *)((long)plVar1 + 0x14) < 0) {
            local_84 = 4;
            iVar4 = (int)plVar1[2];
            local_90 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = plVar1 + 2;
              puStack_68 = (ulong *)&local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = (int)plVar1[2];
            }
            if (iVar4 == 0) {
              *(int *)((long)plVar1 + 0x14) = 0;
              plVar1[1] = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                local_c0 = local_90 >> 2;
                if (0x3ffffffe < local_c0) {
                  local_c0 = 0x3fffffff;
                }
                memcpy(pvVar7,(void *)plVar1[1],local_90);
                plVar1[1] = (long)pvVar7;
                *(int *)((long)plVar1 + 0x14) = (int)local_c0;
              }
            }
          }
          *(long *)(piVar2 + 2) = plVar1[1];
          piVar2[4] = (int)plVar1[2];
          piVar2[5] = *(int *)((long)plVar1 + 0x14);
          plVar1[1] = 0;
          plVar1[2] = 0;
          lVar9 = lVar9 + 1;
          lVar11 = lVar11 + 0x38;
        } while (lVar9 < (int)*plVar10);
        if (0 < (int)*plVar10) {
          lVar9 = 0;
          lVar11 = 0x20;
          do {
            puVar3 = (undefined4 *)(*param_2 + lVar11);
            puVar3[4] = 0;
            if ((-1 < (int)puVar3[5]) && (*(long *)(puVar3 + 2) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))(puVar5,*(long *)(puVar3 + 2),puVar3[5] << 2);
            }
            *(undefined8 *)(puVar3 + 2) = 0;
            puVar3[5] = 0x80000000;
            *puVar3 = 0;
            if ((-1 < (int)puVar3[1]) && (*(long *)(puVar3 + -2) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))(puVar5,*(long *)(puVar3 + -2),puVar3[1] << 2);
            }
            *(undefined8 *)(puVar3 + -2) = 0;
            puVar3[1] = 0x80000000;
            puVar3[-4] = 0;
            if ((-1 < (int)puVar3[-3]) && (*(long *)(puVar3 + -6) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(puVar3 + -6),((ulong)(uint)puVar3[-3] & 0x3fffffff) * 0x14
                        );
            }
            *(undefined8 *)(puVar3 + -6) = 0;
            lVar9 = lVar9 + 1;
            lVar11 = lVar11 + 0x38;
            puVar3[-3] = 0x80000000;
          } while (lVar9 < (int)*plVar10);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return;
}


