/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d82b2c; name: FUN_00d82b2c
 */


/* WARNING: Removing unreachable block (ram,0x00d82ee4) */

long FUN_00d82b2c(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  plVar15 = (long *)(param_1 + 0x18);
  lVar14 = *plVar15;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar14) {
    bVar2 = false;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    bVar2 = true;
    do {
      if (*plVar15 != 0) {
        bVar2 = true;
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar15 == 0) {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00d82b64;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_00d82b64:
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_1 + 0x30);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar15 == 0) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d82bac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d82bac:
  puVar5 = PTR_DAT_0437b4b8;
  puVar4 = PTR_DAT_0437b4b0;
  plVar15 = *(long **)(param_1 + 0xb0);
  plVar16 = *(long **)(param_1 + 0xb8);
  if (plVar15 != plVar16) {
    do {
      if (*plVar15 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar5) goto LAB_00d82c0c;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar16);
    plVar15 = plVar16;
  }
LAB_00d82c0c:
  if ((plVar15 == *(long **)(param_1 + 0xb8)) || (*plVar15 == 0)) {
    plVar15 = *(long **)(param_1 + 0x78);
    plVar16 = *(long **)(param_1 + 0x80);
    if (plVar15 != plVar16) {
      do {
        if (*plVar15 != 0) {
          plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar11 = FUN_00ad3750();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)puVar5) goto LAB_00d82c7c;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar16);
      plVar15 = plVar16;
    }
LAB_00d82c7c:
    if (plVar15 == *(long **)(param_1 + 0x80)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar15 != 0) {
        lVar8 = *plVar15 + -0x48;
      }
    }
    bVar6 = lVar8 == 0;
  }
  else {
    bVar6 = false;
    lVar8 = *plVar15 + -0x48;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar6) {
    return lVar8;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_1 + 0x50);
  do {
    lVar14 = *plVar15;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar14;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar14 != 0 && (lVar8 != lVar14))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar14 = *plVar15;
        lVar1 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = lVar14;
          *(long *)(param_1 + 0x58) = lVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar15 != lVar14 || *(long *)(param_1 + 0x58) != lVar1) break;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar14;
        *(long *)(param_1 + 0x54) = lVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar16 = (long *)(param_1 + 0x70);
        lVar14 = *plVar16;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar14) {
          bVar2 = false;
          goto LAB_00d82e14;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_00d82dd4;
      }
    }
    ClearExclusiveLocal();
    lVar14 = *plVar15;
    lVar1 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar2) {
      *plVar16 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_00d82dd4:
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d82e10;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00d82e10:
  bVar2 = true;
LAB_00d82e14:
  plVar16 = *(long **)(param_1 + 0xe8);
  plVar9 = *(long **)(param_1 + 0xf0);
  if (plVar16 != plVar9) {
    do {
      if (*plVar16 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar16 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar11 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar5) goto LAB_00d82e64;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar9);
    plVar16 = plVar9;
  }
LAB_00d82e64:
  if (plVar16 == *(long **)(param_1 + 0xf0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*plVar16 != 0) {
      lVar8 = *plVar16 + -0x48;
    }
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar14 = *plVar15;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar14;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar12 = *plVar15;
    lVar13 = *(long *)(param_1 + 0x58);
    if (lVar12 != lVar14 || lVar13 != lVar1) break;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar14;
      *(long *)(param_1 + 0x54) = lVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00d82f24;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar14 = *plVar15;
      if (lVar14 != lVar12 || *(long *)(param_1 + 0x58) != lVar13) {
        bVar2 = false;
        ClearExclusiveLocal();
        goto LAB_00d82ef0;
      }
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar12;
        *(long *)(param_1 + 0x54) = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar2 = true;
LAB_00d82ef0:
    lVar12 = lVar14;
    lVar13 = *(long *)(param_1 + 0x58);
  } while (!bVar2);
LAB_00d82f24:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar8;
}


