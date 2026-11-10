/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324bcac; name: FUN_0324bcac
 */


void FUN_0324bcac(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  void *__dest;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  long *local_70;
  ulong *puStack_68;
  
  local_90 = CONCAT44(local_90._4_4_,0x28);
  plVar10 = param_2 + 1;
  iVar8 = (int)*plVar10;
  local_98 = (long)iVar8 * 0x28;
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
    lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar6 = PTR_PTR_0434a080;
    if (lVar7 != 0) {
      iVar8 = (int)(local_98 / 0x28);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)*plVar10) {
        lVar11 = 0;
        lVar9 = 0x20;
        do {
          puVar1 = (undefined4 *)(*param_2 + lVar9);
          puVar2 = (undefined4 *)(lVar7 + lVar9);
          puVar2[-8] = puVar1[-8];
          uVar4 = puVar1[-6];
          *(undefined2 *)(puVar2 + -5) = *(undefined2 *)(puVar1 + -5);
          puVar2[-6] = uVar4;
          *(undefined8 *)(puVar2 + -4) = 0;
          *(undefined8 *)(puVar2 + -2) = 0x8000000000000000;
          if ((int)puVar1[-1] < 0) {
            local_84 = 4;
            iVar5 = (int)*(long *)(puVar1 + -2);
            local_90 = (long)iVar5 << 2;
            if (iVar5 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = (long *)(puVar1 + -2);
              puStack_68 = (ulong *)&local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar5 = puVar1[-2];
            }
            if (iVar5 == 0) {
              puVar1[-1] = 0;
              *(undefined8 *)(puVar1 + -4) = 0;
            }
            else {
              __dest = (void *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_90,&local_90);
              if (__dest != (void *)0x0) {
                uVar12 = local_90 >> 2;
                if (0x3ffffffe < uVar12) {
                  uVar12 = 0x3fffffff;
                }
                memcpy(__dest,*(void **)(puVar1 + -4),local_90);
                *(void **)(puVar1 + -4) = __dest;
                puVar1[-1] = (int)uVar12;
              }
            }
          }
          *(undefined8 *)(puVar2 + -4) = *(undefined8 *)(puVar1 + -4);
          puVar2[-2] = puVar1[-2];
          puVar2[-1] = puVar1[-1];
          *(undefined8 *)(puVar1 + -4) = 0;
          *(undefined8 *)(puVar1 + -2) = 0;
          *puVar2 = *puVar1;
          lVar11 = lVar11 + 1;
          lVar9 = lVar9 + 0x28;
        } while (lVar11 < (int)*plVar10);
        if (0 < (int)*plVar10) {
          lVar9 = 0;
          lVar11 = 0;
          do {
            lVar3 = *param_2 + lVar9;
            *(undefined4 *)(lVar3 + 0x18) = 0;
            if ((-1 < *(int *)(lVar3 + 0x1c)) && (*(long *)(lVar3 + 0x10) != 0)) {
              (**(code **)(*(long *)puVar6 + 0x18))
                        (puVar6,*(long *)(lVar3 + 0x10),*(int *)(lVar3 + 0x1c) << 2);
            }
            *(undefined8 *)(lVar3 + 0x10) = 0;
            lVar11 = lVar11 + 1;
            lVar9 = lVar9 + 0x28;
            *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
          } while (lVar11 < (int)*plVar10);
        }
      }
      *param_2 = lVar7;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return;
}


