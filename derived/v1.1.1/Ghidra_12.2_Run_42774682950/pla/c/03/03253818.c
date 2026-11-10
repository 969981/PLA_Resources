/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03253818; name: FUN_03253818
 */


void FUN_03253818(long *param_1,long *param_2)

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
  int iVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined *local_78;
  long *local_70;
  undefined4 *local_68;
  
  local_84 = (undefined1  [4])0x28;
  plVar20 = param_2 + 1;
  iVar12 = (int)*plVar20;
  local_90 = (long)iVar12 * 0x28;
  if (iVar12 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_68 = (undefined4 *)local_84;
    local_70 = plVar20;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_80);
    iVar12 = (int)*plVar20;
  }
  if (iVar12 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar10 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
    puVar9 = PTR_PTR_0434a080;
    if (lVar10 != 0) {
      iVar12 = (int)(local_90 / 0x28);
      if (0x3ffffffe < iVar12) {
        iVar12 = 0x3fffffff;
      }
      if (0 < (int)*plVar20) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          puVar3 = (undefined4 *)(*param_2 + lVar16);
          puVar4 = (undefined4 *)(lVar10 + lVar16);
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
          *(undefined **)(puVar3 + 6) = &DAT_03aad864;
          puVar3[8] = 0;
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar17 < (int)*plVar20);
        if (0 < (int)*plVar20) {
          lVar17 = 0;
          lVar16 = tpidr_el0;
          do {
            lVar21 = *param_2;
            plVar19 = (long *)(lVar21 + lVar17 * 0x28 + 0x18);
            lVar14 = *plVar19;
            if ((lVar14 != 0) && (*(int *)(lVar14 + 4) != -2)) {
              piVar18 = (int *)(lVar21 + lVar17 * 0x28 + 0x20);
              uVar2 = (long)*piVar18 + 1;
              lVar22 = *(long *)(lVar16 + 0x38d490);
              if (lVar22 == 0) {
                lVar22 = FUN_0333d16c(0,1);
                *(long *)(lVar16 + 0x38d490) = lVar22;
              }
              plVar11 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
              local_88 = (undefined4)uVar2;
              local_84 = (undefined1  [4])0x8;
              if ((uVar2 & 0x1ffffffff0000000) != 0) {
                local_78 = &DAT_0411b3a0;
                local_80 = 2;
                local_68 = &local_88;
                local_70 = (long *)local_84;
                FUN_03320b50(0x39ec3d88,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                             ,0x61,"Memory allocation request overflow {}*{}",&local_80);
              }
              (**(code **)(*plVar11 + 0x18))
                        (plVar11,lVar14,
                         -(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
              *plVar19 = (long)&DAT_03aad864;
              *piVar18 = 0;
            }
            lVar14 = lVar21 + lVar17 * 0x28;
            plVar19 = (long *)(lVar14 + 8);
            lVar22 = *plVar19;
            piVar18 = (int *)(lVar14 + 0x10);
            iVar6 = *piVar18;
            if (iVar6 != 0) {
              lVar14 = lVar22 + (long)iVar6 * 0x10;
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
              } while (lVar14 != lVar22);
            }
            *piVar18 = 0;
            puVar15 = (uint *)(lVar21 + lVar17 * 0x28 + 0x14);
            uVar5 = *puVar15;
            if ((-1 < (int)uVar5) && (*plVar19 != 0)) {
              (**(code **)(*(long *)puVar9 + 0x18))
                        (puVar9,*plVar19,((ulong)uVar5 & 0x3fffffff) << 4);
            }
            *plVar19 = 0;
            lVar17 = lVar17 + 1;
            *puVar15 = 0x80000000;
          } while (lVar17 < (int)*plVar20);
        }
      }
      *param_2 = lVar10;
      *(int *)((long)param_2 + 0xc) = iVar12;
    }
  }
  return;
}


