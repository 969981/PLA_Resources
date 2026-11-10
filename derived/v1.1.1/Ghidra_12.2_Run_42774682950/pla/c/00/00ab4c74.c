/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab4c74; name: FUN_00ab4c74
 */


/* WARNING: Removing unreachable block (ram,0x00ab4fac) */

long FUN_00ab4c74(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = (long *)(param_1 + 0x18);
  lVar10 = *plVar11;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar10) {
    bVar2 = false;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    bVar2 = true;
    do {
      if (*plVar11 != 0) {
        bVar2 = true;
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00ab4ca8;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_00ab4ca8:
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x30);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00ab4cf0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ab4cf0:
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar12 = *(long **)(param_1 + 0xb8);
  if (plVar11 != plVar12) {
    do {
      if (*plVar11 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        lVar5 = FUN_00ab5048();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar5) goto LAB_00ab4d3c;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
    plVar11 = plVar12;
  }
LAB_00ab4d3c:
  if ((plVar11 == *(long **)(param_1 + 0xb8)) || (*plVar11 == 0)) {
    plVar11 = *(long **)(param_1 + 0x78);
    plVar12 = *(long **)(param_1 + 0x80);
    if (plVar11 != plVar12) {
      do {
        if (*plVar11 != 0) {
          plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
          lVar5 = FUN_00ab5048();
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)lVar5) goto LAB_00ab4d94;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
      plVar11 = plVar12;
    }
LAB_00ab4d94:
    if (plVar11 == *(long **)(param_1 + 0x80)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*plVar11 != 0) {
        lVar5 = *plVar11 + -0x48;
      }
    }
    bVar4 = lVar5 == 0;
  }
  else {
    bVar4 = false;
    lVar5 = *plVar11 + -0x48;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar4) {
    return lVar5;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x50);
  do {
    lVar10 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar10 != 0 && (lVar5 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar11;
        lVar1 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar10;
          *(long *)(param_1 + 0x58) = lVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar11 != lVar10 || *(long *)(param_1 + 0x58) != lVar1) break;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10;
        *(long *)(param_1 + 0x54) = lVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar12 = (long *)(param_1 + 0x70);
        lVar10 = *plVar12;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar10) {
          bVar2 = false;
          goto LAB_00ab4ef8;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_00ab4eb8;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_00ab4eb8:
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00ab4ef4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00ab4ef4:
  bVar2 = true;
LAB_00ab4ef8:
  plVar12 = *(long **)(param_1 + 0xe8);
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar12 != plVar6) {
    do {
      if (*plVar12 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        lVar5 = FUN_00ab5048();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar5) goto LAB_00ab4f44;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar6);
    plVar12 = plVar6;
  }
LAB_00ab4f44:
  if (plVar12 == *(long **)(param_1 + 0xf0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*plVar12 != 0) {
      lVar5 = *plVar12 + -0x48;
    }
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar10 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar8 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar1) break;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x54) = lVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00ab4fec;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar11;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar2 = false;
        ClearExclusiveLocal();
        goto LAB_00ab4fb8;
      }
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar2 = true;
LAB_00ab4fb8:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar2);
LAB_00ab4fec:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar5;
}


