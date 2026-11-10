/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1e84; name: FUN_033a1e84
 */


void FUN_033a1e84(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = &PTR_LAB_04370640;
  puVar4 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 9) != 0) {
    lVar11 = param_1[8];
    lVar9 = lVar11 + (long)*(int *)(param_1 + 9) * 0x28;
    lVar10 = tpidr_el0;
    do {
      uVar8 = *(ulong *)(lVar9 + -0x10);
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(lVar10 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar7;
        }
        plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        *(undefined8 *)(uVar8 - 0x11) = 0;
        (**(code **)(*plVar5 + 0x18))
                  (plVar5,(undefined8 *)(uVar8 - 0x11),(long)*(int *)(uVar8 - 9) + 0x10);
      }
      puVar1 = (ulong *)(lVar9 + -0x18);
      lVar9 = lVar9 + -0x28;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar5 = plVar6 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = (int)lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar9 != lVar11);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) * 0x28);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if (*(int *)(param_1 + 7) != 0) {
    lVar9 = param_1[6];
    lVar10 = lVar9 + (long)*(int *)(param_1 + 7) * 0x40;
    do {
      lVar11 = lVar10 + -0x40;
      FUN_03306908(lVar10 + -0x20);
      if ((*(ulong *)(lVar10 + -0x30) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar10 + -0x30) & 0xfffffffffffffffe);
        plVar5 = plVar6 + 1;
        do {
          lVar10 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = (int)lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar10 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      lVar10 = lVar11;
    } while (lVar11 != lVar9);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 6);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  FUN_0339dea4();
  return;
}


