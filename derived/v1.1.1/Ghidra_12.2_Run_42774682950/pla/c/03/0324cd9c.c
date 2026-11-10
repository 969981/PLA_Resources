/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324cd9c; name: FUN_0324cd9c
 */


void FUN_0324cd9c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  uint *puVar16;
  long *plVar17;
  long lVar18;
  ulong local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined *local_78;
  long *local_70;
  undefined4 *local_68;
  
  local_84 = (undefined1  [4])0x30;
  plVar17 = param_2 + 1;
  iVar9 = (int)*plVar17;
  local_90 = (long)iVar9 * 0x30;
  if (iVar9 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_68 = (undefined4 *)local_84;
    local_70 = plVar17;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_80);
    iVar9 = (int)*plVar17;
  }
  if (iVar9 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
    puVar6 = PTR_PTR_0434a080;
    if (lVar7 != 0) {
      iVar9 = (int)(local_90 / 0x30);
      if (0x3ffffffe < iVar9) {
        iVar9 = 0x3fffffff;
      }
      if (0 < (int)*plVar17) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          puVar2 = (undefined4 *)(*param_2 + lVar12);
          puVar3 = (undefined4 *)(lVar7 + lVar12);
          *puVar3 = *puVar2;
          puVar3[2] = puVar2[2];
          *(undefined8 *)(puVar3 + 4) = 0;
          *(undefined8 *)(puVar3 + 6) = 0x8000000000000000;
          if ((int)puVar2[7] < 0) {
            FUN_031cec70(puVar6,puVar2 + 4);
          }
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          puVar3[6] = puVar2[6];
          puVar3[7] = puVar2[7];
          *(undefined8 *)(puVar2 + 4) = 0;
          *(undefined8 *)(puVar2 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
          puVar3[10] = puVar2[10];
          *(undefined **)(puVar2 + 8) = &DAT_03aad864;
          puVar2[10] = 0;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0x30;
        } while (lVar13 < (int)*plVar17);
        if (0 < (int)*plVar17) {
          lVar13 = 0;
          lVar12 = tpidr_el0;
          do {
            lVar18 = *param_2;
            plVar14 = (long *)(lVar18 + lVar13 * 0x30 + 0x20);
            lVar10 = *plVar14;
            if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
              piVar15 = (int *)(lVar18 + lVar13 * 0x30 + 0x28);
              uVar1 = (long)*piVar15 + 1;
              lVar11 = *(long *)(lVar12 + 0x38d490);
              if (lVar11 == 0) {
                lVar11 = FUN_0333d16c(0,1);
                *(long *)(lVar12 + 0x38d490) = lVar11;
              }
              plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
              local_88 = (undefined4)uVar1;
              local_84 = (undefined1  [4])0x8;
              if ((uVar1 & 0x1ffffffff0000000) != 0) {
                local_78 = &DAT_0411b3a0;
                local_80 = 2;
                local_68 = &local_88;
                local_70 = (long *)local_84;
                FUN_03320b50(0x39ec3d88,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                             ,0x61,"Memory allocation request overflow {}*{}",&local_80);
              }
              (**(code **)(*plVar8 + 0x18))
                        (plVar8,lVar10,
                         -(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
              *plVar14 = (long)&DAT_03aad864;
              *piVar15 = 0;
            }
            lVar10 = lVar18 + lVar13 * 0x30;
            piVar15 = (int *)(lVar10 + 0x18);
            iVar5 = *piVar15;
            plVar14 = (long *)(lVar10 + 0x10);
            lVar10 = *plVar14;
            if (iVar5 != 0) {
              lVar11 = (long)iVar5 * 0x68;
              do {
                FUN_031cd728(lVar10 + -0x60 + lVar11);
                lVar11 = lVar11 + -0x68;
              } while (lVar11 != 0);
            }
            *piVar15 = 0;
            puVar16 = (uint *)(lVar18 + lVar13 * 0x30 + 0x1c);
            uVar4 = *puVar16;
            if ((-1 < (int)uVar4) && (*plVar14 != 0)) {
              (**(code **)(*(long *)puVar6 + 0x18))
                        (puVar6,*plVar14,((ulong)uVar4 & 0x3fffffff) * 0x68);
            }
            *plVar14 = 0;
            lVar13 = lVar13 + 1;
            *puVar16 = 0x80000000;
          } while (lVar13 < (int)*plVar17);
        }
      }
      *param_2 = lVar7;
      *(int *)((long)param_2 + 0xc) = iVar9;
    }
  }
  return;
}


