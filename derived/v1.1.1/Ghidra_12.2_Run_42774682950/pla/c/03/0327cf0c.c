/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327cf0c; name: FUN_0327cf0c
 */


void FUN_0327cf0c(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong local_b8;
  ulong local_98;
  size_t local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  
  FUN_032bcf10(param_2,0x60,&local_98);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 != 0) {
      iVar8 = (int)(local_98 / 0x60);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar9 = 0;
        lVar10 = 0x50;
        do {
          puVar1 = (undefined1 *)(lVar6 + lVar10);
          puVar2 = (undefined1 *)(*param_2 + lVar10);
          *(undefined8 *)(puVar1 + -0x50) = 0;
          *(undefined8 *)(puVar1 + -0x48) = 0x8000000000000000;
          if (*(int *)(puVar2 + -0x44) < 0) {
            local_84 = 0x40;
            iVar4 = *(int *)(puVar2 + -0x48);
            local_90 = (long)iVar4 << 6;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = (int *)(puVar2 + -0x48);
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = *(int *)(puVar2 + -0x48);
            }
            if (iVar4 == 0) {
              *(undefined4 *)(puVar2 + -0x44) = 0;
              *(undefined8 *)(puVar2 + -0x50) = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                local_b8 = local_90 >> 6;
                if (0x3ffffffe < local_b8) {
                  local_b8 = 0x3fffffff;
                }
                memcpy(pvVar7,*(void **)(puVar2 + -0x50),local_90);
                *(void **)(puVar2 + -0x50) = pvVar7;
                *(int *)(puVar2 + -0x44) = (int)local_b8;
              }
            }
          }
          *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
          *(undefined4 *)(puVar1 + -0x48) = *(undefined4 *)(puVar2 + -0x48);
          *(undefined4 *)(puVar1 + -0x44) = *(undefined4 *)(puVar2 + -0x44);
          *(undefined8 *)(puVar2 + -0x50) = 0;
          *(undefined8 *)(puVar2 + -0x48) = 0;
          *(undefined8 *)(puVar1 + -0x40) = 0;
          *(undefined8 *)(puVar1 + -0x38) = 0x8000000000000000;
          if (*(int *)(puVar2 + -0x34) < 0) {
            local_84 = 100;
            iVar4 = *(int *)(puVar2 + -0x38);
            local_90 = (long)iVar4 * 100;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = (int *)(puVar2 + -0x38);
              puStack_68 = &local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = *(int *)(puVar2 + -0x38);
            }
            if (iVar4 == 0) {
              *(undefined4 *)(puVar2 + -0x34) = 0;
              *(undefined8 *)(puVar2 + -0x40) = 0;
            }
            else {
              pvVar7 = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (pvVar7 != (void *)0x0) {
                local_b8 = local_90 / 100;
                if (0x3ffffffe < local_b8) {
                  local_b8 = 0x3fffffff;
                }
                memcpy(pvVar7,*(void **)(puVar2 + -0x40),local_90);
                *(void **)(puVar2 + -0x40) = pvVar7;
                *(int *)(puVar2 + -0x34) = (int)local_b8;
              }
            }
          }
          *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
          *(undefined4 *)(puVar1 + -0x38) = *(undefined4 *)(puVar2 + -0x38);
          *(undefined4 *)(puVar1 + -0x34) = *(undefined4 *)(puVar2 + -0x34);
          *(undefined8 *)(puVar2 + -0x40) = 0;
          *(undefined8 *)(puVar2 + -0x38) = 0;
          *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
          uVar11 = *(undefined8 *)(puVar2 + -8);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
          *(undefined8 *)(puVar1 + -8) = uVar11;
          uVar11 = *(undefined8 *)(puVar2 + -0x20);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar1 + -0x20) = uVar11;
          *puVar1 = *puVar2;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x60;
        } while (lVar9 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar10 = 0;
          lVar9 = 0;
          do {
            lVar12 = *param_2;
            lVar3 = lVar12 + lVar10;
            *(undefined4 *)(lVar3 + 0x18) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x1c)) && (*(long *)(lVar3 + 0x10) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x10),
                         ((ulong)*(uint *)(lVar3 + 0x1c) & 0x3fffffff) * 100);
            }
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
            *(undefined4 *)(lVar3 + 8) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0xc)) && (*(long *)(lVar12 + lVar10) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar12 + lVar10),
                         ((ulong)*(uint *)(lVar3 + 0xc) & 0x3fffffff) << 6);
            }
            *(undefined8 *)(lVar12 + lVar10) = 0;
            lVar9 = lVar9 + 1;
            *(undefined4 *)(lVar3 + 0xc) = 0x80000000;
            lVar10 = lVar10 + 0x60;
          } while (lVar9 < (int)param_2[1]);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return;
}


