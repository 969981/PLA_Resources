/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028616c8; name: FUN_028616c8
 */


void FUN_028616c8(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [16];
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c934(auStack_78);
  lVar9 = *(long *)(param_1 + 0x2ce8);
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  puVar4 = PTR_DAT_0437b518;
  if (((*PTR_DAT_0437b510 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar5 != 0))
  {
    uVar7 = FUN_00d8faf4();
    *(undefined8 *)puVar4 = uVar7;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  while( true ) {
    if (plVar6 == (long *)0x0) goto LAB_02861b34;
    if (plVar6 == (long *)puVar4) break;
    plVar6 = (long *)*plVar6;
  }
  pcVar8 = *(code **)(lVar9 + 0x3a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x3b0) = 0;
    *(undefined8 *)(lVar9 + 0x3b8) = 0;
    *(undefined8 *)(lVar9 + 0x3a0) = 0;
    *(undefined8 *)(lVar9 + 0x3a8) = 0;
    (*pcVar8)(lVar9 + 0x3c0);
  }
  *(undefined1 **)(lVar9 + 0x3a0) = &LAB_0286c11c;
  *(undefined1 **)(lVar9 + 0x3a8) = &LAB_0286c414;
  *(long *)(lVar9 + 0x3c0) = param_1;
  *(undefined1 **)(lVar9 + 0x3b0) = &LAB_0286c418;
  *(undefined1 **)(lVar9 + 0x3b8) = &LAB_0286c424;
  lVar11 = *(long *)(param_1 + 0x2ce8);
  lVar9 = nn::os::GetCurrentThread();
  plVar6 = (long *)(lVar11 + 0x208);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028617dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028617dc:
  lVar9 = local_68;
  if (*(long *)(local_68 + 0x1d0) != 0) {
    lVar9 = *(long *)(local_68 + 0x1d0);
  }
  lVar10 = local_68;
  if (*(long *)(local_68 + 0x1d8) != 0) {
    lVar10 = *(long *)(local_68 + 0x1d8);
  }
  if (lVar9 != lVar10) {
    FUN_02a70230(lVar11);
    lVar10 = *(long *)(param_1 + 0x2ce0);
    lVar9 = nn::os::GetCurrentThread();
    plVar6 = (long *)(lVar10 + 0x208);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1fc));
          while (*plVar6 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02861850;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02861850:
    *(undefined8 *)(lVar11 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
    lVar9 = local_68;
    if (*(long *)(local_68 + 0x1d0) != 0) {
      lVar9 = *(long *)(local_68 + 0x1d0);
    }
    lVar11 = local_68;
    if (*(long *)(local_68 + 0x1d8) != 0) {
      lVar11 = *(long *)(local_68 + 0x1d8);
    }
    if (lVar9 != lVar11) {
      FUN_02a70230(lVar10);
      lVar11 = *(long *)(param_1 + 0x2ce8);
      lVar9 = nn::os::GetCurrentThread();
      plVar6 = (long *)(lVar11 + 0x208);
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
            while (*plVar6 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_028618d4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_028618d4:
      FUN_02a70468(lVar11,0,*(undefined8 *)(param_1 + 0x2ce0));
      lVar12 = *(long *)(param_1 + 0x2cf0);
      lVar9 = nn::os::GetCurrentThread();
      plVar6 = (long *)(lVar12 + 0x208);
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1fc));
            while (*plVar6 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02861930;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02861930:
      lVar9 = local_68;
      if (*(long *)(local_68 + 0x1d0) != 0) {
        lVar9 = *(long *)(local_68 + 0x1d0);
      }
      lVar1 = local_68;
      if (*(long *)(local_68 + 0x1d8) != 0) {
        lVar1 = *(long *)(local_68 + 0x1d8);
      }
      if (lVar9 != lVar1) {
        FUN_02a70230(lVar12);
        *(undefined8 *)(lVar12 + 0x208) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1fc));
        lVar12 = *(long *)(param_1 + 0x2cf8);
        lVar9 = nn::os::GetCurrentThread();
        plVar6 = (long *)(lVar12 + 0x208);
        do {
          if (*plVar6 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1fc));
              while (*plVar6 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar9;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_028619b4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_028619b4:
        lVar9 = local_68;
        if (*(long *)(local_68 + 0x1d0) != 0) {
          lVar9 = *(long *)(local_68 + 0x1d0);
        }
        lVar1 = local_68;
        if (*(long *)(local_68 + 0x1d8) != 0) {
          lVar1 = *(long *)(local_68 + 0x1d8);
        }
        if (lVar9 != lVar1) {
          FUN_02a70230(lVar12);
          *(undefined8 *)(lVar12 + 0x208) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1fc));
          lVar12 = *(long *)(param_1 + 0x2d00);
          lVar9 = nn::os::GetCurrentThread();
          plVar6 = (long *)(lVar12 + 0x208);
          do {
            if (*plVar6 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1fc));
                while (*plVar6 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar9;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_02861a38;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_02861a38:
          lVar9 = local_68;
          if (*(long *)(local_68 + 0x1d0) != 0) {
            lVar9 = *(long *)(local_68 + 0x1d0);
          }
          if (*(long *)(local_68 + 0x1d8) != 0) {
            local_68 = *(long *)(local_68 + 0x1d8);
          }
          if (lVar9 != local_68) {
            FUN_02a70230(lVar12);
            *(undefined8 *)(lVar12 + 0x208) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1fc));
            *(undefined8 *)(lVar11 + 0x208) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
            *(undefined8 *)(lVar10 + 0x208) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x1fc));
            return;
          }
        }
      }
    }
  }
LAB_02861b34:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


