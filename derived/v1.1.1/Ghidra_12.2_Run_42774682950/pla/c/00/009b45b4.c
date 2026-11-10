/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b45b4; name: FUN_009b45b4
 */


/* WARNING: Removing unreachable block (ram,0x009b4964) */

long FUN_009b45b4(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
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
  long *plVar14;
  long *plVar15;
  
  plVar14 = (long *)(param_1 + 0x18);
  lVar13 = *plVar14;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    bVar3 = false;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_009b462c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_009b462c:
    bVar3 = true;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x30);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_009b4678;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_009b4678:
  puVar5 = PTR_DAT_0437a2d8;
  puVar4 = PTR_DAT_0437a2d0;
  plVar14 = *(long **)(param_1 + 0xb0);
  plVar15 = *(long **)(param_1 + 0xb8);
  if (plVar14 != plVar15) {
    do {
      if (*plVar14 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar14 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar11 = FUN_009ac380();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar5) goto LAB_009b46d8;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar15);
    plVar14 = plVar15;
  }
LAB_009b46d8:
  if ((plVar14 == *(long **)(param_1 + 0xb8)) || (*plVar14 == 0)) {
    plVar14 = *(long **)(param_1 + 0x78);
    plVar15 = *(long **)(param_1 + 0x80);
    if (plVar14 != plVar15) {
      do {
        if (*plVar14 != 0) {
          plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar14 + 8))();
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar11 = FUN_009ac380();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)puVar5) goto LAB_009b4734;
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar15);
      plVar14 = plVar15;
    }
LAB_009b4734:
    if (plVar14 == *(long **)(param_1 + 0x80)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar14 != 0) {
        lVar8 = *plVar14 + -0x48;
      }
    }
    bVar6 = lVar8 == 0;
  }
  else {
    bVar6 = false;
    lVar8 = *plVar14 + -0x48;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar6) {
    return lVar8;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x50);
  do {
    lVar13 = *plVar14;
    lVar12 = *(long *)(param_1 + 0x58);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar13;
      *(long *)(param_1 + 0x58) = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar13 != 0 && (lVar8 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar13 = *plVar14;
        lVar12 = *(long *)(param_1 + 0x58);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar13;
          *(long *)(param_1 + 0x58) = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar14 != lVar13 || *(long *)(param_1 + 0x58) != lVar12) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar13;
        *(long *)(param_1 + 0x54) = lVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar15 = (long *)(param_1 + 0x70);
        lVar13 = *plVar15;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 != lVar13) {
          lVar8 = nn::os::GetCurrentThread();
          goto LAB_009b4864;
        }
        bVar3 = false;
        goto LAB_009b48a4;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar14;
    lVar12 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_009b4864:
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_009b48a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_009b48a0:
  bVar3 = true;
LAB_009b48a4:
  plVar15 = *(long **)(param_1 + 0xe8);
  plVar9 = *(long **)(param_1 + 0xf0);
  if (plVar15 != plVar9) {
    do {
      if (*plVar15 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar11 = FUN_009ac380();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar5) goto LAB_009b48f4;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar9);
    plVar15 = plVar9;
  }
LAB_009b48f4:
  if (plVar15 == *(long **)(param_1 + 0xf0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*plVar15 != 0) {
      lVar8 = *plVar15 + -0x48;
    }
  }
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar13 = *plVar14;
    lVar12 = *(long *)(param_1 + 0x58);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar13;
      *(long *)(param_1 + 0x58) = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    if (*plVar14 != lVar13 || *(long *)(param_1 + 0x58) != lVar12) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar13;
      *(long *)(param_1 + 0x54) = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_009b4974;
  }
  ClearExclusiveLocal();
  lVar13 = *plVar14;
  lVar12 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar1 = *plVar14;
      if (lVar1 != lVar13 || *(long *)(param_1 + 0x58) != lVar12) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_009b4a10;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar13;
        *(long *)(param_1 + 0x54) = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_009b4a10:
    lVar13 = lVar1;
    lVar12 = *(long *)(param_1 + 0x58);
  } while (!bVar3);
LAB_009b4974:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar8;
}


