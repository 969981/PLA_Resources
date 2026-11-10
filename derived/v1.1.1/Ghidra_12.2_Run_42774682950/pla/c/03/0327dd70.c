/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327dd70; name: FUN_0327dd70
 */


void FUN_0327dd70(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *__dest;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  undefined4 local_54;
  
  FUN_032bcf10(param_2,0x18,&local_90);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 != 0) {
      iVar7 = (int)(local_90 / 0x18);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          puVar1 = (undefined4 *)(*param_2 + lVar8);
          puVar2 = (undefined4 *)(lVar6 + lVar8);
          *puVar2 = *puVar1;
          *(undefined8 *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0x8000000000000000;
          if ((int)puVar1[5] < 0) {
            local_54 = 4;
            piVar9 = puVar1 + 4;
            iVar4 = *piVar9;
            local_88 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_80 = 2;
              puStack_78 = &DAT_0411b3a0;
              local_70 = piVar9;
              puStack_68 = &local_54;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = *piVar9;
            }
            if (iVar4 == 0) {
              puVar1[5] = 0;
              *(undefined8 *)(puVar1 + 2) = 0;
            }
            else {
              __dest = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_88,&local_88);
              if (__dest != (void *)0x0) {
                uVar11 = local_88 >> 2;
                if (0x3ffffffe < uVar11) {
                  uVar11 = 0x3fffffff;
                }
                memcpy(__dest,*(void **)(puVar1 + 2),local_88);
                *(void **)(puVar1 + 2) = __dest;
                puVar1[5] = (int)uVar11;
              }
            }
          }
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
          puVar2[4] = puVar1[4];
          puVar2[5] = puVar1[5];
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined8 *)(puVar1 + 4) = 0;
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + 0x18;
        } while (lVar10 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar8 = 0;
          lVar10 = 0;
          do {
            lVar3 = *param_2 + lVar8;
            *(undefined4 *)(lVar3 + 0x10) = 0;
            if ((-1 < *(int *)(lVar3 + 0x14)) && (*(long *)(lVar3 + 8) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 8),*(int *)(lVar3 + 0x14) << 2);
            }
            *(undefined8 *)(lVar3 + 8) = 0;
            lVar10 = lVar10 + 1;
            lVar8 = lVar8 + 0x18;
            *(undefined4 *)(lVar3 + 0x14) = 0x80000000;
          } while (lVar10 < (int)param_2[1]);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return;
}


