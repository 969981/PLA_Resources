/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a21720; name: FUN_01a21720
 */


void FUN_01a21720(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  LightEventType *pLVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)(param_1 + 0x18);
  lVar15 = *plVar18;
  lVar9 = nn::os::GetCurrentThread();
  puVar7 = PTR_DAT_0437f970;
  puVar6 = PTR_DAT_0437f968;
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar18 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar18 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01a217ac;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01a217ac:
    lVar9 = nn::os::GetCurrentThread();
    plVar18 = (long *)(param_1 + 0x30);
    do {
      if (*plVar18 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
          while (*plVar18 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01a217f4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01a217f4:
    puVar16 = (undefined8 *)(param_1 + 0x78);
    plVar18 = (long *)*puVar16;
    plVar17 = *(long **)(param_1 + 0x80);
    if (plVar18 == plVar17) {
LAB_01a21848:
      plVar17 = plVar18;
    }
    else {
      do {
        if (*plVar18 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar18 + 8))();
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            uVar14 = FUN_0151c598();
            *(undefined8 *)puVar7 = uVar14;
            __cxa_guard_release(puVar6);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar7) goto LAB_01a21848;
          }
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar17);
    }
    if (*(long **)(param_1 + 0x80) == plVar17) {
      puVar16 = (undefined8 *)(param_1 + 0xb0);
      plVar18 = (long *)*puVar16;
      plVar17 = *(long **)(param_1 + 0xb8);
      if (plVar18 == plVar17) {
LAB_01a218ac:
        plVar17 = plVar18;
      }
      else {
        do {
          if (*plVar18 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar18 + 8))();
            if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
              uVar14 = FUN_0151c598();
              *(undefined8 *)puVar7 = uVar14;
              __cxa_guard_release(puVar6);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar7) goto LAB_01a218ac;
            }
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != plVar17);
      }
      if (*(long **)(param_1 + 0xb8) == plVar17) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
        bVar4 = true;
        goto LAB_01a218d0;
      }
    }
    FUN_01a21cb4(puVar16,plVar17);
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    goto LAB_01a21928;
  }
  uVar13 = FUN_01a21bc0(param_2,param_1 + 0x78);
  if ((uVar13 & 1) != 0) {
    return;
  }
  uVar13 = FUN_01a21bc0(param_2,param_1 + 0xb0);
  if ((uVar13 & 1) != 0) {
    return;
  }
  bVar4 = false;
LAB_01a218d0:
  plVar18 = (long *)(param_1 + 0x50);
  do {
    lVar9 = *plVar18;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar2) {
      *plVar18 = lVar9;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 == lVar9) {
    FUN_01a21bc0(param_2,param_1 + 0xe8);
    if (!bVar4) {
      return;
    }
    goto LAB_01a21928;
  }
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar18 != 0 || *(long *)(param_1 + 0x58) != 0) {
      bVar2 = false;
      ClearExclusiveLocal();
      goto LAB_01a21958;
    }
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar2) {
      *plVar18 = lVar9;
      *(undefined8 *)(param_1 + 0x58) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = true;
LAB_01a21958:
  lVar9 = nn::os::GetCurrentThread();
  plVar17 = (long *)(param_1 + 0x70);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar17 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01a219a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01a219a0:
  if (!bVar2) {
    uVar13 = FUN_01a21bc0(param_2,param_1 + 0xe8);
    if ((uVar13 & 1) == 0) goto LAB_01a21a1c;
    *(undefined8 *)(param_1 + 0x70) = 0;
    pLVar12 = (LightEventType *)(param_1 + 100);
    goto LAB_01a21a6c;
  }
  plVar17 = *(long **)(param_1 + 0xe8);
  plVar10 = *(long **)(param_1 + 0xf0);
  if (plVar17 == plVar10) {
LAB_01a219f8:
    plVar10 = plVar17;
  }
  else {
    do {
      if (*plVar17 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(*plVar17 + 8))();
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar14 = FUN_0151c598();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar7) goto LAB_01a219f8;
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar10);
  }
  if (*(long **)(param_1 + 0xf0) != plVar10) {
    FUN_01a21cb4(param_1 + 0xe8,plVar10);
    FUN_01a21e90(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  }
LAB_01a21a1c:
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  if (bVar2) {
    do {
      lVar9 = *plVar18;
      lVar15 = *(long *)(param_1 + 0x58);
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = lVar9;
        *(long *)(param_1 + 0x58) = lVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      if (*plVar18 != lVar9 || *(long *)(param_1 + 0x58) != lVar15) {
        ClearExclusiveLocal();
        lVar9 = *plVar18;
        lVar15 = *(long *)(param_1 + 0x58);
        goto LAB_01a21a80;
      }
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = 0;
        *(long *)(param_1 + 0x54) = lVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01a21a68;
  }
  goto LAB_01a21a70;
LAB_01a21a80:
  do {
    lVar1 = *plVar18;
    if (lVar1 == lVar9 && *(long *)(param_1 + 0x58) == lVar15) {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = 0;
        *(long *)(param_1 + 0x54) = lVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01a21a80;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar1;
    lVar15 = *(long *)(param_1 + 0x58);
  } while (!bVar2);
LAB_01a21a68:
  pLVar12 = (LightEventType *)(param_1 + 0x44);
LAB_01a21a6c:
  nn::os::SignalLightEvent(pLVar12);
LAB_01a21a70:
  if (!bVar4) {
    return;
  }
LAB_01a21928:
  *(undefined8 *)(param_1 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  return;
}


