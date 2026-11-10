/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c39cc; name: FUN_031c39cc
 */


void FUN_031c39cc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  MutexType *pMVar8;
  long lVar9;
  long *plVar10;
  
  if (param_2 == param_3) {
    return;
  }
  iVar7 = (int)((ulong)(param_3 - param_2) >> 4);
  if (1 < iVar7) {
    FUN_031c5fb0(param_2,0,iVar7 + -1,&LAB_031c3c00);
  }
  pMVar8 = *(MutexType **)(param_1 + 0x28);
  nn::os::LockMutex(pMVar8);
  puVar4 = PTR_PTR_0434a080;
  plVar10 = *(long **)(param_2 + 8);
  if (plVar10 != (long *)0x0) {
    if (plVar10[1] != 0) {
      plVar1 = plVar10 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(plVar10 + 3) * 8);
    if (plVar10[1] != 0) {
      plVar1 = plVar10 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    iVar6 = *(int *)(lVar9 + 0x48);
    lVar5 = *(long *)(lVar9 + 0x40);
    iVar7 = iVar6 + 1;
    if ((int)(*(uint *)(lVar9 + 0x4c) & 0x3fffffff) <= iVar6) {
      lVar5 = FUN_031c55e4(puVar4,iVar7);
      iVar6 = *(int *)(lVar9 + 0x48);
      *(long *)(lVar9 + 0x40) = lVar5;
    }
    *(long **)(lVar5 + (long)iVar6 * 8) = plVar10;
    *(int *)(lVar9 + 0x48) = iVar7;
    if (plVar10[1] != 0) {
      plVar1 = plVar10 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  while (lVar9 = param_2 + 0x10, lVar9 != param_3) {
    plVar10 = *(long **)(param_2 + 0x18);
    param_2 = lVar9;
    if (plVar10 != (long *)0x0) {
      if (plVar10[1] != 0) {
        plVar1 = plVar10 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(plVar10 + 3) * 8);
      if (plVar10[1] != 0) {
        plVar1 = plVar10 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      iVar6 = *(int *)(lVar9 + 0x48);
      lVar5 = *(long *)(lVar9 + 0x40);
      iVar7 = iVar6 + 1;
      if ((int)(*(uint *)(lVar9 + 0x4c) & 0x3fffffff) <= iVar6) {
        lVar5 = FUN_031c55e4(puVar4,iVar7);
        iVar6 = *(int *)(lVar9 + 0x48);
        *(long *)(lVar9 + 0x40) = lVar5;
      }
      *(long **)(lVar5 + (long)iVar6 * 8) = plVar10;
      *(int *)(lVar9 + 0x48) = iVar7;
      if (plVar10[1] != 0) {
        plVar1 = plVar10 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar8);
  return;
}


