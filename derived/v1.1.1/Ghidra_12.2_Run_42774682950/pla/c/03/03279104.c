/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03279104; name: FUN_03279104
 */


void FUN_03279104(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  
  FUN_032bcf10(param_2,0x48,&local_98);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 != 0) {
      iVar8 = (int)(local_98 / 0x48);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar9 = 0;
        lVar10 = 0x38;
        do {
          puVar1 = (undefined8 *)(*param_2 + lVar10);
          puVar2 = (undefined8 *)(lVar6 + lVar10);
          uVar11 = puVar1[-6];
          puVar2[-7] = puVar1[-7];
          puVar2[-6] = uVar11;
          puVar2[-5] = 0;
          puVar2[-4] = 0x8000000000000000;
          if (*(int *)((long)puVar1 + -0x1c) < 0) {
            local_84 = 4;
            iVar4 = *(int *)(puVar1 + -4);
            local_90 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = (int *)(puVar1 + -4);
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = *(int *)(puVar1 + -4);
            }
            if (iVar4 == 0) {
              *(undefined4 *)((long)puVar1 + -0x1c) = 0;
              puVar1[-5] = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                uVar12 = local_90 >> 2;
                if (0x3ffffffe < uVar12) {
                  uVar12 = 0x3fffffff;
                }
                memcpy(pvVar7,(void *)puVar1[-5],local_90);
                puVar1[-5] = pvVar7;
                *(int *)((long)puVar1 + -0x1c) = (int)uVar12;
              }
            }
          }
          puVar2[-5] = puVar1[-5];
          *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(puVar1 + -4);
          *(undefined4 *)((long)puVar2 + -0x1c) = *(undefined4 *)((long)puVar1 + -0x1c);
          puVar1[-5] = 0;
          puVar1[-4] = 0;
          *(undefined1 *)(puVar2 + -3) = *(undefined1 *)(puVar1 + -3);
          puVar2[-2] = 0;
          puVar2[-1] = 0x8000000000000000;
          if (*(int *)((long)puVar1 + -4) < 0) {
            local_84 = 4;
            iVar4 = *(int *)(puVar1 + -1);
            local_90 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = (int *)(puVar1 + -1);
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = *(int *)(puVar1 + -1);
            }
            if (iVar4 == 0) {
              *(undefined4 *)((long)puVar1 + -4) = 0;
              puVar1[-2] = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                uVar12 = local_90 >> 2;
                if (0x3ffffffe < uVar12) {
                  uVar12 = 0x3fffffff;
                }
                memcpy(pvVar7,(void *)puVar1[-2],local_90);
                puVar1[-2] = pvVar7;
                *(int *)((long)puVar1 + -4) = (int)uVar12;
              }
            }
          }
          puVar2[-2] = puVar1[-2];
          *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(puVar1 + -1);
          *(undefined4 *)((long)puVar2 + -4) = *(undefined4 *)((long)puVar1 + -4);
          puVar1[-2] = 0;
          puVar1[-1] = 0;
          uVar11 = *puVar1;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
          *puVar2 = uVar11;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x48;
        } while (lVar9 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar10 = 0;
          lVar9 = 0;
          do {
            lVar3 = *param_2 + lVar10;
            *(undefined4 *)(lVar3 + 0x30) = 0;
            if ((-1 < *(int *)(lVar3 + 0x34)) && (*(long *)(lVar3 + 0x28) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x28),*(int *)(lVar3 + 0x34) << 2);
            }
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined4 *)(lVar3 + 0x34) = 0x80000000;
            *(undefined4 *)(lVar3 + 0x18) = 0;
            if ((-1 < *(int *)(lVar3 + 0x1c)) && (*(long *)(lVar3 + 0x10) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x10),*(int *)(lVar3 + 0x1c) << 2);
            }
            *(undefined8 *)(lVar3 + 0x10) = 0;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x48;
            *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
          } while (lVar9 < (int)param_2[1]);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return;
}


