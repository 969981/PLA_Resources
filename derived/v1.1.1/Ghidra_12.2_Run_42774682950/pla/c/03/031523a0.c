/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031523a0; name: FUN_031523a0
 */


void FUN_031523a0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  *param_1 = (long)(PTR_DAT_043888e0 + 0x10);
  if ((int)param_1[0x2b] != 0) {
    lVar9 = param_1[0x2a];
    lVar11 = lVar9 + (long)(int)param_1[0x2b] * 0xc0;
    do {
      plVar5 = *(long **)(lVar11 + -0x48);
      lVar11 = lVar11 + -0xc0;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar12 = plVar5 + 2;
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (lVar11 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  lVar9 = tpidr_el0;
  if ((int)param_1[0x2d] != 0) {
    lVar8 = param_1[0x2c];
    lVar11 = (long)(int)param_1[0x2d] << 3;
    do {
      while (uVar10 = *(ulong *)(lVar8 + -8 + lVar11), (uVar10 & 1) == 0) {
        lVar11 = lVar11 + -8;
        if (lVar11 == 0) goto LAB_03152498;
      }
      lVar7 = *(long *)(lVar9 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar7;
      }
      plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      *(undefined8 *)(uVar10 - 0x11) = 0;
      (**(code **)(*plVar5 + 0x18))
                (plVar5,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
LAB_03152498:
  plVar5 = (long *)param_1[5];
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (plVar5 != (long *)0x0) {
    if (plVar5[1] != 0) {
      plVar12 = plVar5 + 2;
      do {
        lVar11 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    param_1[5] = 0;
  }
  if ((int)param_1[0x31] != 0) {
    plVar5 = (long *)param_1[0x30];
    plVar12 = plVar5 + (long)(int)param_1[0x31] * 6;
    do {
      uVar10 = plVar12[-2];
      plVar12 = plVar12 + -6;
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)*plVar12;
      }
      else {
        lVar11 = *(long *)(lVar9 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar11;
        }
        plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        *(undefined8 *)(uVar10 - 0x11) = 0;
        (**(code **)(*plVar6 + 0x18))
                  (plVar6,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
        plVar6 = (long *)*plVar12;
      }
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar12 != plVar5);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[0x38] != 0) {
    lVar8 = param_1[0x37];
    lVar11 = (long)(int)param_1[0x38] << 6;
    do {
      FUN_03142924(lVar8 + -0x40 + lVar11);
      lVar11 = lVar11 + -0x40;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c4)) && (param_1[0x37] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x37],((ulong)*(uint *)((long)param_1 + 0x1c4) & 0x3fffffff) << 6);
  }
  *(undefined4 *)((long)param_1 + 0x1c4) = 0x80000000;
  param_1[0x37] = 0;
  if ((int)param_1[0x36] != 0) {
    lVar8 = param_1[0x35];
    lVar11 = (long)(int)param_1[0x36] * 0x118;
    do {
      FUN_03142030(lVar8 + -0x118 + lVar11);
      lVar11 = lVar11 + -0x118;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1b4)) && (param_1[0x35] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x35],((ulong)*(uint *)((long)param_1 + 0x1b4) & 0x3fffffff) * 0x118);
  }
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1a4)) && (param_1[0x33] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x33],((ulong)*(uint *)((long)param_1 + 0x1a4) & 0x3fffffff) * 0x28);
  }
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0x80000000;
  if ((int)param_1[0x31] != 0) {
    plVar5 = (long *)param_1[0x30];
    plVar12 = plVar5 + (long)(int)param_1[0x31] * 6;
    do {
      uVar10 = plVar12[-2];
      plVar12 = plVar12 + -6;
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)*plVar12;
      }
      else {
        lVar11 = *(long *)(lVar9 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar11;
        }
        plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        *(undefined8 *)(uVar10 - 0x11) = 0;
        (**(code **)(*plVar6 + 0x18))
                  (plVar6,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
        plVar6 = (long *)*plVar12;
      }
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar12 != plVar5);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x30],((ulong)*(uint *)((long)param_1 + 0x18c) & 0x3fffffff) * 0x30);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x2e],((ulong)*(uint *)((long)param_1 + 0x17c) & 0x3fffffff) << 7);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  if ((int)param_1[0x2d] != 0) {
    lVar8 = param_1[0x2c];
    lVar11 = (long)(int)param_1[0x2d] << 3;
    do {
      while (uVar10 = *(ulong *)(lVar8 + -8 + lVar11), (uVar10 & 1) == 0) {
        lVar11 = lVar11 + -8;
        if (lVar11 == 0) goto LAB_03152864;
      }
      lVar7 = *(long *)(lVar9 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar7;
      }
      plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      *(undefined8 *)(uVar10 - 0x11) = 0;
      (**(code **)(*plVar5 + 0x18))
                (plVar5,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
LAB_03152864:
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x2c],((ulong)*(uint *)((long)param_1 + 0x16c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  param_1[0x2c] = 0;
  if ((int)param_1[0x2b] != 0) {
    lVar9 = param_1[0x2a];
    lVar11 = lVar9 + (long)(int)param_1[0x2b] * 0xc0;
    do {
      plVar5 = *(long **)(lVar11 + -0x48);
      lVar11 = lVar11 + -0xc0;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar12 = plVar5 + 2;
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (lVar11 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x2a],((ulong)*(uint *)((long)param_1 + 0x15c) & 0x3fffffff) * 0xc0);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x80000000;
  FUN_02bf0bf4(param_1 + 4);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


