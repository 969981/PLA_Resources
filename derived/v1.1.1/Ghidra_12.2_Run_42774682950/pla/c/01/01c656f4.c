/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c656f4; name: FUN_01c656f4
 */


/* WARNING: Removing unreachable block (ram,0x01c65a4c) */

long FUN_01c656f4(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
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
    bVar3 = false;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar11 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c65768;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c65768:
    bVar3 = true;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x30);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01c657b4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01c657b4:
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar12 = *(long **)(param_1 + 0xb8);
  if (plVar11 != plVar12) {
    do {
      if (*plVar11 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        lVar5 = FUN_01c4d380();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar5) goto LAB_01c65800;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
    plVar11 = plVar12;
  }
LAB_01c65800:
  if ((plVar11 == *(long **)(param_1 + 0xb8)) || (*plVar11 == 0)) {
    plVar11 = *(long **)(param_1 + 0x78);
    plVar12 = *(long **)(param_1 + 0x80);
    if (plVar11 != plVar12) {
      do {
        if (*plVar11 != 0) {
          plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
          lVar5 = FUN_01c4d380();
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)lVar5) goto LAB_01c65858;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
      plVar11 = plVar12;
    }
LAB_01c65858:
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
  if (bVar3) {
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
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar10 != 0 && (lVar5 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar11;
        lVar1 = *(long *)(param_1 + 0x58);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10;
          *(long *)(param_1 + 0x58) = lVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar11 != lVar10 || *(long *)(param_1 + 0x58) != lVar1) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10;
        *(long *)(param_1 + 0x54) = lVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar12 = (long *)(param_1 + 0x70);
        lVar10 = *plVar12;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar10) {
          bVar3 = false;
          goto LAB_01c65980;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_01c65940;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_01c65940:
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01c6597c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01c6597c:
  bVar3 = true;
LAB_01c65980:
  plVar12 = *(long **)(param_1 + 0xe8);
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar12 != plVar6) {
    do {
      if (*plVar12 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        lVar5 = FUN_01c4d380();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar5) goto LAB_01c659cc;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar6);
    plVar12 = plVar6;
  }
LAB_01c659cc:
  if (plVar12 == *(long **)(param_1 + 0xf0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*plVar12 != 0) {
      lVar5 = *plVar12 + -0x48;
    }
  }
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar10 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x54) = lVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01c65a8c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar11;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_01c65a58;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_01c65a58:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar3);
LAB_01c65a8c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar5;
}


