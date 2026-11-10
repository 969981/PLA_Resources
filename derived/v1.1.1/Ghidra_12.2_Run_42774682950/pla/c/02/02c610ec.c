/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c610ec; name: FUN_02c610ec
 */


void FUN_02c610ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(param_1 + 0x98);
  iVar4 = FUN_02c6b1c0(*plVar7,0);
  if (iVar4 != 0) {
    iVar5 = FUN_02c6b1c0(*plVar7,1);
    if (iVar5 == iVar4) {
      FUN_02c7c9c8(*plVar7,1,0);
      lVar8 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar8 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c6118c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c6118c:
      *(undefined8 *)(lVar8 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
      FUN_02c7cd1c(*plVar7,1,0);
    }
    iVar5 = FUN_02c6b1c0(*plVar7,2);
    if (iVar5 == iVar4) {
      FUN_02c7c9c8(*plVar7,2,0);
      lVar8 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar8 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c61220;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c61220:
      *(undefined8 *)(lVar8 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
      FUN_02c7cd1c(*plVar7,2,0);
    }
    iVar5 = FUN_02c6b1c0(*plVar7,3);
    if (iVar5 == iVar4) {
      FUN_02c7c9c8(*plVar7,3,0);
      lVar8 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar8 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c612b4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c612b4:
      *(undefined8 *)(lVar8 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
      FUN_02c7cd1c(*plVar7,3,0);
    }
  }
  iVar4 = FUN_02c6b1c0(*plVar7,1);
  if (iVar4 != 0) {
    iVar5 = FUN_02c6b1c0(*plVar7,2);
    if (iVar5 == iVar4) {
      FUN_02c7c9c8(*plVar7,2,0);
      lVar8 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar8 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c6135c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c6135c:
      *(undefined8 *)(lVar8 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
      FUN_02c7cd1c(*plVar7,2,0);
    }
    iVar5 = FUN_02c6b1c0(*plVar7,3);
    if (iVar5 == iVar4) {
      FUN_02c7c9c8(*plVar7,3,0);
      lVar8 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar8 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c613f0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c613f0:
      *(undefined8 *)(lVar8 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
      FUN_02c7cd1c(*plVar7,3,0);
    }
  }
  iVar4 = FUN_02c6b1c0(*plVar7,2);
  if ((iVar4 == 0) || (iVar5 = FUN_02c6b1c0(*plVar7,3), iVar5 != iVar4)) {
    return;
  }
  FUN_02c7c9c8(*plVar7,3,0);
  lVar8 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c614ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c614ac:
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c7cd1c(*plVar7,3,0);
  return;
}


