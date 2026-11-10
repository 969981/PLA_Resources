/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03309b44; name: FUN_03309b44
 */


void FUN_03309b44(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_032f76dc(param_1 + 0x58);
  puVar7 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    lVar10 = lVar12 + (long)*(int *)(param_1 + 0x40) * 0x30;
    if ((*(ulong *)(lVar10 + -8) & 1) != 0) {
      plVar9 = (long *)(*(ulong *)(lVar10 + -8) & 0xfffffffffffffffe);
      plVar8 = plVar9 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if ((*(ulong *)(lVar10 + -0x20) & 1) != 0) {
      plVar9 = (long *)(*(ulong *)(lVar10 + -0x20) & 0xfffffffffffffffe);
      plVar8 = plVar9 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    while (lVar11 = lVar10 + -0x30, lVar11 != lVar12) {
      if ((*(ulong *)(lVar10 + -0x38) & 1) != 0) {
        plVar9 = (long *)(*(ulong *)(lVar10 + -0x38) & 0xfffffffffffffffe);
        plVar8 = plVar9 + 1;
        do {
          lVar6 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      puVar1 = (ulong *)(lVar10 + -0x50);
      lVar10 = lVar11;
      if ((*puVar1 & 1) != 0) {
        plVar9 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar8 = plVar9 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,*(long *)(param_1 + 0x38),
               ((ulong)*(uint *)(param_1 + 0x44) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  lVar10 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 4) == -2)) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  else {
    uVar2 = (long)*(int *)(param_1 + 0x28) + 1;
    lVar12 = tpidr_el0;
    lVar11 = *(long *)(lVar12 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar11;
    }
    plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    local_28 = (undefined4)uVar2;
    uStack_24 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_24;
      puStack_38 = &local_28;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,lVar10,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | (uVar2 & 0x1fffffff) << 3);
    *(undefined **)(param_1 + 0x20) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar3 = *(int *)(param_1 + 0x18);
  }
  if (iVar3 != 0) {
    lVar10 = *(long *)(param_1 + 0x10);
    lVar12 = lVar10 + (long)iVar3 * 0x30;
    if ((*(ulong *)(lVar12 + -8) & 1) != 0) {
      plVar9 = (long *)(*(ulong *)(lVar12 + -8) & 0xfffffffffffffffe);
      plVar8 = plVar9 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if ((*(ulong *)(lVar12 + -0x20) & 1) != 0) {
      plVar9 = (long *)(*(ulong *)(lVar12 + -0x20) & 0xfffffffffffffffe);
      plVar8 = plVar9 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (lVar12 + -0x30 != lVar10) {
      if ((*(ulong *)(lVar12 + -0x38) & 1) != 0) {
        plVar9 = (long *)(*(ulong *)(lVar12 + -0x38) & 0xfffffffffffffffe);
        plVar8 = plVar9 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if ((*(ulong *)(lVar12 + -0x50) & 1) != 0) {
        plVar9 = (long *)(*(ulong *)(lVar12 + -0x50) & 0xfffffffffffffffe);
        plVar8 = plVar9 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (lVar12 + -0x60 != lVar10) {
        if ((*(ulong *)(lVar12 + -0x68) & 1) != 0) {
          plVar9 = (long *)(*(ulong *)(lVar12 + -0x68) & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar11 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *(int *)plVar8 = (int)lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        lVar11 = lVar12 + -0x90;
        if ((*(ulong *)(lVar12 + -0x80) & 1) != 0) {
          plVar9 = (long *)(*(ulong *)(lVar12 + -0x80) & 0xfffffffffffffffe);
          plVar8 = plVar9 + 1;
          do {
            lVar12 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *(int *)plVar8 = (int)lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        while (lVar11 != lVar10) {
          if ((*(ulong *)(lVar11 + -8) & 1) != 0) {
            plVar9 = (long *)(*(ulong *)(lVar11 + -8) & 0xfffffffffffffffe);
            plVar8 = plVar9 + 1;
            do {
              lVar12 = *plVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *(int *)plVar8 = (int)lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
          lVar12 = lVar11 + -0x30;
          puVar1 = (ulong *)(lVar11 + -0x20);
          lVar11 = lVar12;
          if ((*puVar1 & 1) != 0) {
            plVar9 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar8 = plVar9 + 1;
            do {
              lVar12 = *plVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *(int *)plVar8 = (int)lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,*(long *)(param_1 + 0x10),
               ((ulong)*(uint *)(param_1 + 0x1c) & 0x3fffffff) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}


