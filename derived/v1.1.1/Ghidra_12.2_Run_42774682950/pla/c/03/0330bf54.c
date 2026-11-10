/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330bf54; name: FUN_0330bf54
 */


void FUN_0330bf54(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_28;
  
  if ((int)param_1[1] != 0) {
    lVar7 = *param_1;
    lVar9 = lVar7 + (long)(int)param_1[1] * 0x30;
    if ((*(ulong *)(lVar9 + -8) & 1) != 0) {
      plVar6 = (long *)(*(ulong *)(lVar9 + -8) & 0xfffffffffffffffe);
      plVar5 = plVar6 + 1;
      do {
        lVar8 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = (int)lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if ((*(ulong *)(lVar9 + -0x20) & 1) != 0) {
      plVar6 = (long *)(*(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
      plVar5 = plVar6 + 1;
      do {
        lVar8 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = (int)lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (lVar9 + -0x30 != lVar7) {
      if ((*(ulong *)(lVar9 + -0x38) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar9 + -0x38) & 0xfffffffffffffffe);
        plVar5 = plVar6 + 1;
        do {
          lVar8 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *(int *)plVar5 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if ((*(ulong *)(lVar9 + -0x50) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar9 + -0x50) & 0xfffffffffffffffe);
        plVar5 = plVar6 + 1;
        do {
          lVar8 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *(int *)plVar5 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if (lVar9 + -0x60 != lVar7) {
        if ((*(ulong *)(lVar9 + -0x68) & 1) != 0) {
          plVar6 = (long *)(*(ulong *)(lVar9 + -0x68) & 0xfffffffffffffffe);
          plVar5 = plVar6 + 1;
          do {
            lVar8 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *(int *)plVar5 = (int)lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        lVar8 = lVar9 + -0x90;
        if ((*(ulong *)(lVar9 + -0x80) & 1) != 0) {
          plVar6 = (long *)(*(ulong *)(lVar9 + -0x80) & 0xfffffffffffffffe);
          plVar5 = plVar6 + 1;
          do {
            lVar9 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *(int *)plVar5 = (int)lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        while (lVar8 != lVar7) {
          if ((*(ulong *)(lVar8 + -8) & 1) != 0) {
            plVar6 = (long *)(*(ulong *)(lVar8 + -8) & 0xfffffffffffffffe);
            plVar5 = plVar6 + 1;
            do {
              lVar9 = *plVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *(int *)plVar5 = (int)lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          lVar9 = lVar8 + -0x30;
          puVar1 = (ulong *)(lVar8 + -0x20);
          lVar8 = lVar9;
          if ((*puVar1 & 1) != 0) {
            plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar5 = plVar6 + 1;
            do {
              lVar9 = *plVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *(int *)plVar5 = (int)lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x30
              );
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  lVar7 = param_1[2];
  *param_1 = 0;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar2 = (long)(int)param_1[3] + 1;
    lVar9 = tpidr_el0;
    lVar8 = *(long *)(lVar9 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    local_48 = (undefined4)uVar2;
    uStack_44 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_40 = 2;
      puStack_38 = &DAT_0411b3a0;
      local_30 = &uStack_44;
      puStack_28 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_40);
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,lVar7,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | (uVar2 & 0x1fffffff) << 3);
    param_1[2] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}


