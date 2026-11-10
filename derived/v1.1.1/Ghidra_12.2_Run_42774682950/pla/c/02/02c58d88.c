/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c58d88; name: FUN_02c58d88
 */


void FUN_02c58d88(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,0);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c58e10;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c58e10:
  FUN_02c661d4(lVar8,param_2,param_2 + 0x168);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,0);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  cVar4 = iVar5 != 0;
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,1);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58ec8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c58ec8:
  FUN_02c661d4(lVar8,param_2 + 0x178,param_2 + 0x2e0);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,1);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  if (iVar5 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,2);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58f80;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c58f80:
  FUN_02c661d4(lVar8,param_2 + 0x2f0,param_2 + 0x458);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,2);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  if (iVar5 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,3);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c59038;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c59038:
  FUN_02c661d4(lVar8,param_2 + 0x468,param_2 + 0x5d0);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,3);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  if (iVar5 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,4);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c590f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c590f0:
  FUN_02c661d4(lVar8,param_2 + 0x5e0,param_2 + 0x748);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,4);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  if (iVar5 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,5);
  lVar8 = *(long *)(lVar6 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c591a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c591a8:
  FUN_02c661d4(lVar8,param_2 + 0x758,param_2 + 0x8c0);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c5acfc(lVar6);
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,5);
  iVar5 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
  cVar2 = *(char *)(param_2 + 0x8d0);
  *(char *)(param_1 + 0x11) = cVar2;
  if (iVar5 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)(param_2 + 0x8d1);
  if (cVar4 != cVar2) {
    *(char *)(param_1 + 0x11) = cVar4;
  }
  return;
}


