/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031eec24; name: FUN_031eec24
 */


undefined8 FUN_031eec24(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *__dest;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong local_c0;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  long *local_70;
  ulong *puStack_68;
  
  local_90 = CONCAT44(local_90._4_4_,0x10);
  plVar11 = param_2 + 1;
  iVar8 = (int)*plVar11;
  local_98 = (long)iVar8 << 4;
  if (iVar8 < 0) {
    local_80 = 2;
    puStack_78 = &DAT_0411b3a0;
    puStack_68 = &local_90;
    local_70 = plVar11;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_80);
    iVar8 = (int)*plVar11;
  }
  if (iVar8 == 0) {
    uVar6 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar4 = PTR_PTR_0434a080;
    if (lVar5 == 0) {
      uVar6 = 0x80040200;
    }
    else {
      iVar8 = (int)(local_98 >> 4);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)*plVar11) {
        lVar10 = 0;
        lVar9 = 0;
        do {
          lVar7 = *param_2;
          puVar1 = (undefined8 *)(lVar5 + lVar10);
          puVar2 = (undefined8 *)(lVar7 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0x8000000000000000;
          if (*(int *)((long)puVar2 + 0xc) < 0) {
            local_84 = 4;
            plVar12 = puVar2 + 1;
            iVar3 = (int)*plVar12;
            local_90 = (long)iVar3 << 2;
            if (iVar3 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = plVar12;
              puStack_68 = (ulong *)&local_84;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar3 = (int)*plVar12;
            }
            if (iVar3 == 0) {
              *(undefined4 *)((long)puVar2 + 0xc) = 0;
              *(undefined8 *)(lVar7 + lVar10) = 0;
            }
            else {
              __dest = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
              if (__dest != (void *)0x0) {
                local_c0 = local_90 >> 2;
                if (0x3ffffffe < local_c0) {
                  local_c0 = 0x3fffffff;
                }
                memcpy(__dest,*(void **)(lVar7 + lVar10),local_90);
                *(void **)(lVar7 + lVar10) = __dest;
                *(int *)((long)puVar2 + 0xc) = (int)local_c0;
              }
            }
          }
          *(undefined8 *)(lVar5 + lVar10) = *puVar2;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
          *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)((long)puVar2 + 0xc);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar9 < (int)*plVar11);
        if (0 < (int)*plVar11) {
          lVar10 = 0;
          lVar9 = 0;
          do {
            lVar13 = *param_2;
            lVar7 = lVar13 + lVar10;
            *(undefined4 *)(lVar7 + 8) = 0;
            if ((-1 < *(int *)(lVar7 + 0xc)) && (*(long *)(lVar13 + lVar10) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar13 + lVar10),*(int *)(lVar7 + 0xc) << 2);
            }
            *(undefined8 *)(lVar13 + lVar10) = 0;
            lVar9 = lVar9 + 1;
            *(undefined4 *)(lVar7 + 0xc) = 0x80000000;
            lVar10 = lVar10 + 0x10;
          } while (lVar9 < (int)*plVar11);
        }
      }
      uVar6 = 0;
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return uVar6;
}


