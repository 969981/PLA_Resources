/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b64964; name: FUN_02b64964
 */


void FUN_02b64964(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  short sVar14;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x478) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x478) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x478) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b649d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x478) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b649d0:
  plVar13 = *(long **)(param_1 + 0x58);
  plVar12 = *(long **)(param_1 + 0x60);
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    plVar10 = param_2 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar13 != plVar12) {
    plVar10 = (long *)*plVar13;
    while ((plVar10 != param_2 && (plVar9 = plVar13 + 2, plVar13 = plVar12, plVar12 != plVar9))) {
      plVar10 = (long *)*plVar9;
      plVar13 = plVar9;
    }
  }
  if (param_2 != (long *)0x0) {
    plVar12 = param_2 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*param_2 + 0x10))();
    }
  }
  plVar12 = *(long **)(param_1 + 0x60);
  if (plVar12 != plVar13) {
    plVar10 = plVar13 + 2;
    if (plVar10 != plVar12) {
      do {
        plVar9 = (long *)*plVar13;
        *plVar13 = 0;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar6 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        lVar8 = *plVar10;
        *plVar10 = 0;
        *plVar13 = lVar8;
        plVar9 = plVar10 + 1;
        plVar10 = plVar10 + 2;
        *(int *)(plVar13 + 1) = (int)*plVar9;
        plVar13 = plVar13 + 2;
      } while (plVar10 != plVar12);
      plVar12 = *(long **)(param_1 + 0x60);
      goto LAB_02b64ae0;
    }
    do {
      plVar12 = plVar12 + -2;
      plVar10 = (long *)*plVar12;
      if (plVar10 != (long *)0x0) {
        plVar9 = plVar10 + 10;
        do {
          iVar6 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
LAB_02b64ae0:
    } while (plVar12 != plVar13);
    *(long **)(param_1 + 0x60) = plVar13;
    if (*(long **)(param_1 + 0x58) != plVar13) {
      sVar14 = 0;
      plVar12 = *(long **)(param_1 + 0x58);
      do {
        *(short *)((long)plVar12 + 10) = sVar14;
        plVar10 = plVar12 + 2;
        sVar7 = (**(code **)(*(long *)(*(long *)(*plVar12 + 0x58) + 0x58) + 0x10))();
        sVar14 = sVar7 + sVar14;
        plVar12 = plVar10;
      } while (plVar13 != plVar10);
    }
  }
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x478) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0x478) != lVar11) {
      ClearExclusiveLocal();
      lVar8 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x478);
      goto LAB_02b64bac;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x474) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b64b94;
LAB_02b64bac:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar8 && *(long *)(param_1 + 0x478) == lVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x474) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b64bac;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b64b94:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
}


