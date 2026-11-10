/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e5a7c; name: FUN_031e5a7c
 */


long FUN_031e5a7c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar12 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar12) {
    uVar12 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar12) {
    param_2 = uVar12;
  }
  FUN_032bd100(param_2,0x28,*param_5,&local_90);
  uVar12 = *param_5;
  lVar10 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
  puVar9 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar14 = 0;
    uVar18 = (ulong)param_4;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar14);
      puVar4 = (undefined4 *)(lVar10 + lVar14);
      *puVar4 = *puVar3;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0x8000000000000000;
      if ((int)puVar3[5] < 0) {
        FUN_031cf070(puVar9,puVar3 + 2);
      }
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar3 + 2);
      puVar4[4] = puVar3[4];
      puVar4[5] = puVar3[5];
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar3 + 6);
      puVar4[8] = puVar3[8];
      lVar14 = lVar14 + 0x28;
      uVar18 = uVar18 - 1;
      *(undefined **)(puVar3 + 6) = &DAT_03aad864;
      puVar3[8] = 0;
    } while (uVar18 != 0);
    uVar18 = 0;
    do {
      plVar15 = (long *)(param_3 + uVar18 * 0x28 + 0x18);
      lVar14 = *plVar15;
      if ((lVar14 != 0) && (*(int *)(lVar14 + 4) != -2)) {
        piVar16 = (int *)(param_3 + uVar18 * 0x28 + 0x20);
        uVar2 = (long)*piVar16 + 1;
        lVar19 = tpidr_el0;
        lVar13 = *(long *)(lVar19 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar19 + 0x38d490) = lVar13;
        }
        plVar11 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        local_88 = (undefined4)uVar2;
        uStack_84 = 8;
        if ((uVar2 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &uStack_84;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_80);
        }
        (**(code **)(*plVar11 + 0x18))
                  (plVar11,lVar14,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8
                  );
        *plVar15 = (long)&DAT_03aad864;
        *piVar16 = 0;
      }
      lVar14 = param_3 + uVar18 * 0x28;
      plVar15 = (long *)(lVar14 + 8);
      lVar19 = *plVar15;
      piVar16 = (int *)(lVar14 + 0x10);
      iVar6 = *piVar16;
      if (iVar6 != 0) {
        lVar14 = lVar19 + (long)iVar6 * 0x10;
        do {
          plVar11 = *(long **)(lVar14 + -8);
          lVar14 = lVar14 + -0x10;
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar1 = plVar11 + 2;
            do {
              lVar13 = *plVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))();
            }
          }
        } while (lVar14 != lVar19);
      }
      *piVar16 = 0;
      puVar17 = (uint *)(param_3 + uVar18 * 0x28 + 0x14);
      uVar5 = *puVar17;
      if ((-1 < (int)uVar5) && (*plVar15 != 0)) {
        (**(code **)(*(long *)puVar9 + 0x18))(puVar9,*plVar15,((ulong)uVar5 & 0x3fffffff) << 4);
      }
      uVar18 = uVar18 + 1;
      *plVar15 = 0;
      *puVar17 = 0x80000000;
    } while (uVar18 != param_4);
  }
  if (-1 < (int)uVar12) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar12 & 0x3fffffff) * 0x28);
  }
  uVar12 = 0x3fffffff;
  if (local_90 < 0x9ffffffd8) {
    uVar12 = (uint)(local_90 / 0x28);
  }
  *param_5 = uVar12;
  return lVar10;
}


