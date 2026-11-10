/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03175f7c; name: FUN_03175f7c
 */


void FUN_03175f7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = (long)&PTR_LAB_042fb6a8;
  puVar5 = PTR_PTR_0434a080;
  iVar4 = (int)param_1[8];
  if (iVar4 != 0) {
    lVar10 = param_1[7];
    lVar9 = lVar10 + (long)iVar4 * 0xf0 + -0xf0;
    FUN_0317aa00(lVar9);
    if (lVar9 != lVar10) {
      lVar9 = (long)iVar4 * 0xf0;
      do {
        FUN_0317aa00(lVar10 + -0x1e0 + lVar9);
        lVar9 = lVar9 + -0xf0;
      } while (lVar9 != 0xf0);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) * 0xf0);
  }
  plVar6 = (long *)param_1[0x1d];
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) {
LAB_03176034:
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 == (long *)0x0) goto LAB_0317603c;
LAB_031761b0:
    if (plVar6[1] == 0) goto LAB_0317603c;
    plVar11 = plVar6 + 2;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 != 0) goto LAB_0317603c;
    (**(code **)(*plVar6 + 0x18))();
    plVar6 = (long *)param_1[0xb];
  }
  else {
    plVar11 = plVar6 + 2;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 != 0) goto LAB_03176034;
    (**(code **)(*plVar6 + 0x18))();
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 != (long *)0x0) goto LAB_031761b0;
LAB_0317603c:
    plVar6 = (long *)param_1[0xb];
  }
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar11 = plVar6 + 2;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
      iVar4 = (int)param_1[10];
      goto joined_r0x03176214;
    }
  }
  iVar4 = (int)param_1[10];
joined_r0x03176214:
  if (iVar4 != 0) {
    plVar6 = (long *)param_1[9];
    plVar11 = plVar6 + (long)iVar4 * 3;
    lVar9 = tpidr_el0;
LAB_03176228:
    do {
      lVar10 = plVar11[-2];
      plVar11 = plVar11 + -3;
      if (lVar10 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar10 + 8));
        lVar8 = *(long *)(lVar9 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar8;
        }
        plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,0x38);
      }
      plVar7 = (long *)*plVar11;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
          if (plVar11 == plVar6) break;
          goto LAB_03176228;
        }
      }
    } while (plVar11 != plVar6);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) * 0x18);
  }
  iVar4 = (int)param_1[8];
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (iVar4 != 0) {
    lVar10 = param_1[7];
    lVar9 = lVar10 + (long)iVar4 * 0xf0 + -0xf0;
    FUN_0317aa00(lVar9);
    if (lVar9 != lVar10) {
      lVar9 = (long)iVar4 * 0xf0;
      do {
        FUN_0317aa00(lVar10 + -0x1e0 + lVar9);
        lVar9 = lVar9 + -0xf0;
      } while (lVar9 != 0xf0);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) * 0xf0);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    nn::os::FinalizeMutex((MutexType *)(lVar9 + 8));
    lVar10 = tpidr_el0;
    lVar8 = *(long *)(lVar10 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,0x38);
  }
  plVar6 = (long *)param_1[4];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar11 = plVar6 + 2;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


