/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b28430; name: FUN_01b28430
 */


undefined8 FUN_01b28430(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  undefined1 auStack_300 [24];
  long *local_2e8;
  long *local_2e0;
  long *local_2d8;
  long *local_2d0;
  long *local_2c8;
  undefined1 auStack_2b0 [584];
  long *local_68;
  long *local_60;
  
  lVar9 = *(long *)(param_1 + 0x1f0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    while( true ) {
      plVar12 = *(long **)(lVar9 + 0x10);
      plVar6 = (long *)FUN_00a3edb8();
      if (plVar12 == (long *)0x0) break;
      while (plVar12 != plVar6) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return 0;
        }
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          plVar6 = (long *)(lVar9 + -0x50);
          if (lVar9 == 0) {
            return 0;
          }
          if (*(int *)(lVar9 + 0x1a8) != 3) goto LAB_01b2874c;
          lVar8 = param_1 + 600;
          goto LAB_01b28520;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  return 0;
LAB_01b28520:
  do {
    FUN_01b31228(auStack_300,lVar8);
    if ((local_2e0 != (long *)0x0) && (*(char *)local_2e0[0xc] != '\0')) {
      plVar12 = (long *)FUN_02a9b144(plVar6,auStack_300);
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        if (local_60 != (long *)0x0) {
          lVar8 = local_60[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
        if (local_68 != (long *)0x0) {
          lVar8 = local_68[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        FUN_01b2b168(auStack_2b0);
        if (local_2c8 != (long *)0x0) {
          (**(code **)(*local_2c8 + 0x20))();
        }
        if (local_2d0 != (long *)0x0) {
          (**(code **)(*local_2d0 + 0x20))();
        }
        if (local_2d8 != (long *)0x0) {
          (**(code **)(*local_2d8 + 0x20))();
        }
        if (local_2e0 != (long *)0x0) {
          (**(code **)(*local_2e0 + 0x20))();
        }
        if (local_2e8 != (long *)0x0) {
          (**(code **)(*local_2e8 + 0x20))();
        }
LAB_01b2874c:
        uVar10 = 0;
        goto LAB_01b2864c;
      }
      plVar2 = plVar12 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (local_60 != (long *)0x0) {
      lVar7 = local_60[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    if (local_68 != (long *)0x0) {
      lVar7 = local_68[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    FUN_01b2b168(auStack_2b0);
    if (local_2c8 != (long *)0x0) {
      (**(code **)(*local_2c8 + 0x20))();
    }
    if (local_2d0 != (long *)0x0) {
      (**(code **)(*local_2d0 + 0x20))();
    }
    if (local_2d8 != (long *)0x0) {
      (**(code **)(*local_2d8 + 0x20))();
    }
    if (local_2e0 != (long *)0x0) {
      (**(code **)(*local_2e0 + 0x20))();
    }
    if (local_2e8 != (long *)0x0) {
      (**(code **)(*local_2e8 + 0x20))();
    }
    lVar8 = lVar8 + 0x2b0;
  } while (lVar8 != param_1 + 0x1fe8);
  uVar10 = 1;
LAB_01b2864c:
  lVar9 = *(long *)(lVar9 + 8);
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return uVar10;
}


