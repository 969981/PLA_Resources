/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03279c1c; name: FUN_03279c1c
 */


void FUN_03279c1c(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_b8;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  
  FUN_032bcf10(param_2,0x20,&local_98);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar4 = PTR_PTR_0434a080;
    if (lVar5 != 0) {
      iVar7 = (int)(local_98 >> 5);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar8 = 0;
        lVar9 = 0x1c;
        do {
          lVar10 = *param_2;
          piVar1 = (int *)(lVar5 + lVar9);
          piVar1[-7] = 0;
          piVar1[-6] = 0;
          piVar1[-5] = 0;
          piVar1[-4] = -0x80000000;
          piVar2 = (int *)(lVar10 + lVar9);
          if (piVar2[-4] < 0) {
            local_84 = 4;
            iVar3 = piVar2[-5];
            local_90 = (long)iVar3 << 2;
            if (iVar3 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = piVar2 + -5;
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar3 = piVar2[-5];
            }
            if (iVar3 == 0) {
              piVar2[-4] = 0;
              piVar2[-7] = 0;
              piVar2[-6] = 0;
            }
            else {
              pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
              if (pvVar6 != (void *)0x0) {
                local_b8 = local_90 >> 2;
                if (0x3ffffffe < local_b8) {
                  local_b8 = 0x3fffffff;
                }
                memcpy(pvVar6,*(void **)(piVar2 + -7),local_90);
                *(void **)(piVar2 + -7) = pvVar6;
                piVar2[-4] = (int)local_b8;
              }
            }
          }
          *(undefined8 *)(piVar1 + -7) = *(undefined8 *)(piVar2 + -7);
          piVar1[-5] = piVar2[-5];
          piVar1[-4] = piVar2[-4];
          piVar2[-7] = 0;
          piVar2[-6] = 0;
          piVar2[-5] = 0;
          piVar2[-4] = 0;
          piVar1[-3] = 0;
          piVar1[-2] = 0;
          piVar1[-1] = 0;
          piVar1[0] = -0x80000000;
          if (*piVar2 < 0) {
            local_84 = 4;
            iVar3 = piVar2[-1];
            local_90 = (long)iVar3 << 2;
            if (iVar3 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = piVar2 + -1;
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar3 = piVar2[-1];
            }
            if (iVar3 == 0) {
              *piVar2 = 0;
              piVar2[-3] = 0;
              piVar2[-2] = 0;
            }
            else {
              pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
              if (pvVar6 != (void *)0x0) {
                local_b8 = local_90 >> 2;
                if (0x3ffffffe < local_b8) {
                  local_b8 = 0x3fffffff;
                }
                memcpy(pvVar6,*(void **)(piVar2 + -3),local_90);
                *(void **)(piVar2 + -3) = pvVar6;
                *piVar2 = (int)local_b8;
              }
            }
          }
          *(undefined8 *)(piVar1 + -3) = *(undefined8 *)(piVar2 + -3);
          piVar1[-1] = piVar2[-1];
          *piVar1 = *piVar2;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = 0;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar8 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar9 = 0;
          lVar8 = 0;
          do {
            lVar11 = *param_2;
            lVar10 = lVar11 + lVar9;
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if ((-1 < *(int *)(lVar10 + 0x1c)) && (*(long *)(lVar10 + 0x10) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar10 + 0x10),*(int *)(lVar10 + 0x1c) << 2);
            }
            *(undefined8 *)(lVar10 + 0x10) = 0;
            *(undefined4 *)(lVar10 + 0x1c) = 0x80000000;
            *(undefined4 *)(lVar10 + 8) = 0;
            if ((-1 < *(int *)(lVar10 + 0xc)) && (*(long *)(lVar11 + lVar9) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar11 + lVar9),*(int *)(lVar10 + 0xc) << 2);
            }
            *(undefined8 *)(lVar11 + lVar9) = 0;
            lVar8 = lVar8 + 1;
            *(undefined4 *)(lVar10 + 0xc) = 0x80000000;
            lVar9 = lVar9 + 0x20;
          } while (lVar8 < (int)param_2[1]);
        }
      }
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return;
}


