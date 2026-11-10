/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1758; name: FUN_033a1758
 */


void FUN_033a1758(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = &PTR_LAB_043705d8;
  if (*(int *)(param_1 + 6) == 0) {
    plVar7 = (long *)PTR_PTR_0434a080;
  }
  else {
    lVar8 = param_1[5];
    lVar10 = (long)*(int *)(param_1 + 6) * 0x18;
    do {
      FUN_032e6310(lVar8,3,1);
      plVar7 = (long *)PTR_PTR_0434a080;
      lVar8 = lVar8 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    if (*(int *)(param_1 + 6) != 0) {
      lVar8 = param_1[5];
      lVar10 = lVar8 + (long)*(int *)(param_1 + 6) * 0x18;
LAB_033a1864:
      do {
        puVar1 = (ulong *)(lVar10 + -8);
        lVar10 = lVar10 + -0x18;
        if ((*puVar1 & 1) != 0) {
          plVar5 = (long *)(*puVar1 & 0xfffffffffffffffe);
          plVar4 = plVar5 + 1;
          do {
            lVar11 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *(int *)plVar4 = (int)lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar5 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar5 + 8))();
            if (lVar10 == lVar8) break;
            goto LAB_033a1864;
          }
        }
      } while (lVar10 != lVar8);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*plVar7 + 0x18))
              (plVar7,param_1[5],((ulong)*(uint *)((long)param_1 + 0x34) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  if (*(int *)(param_1 + 4) != 0) {
    lVar11 = param_1[3];
    lVar10 = lVar11 + (long)*(int *)(param_1 + 4) * 0x28;
    lVar8 = tpidr_el0;
    do {
      uVar9 = *(ulong *)(lVar10 + -0x10);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)(lVar8 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar6;
        }
        plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar9 - 0x11) = 0;
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,(undefined8 *)(uVar9 - 0x11),(long)*(int *)(uVar9 - 9) + 0x10);
      }
      puVar1 = (ulong *)(lVar10 + -0x18);
      lVar10 = lVar10 + -0x28;
      if ((*puVar1 & 1) != 0) {
        plVar5 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar4 = plVar5 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *(int *)plVar4 = (int)lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    } while (lVar10 != lVar11);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*plVar7 + 0x18))
              (plVar7,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x28);
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  if (*(int *)(param_1 + 2) != 0) {
    lVar10 = param_1[1];
    lVar8 = lVar10 + (long)*(int *)(param_1 + 2) * 0x40;
LAB_033a18e0:
    do {
      lVar11 = lVar8 + -0x40;
      FUN_03306908(lVar8 + -0x20);
      if ((*(ulong *)(lVar8 + -0x30) & 1) != 0) {
        plVar5 = (long *)(*(ulong *)(lVar8 + -0x30) & 0xfffffffffffffffe);
        plVar4 = plVar5 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *(int *)plVar4 = (int)lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar5 + 8))();
          lVar8 = lVar11;
          if (lVar11 == lVar10) break;
          goto LAB_033a18e0;
        }
      }
      lVar8 = lVar11;
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*plVar7 + 0x18))
              (plVar7,param_1[1],((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) << 6);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


