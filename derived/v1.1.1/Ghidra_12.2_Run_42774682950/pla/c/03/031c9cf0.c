/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c9cf0; name: FUN_031c9cf0
 */


void FUN_031c9cf0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  *param_1 = (long)&PTR_LAB_0430ae40;
  plVar7 = (long *)param_1[0x1e];
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_031c9d28:
    lVar10 = param_1[0x1c];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 != 0) goto LAB_031c9d28;
    (**(code **)(*plVar7 + 0x18))();
    lVar10 = param_1[0x1c];
  }
  if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
    uVar1 = (long)(int)param_1[0x1d] + 1;
    lVar12 = tpidr_el0;
    lVar14 = *(long *)(lVar12 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar14;
    }
    plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    local_88 = (undefined4)uVar1;
    uStack_84 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      local_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar10,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[0x1c] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  puVar6 = PTR_PTR_0434a080;
  if ((int)param_1[0x1b] != 0) {
    lVar14 = param_1[0x1a];
    lVar12 = lVar14 + (long)(int)param_1[0x1b] * 0x30;
    lVar10 = tpidr_el0;
    lVar15 = *(long *)(lVar12 + -0x10);
    if (lVar15 != 0) goto LAB_031c9ea0;
    do {
      iVar3 = *(int *)(lVar12 + -0x18);
      lVar15 = lVar12;
      while( true ) {
        if (iVar3 != 0) {
          lVar8 = *(long *)(lVar15 + -0x20);
          lVar12 = (long)iVar3 * 0x68;
          do {
            FUN_031cd728(lVar8 + -0x60 + lVar12);
            lVar12 = lVar12 + -0x68;
          } while (lVar12 != 0);
        }
        lVar12 = lVar15 + -0x30;
        *(undefined4 *)(lVar15 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar15 + -0x14)) && (*(long *)(lVar15 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar15 + -0x20),
                     ((ulong)*(uint *)(lVar15 + -0x14) & 0x3fffffff) * 0x68);
        }
        *(undefined8 *)(lVar15 + -0x20) = 0;
        *(undefined4 *)(lVar15 + -0x14) = 0x80000000;
        if (lVar12 == lVar14) goto LAB_031c9f64;
        lVar15 = *(long *)(lVar15 + -0x40);
        if (lVar15 == 0) break;
LAB_031c9ea0:
        if (*(int *)(lVar15 + 4) == -2) break;
        uVar1 = (long)*(int *)(lVar12 + -8) + 1;
        lVar8 = *(long *)(lVar10 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar8;
        }
        plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        local_88 = (undefined4)uVar1;
        uStack_84 = 8;
        if ((uVar1 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &uStack_84;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_80);
        }
        (**(code **)(*plVar7 + 0x18))
                  (plVar7,lVar15,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8)
        ;
        *(undefined **)(lVar12 + -0x10) = &DAT_03aad864;
        *(undefined4 *)(lVar12 + -8) = 0;
        iVar3 = *(int *)(lVar12 + -0x18);
        lVar15 = lVar12;
      }
    } while( true );
  }
LAB_031c9f64:
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1a],((ulong)*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) * 0x30);
  }
  lVar10 = param_1[0x18];
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 4) == -2)) {
    iVar3 = (int)param_1[0x17];
  }
  else {
    uVar1 = (long)(int)param_1[0x19] + 1;
    lVar12 = tpidr_el0;
    lVar14 = *(long *)(lVar12 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar14;
    }
    plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    local_88 = (undefined4)uVar1;
    uStack_84 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      local_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar10,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[0x18] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x19) = 0;
    iVar3 = (int)param_1[0x17];
  }
  if (iVar3 != 0) {
    lVar15 = param_1[0x16];
    lVar12 = lVar15 + (long)iVar3 * 0x28;
    lVar10 = tpidr_el0;
    lVar14 = *(long *)(lVar12 + -0x10);
    if (lVar14 != 0) goto LAB_031ca15c;
    do {
      iVar3 = *(int *)(lVar12 + -0x18);
      lVar14 = lVar12;
      while( true ) {
        if (iVar3 != 0) {
          lVar8 = *(long *)(lVar14 + -0x20);
          lVar12 = lVar8 + (long)iVar3 * 0x10;
          do {
            plVar7 = *(long **)(lVar12 + -8);
            lVar12 = lVar12 + -0x10;
            if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
              plVar11 = plVar7 + 2;
              do {
                lVar9 = *plVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *plVar11 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 + -1 == 0) {
                (**(code **)(*plVar7 + 0x18))();
              }
            }
          } while (lVar12 != lVar8);
        }
        lVar12 = lVar14 + -0x28;
        *(undefined4 *)(lVar14 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar14 + -0x14)) && (*(long *)(lVar14 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar14 + -0x20),
                     ((ulong)*(uint *)(lVar14 + -0x14) & 0x3fffffff) << 4);
        }
        *(undefined8 *)(lVar14 + -0x20) = 0;
        *(undefined4 *)(lVar14 + -0x14) = 0x80000000;
        if (lVar12 == lVar15) goto LAB_031ca24c;
        lVar14 = *(long *)(lVar14 + -0x38);
        if (lVar14 == 0) break;
LAB_031ca15c:
        if (*(int *)(lVar14 + 4) == -2) break;
        uVar1 = (long)*(int *)(lVar12 + -8) + 1;
        lVar8 = *(long *)(lVar10 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar8;
        }
        plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        local_88 = (undefined4)uVar1;
        uStack_84 = 8;
        if ((uVar1 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &uStack_84;
          FUN_03320b50(0x39ec3d88,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x61,"Memory allocation request overflow {}*{}",&local_80);
        }
        (**(code **)(*plVar7 + 0x18))
                  (plVar7,lVar14,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8)
        ;
        *(undefined **)(lVar12 + -0x10) = &DAT_03aad864;
        *(undefined4 *)(lVar12 + -8) = 0;
        iVar3 = *(int *)(lVar12 + -0x18);
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_031ca24c:
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x16],((ulong)*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) * 0x28);
  }
  plVar7 = (long *)param_1[0x11];
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
      iVar3 = (int)param_1[5];
      goto joined_r0x031ca2b4;
    }
  }
  iVar3 = (int)param_1[5];
joined_r0x031ca2b4:
  if (iVar3 != 0) {
    plVar11 = (long *)param_1[4];
    plVar13 = plVar11 + (long)iVar3 + -1;
    plVar7 = (long *)*plVar13;
    if (plVar7 != (long *)0x0) goto LAB_031ca2d8;
LAB_031ca2c8:
    if (plVar13 != plVar11) {
      while( true ) {
        plVar13 = plVar13 + -1;
        plVar7 = (long *)*plVar13;
        if (plVar7 == (long *)0x0) break;
LAB_031ca2d8:
        if (plVar7[1] == 0) break;
        plVar2 = plVar7 + 2;
        do {
          lVar10 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 != 0) break;
        (**(code **)(*plVar7 + 0x18))();
        if (plVar13 == plVar11) goto LAB_031ca324;
      }
      goto LAB_031ca2c8;
    }
  }
LAB_031ca324:
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  plVar7 = (long *)param_1[3];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


