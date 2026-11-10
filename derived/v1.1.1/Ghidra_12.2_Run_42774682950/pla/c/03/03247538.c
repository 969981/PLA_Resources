/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247538; name: FUN_03247538
 */


undefined8 FUN_03247538(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  void *__dest;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 *local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  uint *local_68;
  
  puVar6 = PTR_PTR_0434a080;
  local_98 = (undefined4 *)0x0;
  local_90 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  puVar19 = (undefined4 *)*param_2;
  local_88 = uVar2;
  if ((int)uVar2 < 1) {
    local_98 = (undefined4 *)0x0;
    local_90 = -0x8000000000000000;
  }
  else {
    local_84 = 0x28;
    if (((ulong)((long)(int)uVar2 * 5) >> 0x1c & 0x1ffffffff) != 0) {
      local_70 = &local_84;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = &local_88;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_80);
    }
    local_80 = -((ulong)(uVar2 * 5 >> 0x1c) & 1) & 0xffffffff00000000 |
               ((ulong)(uVar2 * 5) & 0x1fffffff) << 3;
    local_98 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_80,&local_80);
    iVar10 = 0;
    if (local_84 != 0) {
      iVar10 = (int)local_80 / local_84;
    }
    uVar17 = 0;
    local_90 = CONCAT44(iVar10,uVar2);
    puVar13 = local_98;
    do {
      *puVar13 = *puVar19;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined8 *)(puVar13 + 4) = 0x8000000000000000;
      uVar3 = puVar19[4];
      puVar14 = *(undefined4 **)(puVar19 + 2);
      local_88 = uVar3;
      if ((int)uVar3 < 1) {
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0x8000000000000000;
      }
      else {
        uVar18 = (ulong)(int)uVar3;
        local_84 = 0x10;
        if ((uVar18 & 0xffffffff8000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar18 >> 0x1b & 1) & 0xffffffff00000000 | (uVar18 & 0xfffffff) << 4;
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_80,&local_80);
        *(undefined4 **)(puVar13 + 2) = puVar7;
        iVar10 = 0;
        if (local_84 != 0) {
          iVar10 = (int)local_80 / local_84;
        }
        puVar13[4] = uVar3;
        puVar13[5] = iVar10;
        if (uVar3 != 1) {
          iVar10 = uVar3 - (uVar3 & 1);
          puVar12 = puVar7;
          do {
            *puVar12 = *puVar14;
            lVar9 = *(long *)(puVar14 + 2);
            *(long *)(puVar12 + 2) = lVar9;
            if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
              plVar8 = (long *)(lVar9 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = *plVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puVar12[4] = puVar14[4];
            lVar9 = *(long *)(puVar14 + 6);
            puVar7 = puVar12 + 8;
            puVar14 = puVar14 + 8;
            *(long *)(puVar12 + 6) = lVar9;
            if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
              plVar8 = (long *)(lVar9 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = *plVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            iVar10 = iVar10 + -2;
            puVar12 = puVar7;
          } while (iVar10 != 0);
        }
        if ((uVar3 & 1) != 0) {
          *puVar7 = *puVar14;
          lVar9 = *(long *)(puVar14 + 2);
          *(long *)(puVar7 + 2) = lVar9;
          if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
            plVar8 = (long *)(lVar9 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
      }
      if (*(int *)(*(long *)(puVar19 + 6) + 4) == -2) {
        *(undefined **)(puVar13 + 6) = &DAT_03aad864;
        puVar13[8] = 0;
      }
      else {
        puVar13[8] = puVar19[8];
        iVar10 = puVar19[8];
        lVar9 = tpidr_el0;
        lVar16 = *(long *)(lVar9 + 0x38d490);
        if (lVar16 == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar16;
        }
        __dest = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x58),8,iVar10 + 1);
        *(void **)(puVar13 + 6) = __dest;
        memcpy(__dest,*(void **)(puVar19 + 6),(long)(int)puVar19[8] * 8 + 8);
      }
      uVar17 = uVar17 + 1;
      puVar13 = puVar13 + 10;
      puVar19 = puVar19 + 10;
    } while (uVar17 != uVar2);
  }
  FUN_032534c8(param_1,&local_98);
  puVar19 = local_98;
  if ((int)local_90 == 0) {
LAB_032479c4:
    lVar9 = local_90;
    uVar18 = (ulong)local_90._4_4_;
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if ((-1 < lVar9) && (local_98 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_98,(uVar18 & 0x3fffffff) * 0x28);
    }
    return 1;
  }
  puVar13 = local_98 + (long)(int)local_90 * 10;
  lVar9 = tpidr_el0;
  lVar16 = *(long *)(puVar13 + -4);
  if (lVar16 != 0) goto LAB_032478c8;
  do {
    iVar10 = puVar13[-6];
    puVar14 = puVar13;
    while( true ) {
      if (iVar10 != 0) {
        lVar15 = *(long *)(puVar14 + -8);
        lVar16 = lVar15 + (long)iVar10 * 0x10;
        do {
          plVar8 = *(long **)(lVar16 + -8);
          lVar16 = lVar16 + -0x10;
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar1 = plVar8 + 2;
            do {
              lVar11 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
        } while (lVar16 != lVar15);
      }
      puVar13 = puVar14 + -10;
      puVar14[-6] = 0;
      if ((-1 < (int)puVar14[-5]) && (*(long *)(puVar14 + -8) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(puVar14 + -8),((ulong)(uint)puVar14[-5] & 0x3fffffff) << 4);
      }
      *(undefined8 *)(puVar14 + -8) = 0;
      puVar14[-5] = 0x80000000;
      if (puVar13 == puVar19) goto LAB_032479c4;
      lVar16 = *(long *)(puVar14 + -0xe);
      if (lVar16 == 0) break;
LAB_032478c8:
      if (*(int *)(lVar16 + 4) == -2) break;
      uVar18 = (long)(int)puVar13[-2] + 1;
      lVar15 = *(long *)(lVar9 + 0x38d490);
      if (lVar15 == 0) {
        lVar15 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar15;
      }
      plVar8 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
      local_88 = (uint)uVar18;
      local_84 = 8;
      if ((uVar18 & 0x1ffffffff0000000) != 0) {
        local_80 = 2;
        local_78 = &DAT_0411b3a0;
        local_68 = &local_88;
        local_70 = &local_84;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_80);
      }
      (**(code **)(*plVar8 + 0x18))
                (plVar8,lVar16,-(uVar18 >> 0x1c & 1) & 0xffffffff00000000 | uVar18 * 8 & 0xfffffff8)
      ;
      *(undefined **)(puVar13 + -4) = &DAT_03aad864;
      puVar13[-2] = 0;
      iVar10 = puVar13[-6];
      puVar14 = puVar13;
    }
  } while( true );
}


